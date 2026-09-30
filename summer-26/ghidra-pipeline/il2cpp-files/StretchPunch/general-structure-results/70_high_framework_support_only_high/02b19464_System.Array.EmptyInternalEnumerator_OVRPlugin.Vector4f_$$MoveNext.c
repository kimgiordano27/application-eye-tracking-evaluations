/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 02b19464
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__MoveNext(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint in_w9;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int unaff_w28;
  int *piVar14;
  undefined4 *in_stack_00000010;
  long in_stack_00000018;
  
  if (in_w9 <= (uint)in_x10) {
LAB_02b19690:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar11 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar11) {
    uVar12 = 0xffffffff;
    do {
      lVar13 = *(long *)(unaff_x19 + 0x18);
      if (lVar13 == 0) goto LAB_02b1968c;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_02b19690;
      piVar14 = (int *)(lVar13 + (ulong)uVar11 * 0x18 + 0x20);
      uVar9 = (ulong)uVar11;
      if (*piVar14 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_0201725c(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar5 == (long *)0x0) goto LAB_02b1968c;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar13 + uVar9 * 0x18 + 0x28));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_02b1968c;
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
          uVar10 = *(undefined8 *)(lVar13 + uVar9 * 0x18 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01dde7f8(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_02b19588;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar5,lVar4,0);
LAB_02b19588:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar10);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar12 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_02b1968c;
            if (*(uint *)(lVar4 + 0x18) <= (uint)in_x10) goto LAB_02b19690;
            *(int *)(lVar4 + in_x10 * 4 + 0x20) = *(int *)(lVar13 + uVar9 * 0x18 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_02b1968c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar12) goto LAB_02b19690;
            *(undefined4 *)(lVar4 + uVar12 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar13 + uVar9 * 0x18 + 0x24);
          }
          lVar13 = lVar13 + uVar9 * 0x18;
          *in_stack_00000010 = *(undefined4 *)(lVar13 + 0x30);
          *piVar14 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined4 *)(lVar13 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar11;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar13 + uVar9 * 0x18 + 0x24);
      uVar12 = (ulong)uVar11;
      uVar11 = uVar1;
    } while (-1 < (int)uVar1);
  }
  *in_stack_00000010 = 0;
  return 0;
}


