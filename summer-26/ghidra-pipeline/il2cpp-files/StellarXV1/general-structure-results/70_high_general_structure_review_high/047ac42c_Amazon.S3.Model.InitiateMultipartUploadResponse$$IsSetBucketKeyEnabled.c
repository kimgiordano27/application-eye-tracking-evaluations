/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadResponse$$IsSetBucketKeyEnabled
ENTRY_POINT: 047ac42c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


undefined8
Amazon_S3_Model_InitiateMultipartUploadResponse__IsSetBucketKeyEnabled(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long *plVar18;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar2 = PTR_DAT_092a58b8;
  lVar7 = (*(code *)*param_1)();
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    lVar7 = *unaff_x19;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_047ac4b0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_047ac4b0:
    plVar9 = (long *)(*(code *)*puVar8)();
    if (plVar9 == (long *)0x0) goto LAB_047accd0;
    lVar7 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto FUN_047ac514;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x27,0xb);
FUN_047ac514:
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    puVar1 = PTR_DAT_092a97d0;
    if (plVar9 == (long *)0x0) goto LAB_047accd0;
    lVar15 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    lVar7 = *(long *)puVar2;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_047ac580;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,9);
LAB_047ac580:
    uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    uVar5 = FUN_074e488c(uVar10,*(undefined8 *)puVar1,4,0);
  }
  puVar1 = PTR_DAT_092a97c0;
  if (unaff_x23 == 0) {
    uVar6 = 0;

    Amazon_S3_Model_InitiateMultipartUploadResponse__set_ServerSideEncryptionKeyManagementServiceEncryptionContext
    :
    if (((uVar5 | uVar6) & 1) == 0) {
      return 0;
    }
    uVar6 = uVar6 & 1;
  }
  else {
    if (*(long *)(unaff_x23 + 0x90) != 0) {
      lVar7 = *(long *)PTR_DAT_092a97c0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar1;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_047accd0;
      uVar6 = FUN_057bed58(**(long **)(lVar7 + 0xb8),*(undefined8 *)(unaff_x23 + 0x90),
                           *(undefined8 *)PTR_DAT_09288d00);
      goto 
      Amazon_S3_Model_InitiateMultipartUploadResponse__set_ServerSideEncryptionKeyManagementServiceEncryptionContext
      ;
    }
    uVar6 = 1;
  }
  lVar7 = *unaff_x19;
  uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x25) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto FUN_047ac654;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00();
FUN_047ac654:
  plVar9 = (long *)(*(code *)*puVar8)();
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto Amazon_S3_Model_InputSerialization__IsSetCompressionType;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x27,0xb);
Amazon_S3_Model_InputSerialization__IsSetCompressionType:
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      lVar7 = *(long *)puVar2;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
            goto LAB_047ac71c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar9,lVar7,0xb);
LAB_047ac71c:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar2 = PTR_DAT_092a5050;
      if (plVar9 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar15);
          lVar15 = *(long *)puVar2;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 != 0) {
          uVar10 = (**(code **)(lVar15 + 0x18))
                             (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)puVar1);
          }
          uVar16 = FUN_047ad510();
          if ((uVar16 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar16 = FUN_047ad6d4();
            if ((uVar16 & 1) == 0) {
              return 0;
            }
          }
          puVar1 = PTR_DAT_09288e88;
          if (*(int *)(*(long *)PTR_DAT_09288e88 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          in_stack_00000038 = FUN_0765a8d4(&stack0x00000038,0);
          if (*(int *)(*(long *)PTR_DAT_092a6c18 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)PTR_DAT_092a6c18);
          }
          uVar11 = FUN_04791a84(lVar7,0);
          lVar15 = FUN_0765baa0(uVar11,in_stack_00000038,0);
          uVar12 = FUN_0765baa0(in_stack_00000038,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09287df8 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)PTR_DAT_09287df8);
          }
          if (lVar15 < 0) {
            if (*(int *)(*(long *)PTR_DAT_09287df8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar15 = FUN_07691900(lVar15,0);
          }
          plVar18 = *(long **)(unaff_x26 + 0x18);
          plVar9 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,5);
          in_stack_00000030 = uVar10;
          lVar13 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000030);
          if (plVar9 != (long *)0x0) {
            if ((lVar13 != 0) &&
               (lVar14 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
LAB_047accd8:
              uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar10,0);
            }
            if ((int)plVar9[3] != 0) {
              plVar9[4] = lVar13;
              thunk_FUN_040ec700(plVar9 + 4,lVar13);
              in_stack_00000028 = uVar11;
              lVar13 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000028);
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0))
              goto LAB_047accd8;
              puVar3 = PTR_DAT_092a97c0;
              if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                plVar9[5] = lVar13;
                thunk_FUN_040ec700(plVar9 + 5,lVar13);
                if (unaff_x21 == (long *)0x0) goto LAB_047accd0;
                lVar13 = *unaff_x21;
                uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a7130) {
                      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0x26) * 0x10 + 0x138);
                      goto LAB_047ac9ac;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar8 = (undefined8 *)FUN_040b1e00();
LAB_047ac9ac:
                in_stack_00000020 = (*(code *)*puVar8)();
                lVar13 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_09287df8,&stack0x00000020);
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0
                   )) goto LAB_047accd8;
                if (2 < *(uint *)(plVar9 + 3)) {
                  plVar9[6] = lVar13;
                  thunk_FUN_040ec700(plVar9 + 6,lVar13);
                  in_stack_00000018 = in_stack_00000038;
                  lVar13 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000018);
                  if ((lVar13 != 0) &&
                     (lVar14 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar14 == 0)) goto LAB_047accd8;
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                    plVar9[7] = lVar13;
                    thunk_FUN_040ec700(plVar9 + 7,lVar13);
                    if ((lVar7 != 0) &&
                       (lVar13 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar13 == 0)) goto LAB_047accd8;
                    if (4 < *(uint *)(plVar9 + 3)) {
                      plVar9[8] = lVar7;
                      thunk_FUN_040ec700(plVar9 + 8,lVar7);
                      puVar1 = PTR_DAT_092a97b8;
                      if (plVar18 != (long *)0x0) {
                        lVar13 = *plVar18;
                        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        uVar10 = *(undefined8 *)PTR_DAT_092a97d8;
                        if (uVar16 != 0) {
                          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a97b8) {
                              puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                              goto LAB_047acaf0;
                            }
                            uVar16 = uVar16 - 1;
                            piVar17 = piVar17 + 4;
                          } while (uVar16 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092a97b8,0);
LAB_047acaf0:
                        (*(code *)*puVar8)(plVar18,uVar10,plVar9,puVar8[1]);
                        if (*(int *)(*(long *)PTR_DAT_092a6c18 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        FUN_04793f94(lVar7,uVar12,0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        uVar16 = FUN_0475c6a8(0);
                        if ((uVar16 & 1) != 0) {
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                          }
                          cVar4 = FUN_0475c5f0(0);
                          if (cVar4 == '\0') {
                            if ((uVar5 & 1) == 0) {
                              uVar5 = 0;
                            }
                            else {
                              lVar13 = *(long *)puVar3;
                              if (*(int *)(lVar13 + 0xe4) == 0) {
                                thunk_FUN_040d65a8();
                                lVar13 = *(long *)puVar3;
                              }
                              uVar10 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
                              if (*(int *)(*(long *)PTR_DAT_09287df8 + 0xe4) == 0) {
                                thunk_FUN_040d65a8(*(long *)PTR_DAT_09287df8);
                              }
                              uVar5 = FUN_07691aac(lVar15,uVar10,0);
                              uVar5 = uVar5 & 1;
                            }
                            puVar2 = PTR_DAT_092a5898;
                            if (uVar5 != 0 || uVar6 != 0) {
                              lVar13 = *(long *)(unaff_x26 + 0x18);
                              lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,2);
                              in_stack_00000030 = uVar12;
                              uVar10 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_09287df8,
                                                          &stack0x00000030);
                              if (lVar15 != 0) {
                                FUN_03b089e0(lVar15,uVar10);
                                FUN_03b08cc0(lVar15,0,uVar10);
                                FUN_03b089e0(lVar15,lVar7);
                                FUN_03b08cc0(lVar15,1,lVar7);
                                if (lVar13 != 0) {
                                  FUN_03b10d1c(0,*(undefined8 *)puVar1,lVar13,
                                               *(undefined8 *)PTR_DAT_092a97c8,lVar15);
                                  lVar7 = FUN_03b08e64(1,*(undefined8 *)puVar2);
                                  if (lVar7 != 0) {
                                    FUN_03b2063c(0xe,*(undefined8 *)PTR_DAT_092a58b0,lVar7,0);
                                    return 1;
                                  }
                                }
                              }
                              goto LAB_047accd0;
                            }
                          }
                        }
                        return 0;
                      }
                      goto LAB_047accd0;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
        }
      }
    }
  }
LAB_047accd0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


