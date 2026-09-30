/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer.<UpdateLoop>d__48$$System.IDisposable.Dispose
ENTRY_POINT: 0319d144
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer_<UpdateLoop>d__48__System_IDisposable_Dispose
               (float param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    param_1 = *(float *)(param_2 + 0x14) * param_1;
    *(float *)(lVar1 + 0x20) = param_1;
    *(float *)(lVar1 + 0x24) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


