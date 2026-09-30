/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadResponse$$get_BucketKeyEnabled
ENTRY_POINT: 047ac388
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


undefined8 Amazon_S3_Model_InitiateMultipartUploadResponse__get_BucketKeyEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  long *plVar18;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (!in_ZR) {
    unaff_x22 = 0;
  }
  lVar14 = *unaff_x19;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x25) {
        puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_047ac3dc;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00();
LAB_047ac3dc:
  plVar8 = (long *)(*(code *)*puVar7)();
  if (plVar8 == (long *)0x0) goto LAB_047accd0;
  lVar14 = *plVar8;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x27) {
        puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
        goto FUN_047ac440;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x27,0xb);
FUN_047ac440:
  puVar2 = PTR_DAT_092a58b8;
  lVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  if (lVar14 == 0) {
    uVar5 = 0;
  }
  else {
    lVar14 = *unaff_x19;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_047ac4b0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_047ac4b0:
    plVar8 = (long *)(*(code *)*puVar7)();
    if (plVar8 == (long *)0x0) goto LAB_047accd0;
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x27) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto FUN_047ac514;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x27,0xb);
FUN_047ac514:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar1 = PTR_DAT_092a97d0;
    if (plVar8 == (long *)0x0) goto LAB_047accd0;
    lVar15 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    lVar14 = *(long *)puVar2;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_047ac580;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,lVar14,9);
LAB_047ac580:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar5 = FUN_074e488c(uVar9,*(undefined8 *)puVar1,4,0);
  }
  puVar1 = PTR_DAT_092a97c0;
  if (unaff_x22 == 0) {
    uVar6 = 0;

    Amazon_S3_Model_InitiateMultipartUploadResponse__set_ServerSideEncryptionKeyManagementServiceEncryptionContext
    :
    if (((uVar5 | uVar6) & 1) == 0) {
      return 0;
    }
    uVar6 = uVar6 & 1;
  }
  else {
    if (*(long *)(unaff_x22 + 0x90) != 0) {
      lVar14 = *(long *)PTR_DAT_092a97c0;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *(long *)puVar1;
      }
      if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_047accd0;
      uVar6 = FUN_057bed58(**(long **)(lVar14 + 0xb8),*(undefined8 *)(unaff_x22 + 0x90),
                           *(undefined8 *)PTR_DAT_09288d00);
      goto 
      Amazon_S3_Model_InitiateMultipartUploadResponse__set_ServerSideEncryptionKeyManagementServiceEncryptionContext
      ;
    }
    uVar6 = 1;
  }
  lVar14 = *unaff_x19;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x25) {
        puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto FUN_047ac654;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00();
FUN_047ac654:
  plVar8 = (long *)(*(code *)*puVar7)();
  if (plVar8 != (long *)0x0) {
    lVar14 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x27) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto Amazon_S3_Model_InputSerialization__IsSetCompressionType;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x27,0xb);
Amazon_S3_Model_InputSerialization__IsSetCompressionType:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      lVar15 = *plVar8;
      lVar14 = *(long *)puVar2;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
            goto LAB_047ac71c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,lVar14,0xb);
LAB_047ac71c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar2 = PTR_DAT_092a5050;
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        lVar15 = *(long *)puVar2;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar15);
          lVar15 = *(long *)puVar2;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 != 0) {
          uVar9 = (**(code **)(lVar15 + 0x18))
                            (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)puVar1);
          }
          uVar16 = FUN_047ad510(unaff_x22,&stack0x00000038);
          if ((uVar16 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar16 = FUN_047ad6d4(unaff_x22,&stack0x00000038);
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
          uVar10 = FUN_04791a84(lVar14,0);
          lVar15 = FUN_0765baa0(uVar10,in_stack_00000038,0);
          uVar11 = FUN_0765baa0(in_stack_00000038,uVar9,0);
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
          plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,5);
          in_stack_00000030 = uVar9;
          lVar12 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000030);
          if (plVar8 != (long *)0x0) {
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
LAB_047accd8:
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar12;
              thunk_FUN_040ec700(plVar8 + 4,lVar12);
              in_stack_00000028 = uVar10;
              lVar12 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000028);
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
              goto LAB_047accd8;
              puVar3 = PTR_DAT_092a97c0;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                plVar8[5] = lVar12;
                thunk_FUN_040ec700(plVar8 + 5,lVar12);
                if (unaff_x21 == (long *)0x0) goto LAB_047accd0;
                lVar12 = *unaff_x21;
                uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a7130) {
                      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar17 + 0x26) * 0x10 + 0x138);
                      goto LAB_047ac9ac;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar7 = (undefined8 *)FUN_040b1e00();
LAB_047ac9ac:
                in_stack_00000020 = (*(code *)*puVar7)();
                lVar12 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_09287df8,&stack0x00000020);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0
                   )) goto LAB_047accd8;
                if (2 < *(uint *)(plVar8 + 3)) {
                  plVar8[6] = lVar12;
                  thunk_FUN_040ec700(plVar8 + 6,lVar12);
                  in_stack_00000018 = in_stack_00000038;
                  lVar12 = thunk_FUN_040b4b34(*(undefined8 *)puVar1,&stack0x00000018);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar13 == 0)) goto LAB_047accd8;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                    plVar8[7] = lVar12;
                    thunk_FUN_040ec700(plVar8 + 7,lVar12);
                    if ((lVar14 != 0) &&
                       (lVar12 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar12 == 0)) goto LAB_047accd8;
                    if (4 < *(uint *)(plVar8 + 3)) {
                      plVar8[8] = lVar14;
                      thunk_FUN_040ec700(plVar8 + 8,lVar14);
                      puVar1 = PTR_DAT_092a97b8;
                      if (plVar18 != (long *)0x0) {
                        lVar12 = *plVar18;
                        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        uVar9 = *(undefined8 *)PTR_DAT_092a97d8;
                        if (uVar16 != 0) {
                          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a97b8) {
                              puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                              goto LAB_047acaf0;
                            }
                            uVar16 = uVar16 - 1;
                            piVar17 = piVar17 + 4;
                          } while (uVar16 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092a97b8,0);
LAB_047acaf0:
                        (*(code *)*puVar7)(plVar18,uVar9,plVar8,puVar7[1]);
                        if (*(int *)(*(long *)PTR_DAT_092a6c18 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        FUN_04793f94(lVar14,uVar11,0);
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
                              lVar12 = *(long *)puVar3;
                              if (*(int *)(lVar12 + 0xe4) == 0) {
                                thunk_FUN_040d65a8();
                                lVar12 = *(long *)puVar3;
                              }
                              uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
                              if (*(int *)(*(long *)PTR_DAT_09287df8 + 0xe4) == 0) {
                                thunk_FUN_040d65a8(*(long *)PTR_DAT_09287df8);
                              }
                              uVar5 = FUN_07691aac(lVar15,uVar9,0);
                              uVar5 = uVar5 & 1;
                            }
                            puVar2 = PTR_DAT_092a5898;
                            if (uVar5 != 0 || uVar6 != 0) {
                              lVar12 = *(long *)(unaff_x26 + 0x18);
                              lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,2);
                              in_stack_00000030 = uVar11;
                              uVar9 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_09287df8,
                                                         &stack0x00000030);
                              if (lVar15 != 0) {
                                FUN_03b089e0(lVar15,uVar9);
                                FUN_03b08cc0(lVar15,0,uVar9);
                                FUN_03b089e0(lVar15,lVar14);
                                FUN_03b08cc0(lVar15,1,lVar14);
                                if (lVar12 != 0) {
                                  FUN_03b10d1c(0,*(undefined8 *)puVar1,lVar12,
                                               *(undefined8 *)PTR_DAT_092a97c8,lVar15);
                                  lVar14 = FUN_03b08e64(1,*(undefined8 *)puVar2);
                                  if (lVar14 != 0) {
                                    FUN_03b2063c(0xe,*(undefined8 *)PTR_DAT_092a58b0,lVar14,0);
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


