/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<WalletObject>
ENTRY_POINT: 016a4be8
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<WalletObject>
               (ulong *param_1,wchar_t *param_2,size_t param_3,ulong param_4)

{
  wchar_t *__s1;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_015979e0(param_1);
  }
  if (param_4 < 5) {
    __s1 = (wchar_t *)((long)param_1 + 4);
    *(char *)param_1 = (char)((int)param_3 << 1);
  }
  else {
    if (param_4 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_015979f0("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_4 + 4 & 0xfffffffffffffffc;
    __s1 = operator_new(uVar1 << 2);
    param_1[1] = param_3;
    param_1[2] = (ulong)__s1;
    *param_1 = uVar1 | 1;
  }
  if (param_3 != 0) {
    wmemcpy(__s1,param_2,param_3);
  }
  __s1[param_3] = L'\0';
  return;
}


