/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<UserDelegationTokenObject>
ENTRY_POINT: 016a4a28
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


uint Newtonsoft_Json_JsonSerializer__Deserialize<UserDelegationTokenObject>(ulong param_1)

{
  size_t __n;
  uint uVar1;
  wchar_t *__s1;
  ulong unaff_x19;
  wchar_t *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  
  if ((param_1 & 1) == 0) {
    uVar2 = param_1 >> 1;
  }
  else {
    uVar2 = *(ulong *)(unaff_x21 + 8);
  }
  if (unaff_x19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_01597c78();
  }
  if ((param_1 & 1) == 0) {
    __s1 = (wchar_t *)(unaff_x21 + 4);
                    /* catch() { ... } // from try @ 016a49b4 with catch @ 016a4a50 */
  }
  else {
    __s1 = *(wchar_t **)(unaff_x21 + 0x10);
  }
  __n = unaff_x19;
  if (uVar2 <= unaff_x19) {
    __n = uVar2;
  }
  if (((__n == 0) || (uVar1 = wmemcmp(__s1,unaff_x20,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(unaff_x19 < uVar2), uVar2 < unaff_x19)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


