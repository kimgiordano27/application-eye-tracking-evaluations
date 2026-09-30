/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 05b9e25c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector3f>___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  bool in_NG;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  int *piVar10;
  long lVar11;
  int unaff_w27;
  ulong uVar12;
  ulong uVar13;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  if (!in_NG) {
    uVar13 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_05b9e45c;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w24) goto LAB_05b9e460;
      piVar10 = (int *)(lVar11 + (ulong)unaff_w24 * 0x18 + 0x20);
      uVar12 = (ulong)unaff_w24;
      if (*piVar10 == unaff_w27) {
        plVar6 = *(long **)(unaff_x19 + 0x30);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)FUN_042d1f6c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar6 == (long *)0x0) goto LAB_05b9e45c;
          uVar8 = (**(code **)(*plVar6 + 0x1b8))
                            (plVar6,*(undefined2 *)(lVar11 + uVar12 * 0x18 + 0x28),
                             in_stack_00000018._4_2_,*(undefined8 *)(*plVar6 + 0x1c0));
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_05b9e45c;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar3 = *(undefined2 *)(lVar11 + uVar12 * 0x18 + 0x28);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678(lVar5);
          }
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05b9e368;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(plVar6,lVar5,0);
LAB_05b9e368:
          uVar8 = (*(code *)*puVar4)(plVar6,uVar3,in_stack_00000018._4_2_,puVar4[1]);
        }
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar13 < 0) {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            if (lVar5 == 0) goto LAB_05b9e45c;
            if (*(uint *)(lVar5 + 0x18) <= (uint)lStack0000000000000008) goto LAB_05b9e460;
            *(int *)(lVar5 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar11 + uVar12 * 0x18 + 0x24) + 1;
          }
          else {
            lVar5 = *(long *)(unaff_x19 + 0x18);
            if (lVar5 == 0) {
LAB_05b9e45c:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar13) {
LAB_05b9e460:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined4 *)(lVar5 + uVar13 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar11 + uVar12 * 0x18 + 0x24);
          }
          *piVar10 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar11 = lVar11 + uVar12 * 0x18;
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(undefined4 *)(lVar11 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = unaff_w24;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar11 + uVar12 * 0x18 + 0x24);
      uVar13 = (ulong)unaff_w24;
      unaff_w24 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


