/*
FUNCTION_NAME: VContainer.Unity.PostLateTickableLoopItem$$MoveNext
ENTRY_POINT: 0a3b0960
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void VContainer_Unity_PostLateTickableLoopItem__MoveNext
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  undefined1 auVar17 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x23) * 0x10 + 0x138);
      goto LAB_0a3b0984;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_0a3b0984:
  fVar8 = (float)(*(code *)*puVar2)();
  if ((unaff_x19[0x6b] != 0) &&
     (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6b],0), plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
          goto LAB_0a3b09fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x10);
LAB_0a3b09fc:
    fVar9 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((unaff_x19[0x6b] != 0) &&
       (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6b],0), plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x24) * 0x10 + 0x138);
            goto LAB_0a3b0a74;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x24);
LAB_0a3b0a74:
      fVar10 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((unaff_x19[0x6c] != 0) &&
         (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0), plVar3 != (long *)0x0)) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
              goto LAB_0a3b0aec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0aec:
        (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((unaff_x19[0x6d] != 0) &&
           (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0), plVar3 != (long *)0x0)) {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                goto LAB_0a3b0b60;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0b60:
          (*(code *)*puVar2)(plVar3,puVar2[1]);
          if ((unaff_x19[0x6c] != 0) &&
             (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0), plVar3 != (long *)0x0)) {
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x23) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                  goto LAB_0a3b0bdc;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0bdc:
            fVar11 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
            lVar5 = FUN_081cdc64();
            if (lVar5 != 0) {
              FUN_0a2c9028(lVar5,0);
              if ((unaff_x19[0x6d] != 0) &&
                 (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0), plVar3 != (long *)0x0)) {
                lVar5 = *plVar3;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                fVar16 = unaff_s8 + fVar8 + fVar9 + fVar10;
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *unaff_x23) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                      goto LAB_0a3b0c80;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0c80:
                fVar12 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
                fVar13 = (float)(**(code **)(*unaff_x19 + 0xa08))();
                fVar15 = *(float *)(unaff_x19 + 0x72);
                fVar12 = ((param_4 - fVar12) - fVar16) - fVar11;
                fVar11 = (float)FUN_0a2768b0(fVar11 + fVar12 * ((fVar13 - *(float *)((long)unaff_x19
                                                                                    + 0x38c)) /
                                                               (fVar15 - *(float *)((long)unaff_x19
                                                                                   + 0x38c))));
                if ((unaff_x19[0x6c] != 0) &&
                   (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0), plVar3 != (long *)0x0)) {
                  lVar5 = *plVar3;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *unaff_x23) {
                        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                        goto LAB_0a3b0d44;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0d44:
                  fVar13 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
                  lVar5 = FUN_081cdc64();
                  if (lVar5 != 0) {
                    FUN_0a2c9028(lVar5,0);
                    if ((unaff_x19[0x6d] != 0) &&
                       (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0), plVar3 != (long *)0x0)) {
                      lVar5 = *plVar3;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *unaff_x23) {
                            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                            goto LAB_0a3b0dd8;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0dd8:
                      fVar14 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
                      (**(code **)(*unaff_x19 + 0xa08))();
                      fVar16 = fVar16 + fVar13;
                      fVar16 = (float)FUN_0a2768b0(fVar16 + ((fVar15 - fVar14) - fVar16) *
                                                            ((fVar12 - *(float *)((long)unaff_x19 +
                                                                                 0x38c)) /
                                                            (*(float *)(unaff_x19 + 0x72) -
                                                            *(float *)((long)unaff_x19 + 0x38c))));
                      if (unaff_x19[0x6b] != 0) {
                        plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6b],0);
                        auVar17 = FUN_0a2e8d80(fVar16 - fVar11,0);
                        puVar1 = PTR_DAT_0ac417b0;
                        if (plVar3 != (long *)0x0) {
                          lVar5 = *plVar3;
                          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar6 != 0) {
                            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac417b0) {
                                puVar2 = (undefined8 *)
                                         (lVar5 + (long)(*piVar7 + 0xa7) * 0x10 + 0x138);
                                goto LAB_0a3b0eb8;
                              }
                              uVar6 = uVar6 - 1;
                              piVar7 = piVar7 + 4;
                            } while (uVar6 != 0);
                          }
                          puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac417b0,0xa7)
                          ;
LAB_0a3b0eb8:
                          (*(code *)*puVar2)(plVar3,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,
                                             puVar2[1]);
                          if (unaff_x19[0x6b] != 0) {
                            plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6b],0);
                            auVar17 = FUN_0a2e8d80(fVar11,0);
                            if (plVar3 != (long *)0x0) {
                              lVar5 = *plVar3;
                              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                              if (uVar6 != 0) {
                                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                    puVar2 = (undefined8 *)
                                             (lVar5 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                                    goto LAB_0a3b0f48;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar7 = piVar7 + 4;
                                } while (uVar6 != 0);
                              }
                              puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0x43);
LAB_0a3b0f48:
                              (*(code *)*puVar2)(plVar3,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,
                                                 puVar2[1]);
                              if (unaff_x19[0x6c] != 0) {
                                plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6c],0);
                                if ((unaff_x19[0x6c] != 0) &&
                                   (plVar4 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0),
                                   plVar4 != (long *)0x0)) {
                                  lVar5 = *plVar4;
                                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                  if (uVar6 != 0) {
                                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar7 + -2) == *unaff_x23) {
                                        puVar2 = (undefined8 *)
                                                 (lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                                        goto VContainer_Unity_AsyncStartableLoopItem__Dispose;
                                      }
                                      uVar6 = uVar6 - 1;
                                      piVar7 = piVar7 + 4;
                                    } while (uVar6 != 0);
                                  }
                                  puVar2 = (undefined8 *)FUN_04980e68(plVar4,*unaff_x23,0x4e);
VContainer_Unity_AsyncStartableLoopItem__Dispose:
                                  fVar11 = (float)(*(code *)*puVar2)(plVar4,puVar2[1]);
                                  auVar17 = FUN_0a2e8d80(-fVar11 - (unaff_s8 + fVar8),0);
                                  if (plVar3 != (long *)0x0) {
                                    lVar5 = *plVar3;
                                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                    if (uVar6 != 0) {
                                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                          puVar2 = (undefined8 *)
                                                   (lVar5 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                                          goto LAB_0a3b1054;
                                        }
                                        uVar6 = uVar6 - 1;
                                        piVar7 = piVar7 + 4;
                                      } while (uVar6 != 0);
                                    }
                                    puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0x43)
                                    ;
LAB_0a3b1054:
                                    (*(code *)*puVar2)(plVar3,auVar17._0_8_,
                                                       auVar17._8_8_ & 0xffffffff,puVar2[1]);
                                    if (unaff_x19[0x6d] != 0) {
                                      plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6d],0);
                                      if ((unaff_x19[0x6d] != 0) &&
                                         (plVar4 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0),
                                         plVar4 != (long *)0x0)) {
                                        lVar5 = *plVar4;
                                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                        if (uVar6 != 0) {
                                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar7 + -2) == *unaff_x23) {
                                              puVar2 = (undefined8 *)
                                                       (lVar5 + (long)(*piVar7 + 0x4e) * 0x10 +
                                                       0x138);
                                              goto 
                                              VContainer_Unity_AsyncStartableLoopItem__<MoveNext>b__5_0
                                              ;
                                            }
                                            uVar6 = uVar6 - 1;
                                            piVar7 = piVar7 + 4;
                                          } while (uVar6 != 0);
                                        }
                                        puVar2 = (undefined8 *)FUN_04980e68(plVar4,*unaff_x23,0x4e);
VContainer_Unity_AsyncStartableLoopItem__<MoveNext>b__5_0:
                                        fVar8 = (float)(*(code *)*puVar2)(plVar4,puVar2[1]);
                                        auVar17 = FUN_0a2e8d80(-fVar8 - (fVar9 + fVar10),0);
                                        if (plVar3 != (long *)0x0) {
                                          lVar5 = *plVar3;
                                          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                          if (uVar6 != 0) {
                                            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                                puVar2 = (undefined8 *)
                                                         (lVar5 + (long)(*piVar7 + 0x65) * 0x10 +
                                                         0x138);
                                                goto LAB_0a3b1164;
                                              }
                                              uVar6 = uVar6 - 1;
                                              piVar7 = piVar7 + 4;
                                            } while (uVar6 != 0);
                                          }
                                          puVar2 = (undefined8 *)
                                                   FUN_04980e68(plVar3,*(long *)puVar1,0x65);
LAB_0a3b1164:
                    /* WARNING: Could not recover jumptable at 0x0a3b1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                          (*(code *)*puVar2)(plVar3,auVar17._0_8_,
                                                             auVar17._8_8_ & 0xffffffff,puVar2[1]);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


