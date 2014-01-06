// Filename: Field.ipp
// Created by: drose (10 Jan, 2006)
//
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
namespace dclass   // open namespace
{


// get_id returns a unique index number associated with this field.
inline unsigned int Field::get_id() const
{
	return m_id;
}

// get_name returns the field's name.  An unnamed field returns the empty string.
inline const std::string& Field::get_name() const
{
	return m_name;
}

// get_type returns the DistributedType of the field.
inline DistributedType* Field::get_type()
{
	return m_type;
}
inline const DistributedType* Field::get_type() const
{
	return m_type;
}

// get_struct returns the Struct that contains this field.
inline Struct* Field::get_struct()
{
	return m_struct;
}
inline const Struct* Field::get_struct() const
{
	return m_struct;
}

// has_default_value returns true if a default value was defined for this field.
inline bool Field::has_default_value() const
{
	return m_has_default_value;
}

// get_default_value returns the default value for this field.
//     If a default value hasn't been set, returns an implicit default.
inline const std::string& Field::get_default_value() const
{
	// TODO: Somehow set the initial default value
	return m_default_value;
}


} // close namespace dclass
