/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 04fd6a0c
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  int iVar11;
  int *piVar12;
  long *plVar13;
  undefined4 unaff_w24;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 unaff_x28;
  uint unaff_w29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (in_x9 == 0) {
    FUN_04fd68e8();
  }
  plVar13 = *(long **)(unaff_x20 + 0x30);
  lVar17 = *(long *)(unaff_x20 + 0x18);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_05504f1c((long)&stack0x00000028 + 4,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_04fd6ab4;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar13,lVar6,1);
LAB_04fd6ab4:
    uVar4 = (*(code *)*puVar5)(plVar13,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_04fd6e68;
  uVar16 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar11 = 0;
  if (uVar16 != 0) {
    iVar11 = (int)uVar4 / (int)uVar16;
  }
  uVar14 = uVar4 - iVar11 * uVar16;
  if (uVar14 < uVar16) {
    piVar12 = (int *)(lVar6 + (ulong)uVar14 * 4 + 0x20);
    uVar16 = *piVar12 - 1;
    if (plVar13 == (long *)0x0) {
      if (lVar17 == 0) goto LAB_04fd6e68;
      uVar15 = *(undefined8 *)(lVar17 + 0x18);
      uVar14 = (uint)uVar15;
      if (uVar16 < uVar14) {
        iVar11 = 0;
        lVar6 = lVar17 + 0x20;
        do {
          uVar14 = (uint)uVar15;
          if (*(uint *)(lVar6 + (long)(int)uVar16 * 0x18) == uVar4) {
            plVar13 = (long *)FUN_0390b9f8(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_04fd6e64;
            if (plVar13 == (long *)0x0) goto LAB_04fd6e68;
            uVar9 = (**(code **)(*plVar13 + 0x1b8))
                              (plVar13,*(undefined4 *)(lVar6 + (long)(int)uVar16 * 0x18 + 8),
                               uStack000000000000002c,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar5 = (undefined8 *)&stack0x00000028;
                lVar17 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                uStack0000000000000028 = uStack000000000000002c;
                goto 
                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                ;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_04fd6e64;
              *(undefined8 *)(lVar6 + (long)(int)uVar16 * 0x18 + 0x10) = unaff_x28;
              goto FUN_04fd6e18;
            }
            uVar14 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar14 <= uVar16) goto LAB_04fd6e64;
          uVar16 = *(uint *)(lVar6 + (long)(int)uVar16 * 0x18 + 4);
          if ((int)uVar14 <= iVar11) {
            FUN_05509a24(0);
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x18);
          iVar11 = iVar11 + 1;
          uVar14 = (uint)uVar15;
        } while (uVar16 < uVar14);
      }
    }
    else {
      if (lVar17 == 0) goto LAB_04fd6e68;
      uVar15 = *(undefined8 *)(lVar17 + 0x18);
      uVar14 = (uint)uVar15;
      if (uVar16 < uVar14) {
        iVar11 = 0;
        lVar6 = lVar17 + 0x20;
        uStack000000000000000c = unaff_w29;
        do {
          uVar3 = uStack000000000000002c;
          uVar14 = (uint)uVar15;
          if (*(uint *)(lVar6 + (long)(int)uVar16 * 0x18) == uVar4) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar6 + (long)(int)uVar16 * 0x18 + 8);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02dcfd18(lVar7);
            }
            lVar8 = *plVar13;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04fd6ba8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02dd004c(plVar13,lVar7,0);
LAB_04fd6ba8:
            uVar9 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
            if ((uVar9 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                puVar5 = (undefined8 *)((long)&stack0x00000020 + 4);
                lVar17 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;

                System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
                :
                uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar17 + 0x70),puVar5);
                FUN_05509920(uVar15,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar16 < *(uint *)(lVar17 + 0x18)) {
                *(undefined8 *)(lVar6 + (long)(int)uVar16 * 0x18 + 0x10) = unaff_x28;
FUN_04fd6e18:
                LeanTween__value();
                return 1;
              }
              goto LAB_04fd6e64;
            }
            uVar14 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar14 <= uVar16) goto LAB_04fd6e64;
          uVar16 = *(uint *)(lVar6 + (long)(int)uVar16 * 0x18 + 4);
          if ((int)uVar14 <= iVar11) {
            FUN_05509a24(0);
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x18);
          iVar11 = iVar11 + 1;
          uVar14 = (uint)uVar15;
        } while (uVar16 < uVar14);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar16 = *(uint *)(unaff_x20 + 0x20);
      if (uVar16 == uVar14) {
        FUN_04fd7204();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_04fd6e68;
        uVar14 = *(uint *)(lVar6 + 0x18);
        iVar11 = 0;
        if (uVar14 != 0) {
          iVar11 = (int)uVar4 / (int)uVar14;
        }
        uVar2 = uVar4 - iVar11 * uVar14;
        if (uVar14 <= uVar2) goto LAB_04fd6e64;
        lVar17 = *(long *)(unaff_x20 + 0x18);
        piVar12 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar17 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar16 + 1;
      }
      if (lVar17 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_04fd6e64;
      lVar17 = lVar17 + (long)(int)uVar16 * 0x18;
    }
    else {
      uVar16 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      if (uVar14 <= uVar16) goto LAB_04fd6e64;
      lVar17 = lVar17 + (long)(int)uVar16 * 0x18;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
    }
    *(uint *)(lVar17 + 0x20) = uVar4;
    *(int *)(lVar17 + 0x24) = *piVar12 + -1;
    *(undefined4 *)(lVar17 + 0x28) = uStack000000000000002c;
    *(undefined8 *)(lVar17 + 0x30) = unaff_x28;
    LeanTween__value((undefined8 *)(lVar17 + 0x30),unaff_x28);
    *piVar12 = uVar16 + 1;
    return 1;
  }
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


