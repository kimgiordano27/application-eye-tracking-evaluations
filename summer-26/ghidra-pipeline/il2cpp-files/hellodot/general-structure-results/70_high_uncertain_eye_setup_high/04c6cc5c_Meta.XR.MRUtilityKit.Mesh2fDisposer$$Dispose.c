/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Mesh2fDisposer$$Dispose
ENTRY_POINT: 04c6cc5c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Mesh2fDisposer__Dispose(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 04c6cc70 to 04d6cc73 has its CatchHandler @ 04c6cc80 */
      lVar1 = (**(code **)(*unaff_x19 + 0x1e8))();
      if (lVar1 == 0) goto LAB_04c6ccb4;
                    /* catch() { ... } // from try @ 04c6cc70 with catch @ 04c6cc80 */
      FUN_04c1c820();
    }
    return;
  }
LAB_04c6ccb4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


