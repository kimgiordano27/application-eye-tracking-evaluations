/*
FUNCTION_NAME: VContainer.Unity.PostTickableLoopItem$$Dispose
ENTRY_POINT: 0648d488
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void VContainer_Unity_PostTickableLoopItem__Dispose
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
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
  float fVar13;
  undefined1 auVar14 [16];
  
  (*param_1)();
  if ((unaff_x19[0xa8] != 0) &&
     (plVar2 = (long *)FUN_063a9e58(unaff_x19[0xa8],0), plVar2 != (long *)0x0)) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
          goto LAB_0648d4fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*unaff_x23,0x4e);
LAB_0648d4fc:
    fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar5 = FUN_04b0b03c();
    if (lVar5 != 0) {
      FUN_063b01c8(lVar5,0);
      if ((unaff_x19[0xa9] != 0) &&
         (plVar2 = (long *)FUN_063a9e58(unaff_x19[0xa9],0), plVar2 != (long *)0x0)) {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        fVar13 = unaff_s8 + unaff_s9 + unaff_s10 + unaff_s11;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
              goto LAB_0648d5a0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*unaff_x23,0x4e);
LAB_0648d5a0:
        fVar9 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
        fVar10 = (float)(**(code **)(*unaff_x19 + 0xa38))();
        fVar12 = *(float *)(unaff_x19 + 0xae);
        fVar9 = ((param_4 - fVar9) - fVar13) - fVar8;
        fVar8 = (float)FUN_0636ba90(fVar8 + fVar9 * ((fVar10 - *(float *)((long)unaff_x19 + 0x56c))
                                                    / (fVar12 - *(float *)((long)unaff_x19 + 0x56c))
                                                    ));
        if ((unaff_x19[0xa8] != 0) &&
           (plVar2 = (long *)FUN_063a9e58(unaff_x19[0xa8],0), plVar2 != (long *)0x0)) {
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                goto LAB_0648d664;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*unaff_x23,0x4e);
LAB_0648d664:
          fVar10 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
          lVar5 = FUN_04b0b03c();
          if (lVar5 != 0) {
            FUN_063b01c8(lVar5,0);
            if ((unaff_x19[0xa9] != 0) &&
               (plVar2 = (long *)FUN_063a9e58(unaff_x19[0xa9],0), plVar2 != (long *)0x0)) {
              lVar5 = *plVar2;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *unaff_x23) {
                    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                    goto LAB_0648d6f8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*unaff_x23,0x4e);
LAB_0648d6f8:
              fVar11 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
              (**(code **)(*unaff_x19 + 0xa38))();
              fVar13 = fVar13 + fVar10;
              fVar13 = (float)FUN_0636ba90(fVar13 + ((fVar12 - fVar11) - fVar13) *
                                                    ((fVar9 - *(float *)((long)unaff_x19 + 0x56c)) /
                                                    (*(float *)(unaff_x19 + 0xae) -
                                                    *(float *)((long)unaff_x19 + 0x56c))));
              if (unaff_x19[0xa7] != 0) {
                plVar2 = (long *)UnityEngine_UIElements_Tab__OnTabClicked(unaff_x19[0xa7],0);
                auVar14 = FUN_063cfd98(fVar13 - fVar8,0);
                puVar1 = PTR_DAT_06a6db78;
                if (plVar2 != (long *)0x0) {
                  lVar5 = *plVar2;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a6db78) {
                        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xa5) * 0x10 + 0x138);
                        goto LAB_0648d7d8;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*(long *)PTR_DAT_06a6db78,0xa5);
LAB_0648d7d8:
                  (*(code *)*puVar3)(plVar2,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar3[1]);
                  if (unaff_x19[0xa7] != 0) {
                    plVar2 = (long *)UnityEngine_UIElements_Tab__OnTabClicked(unaff_x19[0xa7],0);
                    auVar14 = FUN_063cfd98(fVar8,0);
                    if (plVar2 != (long *)0x0) {
                      lVar5 = *plVar2;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                            goto LAB_0648d868;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*(long *)puVar1,0x43);
LAB_0648d868:
                      (*(code *)*puVar3)(plVar2,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar3[1]);
                      if (unaff_x19[0xa8] != 0) {
                        plVar2 = (long *)UnityEngine_UIElements_Tab__OnTabClicked(unaff_x19[0xa8],0)
                        ;
                        if ((unaff_x19[0xa8] != 0) &&
                           (plVar4 = (long *)FUN_063a9e58(unaff_x19[0xa8],0), plVar4 != (long *)0x0)
                           ) {
                          lVar5 = *plVar4;
                          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar6 != 0) {
                            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                                puVar3 = (undefined8 *)
                                         (lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                                goto LAB_0648d8fc;
                              }
                              uVar6 = uVar6 - 1;
                              piVar7 = piVar7 + 4;
                            } while (uVar6 != 0);
                          }
                          puVar3 = (undefined8 *)FUN_02e759c0(plVar4,*unaff_x23,0x4e);
LAB_0648d8fc:
                          fVar8 = (float)(*(code *)*puVar3)(plVar4,puVar3[1]);
                          auVar14 = FUN_063cfd98(-fVar8 - (unaff_s8 + unaff_s9),0);
                          if (plVar2 != (long *)0x0) {
                            lVar5 = *plVar2;
                            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            if (uVar6 != 0) {
                              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                  puVar3 = (undefined8 *)
                                           (lVar5 + (long)(*piVar7 + 0x43) * 0x10 + 0x138);
                                  goto LAB_0648d974;
                                }
                                uVar6 = uVar6 - 1;
                                piVar7 = piVar7 + 4;
                              } while (uVar6 != 0);
                            }
                            puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*(long *)puVar1,0x43);
LAB_0648d974:
                            (*(code *)*puVar3)(plVar2,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,
                                               puVar3[1]);
                            if (unaff_x19[0xa9] != 0) {
                              plVar2 = (long *)UnityEngine_UIElements_Tab__OnTabClicked
                                                         (unaff_x19[0xa9],0);
                              if ((unaff_x19[0xa9] != 0) &&
                                 (plVar4 = (long *)FUN_063a9e58(unaff_x19[0xa9],0),
                                 plVar4 != (long *)0x0)) {
                                lVar5 = *plVar4;
                                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                if (uVar6 != 0) {
                                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar7 + -2) == *unaff_x23) {
                                      puVar3 = (undefined8 *)
                                               (lVar5 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                                      goto LAB_0648da08;
                                    }
                                    uVar6 = uVar6 - 1;
                                    piVar7 = piVar7 + 4;
                                  } while (uVar6 != 0);
                                }
                                puVar3 = (undefined8 *)FUN_02e759c0(plVar4,*unaff_x23,0x4e);
LAB_0648da08:
                                fVar8 = (float)(*(code *)*puVar3)(plVar4,puVar3[1]);
                                auVar14 = FUN_063cfd98(-fVar8 - (unaff_s10 + unaff_s11),0);
                                if (plVar2 != (long *)0x0) {
                                  lVar5 = *plVar2;
                                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                  if (uVar6 != 0) {
                                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                        puVar3 = (undefined8 *)
                                                 (lVar5 + (long)(*piVar7 + 0x65) * 0x10 + 0x138);
                                        goto LAB_0648da84;
                                      }
                                      uVar6 = uVar6 - 1;
                                      piVar7 = piVar7 + 4;
                                    } while (uVar6 != 0);
                                  }
                                  puVar3 = (undefined8 *)FUN_02e759c0(plVar2,*(long *)puVar1,0x65);
LAB_0648da84:
                    /* WARNING: Could not recover jumptable at 0x0648dab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (*(code *)*puVar3)(plVar2,auVar14._0_8_,auVar14._8_8_ & 0xffffffff
                                                     ,puVar3[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


