/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo$$get_environmentDepthConfidenceImageSupportedDelegate
ENTRY_POINT: 0245a570
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose
*/


void UnityEngine_XR_ARSubsystems_XROcclusionSubsystemCinfo__get_environmentDepthConfidenceImageSupportedDelegate
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = thunk_FUN_00d62348(param_1);
  puVar1 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_72>_SliceWithStride<Vector2>__
  ;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    FUN_010b0550(param_2,lVar2,*(undefined8 *)puVar1);
    FUN_01342c68();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


