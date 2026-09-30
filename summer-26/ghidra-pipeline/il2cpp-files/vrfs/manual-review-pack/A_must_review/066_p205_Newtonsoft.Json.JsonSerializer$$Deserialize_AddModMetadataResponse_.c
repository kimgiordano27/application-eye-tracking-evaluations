/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<AddModMetadataResponse>
ENTRY_POINT: 016a343c
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<AddModMetadataResponse>
               (ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool in_ZR;
  bool in_CY;
  wchar_t *__s1;
  ulong uVar3;
  ulong *unaff_x19;
  wchar_t *__s2;
  ulong unaff_x22;
  ulong uVar4;
  ulong unaff_x24;
  
  uVar4 = unaff_x22;
  if (!in_CY || in_ZR) {
    uVar4 = param_3;
  }
  if (uVar4 < 5) {
    uVar4 = 4;
    if (param_1 == 4) {
      return;
    }
  }
  else {
    uVar4 = (uVar4 + 4 & 0xfffffffffffffffc) - 1;
    if (uVar4 == param_1) {
      return;
    }
  }
  if (uVar4 == 4) {
    __s2 = (wchar_t *)unaff_x19[2];
    bVar2 = false;
    __s1 = (wchar_t *)((long)unaff_x19 + 4);
    if ((unaff_x24 & 1) == 0) {
      bVar1 = true;
LAB_016a34d4:
      uVar3 = unaff_x24 >> 1 & 0x7fffffff;
      goto joined_r0x016a34f8;
    }
  }
  else {
    uVar3 = uVar4 + 1;
    if (param_1 < uVar4) {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_015979f0("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __s1 = operator_new(uVar3 * 4);
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_015979f0("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __s1 = operator_new(uVar3 * 4);
    }
    if ((unaff_x24 & 1) == 0) {
      bVar1 = false;
      __s2 = (wchar_t *)((long)unaff_x19 + 4);
      bVar2 = true;
      goto LAB_016a34d4;
    }
    __s2 = (wchar_t *)unaff_x19[2];
    bVar2 = true;
  }
  uVar3 = unaff_x19[1];
  bVar1 = true;
joined_r0x016a34f8:
  if (uVar3 != 0xffffffffffffffff) {
    wmemcpy(__s1,__s2,uVar3 + 1);
  }
  if (bVar1) {
    operator_delete(__s2);
  }
  if (bVar2) {
    *unaff_x19 = uVar4 + 1 | 1;
    unaff_x19[1] = unaff_x22;
    unaff_x19[2] = (ulong)__s1;
  }
  else {
    *(char *)unaff_x19 = (char)((int)unaff_x22 << 1);
  }
  return;
}


