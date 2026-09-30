/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth
ENTRY_POINT: 069693a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureWidth(undefined8 param_1)

{
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_07c72638(param_1,*(undefined8 *)(unaff_x19 + 0x118),0);
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    FUN_07c72434(*(long *)(unaff_x19 + 0x100),*(undefined8 *)(unaff_x19 + 0x140),0);
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x18);
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x10);
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x20);
      FUN_07c7142c(*(long *)(unaff_x19 + 0x100),&stack0x00000010,0);
      if (*(long *)(unaff_x19 + 0xe0) != 0) {
        FUN_07c6df20(*(long *)(unaff_x19 + 0xe0),*(undefined8 *)(unaff_x19 + 0x100),0);
        *(int *)(unaff_x19 + 0x148) = *(int *)(unaff_x19 + 0x148) + 2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


