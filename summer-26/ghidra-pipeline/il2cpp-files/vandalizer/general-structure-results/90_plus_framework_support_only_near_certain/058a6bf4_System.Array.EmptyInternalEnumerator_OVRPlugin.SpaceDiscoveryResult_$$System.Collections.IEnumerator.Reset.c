/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058a6bf4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
          (void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  long unaff_x24;
  ulong uVar9;
  long lVar10;
  int unaff_w28;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar4 = in_w8;
    uVar9 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_058a6cd8;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_058a6cdc;
    piVar11 = (int *)(lVar10 + (ulong)uVar4 * (unaff_x21 & 0xffffffff) + 0x20);
    if (*piVar11 == unaff_w28) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_03e98388(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(lVar10 + uVar9 * unaff_x21 + 0x28),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar10 + uVar9 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4(lVar3);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_058a6bc8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(plVar5,lVar3,0);
LAB_058a6bc8:
        uVar7 = (*(code *)*puVar2)(plVar5,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        unaff_x24 = in_stack_00000010;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_058a6cd8;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_058a6cdc;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar10 + uVar9 * 0x24 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_058a6cd8:
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
LAB_058a6cdc:
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w20 * 0x24 + 0x24) =
               *(undefined4 *)(lVar10 + uVar9 * 0x24 + 0x24);
        }
        lVar10 = lVar10 + uVar9 * 0x24;
        uVar13 = *(undefined8 *)(lVar10 + 0x34);
        uVar12 = *(undefined8 *)(lVar10 + 0x2c);
        in_stack_00000008[2] = *(undefined8 *)(lVar10 + 0x3c);
        in_stack_00000008[1] = uVar13;
        *in_stack_00000008 = uVar12;
        *piVar11 = -1;
        *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar4;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar10 + uVar9 * unaff_x21 + 0x24);
    unaff_w20 = uVar4;
  } while( true );
}


