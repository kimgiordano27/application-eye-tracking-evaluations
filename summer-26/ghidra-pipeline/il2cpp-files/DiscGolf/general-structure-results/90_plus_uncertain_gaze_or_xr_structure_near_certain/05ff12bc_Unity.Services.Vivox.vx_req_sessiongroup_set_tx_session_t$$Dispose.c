/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_session_t$$Dispose
ENTRY_POINT: 05ff12bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_session_t__Dispose(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int iStack0000000000000018;
  
  *(undefined8 *)(&stack0x00000008 + unaff_x21 * 8) = unaff_x20;
  iStack0000000000000018 = (int)unaff_x21 + 1;
  __cxa_end_catch();
  *unaff_x19 = 0xfffffffe;
  lVar1 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_94_0_TypeInfo);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  thunk_FUN_02dfd288(OVRPlugin_UnityOpenXR_TypeInfo);
  FUN_040b1c24(unaff_x19 + 2);
  return;
}


