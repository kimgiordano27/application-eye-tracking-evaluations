/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 04dbf734
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x198);
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79e4 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79e4 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = FUN_04dbd048();
  FUN_0609bf0c(unaff_x20 + 4,unaff_x19 + 4,(long)iVar1,0);
  return 0;
}


