/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<GameStatsObject>
ENTRY_POINT: 016a3b38
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
Newtonsoft_Json_JsonSerializer__Deserialize<GameStatsObject>
          (ulong param_1,
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *param_2,ulong param_3,wchar_t param_4)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
    uVar2 = param_1 & 0xffffffff;
    if (4 < param_3) goto LAB_016a3b58;
LAB_016a3b78:
    if ((uVar2 & 1) == 0) goto LAB_016a3b7c;
  }
  else {
    uVar2 = *(ulong *)param_2;
    uVar1 = (uVar2 & 0xfffffffffffffffe) - 1;
    if (param_3 <= uVar1) goto LAB_016a3b78;
LAB_016a3b58:
    if ((param_1 & 1) == 0) {
      param_1 = param_1 >> 1;
    }
    else {
      param_1 = *(ulong *)(param_2 + 8);
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by(param_2,uVar1,param_3 - uVar1,param_1,0,param_1,0);
    if (((byte)*param_2 & 1) == 0) {
LAB_016a3b7c:
      __s = param_2 + 4;
      goto joined_r0x016a3b80;
    }
  }
  __s = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **
         )(param_2 + 0x10);
joined_r0x016a3b80:
  if (param_3 != 0) {
    wmemset((wchar_t *)__s,param_4,param_3);
  }
  *(undefined4 *)(__s + param_3 * 4) = 0;
  if (((byte)*param_2 & 1) == 0) {
    *param_2 = SUB41((int)param_3 << 1,0);
  }
  else {
    *(ulong *)(param_2 + 8) = param_3;
  }
  return param_2;
}


