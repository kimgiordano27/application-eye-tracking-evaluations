/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03539288
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x21;
  
  puVar2 = PTR_DAT_0727f320;
  if ((*(byte *)(unaff_x21 + 0x2f0) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f320);
    thunk_FUN_032e1da0(PTR_DAT_0727dbd8);
    *(undefined1 *)(unaff_x21 + 0x2f0) = 1;
  }
  puVar1 = PTR_DAT_0727dbd8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_0353be50();
  FUN_0353a520(param_1,uVar3,1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_03517b4c(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  thunk_FUN_032e1da0(PTR_DAT_0727dbd8);
  FUN_02d9d3e0();
  uVar3 = FUN_03517bd4(0);
  uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727f3e8);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar3,uVar5);
}


