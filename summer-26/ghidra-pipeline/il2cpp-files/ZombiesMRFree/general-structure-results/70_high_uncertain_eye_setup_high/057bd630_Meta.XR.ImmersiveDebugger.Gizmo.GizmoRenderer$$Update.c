/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 057bd630
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(code *param_1)

{
  void *__src;
  size_t unaff_x20;
  void *unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  long unaff_x29;
  double dVar1;
  double unaff_d8;
  double unaff_d9;
  
  dVar1 = (double)(*param_1)();
  if (unaff_d9 + dVar1 <= unaff_d8) {
    FUN_02b28244();
    memcpy(unaff_x22,unaff_x24,unaff_x20);
    FUN_02fe9280();
  }
  __src = (void *)thunk_FUN_02fdd5fc();
  memcpy(unaff_x22,__src,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x58),unaff_x22,unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


