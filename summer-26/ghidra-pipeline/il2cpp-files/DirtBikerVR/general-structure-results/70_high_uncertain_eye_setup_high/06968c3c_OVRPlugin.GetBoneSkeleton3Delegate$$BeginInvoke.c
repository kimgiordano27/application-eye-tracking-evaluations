/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$BeginInvoke
ENTRY_POINT: 06968c3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__BeginInvoke
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x6c) = param_1;
  *(undefined4 *)(unaff_x19 + 0x70) = param_3;
  *(undefined4 *)(unaff_x19 + 0x74) = param_2;
  *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(unaff_x19 + 0x78);
  FUN_06968e24();
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) <= *(int *)(unaff_x19 + 0x148) + 2) {
      FUN_0696829c();
    }
    *(undefined2 *)(unaff_x19 + 0x110) = 0;
    *(undefined1 *)(unaff_x19 + 0x112) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


