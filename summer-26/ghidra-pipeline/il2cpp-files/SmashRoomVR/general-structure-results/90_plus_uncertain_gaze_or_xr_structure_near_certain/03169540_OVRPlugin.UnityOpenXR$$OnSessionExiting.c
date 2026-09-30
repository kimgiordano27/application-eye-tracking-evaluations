/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 03169540
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x22 + 0x91) = 1;
  uVar1 = FUN_01b47fd8(*unaff_x21);
  FUN_02f80f34(uVar1,*unaff_x19,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_01b4f09c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


