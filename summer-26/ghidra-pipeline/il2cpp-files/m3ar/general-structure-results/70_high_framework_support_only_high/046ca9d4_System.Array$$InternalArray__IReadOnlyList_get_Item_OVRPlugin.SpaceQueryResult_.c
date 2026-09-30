/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 046ca9d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_0406ab48();
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar2 = thunk_FUN_040405ec();
  if (1 < iVar2) {
    thunk_FUN_04097b88(&DAT_09156768);
    uVar4 = thunk_FUN_0406deb8();
    uVar6 = thunk_FUN_04097b88(&DAT_091daed0);
    FUN_074f6584(uVar4,uVar6,0);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 046caa88 with catch @ 046cab1c
                        */
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar4);
  }
  uVar3 = FUN_074fdcc4();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000048,
             (void *)((long)unaff_x21 + uVar8 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 046caa50 to 047caa5b has its CatchHandler @ 046cab24 */
      in_stack_00000038 = in_stack_00000050;
      in_stack_00000030 = in_stack_00000048;
      in_stack_00000040 = in_stack_00000058;
      uVar4 = thunk_FUN_0406db0c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      in_stack_00000020 = unaff_x20[1];
      in_stack_00000018 = *unaff_x20;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = unaff_x20[2];
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_0753e1c0(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


