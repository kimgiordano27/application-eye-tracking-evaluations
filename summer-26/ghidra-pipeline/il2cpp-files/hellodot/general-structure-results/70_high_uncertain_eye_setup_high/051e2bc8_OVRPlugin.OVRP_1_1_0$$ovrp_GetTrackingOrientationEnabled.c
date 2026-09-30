/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 051e2bc8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled(void)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
  *(undefined1 *)(unaff_x21 + 0x628) = 1;
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_065c8c40) {
        plVar2 = (long *)0x0;
      }
      goto LAB_051e2c1c;
    }
  }
  plVar2 = (long *)0x0;
LAB_051e2c1c:
  *(long **)(unaff_x20 + 0x20) = plVar2;
  *(long **)(unaff_x20 + 0x28) = unaff_x19;
  return;
}


