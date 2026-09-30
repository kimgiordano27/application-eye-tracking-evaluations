/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 0696aa98
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x23 + 0x48);
  while ((*(long *)(unaff_x19 + 0x38) != 0 &&
         (lVar1 = FUN_04de82e0(*(long *)(unaff_x19 + 0x38),unaff_w21,*puVar2), lVar1 != 0))) {
    FUN_0696aadc();
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w22 == unaff_w21) {
      return unaff_w20 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


