/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 013e060c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  uint unaff_w19;
  int iVar14;
  long unaff_x20;
  long *plVar15;
  uint uVar16;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar17;
  undefined8 uVar18;
  uint uStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  plVar15 = *(long **)(unaff_x20 + 0x30);
  lVar17 = *(long *)(unaff_x20 + 0x18);
  if (plVar15 == (long *)0x0) {
    uVar4 = FUN_01d44634(&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x168));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    lVar8 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_013e069c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348(plVar15,lVar6,1);
LAB_013e069c:
    uVar4 = (*(code *)*puVar5)(plVar15);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_013e0a8c;
  uVar16 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar14 = 0;
  if (uVar16 != 0) {
    iVar14 = (int)uVar4 / (int)uVar16;
  }
  uVar7 = uVar4 - iVar14 * uVar16;
  if (uVar7 < uVar16) {
    piVar13 = (int *)(lVar6 + (ulong)uVar7 * 4 + 0x20);
    uVar16 = *piVar13 - 1;
    if (plVar15 == (long *)0x0) {
      if (lVar17 == 0) goto LAB_013e0a8c;
      uVar9 = *(undefined8 *)(lVar17 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar16 < uVar7) {
        iVar14 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar16;
          if (*(uint *)(lVar17 + (long)(int)uVar16 * 0x30 + 0x20) == uVar4) {
            plVar15 = (long *)FUN_012274ec(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_013e0a88;
            if (plVar15 == (long *)0x0) goto LAB_013e0a8c;
            lVar8 = lVar17 + lVar6 * 0x30;
            uVar11 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30),
                                in_stack_00000040,in_stack_00000048,
                                *(undefined8 *)(*plVar15 + 0x1c0));
            if ((uVar11 & 1) != 0) {
              if ((unaff_w19 & 0xff) == 2) {
                lVar17 = *(long *)(unaff_x27 + 0x20);
                goto LAB_013e0a68;
              }
              if ((unaff_w19 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000030 = unaff_x26[2];
              in_stack_00000028 = unaff_x26[1];
              in_stack_00000020 = *unaff_x26;
              if (uVar16 < *(uint *)(lVar17 + 0x18)) goto LAB_013e0a40;
              goto LAB_013e0a88;
            }
            uVar7 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar7 <= uVar16) goto LAB_013e0a88;
          uVar16 = *(uint *)(lVar17 + lVar6 * 0x30 + 0x24);
          if ((int)uVar7 <= iVar14) {
            FUN_01d69580(0);
          }
          uVar9 = *(undefined8 *)(lVar17 + 0x18);
          iVar14 = iVar14 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar16 < uVar7);
      }
    }
    else {
      if (lVar17 == 0) goto LAB_013e0a8c;
      uVar9 = *(undefined8 *)(lVar17 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar16 < uVar7) {
        iVar14 = 0;
        uStack0000000000000004 = unaff_w19;
        do {
          uVar3 = in_stack_00000048;
          uVar18 = in_stack_00000040;
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar16;
          if (*(uint *)(lVar17 + (long)(int)uVar16 * 0x30 + 0x20) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 8);
            lVar10 = lVar17 + lVar6 * 0x30;
            uVar9 = *(undefined8 *)(lVar10 + 0x28);
            uVar1 = *(undefined8 *)(lVar10 + 0x30);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0103c244(lVar8);
            }
            lVar10 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_013e0798;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0103c348(plVar15,lVar8,0);
LAB_013e0798:
            uVar11 = (*(code *)*puVar5)(plVar15,uVar9,uVar1,uVar18,uVar3,puVar5[1]);
            if ((uVar11 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
                lVar17 = *(long *)(unaff_x27 + 0x20);
LAB_013e0a68:
                in_stack_00000020 = in_stack_00000040;
                in_stack_00000028 = in_stack_00000048;
                uVar9 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70),
                                           &stack0x00000020);
                FUN_01d6947c(uVar9,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000030 = unaff_x26[2];
              in_stack_00000028 = unaff_x26[1];
              in_stack_00000020 = *unaff_x26;
              if (uVar16 < *(uint *)(lVar17 + 0x18)) {
LAB_013e0a40:
                lVar17 = lVar17 + lVar6 * 0x30;
                *(undefined8 *)(lVar17 + 0x48) = in_stack_00000030;
                *(undefined8 *)(lVar17 + 0x40) = in_stack_00000028;
                *(undefined8 *)(lVar17 + 0x38) = in_stack_00000020;
                return 1;
              }
              goto LAB_013e0a88;
            }
            uVar7 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar7 <= uVar16) goto LAB_013e0a88;
          uVar16 = *(uint *)(lVar17 + lVar6 * 0x30 + 0x24);
          if ((int)uVar7 <= iVar14) {
            FUN_01d69580(0);
          }
          uVar9 = *(undefined8 *)(lVar17 + 0x18);
          iVar14 = iVar14 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar16 < uVar7);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar16 = *(uint *)(unaff_x20 + 0x20);
      if (uVar16 == uVar7) {
        FUN_013e0e44(unaff_x20,*(undefined8 *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 400))
        ;
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar16 + 1;
        if (lVar6 == 0) goto LAB_013e0a8c;
        uVar7 = *(uint *)(lVar6 + 0x18);
        iVar14 = 0;
        if (uVar7 != 0) {
          iVar14 = (int)uVar4 / (int)uVar7;
        }
        uVar2 = uVar4 - iVar14 * uVar7;
        if (uVar7 <= uVar2) goto LAB_013e0a88;
        lVar17 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar17 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar16 + 1;
      }
      if (lVar17 == 0) {
LAB_013e0a8c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_013e0a88;
      lVar6 = (long)(int)uVar16;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar16 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_013e0a88;
      lVar6 = (long)(int)uVar16;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar17 + lVar6 * 0x30 + 0x24);
    }
    lVar17 = lVar17 + lVar6 * 0x30;
    *(uint *)(lVar17 + 0x20) = uVar4;
    *(int *)(lVar17 + 0x24) = *piVar13 + -1;
    *(undefined8 *)(lVar17 + 0x30) = in_stack_00000048;
    *(undefined8 *)(lVar17 + 0x28) = in_stack_00000040;
    uVar18 = unaff_x26[1];
    uVar9 = *unaff_x26;
    *(undefined8 *)(lVar17 + 0x48) = unaff_x26[2];
    *(undefined8 *)(lVar17 + 0x40) = uVar18;
    *(undefined8 *)(lVar17 + 0x38) = uVar9;
    *piVar13 = uVar16 + 1;
    return 1;
  }
LAB_013e0a88:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


