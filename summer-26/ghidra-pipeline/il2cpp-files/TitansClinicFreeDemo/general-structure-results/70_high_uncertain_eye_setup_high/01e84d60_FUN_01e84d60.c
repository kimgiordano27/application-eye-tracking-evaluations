/*
FUNCTION_NAME: FUN_01e84d60
ENTRY_POINT: 01e84d60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_01e84d60(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 local_58 [16];
  long local_48;
  undefined *puVar9;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0293d549 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1de0);
    thunk_FUN_01279b34(PTR_DAT_027b2350);
    thunk_FUN_01279b34(PTR_DAT_027b3998);
    thunk_FUN_01279b34(PTR_DAT_027b39e0);
    thunk_FUN_01279b34(PTR_DAT_027b4b30);
    thunk_FUN_01279b34(PTR_DAT_027b2958);
    thunk_FUN_01279b34(PTR_DAT_027b1c18);
    thunk_FUN_01279b34(PTR_DAT_027ba7b0);
    thunk_FUN_01279b34(PTR_DAT_027b3a60);
    thunk_FUN_01279b34(PTR_DAT_027b1ab0);
    thunk_FUN_01279b34(PTR_DAT_027b38b8);
    thunk_FUN_01279b34(PTR_DAT_027b3a68);
    thunk_FUN_01279b34(PTR_DAT_027b2aa0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b3a70);
    thunk_FUN_01279b34(PTR_DAT_027b3a78);
    thunk_FUN_01279b34(PTR_DAT_027b3a80);
    DAT_0293d549 = 1;
  }
  puVar9 = PTR_DAT_027ba7b0;
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar10 = thunk_FUN_0124bba8();
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027ba8f0);
    FUN_01e75914(uVar10,uVar8);
    goto LAB_01e859ec;
  }
  if (param_1 == 0) {
    uVar12 = OVRPlugin__set_tiledMultiResLevel(param_2,0);
    if ((uVar12 & 1) != 0) {
      thunk_FUN_01279b34(PTR_DAT_027b4e48);
      uVar10 = thunk_FUN_0124bba8();
      puVar9 = PTR_DAT_027ba8e8;
LAB_01e852a8:
      uVar8 = thunk_FUN_01279b34(puVar9);
      FUN_01f66394(uVar10,uVar8,0);
LAB_01e859ec:
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027ba8f8);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar10,uVar8);
    }
  }
  else {
    plVar5 = (long *)thunk_FUN_0124baac(param_1,*(undefined8 *)PTR_DAT_027ba7b0);
    puVar2 = PTR_DAT_027b39e0;
    if (plVar5 == (long *)0x0) {
      uVar10 = thunk_FUN_0122c1cc(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027b32e0);
      }
      uVar12 = FUN_01f7f404(uVar10,param_2,0);
      if ((uVar12 & 1) == 0) {
        thunk_FUN_01279b34(PTR_DAT_027b4e48);
        uVar10 = thunk_FUN_0124bba8();
        puVar9 = PTR_DAT_027ba8d0;
        goto LAB_01e852a8;
      }
    }
    else {
      lVar6 = *(long *)PTR_DAT_027b39e0;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar6 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar11 == 0) {
LAB_01e85a04:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(lVar11 + 0x18) < 4) {
LAB_01e859bc:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (*(long *)(lVar11 + 0x38) == param_2) {
        lVar6 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_01e85390;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,1);
LAB_01e85390:
        uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
        local_58._0_8_ = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
        puVar7 = (undefined8 *)PTR_DAT_027b1de0;
LAB_01e853b0:
        uVar10 = *puVar7;
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar6 = *(long *)puVar2;
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_01e85a04;
        }
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_01e859bc;
        if (*(long *)(lVar11 + 0x40) == param_2) {
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_01e85408;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,2);
LAB_01e85408:
          uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)PTR_DAT_027b3998;
          goto LAB_01e85420;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar6 = *(long *)puVar2;
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_01e85a04;
        }
        if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_01e859bc;
        if (*(long *)(lVar11 + 0x48) == param_2) {
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto FUN_01e8547c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,3);
FUN_01e8547c:
          uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)PTR_DAT_027b3a68;
        }
        else {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar6 = *(long *)puVar2;
            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_01e85a04;
          }
          if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_01e859bc;
          if (*(long *)(lVar11 + 0x50) != param_2) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01220628();
              lVar6 = *(long *)puVar2;
              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_01e85a04;
            }
            if (*(uint *)(lVar11 + 0x18) < 8) goto LAB_01e859bc;
            if (*(long *)(lVar11 + 0x58) == param_2) {
              lVar6 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_01e85594;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,5);
LAB_01e85594:
              uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
              puVar7 = (undefined8 *)PTR_DAT_027b3a60;
            }
            else {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01220628();
                lVar6 = *(long *)puVar2;
                lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar11 == 0) goto LAB_01e85a04;
              }
              if (*(uint *)(lVar11 + 0x18) < 9) goto LAB_01e859bc;
              if (*(long *)(lVar11 + 0x60) != param_2) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                  lVar6 = *(long *)puVar2;
                  lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                  if (lVar11 == 0) goto LAB_01e85a04;
                }
                if (*(uint *)(lVar11 + 0x18) < 10) goto LAB_01e859bc;
                if (*(long *)(lVar11 + 0x68) == param_2) {
                  lVar6 = *plVar5;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 7) * 0x10 + 0x138);
                        goto LAB_01e8566c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,7);
LAB_01e8566c:
                  local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                  puVar7 = (undefined8 *)PTR_DAT_027b1ab0;
                }
                else {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                    lVar6 = *(long *)puVar2;
                    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                    if (lVar11 == 0) goto LAB_01e85a04;
                  }
                  if (*(uint *)(lVar11 + 0x18) < 0xb) goto LAB_01e859bc;
                  if (*(long *)(lVar11 + 0x70) != param_2) {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                      lVar6 = *(long *)puVar2;
                      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                      if (lVar11 == 0) goto LAB_01e85a04;
                    }
                    if (*(uint *)(lVar11 + 0x18) < 0xc) goto LAB_01e859bc;
                    if (*(long *)(lVar11 + 0x78) == param_2) {
                      lVar6 = *plVar5;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                            goto LAB_01e8574c;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,9);
LAB_01e8574c:
                      uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                      puVar7 = (undefined8 *)PTR_DAT_027b38b8;
                    }
                    else {
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_01220628();
                        lVar6 = *(long *)puVar2;
                        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                        if (lVar11 == 0) goto LAB_01e85a04;
                      }
                      if (*(uint *)(lVar11 + 0x18) < 0xd) goto LAB_01e859bc;
                      if (*(long *)(lVar11 + 0x80) != param_2) {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01220628();
                          lVar6 = *(long *)puVar2;
                          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                          if (lVar11 == 0) goto LAB_01e85a04;
                        }
                        if (*(uint *)(lVar11 + 0x18) < 0xe) goto LAB_01e859bc;
                        if (*(long *)(lVar11 + 0x88) == param_2) {
                          lVar6 = *plVar5;
                          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar12 != 0) {
                            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
                                goto LAB_01e8582c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar13 = piVar13 + 4;
                            } while (uVar12 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0xb);
LAB_01e8582c:
                          local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                          puVar7 = (undefined8 *)PTR_DAT_027b2aa0;
                        }
                        else {
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01220628();
                            lVar6 = *(long *)puVar2;
                            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                            if (lVar11 == 0) goto LAB_01e85a04;
                          }
                          if (*(uint *)(lVar11 + 0x18) < 0xf) goto LAB_01e859bc;
                          if (*(long *)(lVar11 + 0x90) != param_2) {
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01220628();
                              lVar6 = *(long *)puVar2;
                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                              if (lVar11 == 0) goto LAB_01e85a04;
                            }
                            if (*(uint *)(lVar11 + 0x18) < 0x10) goto LAB_01e859bc;
                            if (*(long *)(lVar11 + 0x98) == param_2) {
                              lVar6 = *plVar5;
                              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                              if (uVar12 != 0) {
                                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                    puVar7 = (undefined8 *)
                                             (lVar6 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
                                    goto LAB_01e85914;
                                  }
                                  uVar12 = uVar12 - 1;
                                  piVar13 = piVar13 + 4;
                                } while (uVar12 != 0);
                              }
                              puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0xd);
LAB_01e85914:
                              local_58 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                              puVar7 = (undefined8 *)PTR_DAT_027b2958;
                              goto LAB_01e853b0;
                            }
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01220628();
                              lVar6 = *(long *)puVar2;
                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                              if (lVar11 == 0) goto LAB_01e85a04;
                            }
                            if (*(uint *)(lVar11 + 0x18) < 0x11) goto LAB_01e859bc;
                            if (*(long *)(lVar11 + 0xa0) != param_2) {
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                                lVar6 = *(long *)puVar2;
                                lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                                if (lVar11 == 0) goto LAB_01e85a04;
                              }
                              if (*(uint *)(lVar11 + 0x18) < 0x13) goto LAB_01e859bc;
                              if (*(long *)(lVar11 + 0xb0) == param_2) {
                                lVar6 = *plVar5;
                                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                      puVar7 = (undefined8 *)
                                               (lVar6 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
                                      goto LAB_01e85998;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0xf);
LAB_01e85998:
                                lVar6 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                              }
                              else {
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_01220628();
                                  lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                  if (lVar11 == 0) goto LAB_01e85a04;
                                }
                                if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_01e859bc;
                                if (*(long *)(lVar11 + 0x28) == param_2) goto LAB_01e85518;
                                lVar6 = *plVar5;
                                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                      puVar7 = (undefined8 *)
                                               (lVar6 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
                                      goto LAB_01e85970;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0x10);
LAB_01e85970:
                                lVar6 = (*(code *)*puVar7)(plVar5,param_2,param_3,puVar7[1]);
                              }
                              if (*(long *)(lVar1 + 0x28) == local_48) {
                                return lVar6;
                              }
                              goto LAB_01e859b8;
                            }
                            lVar6 = *plVar5;
                            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar12 != 0) {
                              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                  puVar7 = (undefined8 *)
                                           (lVar6 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                                  goto LAB_01e85944;
                                }
                                uVar12 = uVar12 - 1;
                                piVar13 = piVar13 + 4;
                              } while (uVar12 != 0);
                            }
                            puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0xe);
LAB_01e85944:
                            uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                            puVar7 = (undefined8 *)PTR_DAT_027b4b30;
                            goto LAB_01e857d0;
                          }
                          lVar6 = *plVar5;
                          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar12 != 0) {
                            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                                goto LAB_01e8589c;
                              }
                              uVar12 = uVar12 - 1;
                              piVar13 = piVar13 + 4;
                            } while (uVar12 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,0xc);
LAB_01e8589c:
                          local_58._0_8_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                          puVar7 = (undefined8 *)PTR_DAT_027b1c18;
                        }
                        uVar10 = *puVar7;
                        goto LAB_01e85510;
                      }
                      lVar6 = *plVar5;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                            goto LAB_01e857b8;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,10);
LAB_01e857b8:
                      uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                      puVar7 = (undefined8 *)PTR_DAT_027b3a80;
                    }
LAB_01e857d0:
                    local_58._0_8_ = uVar10;
                    uVar10 = *puVar7;
                    goto LAB_01e85510;
                  }
                  lVar6 = *plVar5;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                        goto System_UnauthorizedAccessException___ctor;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,8);
System_UnauthorizedAccessException___ctor:
                  local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                  puVar7 = (undefined8 *)PTR_DAT_027b3a78;
                }
                uVar10 = *puVar7;
                goto LAB_01e85510;
              }
              lVar6 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                    goto LAB_01e85600;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,6);
LAB_01e85600:
              uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
              puVar7 = (undefined8 *)PTR_DAT_027b3a70;
            }
LAB_01e85420:
            uVar10 = *puVar7;
            local_58._0_2_ = uVar4;
            goto LAB_01e85510;
          }
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_01e854e8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)puVar9,4);
LAB_01e854e8:
          uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)PTR_DAT_027b2350;
        }
        uVar10 = *puVar7;
        local_58[0] = uVar3;
      }
LAB_01e85510:
      param_1 = thunk_FUN_0124b7d8(uVar10,local_58);
    }
  }
LAB_01e85518:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
LAB_01e859b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


