/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 04d268c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = FUN_02d9a2e0(param_1);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795d == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795d = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar1 = FUN_04d26520();
  FUN_057ec138(unaff_x19 + 2,uVar1,0);
  return;
}


