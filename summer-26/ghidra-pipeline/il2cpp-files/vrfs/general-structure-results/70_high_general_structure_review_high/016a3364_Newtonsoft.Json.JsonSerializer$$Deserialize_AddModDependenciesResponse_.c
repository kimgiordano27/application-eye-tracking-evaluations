/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<AddModDependenciesResponse>
ENTRY_POINT: 016a3364
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<AddModDependenciesResponse>
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> in_w8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *unaff_x19
  ;
  ulong unaff_x20;
  wchar_t unaff_w21;
  ulong unaff_x22;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  
  if (param_2 - unaff_x22 < unaff_x20) {
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by(unaff_x19,param_2,(unaff_x22 + unaff_x20) - param_2,unaff_x22,unaff_x22,0,0);
    in_w8 = *unaff_x19;
  }
  if (((byte)in_w8 & 1) == 0) {
                    /* try { // try from 016a3398 to 017a33a3 has its CatchHandler @ 016a33f0 */
    pbVar2 = unaff_x19 + 4;
  }
  else {
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(unaff_x19 + 0x10);
  }
  wmemset((wchar_t *)(pbVar2 + unaff_x22 * 4),unaff_w21,unaff_x20);
                    /* try { // try from 016a33b8 to 017a33c3 has its CatchHandler @ 016a33e8 */
  lVar1 = unaff_x22 + unaff_x20;
  if (((byte)*unaff_x19 & 1) == 0) {
                    /* try { // try from 016a33c4 to 017a3413 has its CatchHandler @ 016a32c8 */
    *unaff_x19 = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(undefined4 *)(pbVar2 + lVar1 * 4) = 0;
                    /* catch() { ... } // from try @ 016a33b8 with catch @ 016a33e8 */
  return;
}


