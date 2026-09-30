/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 074178b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uVar2;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  do {
    uVar1 = thunk_FUN_03cf5810(*unaff_x25);
    unaff_x24 = unaff_x24 + -1;
    *unaff_x26 = uVar1;
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 1;
  } while (unaff_x24 != 0);
  uVar1 = (**(code **)(unaff_x23 + 0x1a0))();
  if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
    uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      thunk_FUN_03cf5804(*unaff_x22);
      uVar2 = uVar2 - 1;
      *unaff_x22 = 0;
      unaff_x22 = unaff_x22 + 1;
    } while (uVar2 != 0);
  }
  thunk_FUN_03cf5804();
  return uVar1;
}


