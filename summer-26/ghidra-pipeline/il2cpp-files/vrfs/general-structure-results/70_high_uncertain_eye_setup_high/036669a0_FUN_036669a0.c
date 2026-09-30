/*
FUNCTION_NAME: FUN_036669a0
ENTRY_POINT: 036669a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_036669a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = System_Array__InternalArray__set_Item<GradientColorKey>();
                    /* try { // try from 036669ac to 03766a0f has its CatchHandler @ 036668c4 */
  if (lVar2 != 0) {
    iVar1 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar2,0);
    if (iVar1 != 0) {
      FUN_03377c74(param_1,0);
      return;
    }
    lVar2 = System_Array__InternalArray__set_Item<GradientColorKey>(param_1);
    if (lVar2 != 0) {
      FUN_036e1194(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


