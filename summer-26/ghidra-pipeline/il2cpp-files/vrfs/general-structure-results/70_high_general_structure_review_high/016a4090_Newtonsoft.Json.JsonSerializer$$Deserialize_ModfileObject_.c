/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<ModfileObject>
ENTRY_POINT: 016a4090
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<ModfileObject>
               (ulong param_1,
               basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *param_2,ulong param_3,ulong param_4,long param_5,ulong param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  ulong in_x9;
  
  if (param_6 <= in_x9) {
    lVar1 = param_5 + 4;
    if ((param_1 & 1) != 0) {
      lVar1 = *(long *)(param_5 + 0x10);
    }
    uVar2 = in_x9 - param_6;
    if (param_7 <= in_x9 - param_6) {
      uVar2 = param_7;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace
              (param_2,param_3,param_4,(wchar_t *)(lVar1 + param_6 * 4),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01597c78();
}


