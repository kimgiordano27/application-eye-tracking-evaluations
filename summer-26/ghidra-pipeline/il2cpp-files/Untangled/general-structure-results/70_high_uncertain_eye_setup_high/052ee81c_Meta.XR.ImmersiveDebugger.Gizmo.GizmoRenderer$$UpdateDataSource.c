/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$UpdateDataSource
ENTRY_POINT: 052ee81c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__UpdateDataSource(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  
  if (in_ZR || in_NG != in_OV) {
    return;
  }
  lVar1 = FUN_066c67b0();
  if (lVar1 != 0) {
    FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),
                 *(undefined4 *)(unaff_x19 + 0x4c),lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    if (lVar1 != 0) {
      puVar2 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_06741454(*puVar2,puVar2[1],puVar2[2],lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


