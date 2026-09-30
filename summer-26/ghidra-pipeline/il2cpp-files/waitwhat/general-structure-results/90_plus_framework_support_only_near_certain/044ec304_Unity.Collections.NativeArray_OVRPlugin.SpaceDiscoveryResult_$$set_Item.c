/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 044ec304
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x044ec4c8) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long *in_stack_00000088;
  
  do {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 044ec318 to 045ec32f has its CatchHandler @ 044ec39c */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 044ec330 to 045ec38b has its CatchHandler @ 044ec1d0 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044ec370;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(unaff_x21,lVar3,0);
LAB_044ec370:
    (*(code *)*puVar2)(&stack0x00000028,unaff_x21,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000068 = in_stack_00000030;
    in_stack_00000060 = in_stack_00000028;
    in_stack_00000078 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000038;
    in_stack_00000080 = in_stack_00000048;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_044ea864();
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
    }
    plVar1 = in_stack_00000088;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * (long)unaff_w23;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000060;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_00000080;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000088;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044ec2ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000088,*unaff_x22,0);
LAB_044ec2ec:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000088;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000088 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000088;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_044ec474;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    unaff_x21 = in_stack_00000088;
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_044ec490;
    }
  }
LAB_044ec474:
  puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000088,*(long *)PTR_DAT_070c2e88,0);
LAB_044ec490:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


