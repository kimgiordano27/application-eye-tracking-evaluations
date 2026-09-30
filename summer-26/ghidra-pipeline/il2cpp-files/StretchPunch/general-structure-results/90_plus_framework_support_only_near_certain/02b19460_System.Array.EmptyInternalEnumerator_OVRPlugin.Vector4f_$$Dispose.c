/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02b19460
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint in_w9;
  ulong uVar8;
  int in_w10;
  int *piVar9;
  long unaff_x19;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int unaff_w28;
  int *piVar15;
  undefined4 *in_stack_00000010;
  long in_stack_00000018;
  
  uVar3 = unaff_w28 - in_w10 * in_w9;
  if (in_w9 <= uVar3) {
LAB_02b19690:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar12 = *(int *)(param_1 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar12) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = *(long *)(unaff_x19 + 0x18);
      if (lVar14 == 0) goto LAB_02b1968c;
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_02b19690;
      piVar15 = (int *)(lVar14 + (ulong)uVar12 * 0x18 + 0x20);
      uVar10 = (ulong)uVar12;
      if (*piVar15 == unaff_w28) {
        plVar6 = *(long **)(unaff_x19 + 0x30);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)FUN_0201725c(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar6 == (long *)0x0) goto LAB_02b1968c;
          uVar8 = (**(code **)(*plVar6 + 0x1b8))
                            (plVar6,*(undefined8 *)(lVar14 + uVar10 * 0x18 + 0x28));
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_02b1968c;
          lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
          uVar11 = *(undefined8 *)(lVar14 + uVar10 * 0x18 + 0x28);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_02b19588;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01dde8fc(plVar6,lVar5,0);
LAB_02b19588:
          uVar8 = (*(code *)*puVar4)(plVar6,uVar11);
        }
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar13 < 0) {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            if (lVar5 == 0) goto LAB_02b1968c;
            if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_02b19690;
            *(int *)(lVar5 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar14 + uVar10 * 0x18 + 0x24) + 1;
          }
          else {
            lVar5 = *(long *)(unaff_x19 + 0x18);
            if (lVar5 == 0) {
LAB_02b1968c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar13) goto LAB_02b19690;
            *(undefined4 *)(lVar5 + uVar13 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar14 + uVar10 * 0x18 + 0x24);
          }
          lVar14 = lVar14 + uVar10 * 0x18;
          *in_stack_00000010 = *(undefined4 *)(lVar14 + 0x30);
          *piVar15 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar12;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar14 + uVar10 * 0x18 + 0x24);
      uVar13 = (ulong)uVar12;
      uVar12 = uVar1;
    } while (-1 < (int)uVar1);
  }
  *in_stack_00000010 = 0;
  return 0;
}


