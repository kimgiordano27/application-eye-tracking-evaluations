/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0401dfc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 244
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  int unaff_w20;
  
  if (unaff_w20 <= in_w8) {
    FUN_0402a428();
    return;
  }
  thunk_FUN_03af1434(&DAT_08615060);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
  uVar3 = thunk_FUN_03af1434(&DAT_08688840);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


