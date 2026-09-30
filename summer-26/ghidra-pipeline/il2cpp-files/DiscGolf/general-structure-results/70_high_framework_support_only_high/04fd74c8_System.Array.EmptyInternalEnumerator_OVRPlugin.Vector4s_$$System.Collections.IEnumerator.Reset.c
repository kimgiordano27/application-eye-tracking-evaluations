/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04fd74c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint in_w9;
  ulong uVar7;
  int in_w10;
  int *piVar8;
  long *plVar9;
  long unaff_x23;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int unaff_w29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar2 = unaff_w29 - in_w10 * in_w9;
  if (in_w9 <= uVar2) {
LAB_04fd76e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  uVar10 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar10) {
    uVar11 = 0xffffffff;
    do {
      lVar5 = *(long *)(unaff_x23 + 0x18);
      if (lVar5 == 0) goto LAB_04fd76e4;
      if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_04fd76e8;
      lVar5 = lVar5 + 0x20;
      piVar13 = (int *)(lVar5 + (ulong)uVar10 * 0x18);
      uVar12 = (ulong)uVar10;
      if (*piVar13 == unaff_w29) {
        plVar9 = *(long **)(unaff_x23 + 0x30);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)FUN_0390b9f8(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar9 == (long *)0x0) goto LAB_04fd76e4;
          uVar7 = (**(code **)(*plVar9 + 0x1b8))
                            (plVar9,*(undefined4 *)(lVar5 + uVar12 * 0x18 + 8),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
        }
        else {
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar5 + uVar12 * 0x18 + 8);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02dcfd18(lVar4);
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04fd75f4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02dd004c(plVar9,lVar4,0);
LAB_04fd75f4:
          uVar7 = (*(code *)*puVar3)(plVar9,uVar1,in_stack_00000018._4_4_,puVar3[1]);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar11 < 0) {
            lVar4 = *(long *)(unaff_x23 + 0x10);
            if (lVar4 == 0) goto LAB_04fd76e4;
            if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_04fd76e8;
            *(int *)(lVar4 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar5 + uVar12 * 0x18 + 4) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x23 + 0x18);
            if (lVar4 == 0) {
LAB_04fd76e4:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar11) goto LAB_04fd76e8;
            *(undefined4 *)(lVar4 + uVar11 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar5 + uVar12 * 0x18 + 4);
          }
          uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
          lVar5 = lVar5 + uVar12 * 0x18;
          *piVar13 = -1;
          *(undefined4 *)(lVar5 + 4) = uVar1;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(uint *)(unaff_x23 + 0x24) = uVar10;
          *(ulong *)(unaff_x23 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
          return 1;
        }
      }
      uVar11 = (ulong)uVar10;
      uVar10 = *(uint *)(lVar5 + uVar12 * 0x18 + 4);
    } while (-1 < (int)uVar10);
  }
  return 0;
}


