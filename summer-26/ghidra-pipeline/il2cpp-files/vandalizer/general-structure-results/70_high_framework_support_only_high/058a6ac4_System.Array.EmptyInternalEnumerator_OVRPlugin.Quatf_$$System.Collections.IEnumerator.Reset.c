/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058a6ac4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_Reset(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  long unaff_x24;
  uint unaff_w25;
  ulong uVar10;
  long lVar11;
  int unaff_w28;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar9 = 0xffffffff;
  do {
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_058a6cd8;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w25) goto LAB_058a6cdc;
    piVar12 = (int *)(lVar11 + (ulong)unaff_w25 * 0x24 + 0x20);
    uVar10 = (ulong)unaff_w25;
    if (*piVar12 == unaff_w28) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_03e98388(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(lVar11 + uVar10 * 0x24 + 0x28),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_058a6cd8;
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar11 + uVar10 * 0x24 + 0x28);
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
          if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_058a6cdc;
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar10 * 0x24 + 0x24) + 1;
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
               *(undefined4 *)(lVar11 + uVar10 * 0x24 + 0x24);
        }
        lVar11 = lVar11 + uVar10 * 0x24;
        uVar14 = *(undefined8 *)(lVar11 + 0x34);
        uVar13 = *(undefined8 *)(lVar11 + 0x2c);
        in_stack_00000008[2] = *(undefined8 *)(lVar11 + 0x3c);
        in_stack_00000008[1] = uVar14;
        *in_stack_00000008 = uVar13;
        *piVar12 = -1;
        *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = unaff_w25;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    uVar2 = *(uint *)(lVar11 + uVar10 * 0x24 + 0x24);
    uVar9 = (ulong)unaff_w25;
    unaff_w25 = uVar2;
    if ((int)uVar2 < 0) {
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
  } while( true );
}


