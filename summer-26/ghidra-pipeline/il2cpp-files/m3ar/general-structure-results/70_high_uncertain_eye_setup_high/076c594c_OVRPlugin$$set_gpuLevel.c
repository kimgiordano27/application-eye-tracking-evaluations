/*
FUNCTION_NAME: OVRPlugin$$set_gpuLevel
ENTRY_POINT: 076c594c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_gpuLevel(undefined8 param_1)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  uint unaff_w19;
  int unaff_w20;
  
  puVar1 = PTR_DAT_08facd08;
  if (in_ZR || in_NG != in_OV) {
    if (unaff_w20 == 0) {
      lVar2 = *(long *)PTR_DAT_08facd08;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
    }
    else {
                    /* try { // try from 076c5954 to 077c5973 has its CatchHandler @ 076c59e0 */
      if (unaff_w20 != 1) {
        return param_1;
      }
      lVar2 = *(long *)PTR_DAT_08facd08;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    }
  }
  else if (unaff_w20 == 2) {
    lVar2 = *(long *)PTR_DAT_08facd08;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  }
  else {
    if (unaff_w20 != 3) {
      return param_1;
    }
    lVar2 = *(long *)PTR_DAT_08facd08;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  }
  if (lVar2 != 0) {
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 076c5994 to 077c5997 has its CatchHandler @ 076c5a24 */
                    /* try { // try from 076c5998 to 077c599b has its CatchHandler @ 076c5a1c */
                    /* try { // try from 076c599c to 077c599f has its CatchHandler @ 076c5a0c */
                    /* try { // try from 076c59a0 to 077c59a3 has its CatchHandler @ 076c5a18 */
      return *(undefined8 *)(lVar2 + (long)(int)unaff_w19 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


