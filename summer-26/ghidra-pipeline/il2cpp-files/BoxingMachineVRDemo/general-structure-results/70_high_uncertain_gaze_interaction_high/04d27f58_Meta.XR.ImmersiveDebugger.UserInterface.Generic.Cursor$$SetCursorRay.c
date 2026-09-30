/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 04d27f58
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(long param_1)

{
  int iVar1;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long lVar2;
  long unaff_x23;
  long in_stack_00001008;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
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
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x188);
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795f == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795f = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  memcpy(&stack0x00000008,unaff_x20,0x1000);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  iVar1 = FUN_04d26520(&stack0x00000008,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
  iVar1 = FUN_0601547c((long)unaff_x20 + 2,unaff_x21 + 2,(long)iVar1,0);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00001008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


