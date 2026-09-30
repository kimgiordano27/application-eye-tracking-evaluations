/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 03171cc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  *(undefined1 *)(unaff_x19 + 0x104) = 0;
  if (param_1 != 0) {
    FUN_0313812c(param_1,0);
    *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x124);
    *(undefined4 *)(unaff_x19 + 0x110) = *(undefined4 *)(unaff_x19 + 300);
    if (((unaff_w20 >> 1 & 1) != 0) && (*(char *)(unaff_x19 + 0x105) != '\0')) {
      *(undefined4 *)(unaff_x19 + 0xcc) = 0;
      *(undefined1 *)(unaff_x19 + 0x105) = 0;
      if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_03171d28;
      FUN_0313812c(*(long *)(unaff_x19 + 0x98),0);
      *(undefined8 *)(unaff_x19 + 0x11c) = *(undefined8 *)(unaff_x19 + 0x138);
      *(undefined8 *)(unaff_x19 + 0x114) = *(undefined8 *)(unaff_x19 + 0x130);
    }
    return;
  }
LAB_03171d28:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


