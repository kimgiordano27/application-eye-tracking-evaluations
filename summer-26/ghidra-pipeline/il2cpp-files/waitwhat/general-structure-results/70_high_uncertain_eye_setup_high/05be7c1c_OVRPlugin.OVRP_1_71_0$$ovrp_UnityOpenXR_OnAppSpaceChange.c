/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 05be7c1c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_06976dd0(*(undefined4 *)(unaff_x19 + 0x68),param_1,*(undefined4 *)(unaff_x19 + 0x54),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      Unity_Properties_TypeConversion_PrimitiveConverters_<>c__<RegisterUInt32Converters>b__7_7
                (*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                 *(undefined4 *)(unaff_x19 + 0x60),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06976dd0(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                     *(undefined4 *)(unaff_x19 + 0x50),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


