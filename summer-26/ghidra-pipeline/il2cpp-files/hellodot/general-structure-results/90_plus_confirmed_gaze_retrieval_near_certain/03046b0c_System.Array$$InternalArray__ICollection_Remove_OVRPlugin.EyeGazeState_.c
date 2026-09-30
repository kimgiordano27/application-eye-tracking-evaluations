/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03046b0c
PROGRAM: hellodot-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *unaff_x19;
  undefined4 uVar2;
  float unaff_s11;
  
                    /* try { // try from 03046b0c to 03146b17 has its CatchHandler @ 03046b18 */
  uVar2 = FUN_05ee9c50();
  fVar1 = DAT_013ddd70;
                    /* catch() { ... } // from try @ 03046b0c with catch @ 03046b18 */
  *unaff_x19 = uVar2;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_3;
  unaff_x19[3] = param_4;
  if (fVar1 < unaff_s11) {
    uVar2 = FUN_02f3bfec(0);
    *unaff_x19 = uVar2;
    unaff_x19[1] = param_2;
    unaff_x19[2] = param_3;
    unaff_x19[3] = param_4;
  }
  return;
}


