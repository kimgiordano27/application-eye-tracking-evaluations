/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 05d8d1f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05d8d290) */

void OVRPlugin__GetFaceState(void)

{
  int iVar1;
  int in_w8;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    if (*(int *)(*(long *)PTR_DAT_072b18c8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar1 = OVRPlugin__CreateVirtualKeyboard();
    if (iVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2a00(*(undefined8 *)PTR_DAT_072b1978,0);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03313794();
  }
  return;
}


