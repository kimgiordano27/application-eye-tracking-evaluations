/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 036d6184
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  long lVar1;
  long unaff_x21;
  long *unaff_x23;
  
  lVar1 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_x21 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    thunk_FUN_01656ef8();
    *(undefined4 *)(unaff_x21 + 0x5c) = 4;
    FUN_036d6848();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


