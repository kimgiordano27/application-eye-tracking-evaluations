/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 058a6ab0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  long unaff_x24;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int unaff_w28;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack0000000000000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar10 = *(int *)(param_1 + 0x20) - 1;
  if (-1 < (int)uVar10) {
                    /* try { // try from 058a6ac0 to 059a6d7f has its CatchHandler @ 058a6ac0
                       catch() { ... } // from try @ 058a6ac0 with catch @ 058a6ac0
                       catch() { ... } // from try @ 058a6de8 with catch @ 058a6ac0
                       catch() { ... } // from try @ 058a6e1c with catch @ 058a6ac0
                       catch() { ... } // from try @ 058a6e30 with catch @ 058a6ac0
                       catch() { ... } // from try @ 058a6e74 with catch @ 058a6ac0
                       catch() { ... } // from try @ 058a6eb0 with catch @ 058a6ac0 */
    uVar9 = 0xffffffff;
    lStack0000000000000000 = in_x10;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) goto LAB_058a6cd8;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_058a6cdc;
      piVar13 = (int *)(lVar12 + (ulong)uVar10 * 0x24 + 0x20);
      uVar11 = (ulong)uVar10;
      if (*piVar13 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_03e98388(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
          if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined4 *)(lVar12 + uVar11 * 0x24 + 0x28),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar12 + uVar11 * 0x24 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0322bef4(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_058a6bc8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0322c1e8(plVar5,lVar4,0);
LAB_058a6bc8:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar1,in_stack_00000018._4_4_,puVar3[1]);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar9 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_058a6cd8;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000000) goto LAB_058a6cdc;
            *(int *)(lVar4 + lStack0000000000000000 * 4 + 0x20) =
                 *(int *)(lVar12 + uVar11 * 0x24 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_058a6cd8:
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) {
LAB_058a6cdc:
                    /* WARNING: Subroutine does not return */
              FUN_031f2398();
            }
            *(undefined4 *)(lVar4 + uVar9 * 0x24 + 0x24) =
                 *(undefined4 *)(lVar12 + uVar11 * 0x24 + 0x24);
          }
          lVar12 = lVar12 + uVar11 * 0x24;
          uVar15 = *(undefined8 *)(lVar12 + 0x34);
          uVar14 = *(undefined8 *)(lVar12 + 0x2c);
          in_stack_00000008[2] = *(undefined8 *)(lVar12 + 0x3c);
          in_stack_00000008[1] = uVar15;
          *in_stack_00000008 = uVar14;
          *piVar13 = -1;
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar2 = *(uint *)(lVar12 + uVar11 * 0x24 + 0x24);
      uVar9 = (ulong)uVar10;
      uVar10 = uVar2;
    } while (-1 < (int)uVar2);
  }
  *in_stack_00000008 = 0;
  in_stack_00000008[1] = 0;
  in_stack_00000008[2] = 0;
  return 0;
}


