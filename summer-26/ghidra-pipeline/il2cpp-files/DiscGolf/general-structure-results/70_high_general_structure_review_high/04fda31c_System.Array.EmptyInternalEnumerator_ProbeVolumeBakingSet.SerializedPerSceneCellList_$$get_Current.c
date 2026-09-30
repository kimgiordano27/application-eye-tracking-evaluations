/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 04fda31c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
          (long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint in_w8;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint uVar8;
  uint unaff_w25;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  char unaff_w29;
  int *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fda29c with catch @ 04fda320
                        */
    if (in_w8 <= unaff_w25) {
LAB_04fda514:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (param_1 == (long *)0x0) {
LAB_04fda518:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 04fda33c to 050da353 has its CatchHandler @ 04fda3d0 */
    uVar3 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined8 *)
                                (unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23 + 8),
                       in_stack_00000028,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      if (unaff_w29 == '\x02') {
        in_stack_00000020 = in_stack_00000028;
        uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000020);
        FUN_05509920(uVar4,0);
      }
      else if (unaff_w29 == '\x01') {
        if (unaff_w25 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined8 *)(unaff_x19 + (long)(int)unaff_w25 * 0x18 + 0x10) = unaff_x28;
          return 1;
        }
        goto LAB_04fda514;
      }
      return 0;
    }
    uVar3 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar3 <= unaff_w25) goto LAB_04fda514;
                    /* try { // try from 04fda358 to 050da35b has its CatchHandler @ 04fda3c8 */
      unaff_w25 = *(uint *)(unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23 + 4);
      if ((int)(uint)uVar3 <= unaff_w22) {
        FUN_05509a24(0);
      }
      uVar3 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      uVar8 = (uint)uVar3;
      if (uVar8 <= unaff_w25) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar7 = *(uint *)(unaff_x20 + 0x20);
          if (uVar7 == uVar8) {
            System_Array_EmptyInternalEnumerator<Regex_CachedCodeEntryKey>___cctor();
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
            if (lVar6 == 0) goto LAB_04fda518;
            uVar8 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar8 != 0) {
              iVar2 = unaff_w27 / (int)uVar8;
            }
            uVar1 = unaff_w27 - iVar2 * uVar8;
            if (uVar8 <= uVar1) goto LAB_04fda514;
            lVar5 = *(long *)(unaff_x20 + 0x18);
            in_stack_00000018 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
          }
          else {
            lVar5 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar7 + 1;
          }
          if (lVar5 == 0) goto LAB_04fda518;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_04fda514;
          lVar5 = lVar5 + (long)(int)uVar7 * 0x18;
        }
        else {
          uVar7 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          if (uVar8 <= uVar7) goto LAB_04fda514;
          lVar5 = unaff_x26 + (long)(int)uVar7 * 0x18;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
        }
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *in_stack_00000018 + -1;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar5 + 0x30) = unaff_x28;
        *in_stack_00000018 = uVar7 + 1;
        return 1;
      }
    } while (*(int *)(unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23) != unaff_w27);
    param_1 = (long *)FUN_034ea548(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
    in_w8 = *(uint *)(unaff_x26 + 0x18);
  } while( true );
}


