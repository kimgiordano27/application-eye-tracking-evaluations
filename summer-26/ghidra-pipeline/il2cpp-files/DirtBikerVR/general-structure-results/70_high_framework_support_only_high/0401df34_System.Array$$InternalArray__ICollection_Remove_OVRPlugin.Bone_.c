/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Bone>
ENTRY_POINT: 0401df34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Bone>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_03af1434(&DAT_086a8b20);
  uVar2 = thunk_FUN_03af1434(&DAT_08688840);
  System_Threading_CancellationToken__get_IsCancellationRequested(param_1,uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(param_1);
}


