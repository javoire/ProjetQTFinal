// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef GENRE_ODB_HXX
#define GENRE_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 10800UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "genre.h"

#include "film-odb.hxx"

#include <memory>
#include <cstddef>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/tr1/wrapper-traits.hxx>
#include <odb/tr1/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/result.hxx>

#include <odb/details/buffer.hxx>
#include <odb/details/unused.hxx>

#include <odb/sqlite/version.hxx>
#include <odb/sqlite/forward.hxx>
#include <odb/sqlite/sqlite-types.hxx>
#include <odb/sqlite/query.hxx>

namespace odb
{
  // Genre
  //
  template <>
  struct class_traits< ::Genre >
  {
    static const class_kind kind = class_object;
  };

  template <const char* table>
  struct query_columns< ::Genre, table >
  {
    // id
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        long unsigned int,
        sqlite::id_integer >::query_type,
      sqlite::id_integer >
    id_type_;

    static const id_type_ id;

    // name
    //
    typedef
    sqlite::query_column<
      sqlite::value_traits<
        ::std::string,
        sqlite::id_text >::query_type,
      sqlite::id_text >
    name_type_;

    static const name_type_ name;
  };

  template <const char* table>
  const typename query_columns< ::Genre, table >::id_type_
  query_columns< ::Genre, table >::id (table, "\"id\"");

  template <const char* table>
  const typename query_columns< ::Genre, table >::name_type_
  query_columns< ::Genre, table >::name (table, "\"name\"");

  template <const char* table>
  struct pointer_query_columns< ::Genre, table >:
    query_columns< ::Genre, table >
  {
  };

  template <>
  class access::object_traits< ::Genre >
  {
    public:
    typedef ::Genre object_type;
    typedef ::Genre::Ptr pointer_type;
    typedef long unsigned int id_type;

    static const bool auto_id = true;

    struct id_image_type
    {
      long long id_value;
      bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // id_
      //
      long long id_value;
      bool id_null;

      // name_
      //
      details::buffer name_value;
      std::size_t name_size;
      bool name_null;

      std::size_t version;
    };

    // films_
    //
    struct films_traits
    {
      static const std::size_t id_column_count = 1UL;
      static const std::size_t cond_column_count = 1UL;
      static const std::size_t data_column_count = 2UL;

      static const char insert_one_statement[];
      static const char select_all_statement[];
      static const char delete_all_statement[];

      typedef ::Genre::FilmPtrList container_type;
      typedef odb::access::container_traits< container_type > container_traits_type;
      typedef container_traits_type::index_type index_type;
      typedef container_traits_type::value_type value_type;

      typedef ordered_functions<index_type, value_type> functions_type;
      typedef sqlite::container_statements< films_traits > statements_type;

      struct cond_image_type
      {
        std::size_t version;
      };

      struct data_image_type
      {
        // value
        //
        long long value_value;
        bool value_null;

        std::size_t version;
      };

      static void
      bind (sqlite::bind*,
            const sqlite::bind* id,
            std::size_t id_size,
            cond_image_type&);

      static void
      bind (sqlite::bind*,
            const sqlite::bind* id,
            std::size_t id_size,
            data_image_type&);

      static void
      grow (data_image_type&, bool*);

      static void
      init (data_image_type&, const value_type&);

      static void
      init (value_type&, const data_image_type&, database&);

      static void
      insert_one (index_type, const value_type&, void*);

      static bool
      load_all (index_type&, value_type&, void*);

      static void
      delete_all (void*);

      static void
      persist (const container_type&,
               const sqlite::binding& id,
               statements_type&);

      static void
      load (container_type&,
            const sqlite::binding& id,
            statements_type&);

      static void
      update (const container_type&,
              const sqlite::binding& id,
              statements_type&);

      static void
      erase (const sqlite::binding& id, statements_type&);
    };

    static id_type
    id (const object_type&);

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&, bool*);

    static void
    bind (sqlite::bind*, image_type&, sqlite::statement_kind);

    static void
    bind (sqlite::bind*, id_image_type&);

    static bool
    init (image_type&, const object_type&, sqlite::statement_kind);

    static void
    init (object_type&, const image_type&, database&);

    static void
    init (id_image_type&, const id_type&);

    typedef sqlite::query query_base_type;

    struct query_type;
    struct container_statement_cache_type;

    static const std::size_t column_count = 2UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);

    static void
    persist (database&, object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    static bool
    create_schema (database&, unsigned short pass, bool drop);

    public:
    static bool
    find_ (sqlite::object_statements< object_type >&, const id_type&);

    static void
    load_ (sqlite::object_statements< object_type >&, object_type&);
  };

  // genre_stat
  //
  template <>
  struct class_traits< ::genre_stat >
  {
    static const class_kind kind = class_view;
  };

  template <>
  class access::view_traits< ::genre_stat >
  {
    public:
    typedef ::genre_stat view_type;
    typedef ::genre_stat* pointer_type;

    struct image_type
    {
      // count
      //
      long long count_value;
      bool count_null;

      std::size_t version;
    };

    typedef sqlite::query query_base_type;

    struct query_type:
      query_base_type,
      odb::pointer_query_columns<
        ::Genre,
        odb::access::object_traits< ::Genre >::table_name >
    {
      query_type ();
      query_type (bool);
      query_type (const char*);
      query_type (const std::string&);
      query_type (const query_base_type&);
    };

    static bool
    grow (image_type&, bool*);

    static void
    bind (sqlite::bind*, image_type&);

    static void
    init (view_type&, const image_type&, database&);

    static const std::size_t column_count = 1UL;

    static query_base_type
    query_statement (const query_base_type&);

    static void
    callback (database&, view_type&, callback_event);

    static result<view_type>
    query (database&, const query_base_type&);
  };

  // Genre
  //
  struct access::object_traits< ::Genre >::query_type:
    query_base_type,
    query_columns< ::Genre, table_name >
  {
    query_type ();
    query_type (bool);
    query_type (const char*);
    query_type (const std::string&);
    query_type (const query_base_type&);
  };
}

#include "genre-odb.ixx"

// Begin epilogue.
//
//
// End epilogue.

#include <odb/post.hxx>

#endif // GENRE_ODB_HXX
