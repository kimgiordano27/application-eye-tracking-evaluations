/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 035392e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  FUN_0353a520();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_03517b4c(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  thunk_FUN_032e1da0(PTR_DAT_0727dbd8);
  FUN_02d9d3e0();
  uVar2 = FUN_03517bd4(0);
  uVar3 = thunk_FUN_032e1da0(PTR_DAT_0727f3e8);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar3);
}


