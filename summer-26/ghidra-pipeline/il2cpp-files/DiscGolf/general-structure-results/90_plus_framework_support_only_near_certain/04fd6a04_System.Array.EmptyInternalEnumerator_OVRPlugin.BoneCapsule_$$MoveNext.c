/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$MoveNext
ENTRY_POINT: 04fd6a04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext
          (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 in_w8;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  int iVar12;
  int *piVar13;
  long *plVar14;
  undefined4 unaff_w24;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 unaff_x28;
  uint unaff_w29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  *(undefined4 *)(param_1 + 0x2c) = in_w8;
  uStack000000000000002c = param_2;
  if (in_x9 == 0) {
    FUN_04fd68e8();
  }
  plVar14 = *(long **)(unaff_x20 + 0x30);
  lVar18 = *(long *)(unaff_x20 + 0x18);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_05504f1c(&stack0x0000002c,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_04fd6ab4;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar14,lVar6,1);
LAB_04fd6ab4:
    uVar4 = (*(code *)*puVar5)(plVar14,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_04fd6e68;
  uVar17 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar12 = 0;
  if (uVar17 != 0) {
    iVar12 = (int)uVar4 / (int)uVar17;
  }
  uVar15 = uVar4 - iVar12 * uVar17;
  if (uVar15 < uVar17) {
    piVar13 = (int *)(lVar6 + (ulong)uVar15 * 4 + 0x20);
    uVar17 = *piVar13 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar18 == 0) goto LAB_04fd6e68;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar12 = 0;
        lVar6 = lVar18 + 0x20;
        do {
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar6 + (long)(int)uVar17 * 0x18) == uVar4) {
            plVar14 = (long *)FUN_0390b9f8(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
            if (plVar14 == (long *)0x0) goto LAB_04fd6e68;
            uVar10 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar6 + (long)(int)uVar17 * 0x18 + 8),
                                uStack000000000000002c,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar7 = &stack0x00000028;
                lVar18 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000028 = uStack000000000000002c;
                goto 
                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                ;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
              *(undefined8 *)(lVar6 + (long)(int)uVar17 * 0x18 + 0x10) = unaff_x28;
              goto FUN_04fd6e18;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_04fd6e64;
          uVar17 = *(uint *)(lVar6 + (long)(int)uVar17 * 0x18 + 4);
          if ((int)uVar15 <= iVar12) {
            FUN_05509a24(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar12 = iVar12 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    else {
      if (lVar18 == 0) goto LAB_04fd6e68;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar12 = 0;
        lVar6 = lVar18 + 0x20;
        uStack000000000000000c = unaff_w29;
        do {
          uVar3 = uStack000000000000002c;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar6 + (long)(int)uVar17 * 0x18) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar6 + (long)(int)uVar17 * 0x18 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02dcfd18(lVar8);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_04fd6ba8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_02dd004c(plVar14,lVar8,0);
LAB_04fd6ba8:
            uVar10 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                puVar7 = (undefined4 *)((long)&stack0x00000020 + 4);
                lVar18 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;

                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                :
                uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar18 + 0x70),puVar7);
                FUN_05509920(uVar16,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                *(undefined8 *)(lVar6 + (long)(int)uVar17 * 0x18 + 0x10) = unaff_x28;
FUN_04fd6e18:
                LeanTween__value();
                return 1;
              }
              goto LAB_04fd6e64;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_04fd6e64;
          uVar17 = *(uint *)(lVar6 + (long)(int)uVar17 * 0x18 + 4);
          if ((int)uVar15 <= iVar12) {
            FUN_05509a24(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar12 = iVar12 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar17 = *(uint *)(unaff_x20 + 0x20);
      if (uVar17 == uVar15) {
        FUN_04fd7204();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto LAB_04fd6e68;
        uVar15 = *(uint *)(lVar6 + 0x18);
        iVar12 = 0;
        if (uVar15 != 0) {
          iVar12 = (int)uVar4 / (int)uVar15;
        }
        uVar2 = uVar4 - iVar12 * uVar15;
        if (uVar15 <= uVar2) goto LAB_04fd6e64;
        lVar18 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar18 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar17 + 1;
      }
      if (lVar18 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_04fd6e64;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x18;
    }
    else {
      uVar17 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      if (uVar15 <= uVar17) goto LAB_04fd6e64;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x18;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar18 + 0x24);
    }
    *(uint *)(lVar18 + 0x20) = uVar4;
    *(int *)(lVar18 + 0x24) = *piVar13 + -1;
    *(undefined4 *)(lVar18 + 0x28) = uStack000000000000002c;
    *(undefined8 *)(lVar18 + 0x30) = unaff_x28;
    LeanTween__value((undefined8 *)(lVar18 + 0x30),unaff_x28);
    *piVar13 = uVar17 + 1;
    return 1;
  }
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


