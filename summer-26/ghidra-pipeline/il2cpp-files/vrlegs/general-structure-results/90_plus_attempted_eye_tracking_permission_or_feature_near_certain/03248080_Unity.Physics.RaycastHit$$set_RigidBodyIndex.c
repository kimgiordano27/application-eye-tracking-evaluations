/*
FUNCTION_NAME: Unity.Physics.RaycastHit$$set_RigidBodyIndex
ENTRY_POINT: 03248080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Physics_RaycastHit__set_RigidBodyIndex(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01a6ca08();
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(OVRPlugin_EyeGazeState___TypeInfo);
  FUN_026a44fc(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01a6ca08(OVRPlugin_FaceTrackingDataSource___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


