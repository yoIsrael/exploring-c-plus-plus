/** @file list6104.cpp */
/** .funcListing 61-4. Using Assignment Operators in the Flags Functions */
void setf(fmtflags f)
{
   flags_ |= f;
}

void unsetf(fmtflags f)
{
   flags_ &= ~f;
}
