/*
FUNCTION_NAME: Firebase.Firestore.Converters.ConverterBase$$DeserializeArray
ENTRY_POINT: 02f072f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Firebase_Firestore_Converters_ConverterBase__DeserializeArray(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x27;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_067604f8);
  FUN_02d6084c(PTR_DAT_06760500);
  FUN_02d6084c(PTR_DAT_06760508);
                    /* try { // try from 02f07318 to 0300732f has its CatchHandler @ 02f083a4 */
  FUN_02d6084c(PTR_DAT_06760510);
  *(undefined1 *)(unaff_x27 + 0x5e3) = 1;
  puVar1 = PTR_DAT_0675e1b8;
  if (unaff_x23 != 0) {
    plVar9 = (long *)(unaff_x23 + 0x48);
    if (*plVar9 != 0) {
      if (*(char *)(*plVar9 + 0x24) == '\0') {
        puVar6 = (undefined8 *)PTR_DAT_06760510;
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          puVar6 = (undefined8 *)PTR_DAT_06760510;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = UnityEngine_Font__add_textureRebuilt();
        if ((uVar3 & 1) == 0) {
          plVar4 = (long *)*plVar9;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0xe8), lVar7 != 0)) {
              uVar8 = *(undefined8 *)(lVar7 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar3 = UnityEngine_Font__add_textureRebuilt(uVar8,0,0);
              if ((uVar3 & 1) == 0) {
                if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xe8), lVar7 == 0))
                goto LAB_02f07bc4;
                lVar7 = *(long *)(lVar7 + 0x48);
              }
              else {
                lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
                FUN_0606ade8(lVar7,*(undefined8 *)PTR_DAT_06760508,0);
                if (lVar7 == 0) goto LAB_02f07bc4;
                lVar7 = FUN_0606a288(lVar7,0);
              }
              if (((lVar7 != 0) && (FUN_06079544(lVar7), unaff_x22 != 0)) &&
                 (*(long *)(unaff_x22 + 0x18) != 0)) {
                FUN_02f07bc8(*(long *)(unaff_x22 + 0x18),lVar7);
                if ((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0xe8), lVar5 != 0)) {
                  plVar4 = (long *)(lVar5 + 0x48);
                  *plVar4 = lVar7;
                  thunk_FUN_02dd37b4(plVar4,lVar7);
                  if (*(long *)(unaff_x23 + 0x40) != 0) {
                    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x40) + 0x10);
                    fVar10 = *(float *)(unaff_x22 + 0x10);
                    if (DAT_06b722a7 == '\0') {
                      FUN_02d6084c(PTR_DAT_0675e318);
                      DAT_06b722a7 = '\x01';
                    }
                    if (lVar7 != 0) {
                      lVar5 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
                      FUN_0607946c(fVar10 * *(float *)(lVar5 + 0xc),
                                   fVar10 * *(float *)(lVar5 + 0x10),
                                   fVar10 * *(float *)(lVar5 + 0x14),lVar7,0);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar3 = FUN_0606a004();
                      if (((uVar3 & 1) == 0) || (*(long *)(unaff_x22 + 0x30) == 0)) {
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar3 = FUN_0606a004();
                        if ((uVar3 & 1) != 0) {
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar3 = FUN_0606a004();
                          if ((uVar3 & 1) != 0) {
                            if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xe8), lVar7 == 0))
                            goto LAB_02f07bc4;
                            *(undefined4 *)(lVar7 + 0xac) = 0;
                          }
                        }
                      }
                      else {
                        if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xe8), lVar7 == 0))
                        goto LAB_02f07bc4;
                        uVar8 = *(undefined8 *)(lVar7 + 0x70);
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar3 = UnityEngine_Font__add_textureRebuilt(uVar8,0,0);
                        if ((uVar3 & 1) == 0) {
                          if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xe8), lVar7 == 0))
                          goto LAB_02f07bc4;
                          lVar7 = *(long *)(lVar7 + 0x70);
                        }
                        else {
                          lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
                          FUN_0606ade8(lVar7,*(undefined8 *)PTR_DAT_067604f8,0);
                          if (lVar7 == 0) goto LAB_02f07bc4;
                          lVar7 = FUN_0606a288(lVar7,0);
                        }
                        if (lVar7 == 0) goto LAB_02f07bc4;
                        FUN_06079544(lVar7);
                        if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_02f07bc4;
                        FUN_02f07bc8(*(long *)(unaff_x22 + 0x30),lVar7);
                        if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0xe8), lVar5 == 0))
                        goto LAB_02f07bc4;
                        plVar4 = (long *)(lVar5 + 0x70);
                        *plVar4 = lVar7;
                        thunk_FUN_02dd37b4(plVar4,lVar7);
                        lVar7 = *plVar9;
                        if ((lVar7 == 0) || (lVar5 = *(long *)(lVar7 + 0xe8), lVar5 == 0))
                        goto LAB_02f07bc4;
                        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(unaff_x22 + 100);
                        *(undefined1 *)(lVar7 + 0xd8) = 0;
                        *(undefined4 *)(lVar5 + 0xac) = 0x43340000;
                      }
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar3 = FUN_0606a004();
                      if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0xf0), lVar7 != 0)) {
                        uVar11 = 0;
                        if ((uVar3 & 1) != 0) {
                          uVar8 = *(undefined8 *)(lVar7 + 0x48);
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar3 = UnityEngine_Font__add_textureRebuilt(uVar8,0,0);
                          if ((uVar3 & 1) == 0) {
                            if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xf0), lVar7 == 0))
                            goto LAB_02f07bc4;
                            lVar7 = *(long *)(lVar7 + 0x48);
                          }
                          else {
                            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
                            FUN_0606ade8(lVar7,*(undefined8 *)PTR_DAT_067604f0,0);
                            if (lVar7 == 0) goto LAB_02f07bc4;
                            lVar7 = FUN_0606a288(lVar7,0);
                          }
                          if (lVar7 == 0) goto LAB_02f07bc4;
                          FUN_06079544(lVar7);
                          if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_02f07bc4;
                          FUN_02f07bc8(*(long *)(unaff_x22 + 0x20),lVar7);
                          if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0xf0), lVar5 == 0))
                          goto LAB_02f07bc4;
                          plVar4 = (long *)(lVar5 + 0x48);
                          *plVar4 = lVar7;
                          thunk_FUN_02dd37b4(plVar4,lVar7);
                          if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xf0), lVar7 == 0))
                          goto LAB_02f07bc4;
                          uVar11 = 0x3f800000;
                        }
                        *(undefined4 *)(lVar7 + 0x50) = uVar11;
                        *(undefined4 *)(lVar7 + 0x54) = uVar11;
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar3 = FUN_0606a004();
                        if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0xf8), lVar7 != 0)) {
                          uVar11 = 0;
                          if ((uVar3 & 1) != 0) {
                            uVar8 = *(undefined8 *)(lVar7 + 0x48);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            uVar3 = UnityEngine_Font__add_textureRebuilt(uVar8,0,0);
                            if ((uVar3 & 1) == 0) {
                              if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xf8), lVar7 == 0))
                              goto LAB_02f07bc4;
                              lVar7 = *(long *)(lVar7 + 0x48);
                            }
                            else {
                              lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
                              FUN_0606ade8(lVar7,*(undefined8 *)PTR_DAT_06760500,0);
                              if (lVar7 == 0) goto LAB_02f07bc4;
                              lVar7 = FUN_0606a288(lVar7,0);
                            }
                            if (lVar7 == 0) goto LAB_02f07bc4;
                            FUN_06079544(lVar7);
                            if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_02f07bc4;
                            FUN_02f07bc8(*(long *)(unaff_x22 + 0x28),lVar7);
                            if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0xf8), lVar5 == 0))
                            goto LAB_02f07bc4;
                            plVar4 = (long *)(lVar5 + 0x48);
                            *plVar4 = lVar7;
                            thunk_FUN_02dd37b4(plVar4,lVar7);
                            if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0xf8), lVar7 == 0))
                            goto LAB_02f07bc4;
                            uVar11 = 0x3f800000;
                          }
                          *(undefined4 *)(lVar7 + 0x50) = uVar11;
                          *(undefined4 *)(lVar7 + 0x54) = uVar11;
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar3 = FUN_0606a004();
                          if ((uVar3 & 1) != 0) {
                            if ((*plVar9 == 0) || (*(long *)(unaff_x23 + 0x40) == 0))
                            goto LAB_02f07bc4;
                            uVar8 = *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x98);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            FUN_0606a004(uVar8,0,0);
                            if ((*(long *)(unaff_x23 + 0x40) == 0) ||
                               (lVar7 = *(long *)(*(long *)(unaff_x23 + 0x40) + 0x10), lVar7 == 0))
                            goto LAB_02f07bc4;
                            FUN_060791e8(lVar7,0);
                            FUN_02f07c24();
                          }
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar3 = FUN_0606a004();
                          if ((uVar3 & 1) != 0) {
                            if ((*plVar9 == 0) || (*(long *)(unaff_x23 + 0x40) == 0))
                            goto LAB_02f07bc4;
                            uVar8 = *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0xb8);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            FUN_0606a004(uVar8,0,0);
                            if ((*(long *)(unaff_x23 + 0x40) == 0) ||
                               (lVar7 = *(long *)(*(long *)(unaff_x23 + 0x40) + 0x10), lVar7 == 0))
                            goto LAB_02f07bc4;
                            FUN_060791e8(lVar7,0);
                            FUN_02f07c24();
                          }
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar3 = FUN_0606a004();
                          if ((uVar3 & 1) == 0) {
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            uVar3 = FUN_0606a004();
                            if ((uVar3 & 1) == 0) {
                              uVar2 = 1;
                            }
                            else {
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4();
                              }
                              uVar2 = FUN_0606a004();
                              uVar2 = uVar2 ^ 1;
                            }
                          }
                          else {
                            uVar2 = 0;
                          }
                          if ((*(long *)(unaff_x23 + 0x40) != 0) &&
                             (lVar7 = *(long *)(*(long *)(unaff_x23 + 0x40) + 0x10), lVar7 != 0)) {
                            lVar7 = FUN_0335b1b8(lVar7,*(undefined8 *)PTR_DAT_067604d0);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4(*(long *)puVar1);
                            }
                            if ((uVar2 & 1) == 0) {
                              uVar3 = UnityEngine_Font__add_textureRebuilt(lVar7,0,0);
                              if ((uVar3 & 1) != 0) {
                                if (((*(long *)(unaff_x23 + 0x40) == 0) ||
                                    (lVar7 = *(long *)(*(long *)(unaff_x23 + 0x40) + 0x10),
                                    lVar7 == 0)) || (lVar7 = FUN_06066d44(lVar7,0), lVar7 == 0))
                                goto LAB_02f07bc4;
                                lVar7 = FUN_033f33ec(lVar7,*(undefined8 *)PTR_DAT_067604d8);
                              }
                              if (lVar7 == 0) goto LAB_02f07bc4;
                              FUN_02f07ea4(lVar7);
                            }
                            else {
                              uVar3 = FUN_0606a004();
                              if ((uVar3 & 1) != 0) {
                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                FUN_06070420(lVar7,0);
                              }
                            }
                            lVar7 = *plVar9;
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0xe8) != 0)) {
                              *(undefined4 *)(*(long *)(lVar7 + 0xe8) + 0x5c) = 0;
                              lVar7 = *(long *)(lVar7 + 0x110);
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4();
                              }
                              uVar3 = UnityEngine_Font__add_textureRebuilt();
                              lVar5 = lVar7;
                              if ((uVar3 & 1) == 0) {
                                lVar5 = 0;
                              }
                              uVar11 = 0;
                              if ((uVar3 & 1) != 0) {
                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                uVar3 = UnityEngine_Font__add_textureRebuilt();
                                uVar11 = 0;
                                if ((uVar3 & 1) != 0) {
                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                    thunk_FUN_02dbd7b4();
                                  }
                                  uVar3 = UnityEngine_Font__add_textureRebuilt();
                                  lVar7 = lVar5;
                                  uVar11 = 0x3f800000;
                                  if ((uVar3 & 1) == 0) {
                                    uVar11 = 0;
                                  }
                                }
                              }
                              if (lVar7 != 0) {
                                *(undefined4 *)(lVar7 + 0x14) = uVar11;
                                return;
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
          goto LAB_02f07bc4;
        }
        puVar6 = (undefined8 *)PTR_DAT_067604e8;
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          puVar6 = (undefined8 *)PTR_DAT_067604e8;
        }
      }
      FUN_060223e8(*puVar6,0);
      return;
    }
  }
LAB_02f07bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


