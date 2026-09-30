/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<SessionPlayerData>
ENTRY_POINT: 041385a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<SessionPlayerData>(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long unaff_x19;
  int iVar24;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x27;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xfa8));
  FUN_03c8f898(PTR_DAT_08e7de80);
  FUN_03c8f898(PTR_DAT_08e7ffb0);
  FUN_03c8f898(PTR_DAT_08e7ffb8);
  FUN_03c8f898(PTR_DAT_08e7ffc0);
  FUN_03c8f898(PTR_DAT_08e7ffc8);
  FUN_03c8f898(PTR_DAT_08e7ffd0);
  FUN_03c8f898(PTR_DAT_08e6b418);
  FUN_03c8f898(PTR_DAT_08e7ffa0);
  FUN_03c8f898(PTR_DAT_08e7ffd8);
  FUN_03c8f898(PTR_DAT_08e7ffe0);
  *(undefined1 *)(unaff_x23 + 0x9e6) = 1;
  lVar18 = *unaff_x27;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar18 = *unaff_x27;
  }
  if ((unaff_x20 & 1) == 0) {
    if (**(long **)(lVar18 + 0xb8) != 0) {
      FUN_06f844dc();
LAB_04138bf4:
      return **(undefined8 **)(*unaff_x27 + 0xb8);
    }
  }
  else {
    lVar22 = (*(long **)(lVar18 + 0xb8))[1];
    if (lVar22 != 0) {
      *(undefined4 *)(lVar22 + 0x18) = 0;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      if (unaff_x19 != 0) {
        iVar3 = *(int *)(unaff_x19 + 0x10);
        if (unaff_w21 < 1) {
          iVar24 = 0;
        }
        else {
          bVar5 = false;
          iVar24 = 0;
          iVar4 = iVar3 + -1;
          do {
            if (iVar4 < iVar24) break;
            uVar15 = FUN_06f6fafc();
            if ((uVar15 & 0xffff) == 0x3c) {
              uVar15 = FUN_06f6fafc();
              lVar18 = *unaff_x27;
              bVar1 = iVar4 <= iVar24;
              bVar12 = (uVar15 & 0xffff) != 0x2f;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar18 = *unaff_x27;
              }
              lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
              if (bVar1 || bVar12) {
                uVar2 = 99;
                if ((uVar15 & 0xffff) != 0x23) {
                  uVar2 = uVar15;
                }
                if (lVar18 == 0) goto LAB_04138c20;
                lVar22 = *(long *)(lVar18 + 0x10);
                lVar23 = *(long *)PTR_DAT_08e7ffb0;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_04138c20;
                uVar15 = *(uint *)(lVar18 + 0x18);
                if (uVar15 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar15 + 1;
                  *(short *)(lVar22 + (long)(int)uVar15 * 2 + 0x20) = (short)uVar2;
                }
                else {
                  FUN_0517e1e0(lVar18,uVar2,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (lVar18 == 0) goto LAB_04138c20;
                FUN_0517f888(lVar18,*(int *)(lVar18 + 0x18) + -1,*(undefined8 *)PTR_DAT_08e7ffc0);
              }
              uVar19 = FUN_06f78754();
              if (*(int *)(*(long *)PTR_DAT_08e6b418 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b418);
              }
              plVar20 = (long *)FUN_07bcc880(uVar19,*(undefined8 *)PTR_DAT_08e7ffd8,0);
              if (plVar20 == (long *)0x0) goto LAB_04138c20;
              uVar21 = FUN_07bc8404(plVar20,0);
              bVar11 = bVar1 || bVar12;
              if ((uVar21 & 1) != 0) {
                if (!bVar5 && (!bVar1 && !bVar12)) {
                  sVar13 = FUN_06f6fafc();
                  if (sVar13 == 99) {
                    lVar18 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e7de80,2);
                    if (lVar18 == 0) goto LAB_04138c20;
                    if ((*(int *)(lVar18 + 0x18) == 0) ||
                       (*(undefined2 *)(lVar18 + 0x20) = 0x23, *(int *)(lVar18 + 0x18) == 1)) {
LAB_04138c24:
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb38();
                    }
                    *(undefined2 *)(lVar18 + 0x22) = 99;
                  }
                  else {
                    lVar18 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e7de80,1);
                    if (lVar18 == 0) goto LAB_04138c20;
                    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_04138c24;
                    *(short *)(lVar18 + 0x20) = sVar13;
                  }
                  iVar17 = iVar24 + -1;
                  iVar6 = iVar24;
                  while (-1 < iVar17) {
                    sVar13 = FUN_06f6fafc();
                    if ((sVar13 == 0x3c) && (sVar13 = FUN_06f6fafc(), sVar13 != 0x2f)) {
                      uVar16 = FUN_06f6fafc();
                      iVar17 = FUN_0418a1ac(lVar18,uVar16,*(undefined8 *)PTR_DAT_08e7ffa8);
                      if (iVar17 != -1) {
                        lVar18 = *unaff_x27;
                        if (*(int *)(lVar18 + 0xe0) == 0) {
                          thunk_FUN_03cd7500();
                          lVar18 = *unaff_x27;
                        }
                        lVar18 = **(long **)(lVar18 + 0xb8);
                        FUN_06f79078();
                        uVar19 = FUN_06f764fc();
                        if (lVar18 == 0) goto LAB_04138c20;
                        FUN_06f855a4(lVar18,0,uVar19,0);
                        break;
                      }
                    }
                    iVar17 = iVar6 + -2;
                    iVar6 = iVar6 + -1;
                  }
                }
                lVar18 = *unaff_x27;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar18 = *unaff_x27;
                }
                lVar18 = **(long **)(lVar18 + 0xb8);
                uVar19 = FUN_07bc73e4(plVar20,0);
                if (lVar18 == 0) goto LAB_04138c20;
                FUN_06f7c2f0(lVar18,uVar19,0);
                lVar18 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
                if ((lVar18 == 0) || (lVar18 = thunk_FUN_07bc8640(lVar18,1,0), lVar18 == 0))
                goto LAB_04138c20;
                iVar17 = *(int *)(lVar18 + 0x10) + 1;
                unaff_w21 = iVar17 + unaff_w21;
                unaff_w22 = iVar17 + unaff_w22;
                iVar24 = *(int *)(lVar18 + 0x10) + iVar24;
              }
            }
            else {
              bVar11 = bVar5;
              if (unaff_w22 <= iVar24) {
                lVar18 = *unaff_x27;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar18 = *unaff_x27;
                }
                if (**(long **)(lVar18 + 0xb8) == 0) goto LAB_04138c20;
                FUN_06f7c2a0(**(long **)(lVar18 + 0xb8),uVar15,0);
              }
            }
            bVar5 = bVar11;
            iVar24 = iVar24 + 1;
          } while (iVar24 < unaff_w21);
          lVar18 = *unaff_x27;
        }
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar18 = *unaff_x27;
        }
        puVar10 = PTR_DAT_08e7ffe0;
        puVar9 = PTR_DAT_08e7ffd0;
        puVar8 = PTR_DAT_08e7ffc0;
        puVar7 = PTR_DAT_08e6b418;
        lVar22 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
        if (lVar22 != 0) {
          if ((*(int *)(lVar22 + 0x18) < 1) || (iVar3 = iVar3 + -1, iVar3 <= iVar24)) {
LAB_04138be8:
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            goto LAB_04138bf4;
          }
          while( true ) {
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar18 = *unaff_x27;
            }
            lVar22 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
            if (lVar22 == 0) break;
            if ((iVar3 <= iVar24) || (*(int *)(lVar22 + 0x18) < 1)) goto LAB_04138be8;
            uVar19 = FUN_06f78754();
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)puVar7);
            }
            lVar18 = FUN_07bcc880(uVar19,*(undefined8 *)puVar10,0);
            if (lVar18 == 0) break;
            uVar21 = FUN_07bc8404(lVar18,0);
            if ((uVar21 & 1) == 0) {
              lVar18 = *unaff_x27;
              goto LAB_04138be8;
            }
            lVar22 = FUN_07bc73e4(lVar18,0);
            if (lVar22 == 0) break;
            sVar13 = FUN_06f6fafc(lVar22,2,0);
            lVar22 = *unaff_x27;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar22);
              lVar22 = *unaff_x27;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
            if (lVar22 == 0) break;
            sVar14 = FUN_0517def0(lVar22,*(int *)(lVar22 + 0x18) + -1,*(undefined8 *)puVar9);
            if (sVar13 == sVar14) {
              lVar22 = *unaff_x27;
              if (*(int *)(lVar22 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar22 = *unaff_x27;
              }
              lVar22 = **(long **)(lVar22 + 0xb8);
              uVar19 = FUN_07bc73e4(lVar18,0);
              if (lVar22 == 0) break;
              FUN_06f7c2f0(lVar22,uVar19,0);
              lVar22 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 8);
              if (lVar22 == 0) break;
              FUN_0517f888(lVar22,*(int *)(lVar22 + 0x18) + -1,*(undefined8 *)puVar8);
            }
            lVar22 = FUN_07bc73e4(lVar18,0);
            if (lVar22 == 0) break;
            lVar18 = *unaff_x27;
            iVar24 = *(int *)(lVar22 + 0x10) + iVar24;
          }
        }
      }
    }
  }
LAB_04138c20:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


