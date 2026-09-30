/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 03e65fd4
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *unaff_x20;
  uint uVar10;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  undefined8 in_stack_00000008;
  
  thunk_FUN_016466fc();
  bVar5 = FUN_04161114();
  *(byte *)(unaff_x19 + 0x7c) = bVar5 & 1;
  if ((bVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
                    /* try { // try from 03e65ffc to 03f65fff has its CatchHandler @ 03e66088 */
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
    if (plVar7 == (long *)0x0) {
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370));
  }
  puVar3 = PTR_DAT_06e2d9d0;
  puVar2 = PTR_DAT_06e064c0;
  puVar1 = PTR_DAT_06dfeb50;
                    /* try { // try from 03e66038 to 03f6605f has its CatchHandler @ 03e6608c */
  uVar10 = 0;
  *(undefined4 *)(unaff_x19 + 0x80) = uVar6;
  while( true ) {
    lVar8 = *(long *)puVar1;
    in_stack_00000008._4_4_ = uVar10;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar8 = *(long *)puVar1;
    }
    uVar4 = in_stack_00000008._4_4_;
    if (*(int *)(*(long *)(lVar8 + 0xb8) + 0x18) <= (int)uVar10) {
      return 1;
    }
    lVar8 = *(long *)(unaff_x19 + 0x88);
    lVar12 = (long)(int)in_stack_00000008._4_4_;
    uVar9 = FUN_032194f0((long)&stack0x00000008 + 4,0);
    FUN_02526be4(*(undefined8 *)puVar3,uVar9,*(undefined8 *)puVar2,0);
    uVar9 = (**(code **)(*unaff_x20 + 0x1a8))();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x22);
    }
    bVar5 = FUN_04161114(uVar9,0,0);
    uVar10 = in_stack_00000008._4_4_;
    if (lVar8 == 0) goto thunk_FUN_0160eeb4;
    if (*(uint *)(lVar8 + 0x18) <= uVar4) break;
    *(byte *)(lVar8 + lVar12 + 0x20) = bVar5 & 1;
    lVar8 = *(long *)(unaff_x19 + 0x88);
    if (lVar8 == 0) goto thunk_FUN_0160eeb4;
    lVar12 = (long)(int)in_stack_00000008._4_4_;
    if (*(uint *)(lVar8 + 0x18) <= in_stack_00000008._4_4_) break;
    lVar11 = *(long *)(unaff_x19 + 0x90);
    if (*(char *)(lVar8 + lVar12 + 0x20) == '\0') {
      uVar6 = 0;
    }
    else {
      uVar9 = FUN_032194f0((long)&stack0x00000008 + 4,0);
      FUN_02526be4(*(undefined8 *)puVar3,uVar9,*(undefined8 *)puVar2,0);
      plVar7 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
      if (plVar7 == (long *)0x0) goto thunk_FUN_0160eeb4;
      uVar6 = (**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
    }
    if (lVar11 == 0) goto thunk_FUN_0160eeb4;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) break;
    *(undefined4 *)(lVar11 + lVar12 * 4 + 0x20) = uVar6;
    uVar10 = in_stack_00000008._4_4_ + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


