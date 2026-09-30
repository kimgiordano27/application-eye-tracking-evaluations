/*
FUNCTION_NAME: MatchManager$$TeleportPlayerToClosestStartPosition
ENTRY_POINT: 0286e524
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


undefined8
MatchManager__TeleportPlayerToClosestStartPosition(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined4 *puVar12;
  long in_x9;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  long unaff_x20;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0286e560;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar7 = (undefined8 *)FUN_015c2a80();
LAB_0286e560:
  puVar5 = PTR_DAT_06dc49a8;
  puVar1 = PTR_DAT_06dc3ba8;
  puVar4 = PTR_DAT_06da86b8;
  puVar2 = PTR_DAT_06d95680;
  (*(code *)*puVar7)();
  if (*(char *)(unaff_x20 + 0x21) != '\0') {
    lVar8 = FUN_0431b09c();
    if ((*(long *)(unaff_x19 + 0x48) == 0) || (lVar8 == 0)) goto LAB_0286ef08;
    uVar9 = FUN_0286ef18(*(undefined4 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x3c),
                         *(undefined4 *)(unaff_x19 + 0x40),lVar8,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x10));
    if ((uVar9 & 1) != 0) {
      lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de71d0);
      puVar1 = PTR_DAT_06dd31a0;
      if (lVar10 != 0) {
        FUN_02d76b34(lVar10,0);
        plVar15 = (long *)(lVar10 + 0x18);
        *plVar15 = *(long *)(unaff_x19 + 0x48);
        thunk_FUN_01656ef8(plVar15);
        uVar16 = *(undefined8 *)(lVar8 + 0x58);
        lVar18 = *plVar15;
        lVar8 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
        puVar3 = PTR_DAT_06dd6460;
        puVar1 = PTR_DAT_06d8b8a8;
        if (lVar8 != 0) {
          FUN_020d2d8c(lVar8,lVar18,*(undefined8 *)PTR_DAT_06dceff0,0);
          uVar16 = FUN_01b71458(uVar16,lVar8,*(undefined8 *)puVar3);
          lVar8 = FUN_01b5a9f0(uVar16,*(undefined8 *)puVar1);
          if (lVar8 != 0) {
            lVar18 = *(long *)(lVar8 + 0x38);
            if (DAT_0722a13e == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e50440);
              DAT_0722a13e = '\x01';
            }
            if (lVar18 != 0) {
              puVar12 = *(undefined4 **)(*(long *)PTR_DAT_06e50440 + 0xb8);
              fVar23 = (float)puVar12[1];
              fVar24 = (float)puVar12[2];
              fVar20 = (float)FUN_0286efa4(*puVar12,fVar23,fVar24,lVar18,0);
              lVar18 = *plVar15;
              if (lVar18 != 0) {
                FUN_0286cbf0(lVar8,*(undefined4 *)(lVar18 + 0x10),*(undefined8 *)(lVar18 + 0x18));
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                if (DAT_0722b646 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06dc49a8);
                  DAT_0722b646 = '\x01';
                }
                lVar18 = *(long *)puVar5;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar18 = *(long *)puVar5;
                }
                lVar19 = *plVar15;
                uVar16 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8);
                lVar18 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc3ba8);
                if (lVar18 != 0) {
                  FUN_020d2d8c(lVar18,lVar19,*(undefined8 *)PTR_DAT_06e4f9a8,0);
                  uVar16 = FUN_01b71458(uVar16,lVar18,*(undefined8 *)puVar4);
                  lVar18 = FUN_01b5c728(uVar16,*(undefined8 *)puVar2);
                  if (*plVar15 != 0) {
                    *(uint *)(lVar10 + 0x10) = (uint)(*(int *)(*plVar15 + 0x10) == 0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                    }
                    if (DAT_0722b646 == '\0') {
                      thunk_FUN_0159f088(PTR_DAT_06dc49a8);
                      DAT_0722b646 = '\x01';
                    }
                    lVar19 = *(long *)puVar5;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar19 = *(long *)puVar5;
                    }
                    uVar16 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8);
                    lVar19 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dc3ba8);
                    if (lVar19 != 0) {
                      FUN_020d2d8c(lVar19,lVar10,*(undefined8 *)PTR_DAT_06e5e6e0,0);
                      uVar16 = FUN_01b71458(uVar16,lVar19,*(undefined8 *)puVar4);
                      lVar10 = FUN_01b5c728(uVar16,*(undefined8 *)puVar2);
                      puVar2 = PTR_DAT_06e03c18;
                      if ((*(long *)(lVar8 + 0x30) != 0) && (*plVar15 != 0)) {
                        iVar17 = *(int *)(*plVar15 + 0x10);
                        fVar26 = *(float *)(*(long *)(lVar8 + 0x30) + 0x58);
                        fVar11 = -0.0;
                        if (iVar17 != 0) {
                          fVar11 = 0.0;
                        }
                        FUN_04f139a8(0,*(undefined4 *)(&UNK_053da3b8 + (ulong)(iVar17 == 0) * 4),0,0
                                    );
                        in_stack_00000038 = 0;
                        in_stack_00000040 = 0;
                        in_stack_00000048 = 0;
                        FUN_03f8c64c(&stack0x00000038,*(undefined8 *)puVar2);
                        if (lVar18 != 0) {
                          fVar26 = fVar26 + DAT_0536a2e8;
                          in_stack_00000028 = in_stack_00000040;
                          in_stack_00000020 = in_stack_00000038;
                          fVar21 = -fVar26;
                          if (iVar17 != 0) {
                            fVar21 = fVar26;
                          }
                          in_stack_00000030 = in_stack_00000048;
                          System_Collections_ObjectModel_ReadOnlyCollection<TextureRegistry_TextureInfo>__System_Collections_IList_get_Item
                                    (fVar20 + fVar21,fVar23 + fVar11,fVar24 + fVar11,lVar18,
                                     &stack0x00000020,1,0);
                          if (*plVar15 != 0) {
                            iVar17 = *(int *)(*plVar15 + 0x10);
                            fVar11 = -0.0;
                            if (iVar17 != 1) {
                              fVar11 = 0.0;
                            }
                            FUN_04f139a8(0,*(undefined4 *)(&UNK_053da3b8 + (ulong)(iVar17 == 1) * 4)
                                         ,0,0);
                            in_stack_00000038 = 0;
                            in_stack_00000040 = 0;
                            in_stack_00000048 = 0;
                            FUN_03f8c64c(&stack0x00000038,*(undefined8 *)puVar2);
                            if (lVar10 != 0) {
                              fVar21 = -fVar26;
                              if (iVar17 != 1) {
                                fVar21 = fVar26;
                              }
                              System_Collections_ObjectModel_ReadOnlyCollection<TextureRegistry_TextureInfo>__System_Collections_IList_get_Item
                                        (fVar20 + fVar21,fVar23 + fVar11,fVar24 + fVar11,lVar10);
                              return 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0286ef08;
    }
  }
  if (*(int *)(unaff_x20 + 0x54) == 4) {
    lVar8 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e394d0);
    if (lVar8 == 0) goto LAB_0286ef08;
    FUN_02d76b34(lVar8,0);
    plVar15 = (long *)(lVar8 + 0x18);
    *plVar15 = *(long *)(unaff_x19 + 0x48);
    thunk_FUN_01656ef8(plVar15);
    if (*plVar15 == 0) goto LAB_0286ef08;
    *(uint *)(lVar8 + 0x10) = (uint)(*(int *)(*plVar15 + 0x10) == 0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722b646 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dc49a8);
      DAT_0722b646 = '\x01';
    }
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar10 = *(long *)puVar5;
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    lVar10 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_06d9fd78;
    if (lVar10 == 0) goto LAB_0286ef08;
    FUN_020d2d8c(lVar10,lVar8,*(undefined8 *)PTR_DAT_06e526d8,0);
    uVar16 = FUN_01b71458(uVar16,lVar10,*(undefined8 *)puVar4);
    uVar16 = FUN_01b5c728(uVar16,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar3);
    }
    uVar9 = FUN_051d94d4(uVar16,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (DAT_0722b646 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06dc49a8);
        DAT_0722b646 = '\x01';
      }
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar8 = *(long *)puVar5;
      }
      lVar10 = *plVar15;
      uVar16 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      lVar8 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_0286ef08;
      FUN_020d2d8c(lVar8,lVar10,*(undefined8 *)PTR_DAT_06e55f98,0);
      uVar16 = FUN_01b71458(uVar16,lVar8,*(undefined8 *)puVar4);
      FUN_01b5c728(uVar16,*(undefined8 *)puVar2);
    }
    if (*plVar15 == 0) goto LAB_0286ef08;
    FUN_0286da8c(*(undefined4 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x3c),
                 *(undefined4 *)(unaff_x19 + 0x40));
    FUN_051e4284();
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    uVar9 = FUN_02966e90(*(long *)(unaff_x20 + 0x68),0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    if ((*(long *)(unaff_x19 + 0x48) != 0) && (*(long *)(unaff_x20 + 0x38) != 0)) {
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x3c);
      uVar25 = (ulong)*(uint *)(unaff_x19 + 0x40);
      uVar9 = FUN_0286efa4(*(undefined4 *)(unaff_x19 + 0x38),uVar22,uVar25,
                           *(long *)(unaff_x20 + 0x38),
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x10));
      if (*(int *)(unaff_x20 + 0x54) == 4) {
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0286ef08;
        uVar22 = (ulong)(uint)(*(float *)(unaff_x19 + 0x3c) + 0.0);
        uVar9 = (ulong)(uint)(*(float *)(unaff_x19 + 0x38) +
                             *(float *)(&UNK_053da3c0 +
                                       (ulong)(*(int *)(*(long *)(unaff_x19 + 0x48) + 0x10) == 0) *
                                       4));
        uVar25 = (ulong)(uint)(*(float *)(unaff_x19 + 0x40) + DAT_0534c360);
      }
      if (*(char *)(unaff_x20 + 0x58) != '\0') {
        if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_0286ef08;
        FUN_01a6df70(uVar9,uVar22,uVar25,*(long *)(unaff_x20 + 0x78),0);
        if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_0286ef08;
        uVar22 = FUN_01a6defc(*(long *)(unaff_x20 + 0x78),0);
      }
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0286ef08;
        (**(code **)(lVar8 + 0x18))(uVar9,uVar22,uVar25,*(undefined8 *)(lVar8 + 0x40));
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        if ((*(int *)(unaff_x20 + 0x54) != 4) && (*(char *)(unaff_x20 + 0x20) != '\0')) {
LAB_0286eeb4:
          FUN_0286db70(uVar9,uVar22,uVar25);
          FUN_051e4284();
          return 0;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (DAT_0722b646 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06dc49a8);
          DAT_0722b646 = '\x01';
        }
        lVar8 = *(long *)puVar5;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar8 = *(long *)puVar5;
        }
        puVar4 = PTR_DAT_06e0c470;
        puVar2 = PTR_DAT_06d8ba18;
        plVar15 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar15 != (long *)0x0) {
          iVar17 = 0;
          do {
            lVar8 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0286ed20;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)puVar2,0);
LAB_0286ed20:
            iVar6 = (*(code *)*puVar7)(plVar15,puVar7[1]);
            if (iVar6 <= iVar17) goto LAB_0286eeb4;
            lVar8 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0286ed80;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)puVar4,0);
LAB_0286ed80:
            (*(code *)*puVar7)(plVar15,iVar17,puVar7[1]);
            lVar8 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0286ede0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)puVar4,0);
LAB_0286ede0:
            lVar8 = (*(code *)*puVar7)(plVar15,iVar17,puVar7[1]);
            if (((lVar8 == 0) || (lVar8 = FUN_051e5130(lVar8,0), lVar8 == 0)) ||
               (Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0),
               *(long *)(unaff_x19 + 0x48) == 0)) break;
            FUN_0286d604();
            FUN_051e4284();
            lVar8 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0286ee88;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)puVar4,0);
LAB_0286ee88:
            lVar8 = (*(code *)*puVar7)(plVar15,iVar17,puVar7[1]);
            if (lVar8 == 0) break;
            FUN_032d6bcc(0x3f800000,lVar8,1,0);
            iVar17 = iVar17 + 1;
          } while( true );
        }
      }
    }
  }
LAB_0286ef08:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


