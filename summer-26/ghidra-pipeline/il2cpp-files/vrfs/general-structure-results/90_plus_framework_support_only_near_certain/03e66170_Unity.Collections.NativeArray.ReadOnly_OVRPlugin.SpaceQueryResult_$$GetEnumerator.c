/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 03e66170
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
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
          (undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar7;
  undefined8 in_stack_00000008;
  
  while (unaff_x26 != 0) {
                    /* catch() { ... } // from try @ 03e65f48 with catch @ 03e66174 */
                    /* try { // try from 03e6617c to 03f66187 has its CatchHandler @ 03e65db4 */
    if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x21) {
LAB_03e661b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
                    /* catch() { ... } // from try @ 03e6616c with catch @ 03e66184 */
    *(undefined4 *)(unaff_x26 + unaff_x21 * 4 + 0x20) = param_1;
                    /* try { // try from 03e66188 to 03f6623f has its CatchHandler @ 03e66188
                       catch() { ... } // from try @ 03e66188 with catch @ 03e66188
                       catch() { ... } // from try @ 03e662b8 with catch @ 03e66188
                       catch() { ... } // from try @ 03e662ec with catch @ 03e66188
                       catch() { ... } // from try @ 03e663f8 with catch @ 03e66188
                       catch() { ... } // from try @ 03e6642c with catch @ 03e66188
                       catch() { ... } // from try @ 03e664b0 with catch @ 03e66188
                       catch() { ... } // from try @ 03e664f0 with catch @ 03e66188 */
    uVar1 = in_stack_00000008._4_4_ + 1;
    lVar4 = *unaff_x23;
    in_stack_00000008._4_4_ = uVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x23;
    }
    uVar2 = in_stack_00000008._4_4_;
    if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x18) <= (int)uVar1) {
      return 1;
    }
    lVar4 = *(long *)(unaff_x19 + 0x88);
    lVar7 = (long)(int)in_stack_00000008._4_4_;
    uVar5 = FUN_032194f0((long)&stack0x00000008 + 4,0);
    FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
    uVar5 = (**(code **)(*unaff_x20 + 0x1a8))();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x22);
    }
    bVar3 = FUN_04161114(uVar5,0,0);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_03e661b8;
    *(byte *)(lVar4 + lVar7 + 0x20) = bVar3 & 1;
    lVar4 = *(long *)(unaff_x19 + 0x88);
    if (lVar4 == 0) break;
    unaff_x21 = (long)(int)in_stack_00000008._4_4_;
    if (*(uint *)(lVar4 + 0x18) <= in_stack_00000008._4_4_) goto LAB_03e661b8;
    unaff_x26 = *(long *)(unaff_x19 + 0x90);
    if (*(char *)(lVar4 + unaff_x21 + 0x20) == '\0') {
      param_1 = 0;
    }
    else {
      uVar5 = FUN_032194f0((long)&stack0x00000008 + 4,0);
      FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
      plVar6 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
      if (plVar6 == (long *)0x0) break;
      param_1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


