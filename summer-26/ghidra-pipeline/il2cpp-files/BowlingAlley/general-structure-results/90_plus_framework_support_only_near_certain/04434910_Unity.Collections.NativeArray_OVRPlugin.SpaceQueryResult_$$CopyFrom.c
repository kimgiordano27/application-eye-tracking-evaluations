/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 04434910
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (ulong param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072835c0);
    *(undefined1 *)(unaff_x23 + 0x46c) = 1;
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  if (*param_2 != 0) {
    if (0x3f < *(int *)((long)param_2 + 0xc)) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar1 = thunk_FUN_032a56a0();
      uVar2 = thunk_FUN_032e1da0(PTR_DAT_072835c8);
      FUN_0592371c(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar1);
    }
    if (*(int *)((long)param_2 + 0xc) < 2) {
      *param_2 = 0;
    }
    else {
      FUN_03a08ee4();
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 0xc) = 0;
    }
  }
  return;
}


