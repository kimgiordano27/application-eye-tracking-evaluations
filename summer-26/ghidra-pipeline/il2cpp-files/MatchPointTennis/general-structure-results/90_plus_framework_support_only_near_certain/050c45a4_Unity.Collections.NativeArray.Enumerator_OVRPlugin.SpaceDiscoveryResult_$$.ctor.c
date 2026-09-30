/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 050c45a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_094bbcfc(0);
  if (((uVar1 & 1) != 0) && (*unaff_x20 != 0)) {
    FUN_0945fc10(*unaff_x20,0);
  }
  *unaff_x20 = unaff_x21;
  thunk_FUN_044bb4b4();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_094bbcfc(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (unaff_x19 != 0) {
    uVar1 = FUN_09525150();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*unaff_x20 != 0) {
      FUN_0945fbe0(*unaff_x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


