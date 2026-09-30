/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<CommentObject>
ENTRY_POINT: 016a37ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<CommentObject>(ulong param_1)

{
  ulong uVar1;
  size_t __n;
  wchar_t *__s1;
  size_t unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  wchar_t *unaff_x23;
  size_t unaff_x24;
  long unaff_x25;
  wchar_t *unaff_x26;
  ulong uVar2;
  
  uVar2 = unaff_x21 << 1;
  if ((ulong)(unaff_x21 << 1) <= param_1) {
    uVar2 = param_1;
  }
  if (uVar2 < 5) {
    uVar2 = 5;
  }
  else {
    if (uVar2 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_015979f0("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar2 = uVar2 + 4 & 0xfffffffffffffffc;
  }
  __s1 = operator_new(uVar2 << 2);
  if (unaff_x24 != 0) {
    wmemcpy(__s1,unaff_x23,unaff_x24);
  }
  if (unaff_x19 != 0) {
    wmemcpy(__s1 + unaff_x24,unaff_x26,unaff_x19);
  }
  __n = (unaff_x25 - unaff_x22) - unaff_x24;
  if (__n != 0) {
    wmemcpy(__s1 + unaff_x24 + unaff_x19,unaff_x23 + unaff_x24 + unaff_x22,__n);
  }
  if (unaff_x21 != 4) {
    operator_delete(unaff_x23);
  }
  uVar1 = (unaff_x25 - unaff_x22) + unaff_x19;
  *unaff_x20 = uVar2 | 1;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = (ulong)__s1;
  __s1[uVar1] = L'\0';
  return;
}


