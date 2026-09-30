/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 06e24d64
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void *param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  
  memcpy(param_1,param_2,0x48);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x48;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar2 + 0x20),&stack0x00000000,0x48);
      thunk_FUN_049ee3d8(lVar2 + 0x20,0);
    }
    else {
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      FUN_06e24c64();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


