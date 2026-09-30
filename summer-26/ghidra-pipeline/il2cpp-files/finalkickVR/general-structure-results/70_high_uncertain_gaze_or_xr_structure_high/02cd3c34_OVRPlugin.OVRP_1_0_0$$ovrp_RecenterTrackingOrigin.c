/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 02cd3c34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(void)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000018;
  
  uStack0000000000000000 = 0;
  uVar1 = CAPI_ovr_PartyUpdateNotification_GetUpdateTimestamp_Native_m6D4D9B99B65A7B57B1A08EC4937180D5D1C0461E
                    (in_stack_00000018);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F
                    (uVar1,uStack0000000000000000);
  return uVar1;
}


