/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 011a13e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* try { // try from 011a13f4 to 012a13fb has its CatchHandler @ 011a2a44 */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0103c2a0(param_4);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0234bbd8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_011a24b0(param_1,param_2,param_3,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
  return;
}


