/*
FUNCTION_NAME: FUN_0317d888
ENTRY_POINT: 0317d888
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_7
*/


void FUN_0317d888(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1[1];
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
              + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_04d61198(uVar1,*(undefined8 *)
                      Method_Best_HTTP_Request_Upload_JSonDataStream<LoginRequest_Login_RequestData>__ctor__
              );
  uVar1 = *(undefined8 *)param_1[2];
  if (*(int *)(DAT_07247a78 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_04d5da14(uVar1,*(undefined8 *)
                      Method_Best_HTTP_Request_Upload_JSonDataStream<Report_RequestData>__ctor__);
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd0();
}


