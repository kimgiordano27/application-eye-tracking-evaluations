/*
FUNCTION_NAME: VContainer.Unity.PostLateTickableLoopItem$$Dispose
ENTRY_POINT: 0a3b0bf4
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void VContainer_Unity_PostLateTickableLoopItem__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar13;
  undefined1 auVar14 [16];
  
  lVar2 = FUN_081cdc64();
  if (lVar2 != 0) {
    FUN_0a2c9028(lVar2,0);
    if ((unaff_x19[0x6d] != 0) &&
       (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0), plVar3 != (long *)0x0)) {
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      fVar13 = unaff_s8 + unaff_s9 + unaff_s10 + unaff_s11;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
            goto LAB_0a3b0c80;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0c80:
      fVar8 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar9 = (float)(**(code **)(*unaff_x19 + 0xa08))();
      fVar12 = *(float *)(unaff_x19 + 0x72);
      fVar11 = ((param_3 - fVar8) - fVar13) - unaff_s12;
      fVar8 = (float)FUN_0a2768b0(unaff_s12 +
                                  fVar11 * ((fVar9 - *(float *)((long)unaff_x19 + 0x38c)) /
                                           (fVar12 - *(float *)((long)unaff_x19 + 0x38c))));
      if ((unaff_x19[0x6c] != 0) &&
         (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0), plVar3 != (long *)0x0)) {
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
              goto LAB_0a3b0d44;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0d44:
        fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
        lVar2 = FUN_081cdc64();
        if (lVar2 != 0) {
          FUN_0a2c9028(lVar2,0);
          if ((unaff_x19[0x6d] != 0) &&
             (plVar3 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0), plVar3 != (long *)0x0)) {
            lVar2 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x23) {
                  puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                  goto LAB_0a3b0dd8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0x4e);
LAB_0a3b0dd8:
            fVar10 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
            (**(code **)(*unaff_x19 + 0xa08))();
            fVar13 = fVar13 + fVar9;
            fVar13 = (float)FUN_0a2768b0(fVar13 + ((fVar12 - fVar10) - fVar13) *
                                                  ((fVar11 - *(float *)((long)unaff_x19 + 0x38c)) /
                                                  (*(float *)(unaff_x19 + 0x72) -
                                                  *(float *)((long)unaff_x19 + 0x38c))));
            if (unaff_x19[0x6b] != 0) {
              plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6b],0);
              auVar14 = FUN_0a2e8d80(fVar13 - fVar8,0);
              puVar1 = PTR_DAT_0ac417b0;
              if (plVar3 != (long *)0x0) {
                lVar2 = *plVar3;
                uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac417b0) {
                      puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0xa7) * 0x10 + 0x138);
                      goto LAB_0a3b0eb8;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac417b0,0xa7);
LAB_0a3b0eb8:
                (*(code *)*puVar4)(plVar3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar4[1]);
                if (unaff_x19[0x6b] != 0) {
                  plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6b],0);
                  auVar14 = FUN_0a2e8d80(fVar8,0);
                  if (plVar3 != (long *)0x0) {
                    lVar2 = *plVar3;
                    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                          goto LAB_0a3b0f48;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0x43);
LAB_0a3b0f48:
                    (*(code *)*puVar4)(plVar3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar4[1]);
                    if (unaff_x19[0x6c] != 0) {
                      plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6c],0);
                      if ((unaff_x19[0x6c] != 0) &&
                         (plVar5 = (long *)FUN_0a2c2ef0(unaff_x19[0x6c],0), plVar5 != (long *)0x0))
                      {
                        lVar2 = *plVar5;
                        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                        if (uVar6 != 0) {
                          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) == *unaff_x23) {
                              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138)
                              ;
                              goto VContainer_Unity_AsyncStartableLoopItem__Dispose;
                            }
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 != 0);
                        }
                        puVar4 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x23,0x4e);
VContainer_Unity_AsyncStartableLoopItem__Dispose:
                        fVar13 = (float)(*(code *)*puVar4)(plVar5,puVar4[1]);
                        auVar14 = FUN_0a2e8d80(-fVar13 - (unaff_s8 + unaff_s9),0);
                        if (plVar3 != (long *)0x0) {
                          lVar2 = *plVar3;
                          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                          if (uVar6 != 0) {
                            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                puVar4 = (undefined8 *)
                                         (lVar2 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                                goto LAB_0a3b1054;
                              }
                              uVar6 = uVar6 - 1;
                              piVar7 = piVar7 + 4;
                            } while (uVar6 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0x43);
LAB_0a3b1054:
                          (*(code *)*puVar4)(plVar3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,
                                             puVar4[1]);
                          if (unaff_x19[0x6d] != 0) {
                            plVar3 = (long *)FUN_0a2c985c(unaff_x19[0x6d],0);
                            if ((unaff_x19[0x6d] != 0) &&
                               (plVar5 = (long *)FUN_0a2c2ef0(unaff_x19[0x6d],0),
                               plVar5 != (long *)0x0)) {
                              lVar2 = *plVar5;
                              uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                              if (uVar6 != 0) {
                                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar7 + -2) == *unaff_x23) {
                                    puVar4 = (undefined8 *)
                                             (lVar2 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                                    goto VContainer_Unity_AsyncStartableLoopItem__<MoveNext>b__5_0;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar7 = piVar7 + 4;
                                } while (uVar6 != 0);
                              }
                              puVar4 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x23,0x4e);
VContainer_Unity_AsyncStartableLoopItem__<MoveNext>b__5_0:
                              fVar13 = (float)(*(code *)*puVar4)(plVar5,puVar4[1]);
                              auVar14 = FUN_0a2e8d80(-fVar13 - (unaff_s10 + unaff_s11),0);
                              if (plVar3 != (long *)0x0) {
                                lVar2 = *plVar3;
                                uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                                if (uVar6 != 0) {
                                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                      puVar4 = (undefined8 *)
                                               (lVar2 + (long)(*piVar7 + 0x65) * 0x10 + 0x138);
                                      goto LAB_0a3b1164;
                                    }
                                    uVar6 = uVar6 - 1;
                                    piVar7 = piVar7 + 4;
                                  } while (uVar6 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0x65);
LAB_0a3b1164:
                    /* WARNING: Could not recover jumptable at 0x0a3b1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*(code *)*puVar4)(plVar3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,
                                                   puVar4[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


