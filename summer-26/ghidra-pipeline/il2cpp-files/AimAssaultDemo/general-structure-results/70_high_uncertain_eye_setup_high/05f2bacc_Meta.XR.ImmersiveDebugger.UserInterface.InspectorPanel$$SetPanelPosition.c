/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 05f2bacc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  code *unaff_x26;
  
  while( true ) {
    uVar1 = (*unaff_x26)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0x60);
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    memcpy(&stack0x00000060,unaff_x23,0x60);
    memcpy(&stack0x00000000,unaff_x20,0x60);
    unaff_x26 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x00000120,&stack0x00000060,0x60);
    memcpy(&stack0x000000c0,&stack0x00000000,0x60);
  }
  return 0xffffffff;
}


