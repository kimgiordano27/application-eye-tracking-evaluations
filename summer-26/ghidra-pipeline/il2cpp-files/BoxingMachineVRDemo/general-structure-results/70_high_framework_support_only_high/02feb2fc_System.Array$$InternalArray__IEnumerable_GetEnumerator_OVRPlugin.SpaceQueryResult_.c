/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02feb2fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067655a0);
    FUN_02d6084c(PTR_DAT_067655a8);
    FUN_02d6084c(PTR_DAT_067657a8);
    *(undefined1 *)(unaff_x21 + 0x5a3) = 1;
  }
  puVar2 = PTR_DAT_067657a8;
  puVar1 = PTR_DAT_067655a8;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_02feb3d8(uVar3,uVar4);
  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  System_Array__InternalArray__IEnumerable_GetEnumerator<SpriteState>(uVar4,uVar3,1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_02fdc348();
  if ((uVar5 & 1) == 0) {
    return uVar4;
  }
  thunk_FUN_02dc61f4(PTR_DAT_067655a8);
  FUN_028f4b80();
  uVar3 = FUN_02fdc3d0();
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067662c8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}


