/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 05b9e1b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector2f>___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  lVar7 = FUN_03775678();
  lVar9 = *unaff_x22;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar7) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_05b9e220;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_0377596c();
LAB_05b9e220:
  uVar6 = (*(code *)*puVar8)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar15 = *(uint *)(lVar7 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar15 != 0) {
      iVar5 = (int)uVar6 / (int)uVar15;
    }
    uVar4 = uVar6 - iVar5 * uVar15;
    if (uVar15 <= uVar4) {
LAB_05b9e460:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar15 = *(int *)(lVar7 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar12 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_05b9e45c;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_05b9e460;
        puVar16 = (uint *)(lVar7 + (ulong)uVar15 * 0x18 + 0x20);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar6) {
          plVar10 = *(long **)(unaff_x19 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_042d1f6c(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_05b9e45c;
            uVar13 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined2 *)(lVar7 + uVar17 * 0x18 + 0x28),
                                in_stack_00000018._4_2_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_05b9e45c;
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar3 = *(undefined2 *)(lVar7 + uVar17 * 0x18 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03775678(lVar9);
            }
            lVar11 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_05b9e368;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0377596c(plVar10,lVar9,0);
LAB_05b9e368:
            uVar13 = (*(code *)*puVar8)(plVar10,uVar3,in_stack_00000018._4_2_,puVar8[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar9 = *(long *)(unaff_x19 + 0x10);
              if (lVar9 == 0) goto LAB_05b9e45c;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_05b9e460;
              *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = *(int *)(lVar7 + uVar17 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(unaff_x19 + 0x18);
              if (lVar9 == 0) goto LAB_05b9e45c;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar12) goto LAB_05b9e460;
              *(undefined4 *)(lVar9 + uVar12 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar17 * 0x18 + 0x24);
            }
            *puVar16 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar7 = lVar7 + uVar17 * 0x18;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar17 * 0x18 + 0x24);
        uVar12 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_05b9e45c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


