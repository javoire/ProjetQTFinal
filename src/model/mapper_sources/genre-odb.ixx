// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

// Begin prologue.
//
//
// End prologue.

namespace odb
{
  // Genre
  //

  inline
  access::object_traits< ::Genre >::id_type
  access::object_traits< ::Genre >::
  id (const object_type& obj)
  {
    return obj.id_;
  }

  inline
  void access::object_traits< ::Genre >::
  erase (database& db, const object_type& obj)
  {
    erase (db, id (obj));
  }

  inline
  void access::object_traits< ::Genre >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::Genre >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  access::object_traits< ::Genre >::query_type::
  query_type ()
  {
  }

  inline
  access::object_traits< ::Genre >::query_type::
  query_type (bool v)
    : query_base_type (v)
  {
  }

  inline
  access::object_traits< ::Genre >::query_type::
  query_type (const char* q)
    : query_base_type (q)
  {
  }

  inline
  access::object_traits< ::Genre >::query_type::
  query_type (const std::string& q)
    : query_base_type (q)
  {
  }

  inline
  access::object_traits< ::Genre >::query_type::
  query_type (const query_base_type& q)
    : query_base_type (q)
  {
  }

  // genre_stat
  //

  inline
  access::view_traits< ::genre_stat >::query_type::
  query_type ()
  {
  }

  inline
  access::view_traits< ::genre_stat >::query_type::
  query_type (bool v)
    : query_base_type (v)
  {
  }

  inline
  access::view_traits< ::genre_stat >::query_type::
  query_type (const char* q)
    : query_base_type (q)
  {
  }

  inline
  access::view_traits< ::genre_stat >::query_type::
  query_type (const std::string& q)
    : query_base_type (q)
  {
  }

  inline
  access::view_traits< ::genre_stat >::query_type::
  query_type (const query_base_type& q)
    : query_base_type (q)
  {
  }

  inline
  void access::view_traits< ::genre_stat >::
  callback (database& db, view_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }
}

// Begin epilogue.
//
//
// End epilogue.
