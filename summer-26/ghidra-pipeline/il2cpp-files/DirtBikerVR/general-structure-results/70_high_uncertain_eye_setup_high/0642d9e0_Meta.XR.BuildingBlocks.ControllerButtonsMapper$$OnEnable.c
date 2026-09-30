/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 0642d9e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  
  while( true ) {
                    /* try { // try from 0642d9e0 to 0652d9ef has its CatchHandler @ 0642da2c */
    unaff_x24 = unaff_x24 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = (**(code **)(*unaff_x23 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 0642d9fc to 0652da13 has its CatchHandler @ 0642da30 */
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


