/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 05c04504
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>___ctor(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x23;
  undefined8 uVar14;
  long unaff_x24;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678(lVar7);
  }
  lVar8 = *unaff_x23;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_05c04580;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_05c04580:
  uVar5 = (*(code *)*puVar6)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar15 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar5 / (int)uVar15;
    }
    uVar3 = uVar5 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_05c047f8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar15 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar11 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_05c047f4;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_05c047f8;
        puVar17 = (uint *)(lVar7 + (ulong)uVar15 * 0x38 + 0x20);
        uVar16 = (ulong)uVar15;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03e0c914(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_05c047f4;
            uVar12 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar7 + uVar16 * 0x38 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_05c047f4;
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar7 + uVar16 * 0x38 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03775678(lVar8);
            }
            lVar10 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_05c046cc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar9,lVar8,0);
LAB_05c046cc:
            uVar12 = (*(code *)*puVar6)(plVar9,uVar14,in_stack_00000018,puVar6[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_05c047f4;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_05c047f8;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar16 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_05c047f4;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11) goto LAB_05c047f8;
              *(undefined4 *)(lVar8 + uVar11 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar16 * 0x38 + 0x24);
            }
            lVar7 = lVar7 + uVar16 * 0x38;
            uVar20 = *(undefined8 *)(lVar7 + 0x38);
            uVar19 = *(undefined8 *)(lVar7 + 0x30);
            uVar18 = *(undefined8 *)(lVar7 + 0x48);
            uVar14 = *(undefined8 *)(lVar7 + 0x40);
            in_stack_00000008[4] = *(undefined8 *)(lVar7 + 0x50);
            in_stack_00000008[1] = uVar20;
            *in_stack_00000008 = uVar19;
            in_stack_00000008[3] = uVar18;
            in_stack_00000008[2] = uVar14;
            thunk_FUN_037aeb94(in_stack_00000008,0);
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar7 + 0x38) = 0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined8 *)(lVar7 + 0x40) = 0;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar16 * 0x38 + 0x24);
        uVar11 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
    in_stack_00000008[4] = 0;
    in_stack_00000008[1] = 0;
    *in_stack_00000008 = 0;
    in_stack_00000008[3] = 0;
    in_stack_00000008[2] = 0;
    return 0;
  }
LAB_05c047f4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


