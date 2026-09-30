/*
FUNCTION_NAME: FUN_04cf86f8
ENTRY_POINT: 04cf86f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long * FUN_04cf86f8(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_58 [16];
  long local_48;
  undefined *puVar10;
  
                    /* try { // try from 04cf8708 to 04df8713 has its CatchHandler @ 04cf8b28 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 04cf8728 to 04df872b has its CatchHandler @ 04cf8b2c */
                    /* try { // try from 04cf872c to 04df8adb has its CatchHandler @ 04cf8508 */
  if ((DAT_066c842b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631a6c0);
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_0631c498);
    FUN_02b3c81c(PTR_DAT_0632ba98);
    DAT_066c842b = 1;
  }
  puVar10 = PTR_DAT_06312310;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  auVar17 = FUN_04d938a0(param_2,0,0);
  if ((auVar17._0_8_ & 1) != 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar8 = thunk_FUN_02b79644();
    uVar9 = thunk_FUN_02ba3594(PTR_DAT_0632fc18);
    auVar17 = FUN_04cee07c(uVar8,uVar9);
System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation__PostAction:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar9 = thunk_FUN_02ba3594(PTR_DAT_0632fc20);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar8,uVar9);
    }
    goto LAB_04cf90e8;
  }
  if (param_1 != (long *)0x0) {
    auVar17 = thunk_FUN_02b4c898(param_1,0);
    puVar2 = PTR_DAT_0631a6c0;
    uVar9 = auVar17._8_8_;
    if (auVar17._0_8_ == param_2) {
LAB_04cf8db4:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return param_1;
      }
      goto LAB_04cf90e8;
    }
    lVar5 = *(long *)PTR_DAT_0631a6c0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar2;
      uVar9 = extraout_x1;
    }
    auVar17._8_8_ = uVar9;
    auVar17._0_8_ = lVar5;
    lVar12 = *(long *)(lVar5 + 0xb8);
    lVar13 = *(long *)(lVar12 + 8);
    if (lVar13 != 0) {
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
        if (*(long **)(lVar13 + 0x38) == param_2) {
          lVar5 = *param_1;
          uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_04cf8c30;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,1);
LAB_04cf8c30:
          uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
          uVar9 = *(undefined8 *)(puVar10 + 0x28);
          local_58._0_8_ = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
          goto LAB_04cf8dac;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)puVar2;
          auVar17._8_8_ = extraout_x1_00;
          auVar17._0_8_ = lVar5;
          lVar12 = *(long *)(lVar5 + 0xb8);
          lVar13 = *(long *)(lVar12 + 8);
          uVar9 = extraout_x1_00;
          if (lVar13 == 0) goto LAB_04cf903c;
        }
        auVar17._8_8_ = uVar9;
        auVar17._0_8_ = lVar5;
        if (4 < *(uint *)(lVar13 + 0x18)) {
          if (*(long **)(lVar13 + 0x40) == param_2) {
            lVar5 = *param_1;
            uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_04cf8ca8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,2);
LAB_04cf8ca8:
            uVar4 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
            uVar9 = *(undefined8 *)(puVar10 + 0x88);
            goto LAB_04cf8cbc;
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar5 = *(long *)puVar2;
            auVar17._8_8_ = extraout_x1_01;
            auVar17._0_8_ = lVar5;
            lVar12 = *(long *)(lVar5 + 0xb8);
            lVar13 = *(long *)(lVar12 + 8);
            uVar9 = extraout_x1_01;
            if (lVar13 == 0) goto LAB_04cf903c;
          }
          auVar17._8_8_ = uVar9;
          auVar17._0_8_ = lVar5;
          if (5 < *(uint *)(lVar13 + 0x18)) {
            if (*(long **)(lVar13 + 0x48) == param_2) {
              lVar5 = *param_1;
              uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                    puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                    goto LAB_04cf8d1c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,3);
LAB_04cf8d1c:
              uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
              uVar9 = *(undefined8 *)(puVar10 + 0x30);
LAB_04cf8da0:
              local_58[0] = uVar3;
LAB_04cf8dac:
              auVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar9,local_58);
              param_1 = auVar17._0_8_;
              goto LAB_04cf8db4;
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar5 = *(long *)puVar2;
              auVar17._8_8_ = extraout_x1_02;
              auVar17._0_8_ = lVar5;
              lVar12 = *(long *)(lVar5 + 0xb8);
              lVar13 = *(long *)(lVar12 + 8);
              uVar9 = extraout_x1_02;
              if (lVar13 == 0) goto LAB_04cf903c;
            }
            auVar17._8_8_ = uVar9;
            auVar17._0_8_ = lVar5;
            if (6 < *(uint *)(lVar13 + 0x18)) {
              if (*(long **)(lVar13 + 0x50) == param_2) {
                lVar5 = *param_1;
                uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 4) * 0x10 + 0x138);
                      goto LAB_04cf8d8c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,4);
LAB_04cf8d8c:
                uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                uVar9 = *(undefined8 *)(puVar10 + 0x18);
                goto LAB_04cf8da0;
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar5 = *(long *)puVar2;
                auVar17._8_8_ = extraout_x1_03;
                auVar17._0_8_ = lVar5;
                lVar12 = *(long *)(lVar5 + 0xb8);
                lVar13 = *(long *)(lVar12 + 8);
                uVar9 = extraout_x1_03;
                if (lVar13 == 0) goto LAB_04cf903c;
              }
              auVar17._8_8_ = uVar9;
              auVar17._0_8_ = lVar5;
              if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) != 0) {
                if (*(long **)(lVar13 + 0x58) == param_2) {
                  lVar5 = *param_1;
                  uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                        goto LAB_04cf8e14;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,5);
LAB_04cf8e14:
                  uVar4 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                  uVar9 = *(undefined8 *)(puVar10 + 0x38);
LAB_04cf8cbc:
                  local_58._0_2_ = uVar4;
                  goto LAB_04cf8dac;
                }
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar5 = *(long *)puVar2;
                  auVar17._8_8_ = extraout_x1_04;
                  auVar17._0_8_ = lVar5;
                  lVar12 = *(long *)(lVar5 + 0xb8);
                  lVar13 = *(long *)(lVar12 + 8);
                  uVar9 = extraout_x1_04;
                  if (lVar13 == 0) goto LAB_04cf903c;
                }
                auVar17._8_8_ = uVar9;
                auVar17._0_8_ = lVar5;
                if (8 < *(uint *)(lVar13 + 0x18)) {
                  if (*(long **)(lVar13 + 0x60) == param_2) {
                    lVar5 = *param_1;
                    uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0632ba98) {
                          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                          goto LAB_04cf8e64;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_02b7654c(param_1,*(long *)PTR_DAT_0632ba98,6);
LAB_04cf8e64:
                    uVar4 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                    uVar9 = *(undefined8 *)(puVar10 + 0x40);
                    goto LAB_04cf8cbc;
                  }
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar5 = *(long *)puVar2;
                    auVar17._8_8_ = extraout_x1_05;
                    auVar17._0_8_ = lVar5;
                    lVar12 = *(long *)(lVar5 + 0xb8);
                    lVar13 = *(long *)(lVar12 + 8);
                    uVar9 = extraout_x1_05;
                    if (lVar13 == 0) goto LAB_04cf903c;
                  }
                  auVar17._8_8_ = uVar9;
                  auVar17._0_8_ = lVar5;
                  if (9 < *(uint *)(lVar13 + 0x18)) {
                    if (*(long **)(lVar13 + 0x68) == param_2) {
                      uVar16 = FUN_0275e8e0(7,*(undefined8 *)PTR_DAT_0632ba98,param_1,param_3);
                      uVar9 = *(undefined8 *)(puVar10 + 0x48);
LAB_04cf8e4c:
                      local_58._0_4_ = uVar16;
                      goto LAB_04cf8dac;
                    }
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar5 = *(long *)puVar2;
                      auVar17._8_8_ = extraout_x1_06;
                      auVar17._0_8_ = lVar5;
                      lVar12 = *(long *)(lVar5 + 0xb8);
                      lVar13 = *(long *)(lVar12 + 8);
                      uVar9 = extraout_x1_06;
                      if (lVar13 == 0) goto LAB_04cf903c;
                    }
                    auVar17._8_8_ = uVar9;
                    auVar17._0_8_ = lVar5;
                    if (10 < *(uint *)(lVar13 + 0x18)) {
                      if (*(long **)(lVar13 + 0x70) == param_2) {
                        uVar16 = FUN_0275e8e0(8,*(undefined8 *)PTR_DAT_0632ba98,param_1,param_3);
                        uVar9 = *(undefined8 *)(puVar10 + 0x50);
                        goto LAB_04cf8e4c;
                      }
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar5 = *(long *)puVar2;
                        auVar17._8_8_ = extraout_x1_07;
                        auVar17._0_8_ = lVar5;
                        lVar12 = *(long *)(lVar5 + 0xb8);
                        lVar13 = *(long *)(lVar12 + 8);
                        uVar9 = extraout_x1_07;
                        if (lVar13 == 0) goto LAB_04cf903c;
                      }
                      auVar17._8_8_ = uVar9;
                      auVar17._0_8_ = lVar5;
                      if (0xb < *(uint *)(lVar13 + 0x18)) {
                        if (*(long **)(lVar13 + 0x78) == param_2) {
                          uVar9 = FUN_0275e8e0(9,*(undefined8 *)PTR_DAT_0632ba98,param_1,param_3);
                          local_58._0_8_ = uVar9;
                          uVar9 = *(undefined8 *)(puVar10 + 0x68);
                          goto LAB_04cf8dac;
                        }
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar5 = *(long *)puVar2;
                          auVar17._8_8_ = extraout_x1_08;
                          auVar17._0_8_ = lVar5;
                          lVar12 = *(long *)(lVar5 + 0xb8);
                          lVar13 = *(long *)(lVar12 + 8);
                          uVar9 = extraout_x1_08;
                          if (lVar13 == 0) goto LAB_04cf903c;
                        }
                        auVar17._8_8_ = uVar9;
                        auVar17._0_8_ = lVar5;
                        if (0xc < *(uint *)(lVar13 + 0x18)) {
                          if (*(long **)(lVar13 + 0x80) == param_2) {
                            uVar9 = FUN_0275e8e0(10,*(undefined8 *)PTR_DAT_0632ba98,param_1,param_3)
                            ;
                            local_58._0_8_ = uVar9;
                            uVar9 = *(undefined8 *)(puVar10 + 0x70);
                            goto LAB_04cf8dac;
                          }
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar5 = *(long *)puVar2;
                            auVar17._8_8_ = extraout_x1_09;
                            auVar17._0_8_ = lVar5;
                            lVar12 = *(long *)(lVar5 + 0xb8);
                            lVar13 = *(long *)(lVar12 + 8);
                            uVar9 = extraout_x1_09;
                            if (lVar13 == 0) goto LAB_04cf903c;
                          }
                          auVar17._8_8_ = uVar9;
                          auVar17._0_8_ = lVar5;
                          if (0xd < *(uint *)(lVar13 + 0x18)) {
                            if (*(long **)(lVar13 + 0x88) == param_2) {
                              uVar16 = FUN_0275e8e0(0xb,*(undefined8 *)PTR_DAT_0632ba98,param_1,
                                                    param_3);
                              uVar9 = *(undefined8 *)(puVar10 + 0x78);
                              local_58._0_4_ = uVar16;
                              goto LAB_04cf8dac;
                            }
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              lVar5 = *(long *)puVar2;
                              auVar17._8_8_ = extraout_x1_10;
                              auVar17._0_8_ = lVar5;
                              lVar12 = *(long *)(lVar5 + 0xb8);
                              lVar13 = *(long *)(lVar12 + 8);
                              uVar9 = extraout_x1_10;
                              if (lVar13 == 0) goto LAB_04cf903c;
                            }
                            auVar17._8_8_ = uVar9;
                            auVar17._0_8_ = lVar5;
                            if (0xe < *(uint *)(lVar13 + 0x18)) {
                              if (*(long **)(lVar13 + 0x90) == param_2) {
                                uVar9 = FUN_0275e8e0(0xc,*(undefined8 *)PTR_DAT_0632ba98,param_1,
                                                     param_3);
                                local_58._0_8_ = uVar9;
                                uVar9 = *(undefined8 *)(puVar10 + 0x80);
                                goto LAB_04cf8dac;
                              }
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                                lVar5 = *(long *)puVar2;
                                auVar17._8_8_ = extraout_x1_11;
                                auVar17._0_8_ = lVar5;
                                lVar12 = *(long *)(lVar5 + 0xb8);
                                lVar13 = *(long *)(lVar12 + 8);
                                uVar9 = extraout_x1_11;
                                if (lVar13 == 0) goto LAB_04cf903c;
                              }
                              auVar17._8_8_ = uVar9;
                              auVar17._0_8_ = lVar5;
                              if ((*(uint *)(lVar13 + 0x18) & 0xfffffff0) != 0) {
                                if (*(long **)(lVar13 + 0x98) == param_2) {
                                  local_58 = FUN_0275e8e0(0xd,*(undefined8 *)PTR_DAT_0632ba98,
                                                          param_1,param_3);
                                  uVar9 = *(undefined8 *)PTR_DAT_0631c498;
                                  goto LAB_04cf8dac;
                                }
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                  lVar5 = *(long *)puVar2;
                                  auVar17._8_8_ = extraout_x1_12;
                                  auVar17._0_8_ = lVar5;
                                  lVar12 = *(long *)(lVar5 + 0xb8);
                                  lVar13 = *(long *)(lVar12 + 8);
                                  uVar9 = extraout_x1_12;
                                  if (lVar13 == 0) goto LAB_04cf903c;
                                }
                                auVar17._8_8_ = uVar9;
                                auVar17._0_8_ = lVar5;
                                if (0x10 < *(uint *)(lVar13 + 0x18)) {
                                  if (*(long **)(lVar13 + 0xa0) == param_2) {
                                    uVar9 = FUN_0275e8e0(0xe,*(undefined8 *)PTR_DAT_0632ba98,param_1
                                                         ,param_3);
                                    local_58._0_8_ = uVar9;
                                    uVar9 = *(undefined8 *)PTR_DAT_06313c50;
                                    goto LAB_04cf8dac;
                                  }
                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                    thunk_FUN_02b9ad44();
                                    lVar5 = *(long *)puVar2;
                                    auVar17._8_8_ = extraout_x1_13;
                                    auVar17._0_8_ = lVar5;
                                    lVar12 = *(long *)(lVar5 + 0xb8);
                                    lVar13 = *(long *)(lVar12 + 8);
                                    uVar9 = extraout_x1_13;
                                    if (lVar13 == 0) goto LAB_04cf903c;
                                  }
                                  auVar17._8_8_ = uVar9;
                                  auVar17._0_8_ = lVar5;
                                  if (0x12 < *(uint *)(lVar13 + 0x18)) {
                                    if (*(long **)(lVar13 + 0xb0) == param_2) {
                                      auVar17._8_8_ = *(undefined8 *)PTR_DAT_0632ba98;
                                      if (*(long *)(lVar1 + 0x28) == local_48) {
                                        plVar6 = (long *)FUN_0275e8e0(0xf,*(undefined8 *)
                                                                           PTR_DAT_0632ba98,param_1,
                                                                      param_3);
                                        return plVar6;
                                      }
                                      goto LAB_04cf90e8;
                                    }
                                    if (*(int *)(lVar5 + 0xe4) == 0) {
                                      thunk_FUN_02b9ad44();
                                      lVar5 = *(long *)puVar2;
                                      auVar17._8_8_ = extraout_x1_14;
                                      auVar17._0_8_ = lVar5;
                                      lVar12 = *(long *)(lVar5 + 0xb8);
                                      lVar13 = *(long *)(lVar12 + 8);
                                      uVar9 = extraout_x1_14;
                                      if (lVar13 == 0) goto LAB_04cf903c;
                                    }
                                    auVar17._8_8_ = uVar9;
                                    auVar17._0_8_ = lVar5;
                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                                      if (*(long **)(lVar13 + 0x28) == param_2) goto LAB_04cf8db4;
                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                        lVar5 = thunk_FUN_02b9ad44();
                                        lVar12 = *(long *)(*(long *)puVar2 + 0xb8);
                                      }
                                      if (*(long **)(lVar12 + 0x10) == param_2) {
                                        auVar17._8_8_ = *(undefined8 *)(puVar10 + 0x98);
                                        auVar17._0_8_ = lVar5;
                                        if (*(long *)(lVar1 + 0x28) == local_48) {
                                          plVar6 = (long *)FUN_02762a58(param_1);
                                          return plVar6;
                                        }
                                        goto LAB_04cf90e8;
                                      }
                                      lVar5 = thunk_FUN_02ba3594(PTR_DAT_0631a6c0);
                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                        thunk_FUN_02b9ad44();
                                      }
                                      auVar17 = thunk_FUN_02ba3594(PTR_DAT_0631a6c0);
                                      lVar5 = *(long *)(*(long *)(auVar17._0_8_ + 0xb8) + 8);
                                      if (lVar5 != 0) {
                                        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_04cf90d4;
                                        if (*(long **)(lVar5 + 0x30) == param_2) {
                                          thunk_FUN_02ba3594(PTR_DAT_0631d068);
                                          uVar8 = thunk_FUN_02b79644();
                                          puVar10 = PTR_DAT_0632fc28;
LAB_04cf9084:
                                          uVar9 = thunk_FUN_02ba3594(puVar10);
                                        }
                                        else {
                                          lVar5 = thunk_FUN_02ba3594(PTR_DAT_0631a6c0);
                                          if (*(int *)(lVar5 + 0xe4) == 0) {
                                            thunk_FUN_02b9ad44();
                                          }
                                          auVar17 = thunk_FUN_02ba3594(PTR_DAT_0631a6c0);
                                          lVar5 = *(long *)(*(long *)(auVar17._0_8_ + 0xb8) + 8);
                                          if (lVar5 == 0) goto LAB_04cf903c;
                                          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04cf90d4;
                                          if (*(long **)(lVar5 + 0x20) == param_2) {
                                            thunk_FUN_02ba3594(PTR_DAT_0631d068);
                                            uVar8 = thunk_FUN_02b79644();
                                            puVar10 = PTR_DAT_0632fc30;
                                            goto LAB_04cf9084;
                                          }
                                          FUN_0275e13c(param_1);
                                          plVar6 = (long *)thunk_FUN_02b4c898(param_1,0);
                                          FUN_0275e13c();
                                          uVar9 = (**(code **)(*plVar6 + 0x2d8))
                                                            (plVar6,*(undefined8 *)(*plVar6 + 0x2e0)
                                                            );
                                          FUN_0275e13c(param_2);
                                          uVar8 = (**(code **)(*param_2 + 0x2d8))
                                                            (param_2,*(undefined8 *)
                                                                      (*param_2 + 0x2e0));
                                          uVar11 = thunk_FUN_02ba3594(PTR_DAT_0632fc00);
                                          uVar9 = FUN_04c0af28(uVar11,uVar9,uVar8,0);
                                          thunk_FUN_02ba3594(PTR_DAT_0631d068);
                                          uVar8 = thunk_FUN_02b79644();
                                        }
                                        auVar17 = FUN_04d78a40(uVar8,uVar9,0);
                                        goto 
                                        System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation__PostAction
                                        ;
                                      }
                                      goto LAB_04cf903c;
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
LAB_04cf90d4:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_04cf90e8;
    }
  }
LAB_04cf903c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_04cf90e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar17._0_8_,auVar17._8_8_);
}


