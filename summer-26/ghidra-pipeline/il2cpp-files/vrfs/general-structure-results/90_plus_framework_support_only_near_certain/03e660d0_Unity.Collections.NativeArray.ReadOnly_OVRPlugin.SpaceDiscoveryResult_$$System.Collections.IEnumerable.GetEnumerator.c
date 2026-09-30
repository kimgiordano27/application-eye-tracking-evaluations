/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03e660d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar7;
  long unaff_x27;
  undefined4 uVar8;
  undefined8 in_stack_00000008;
  
  while (bVar2 = FUN_04161114(param_1,param_2,param_3), uVar1 = in_stack_00000008._4_4_,
        unaff_x26 != 0) {
    if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x27) {
LAB_03e661b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(byte *)(unaff_x26 + unaff_x27 + 0x20) = bVar2 & 1;
    lVar5 = *(long *)(unaff_x19 + 0x88);
    if (lVar5 == 0) break;
    lVar6 = (long)(int)in_stack_00000008._4_4_;
    if (*(uint *)(lVar5 + 0x18) <= in_stack_00000008._4_4_) goto LAB_03e661b8;
    lVar7 = *(long *)(unaff_x19 + 0x90);
    if (*(char *)(lVar5 + lVar6 + 0x20) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar3 = FUN_032194f0((long)&stack0x00000008 + 4,0);
                    /* try { // try from 03e6612c to 03f6613b has its CatchHandler @ 03e66164 */
      FUN_02526be4(*unaff_x24,uVar3,*unaff_x25,0);
                    /* try { // try from 03e6613c to 03f6614f has its CatchHandler @ 03e65db4 */
      plVar4 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
                    /* try { // try from 03e66150 to 03f6615f has its CatchHandler @ 03e66160 */
      if (plVar4 == (long *)0x0) break;
      uVar8 = (**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    }
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_03e661b8;
    *(undefined4 *)(lVar7 + lVar6 * 4 + 0x20) = uVar8;
    uVar1 = in_stack_00000008._4_4_ + 1;
    lVar5 = *unaff_x23;
    in_stack_00000008._4_4_ = uVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar5 = *unaff_x23;
    }
    if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x18) <= (int)uVar1) {
      return 1;
    }
    unaff_x26 = *(long *)(unaff_x19 + 0x88);
    unaff_x27 = (long)(int)in_stack_00000008._4_4_;
    uVar3 = FUN_032194f0((long)&stack0x00000008 + 4,0);
    FUN_02526be4(*unaff_x24,uVar3,*unaff_x25,0);
    param_1 = (**(code **)(*unaff_x20 + 0x1a8))();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x22);
    }
    param_2 = 0;
    param_3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


