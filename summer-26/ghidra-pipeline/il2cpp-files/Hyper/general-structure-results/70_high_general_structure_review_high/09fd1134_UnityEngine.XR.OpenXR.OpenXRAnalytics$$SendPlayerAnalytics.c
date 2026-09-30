/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 09fd1134
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uint in_stack_00000030;
  long in_stack_00000038;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x760));
  FUN_04947ee4(PTR_DAT_0ac09fa8);
  FUN_04947ee4(PTR_DAT_0acd6768);
  FUN_04947ee4(PTR_DAT_0ac0a468);
  FUN_04947ee4(PTR_DAT_0ac09788);
  FUN_04947ee4(PTR_DAT_0acd6770);
  FUN_04947ee4(PTR_DAT_0acd6778);
  FUN_04947ee4(PTR_DAT_0acd6688);
  *(undefined1 *)(unaff_x21 + 0xe94) = 1;
  in_stack_00000038 = unaff_x20;
  thunk_FUN_049ee3d8(&stack0x00000038);
  if (unaff_x19 != 0) {
    iVar7 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (0 < iVar7) {
      FUN_08d9ef4c(*(undefined8 *)(unaff_x19 + 0x10),0,iVar7,0);
    }
  }
                    /* try { // try from 09fd11dc to 0a0d11ff has its CatchHandler @ 09fd1388 */
  if ((in_stack_00000038 != 0) && (lVar22 = *(long *)(in_stack_00000038 + 0x30), lVar22 != 0)) {
    iVar7 = *(int *)(lVar22 + 0x18);
    *(undefined4 *)(lVar22 + 0x18) = 0;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (((iVar7 < 1) ||
        (FUN_08d9ef4c(*(undefined8 *)(lVar22 + 0x10),0,iVar7,0), in_stack_00000038 != 0)) &&
       (puVar2 = PTR_DAT_0acd6688, *(long *)(in_stack_00000038 + 0x28) != 0)) {
      uVar14 = thunk_FUN_0a180a20(*(long *)(in_stack_00000038 + 0x28),0);
      in_stack_00000020 = *(undefined8 *)puVar2;
      in_stack_00000028 = 0xffffffffffffffff;
      in_stack_00000030 = 1;
      uVar15 = FUN_08db2914(&stack0x00000020,0);
      uVar16 = FUN_09fd2060(uVar14,uVar15);
      if ((uVar16 & 1) == 0) {
        if (in_stack_00000038 != 0) {
          iVar7 = 0;
          lVar22 = 0;
          while (*(long *)(in_stack_00000038 + 0x28) != 0) {
            iVar12 = FUN_0a18bd78(*(long *)(in_stack_00000038 + 0x28),0);
            if (iVar12 <= iVar7) goto LAB_09fd1264;
            if ((((in_stack_00000038 == 0) || (*(long *)(in_stack_00000038 + 0x28) == 0)) ||
                (lVar19 = FUN_0a18c750(*(long *)(in_stack_00000038 + 0x28),iVar7,0), lVar19 == 0))
               || (lVar17 = FUN_0a178414(lVar19,0), lVar17 == 0)) break;
            lVar17 = thunk_FUN_0a180a20(lVar17,0);
            in_stack_00000020 = *(undefined8 *)puVar2;
            in_stack_00000030 = 1;
            in_stack_00000028 = 0xffffffffffffffff;
            uVar14 = FUN_08db2914(&stack0x00000020,0);
            if (lVar17 == 0) break;
            uVar16 = FUN_08bd762c(lVar17,uVar14,0);
            iVar7 = iVar7 + 1;
            if ((uVar16 & 1) == 0) {
              lVar19 = lVar22;
            }
            lVar22 = lVar19;
            if (in_stack_00000038 == 0) break;
          }
        }
      }
      else if (in_stack_00000038 != 0) {
        lVar22 = *(long *)(in_stack_00000038 + 0x28);
LAB_09fd1264:
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar16 = FUN_0a17cd28(lVar22,0,0);
        if ((uVar16 & 1) == 0) {
          FUN_09fd20b4(1,lVar22,&stack0x00000038);
          if (lVar22 == 0) goto LAB_09fd1370;
          iVar7 = FUN_0a18bd78(lVar22,0);
          if (iVar7 < 1) {
            lVar19 = 0;
          }
          else {
            iVar7 = 0;
            lVar17 = 0;
            do {
              lVar18 = FUN_0a18c750(lVar22,iVar7,0);
              if (lVar18 == 0) goto LAB_09fd1370;
              lVar19 = thunk_FUN_0a180a20(lVar18,0);
              in_stack_00000020 = *(undefined8 *)puVar2;
              in_stack_00000030 = 2;
              in_stack_00000028 = 0xffffffffffffffff;
              uVar14 = FUN_08db2914(&stack0x00000020,0);
              if (lVar19 == 0) goto LAB_09fd1370;
              uVar16 = FUN_08bd762c(lVar19,uVar14,0);
              lVar19 = lVar18;
              if ((uVar16 & 1) == 0) {
                iVar12 = 0;
                do {
                  uVar8 = FUN_09fc9d28(iVar12);
                  uVar14 = thunk_FUN_0a180a20(lVar18,0);
                  in_stack_00000020 = *(undefined8 *)puVar2;
                  in_stack_00000028 = 0xffffffffffffffff;
                  in_stack_00000030 = uVar8;
                  uVar15 = FUN_08db2914(&stack0x00000020,0);
                  uVar16 = FUN_09fd2060(uVar14,uVar15);
                  if ((uVar16 & 1) != 0) {
                    FUN_09fd20b4(uVar8,lVar18,&stack0x00000038);
                    uVar9 = UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_Primitives_FloatAffordanceReceiver__set_affordanceThemeDatum
                                      (iVar12);
                    lVar19 = lVar18;
                    if (uVar8 < uVar9) {
                      do {
                        in_stack_00000020 = *(undefined8 *)puVar2;
                        uVar8 = uVar8 + 1;
                        in_stack_00000028 = 0xffffffffffffffff;
                        in_stack_00000030 = uVar8;
                        uVar14 = FUN_08db2914(&stack0x00000020,0);
                        iVar10 = FUN_0a18bd78(lVar19,0);
                        lVar20 = lVar19;
                        if (0 < iVar10) {
                          if (lVar19 == 0) goto LAB_09fd1370;
                          iVar10 = 0;
                          do {
                            lVar20 = FUN_0a18c750(lVar19,iVar10,0);
                            if (lVar20 == 0) goto LAB_09fd1370;
                            uVar15 = thunk_FUN_0a180a20(lVar20,0);
                            uVar16 = FUN_09fd2060(uVar15,uVar14);
                            if ((uVar16 & 1) != 0) break;
                            iVar10 = iVar10 + 1;
                            iVar11 = FUN_0a18bd78(lVar19,0);
                            lVar20 = lVar19;
                          } while (iVar10 < iVar11);
                        }
                        uVar15 = thunk_FUN_0a180a20(lVar20,0);
                        uVar16 = FUN_09fd2060(uVar15,uVar14);
                        if ((uVar16 & 1) == 0) {
                          if (unaff_x19 != 0) {
                            lVar19 = *(long *)(unaff_x19 + 0x10);
                            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                            if (lVar19 == 0) goto LAB_09fd1370;
                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                            if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                              puVar21 = (undefined8 *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar21 = uVar14;
                              thunk_FUN_049ee3d8(puVar21,uVar14);
                            }
                            else {
                              FUN_06b7fe74();
                            }
                          }
                        }
                        else {
                          FUN_09fd20b4(uVar8,lVar20,&stack0x00000038);
                        }
                        lVar19 = lVar20;
                      } while (uVar8 != uVar9);
                    }
                  }
                  iVar12 = iVar12 + 1;
                  lVar19 = lVar17;
                } while (iVar12 != 5);
              }
              iVar7 = iVar7 + 1;
              iVar12 = FUN_0a18bd78(lVar22,0);
              lVar17 = lVar19;
            } while (iVar7 < iVar12);
          }
          puVar6 = PTR_DAT_0acd6778;
          puVar5 = PTR_DAT_0acd6770;
          puVar4 = PTR_DAT_0acd6760;
          puVar3 = PTR_DAT_0acd6758;
          iVar7 = 0;
          do {
            lVar22 = thunk_FUN_04983f60(*(undefined8 *)puVar6);
            FUN_08dbf2f0(lVar22,0);
            uVar13 = FUN_09fc9d28(iVar7);
            if ((lVar22 == 0) || (*(undefined4 *)(lVar22 + 0x10) = uVar13, in_stack_00000038 == 0))
            goto LAB_09fd1370;
            uVar15 = *(undefined8 *)(in_stack_00000038 + 0x30);
            uVar14 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
            FUN_064057a8(uVar14,lVar22,*(undefined8 *)puVar5,0);
            uVar16 = FUN_05b51360(uVar15,uVar14,*(undefined8 *)puVar3);
            if ((unaff_x19 != 0) && ((uVar16 & 1) == 0)) {
              in_stack_00000020 = *(undefined8 *)puVar2;
              in_stack_00000030 = *(uint *)(lVar22 + 0x10);
              in_stack_00000028 = 0xffffffffffffffff;
              uVar14 = FUN_08db2914(&stack0x00000020,0);
              lVar22 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_09fd1370;
              uVar8 = *(uint *)(unaff_x19 + 0x18);
              if (uVar8 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
                *(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20) = uVar14;
                thunk_FUN_049ee3d8();
              }
              else {
                FUN_06b7fe74();
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 5);
          if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar16 = FUN_0a17b398(lVar19,0,0);
          if ((uVar16 & 1) != 0) {
            FUN_09fd20b4(2,lVar19,&stack0x00000038);
            return;
          }
          if (unaff_x19 == 0) {
            return;
          }
          in_stack_00000020 = *(undefined8 *)puVar2;
          in_stack_00000028 = 0xffffffffffffffff;
          in_stack_00000030 = 2;
          uVar14 = FUN_08db2914(&stack0x00000020,0);
          iVar7 = *(int *)(unaff_x19 + 0x1c);
          lVar22 = *(long *)(unaff_x19 + 0x10);
        }
        else {
          if (unaff_x19 == 0) {
            return;
          }
          in_stack_00000020 = *(undefined8 *)puVar2;
          in_stack_00000028 = 0xffffffffffffffff;
          in_stack_00000030 = 1;
          uVar14 = FUN_08db2914(&stack0x00000020,0);
          iVar7 = *(int *)(unaff_x19 + 0x1c);
          lVar22 = *(long *)(unaff_x19 + 0x10);
        }
        *(int *)(unaff_x19 + 0x1c) = iVar7 + 1;
        if (lVar22 != 0) {
          uVar8 = *(uint *)(unaff_x19 + 0x18);
          if (uVar8 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
            *(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20) = uVar14;
            thunk_FUN_049ee3d8();
          }
          else {
            FUN_06b7fe74();
          }
          return;
        }
      }
    }
  }
LAB_09fd1370:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


