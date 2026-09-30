/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0350e158
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xbd8));
  FUN_02d9d3e0();
  uVar1 = FUN_03517bd4(0);
  uVar2 = thunk_FUN_032e1da0(PTR_DAT_0727de80);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar1,uVar2);
}


