/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 0492980c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool in_NG;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  int *piVar9;
  long lVar10;
  int unaff_w27;
  ulong uVar11;
  ulong uVar12;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  if (!in_NG) {
    uVar12 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_04929a08;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w24) goto LAB_04929a0c;
      piVar9 = (int *)(lVar10 + (ulong)unaff_w24 * 0x24 + 0x20);
      uVar11 = (ulong)unaff_w24;
      if (*piVar9 == unaff_w27) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_03642a0c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar5 == (long *)0x0) goto LAB_04929a08;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined4 *)(lVar10 + uVar11 * 0x24 + 0x28),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_04929a08;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar10 + uVar11 * 0x24 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02d9a2e0(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04929918;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar4,0);
LAB_04929918:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar1,in_stack_00000018._4_4_,puVar3[1]);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar12 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_04929a08;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000008) goto LAB_04929a0c;
            *(int *)(lVar4 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar10 + uVar11 * 0x24 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar12) {
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined4 *)(lVar4 + uVar12 * 0x24 + 0x24) =
                 *(undefined4 *)(lVar10 + uVar11 * 0x24 + 0x24);
          }
          *piVar9 = -1;
          *(undefined4 *)(lVar10 + uVar11 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = unaff_w24;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar2 = *(uint *)(lVar10 + uVar11 * 0x24 + 0x24);
      uVar12 = (ulong)unaff_w24;
      unaff_w24 = uVar2;
    } while (-1 < (int)uVar2);
  }
  return 0;
}


