/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeArray
ENTRY_POINT: 028a86c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long lVar11;
  long unaff_x25;
  long *unaff_x26;
  float fVar12;
  undefined8 *in_stack_00000000;
  long in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(in_x10[4] + 4) * 0x10 + 0x138);
      goto LAB_028a86f0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a86f0:
  uVar2 = (*(code *)*puVar6)();
  FUN_036d0224(uVar2,0);
  FUN_03673798();
  puVar1 = PTR_DAT_03d01c60;
  lVar8 = *(long *)(unaff_x20 + 0x88);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_028a8d1c;
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      FUN_03674eb0(*(long *)(unaff_x20 + 0x60),*(undefined8 *)(lVar8 + 0x20),0);
      if (*(char *)(unaff_x20 + 0x71) == '\0') {
        if (*unaff_x24 == 0) goto LAB_028a8d18;
        FUN_03674bb8(0,0,0x3f800000,0x3f800000,*unaff_x24,0);
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x36) * 0x10 + 0x138);
            goto LAB_028a87c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a87c0:
      lVar8 = (*(code *)*puVar6)();
      if (lVar8 == 0) {
        uVar7 = FUN_036cbbbc();
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x21);
        }
        lVar8 = FUN_01fc0208(uVar7,*(undefined8 *)PTR_DAT_03cbe9a8);
      }
      else {
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x36) * 0x10 + 0x138);
              goto LAB_028a885c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a885c:
        lVar8 = (*(code *)*puVar6)();
        uVar7 = FUN_036cbbbc();
        if (lVar8 == 0) goto LAB_028a8d18;
        lVar8 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),uVar7,1,*(undefined8 *)(lVar8 + 0x28));
      }
      *unaff_x26 = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*unaff_x26 != 0) {
        FUN_036d38d4(*unaff_x26,*(undefined8 *)PTR_DAT_03d01c78,0);
        if (*unaff_x26 != 0) {
          lVar8 = FUN_036cf428(*unaff_x26,0);
          if (*(char *)(unaff_x20 + 0x10) == '\0') {
            if (unaff_x25 == 0) goto LAB_028a8d18;
            uVar7 = FUN_036cf428();
          }
          else {
            if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_028a8d18;
            uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20);
          }
          if (lVar8 != 0) {
            FUN_036dd580(lVar8,uVar7,0);
            if (*unaff_x26 != 0) {
              FUN_01f7e3e4(*unaff_x26,&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c50);
              lVar8 = in_stack_00000008;
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_036d36b4(lVar8,0);
              if ((uVar9 & 1) != 0) {
                if (*unaff_x26 == 0) goto LAB_028a8d18;
                FUN_01f7e3e4(*unaff_x26,&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c50);
                lVar8 = in_stack_00000008;
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_036d4360(lVar8,0);
              }
              if (*unaff_x26 != 0) {
                FUN_01f7e3e4(*unaff_x26,&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c58);
                lVar8 = in_stack_00000008;
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar9 = FUN_036d36b4(lVar8,0);
                if ((uVar9 & 1) != 0) {
                  if (*unaff_x26 == 0) goto LAB_028a8d18;
                  FUN_01f7e3e4(*unaff_x26,&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c58);
                  lVar8 = in_stack_00000008;
                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_036d4360(lVar8,0);
                }
                if (*unaff_x26 != 0) {
                  FUN_01f7e3e4(*unaff_x26,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbf690);
                  *unaff_x23 = in_stack_00000008;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if (*unaff_x23 != 0) {
                    FUN_036cc560(*unaff_x23,*(undefined8 *)PTR_DAT_03d01c80,0);
                    lVar8 = FUN_0341129c(*unaff_x23,0);
                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*unaff_x21);
                    }
                    uVar9 = FUN_036cee6c(lVar8,0,0);
                    if ((uVar9 & 1) != 0) {
                      if (lVar8 == 0) goto LAB_028a8d18;
                      *(undefined1 *)(lVar8 + 0x5b) = 0;
                    }
                    if (*unaff_x24 != 0) {
                      lVar8 = *unaff_x23;
                      fVar12 = (float)FUN_03673570(*unaff_x24,0);
                      if (lVar8 != 0) {
                        FUN_036735ac(fVar12 + 1.0,lVar8,0);
                        if (*unaff_x23 != 0) {
                          FUN_03674bb8(0x3f000000,0,0x3f000000,0x3f800000,*unaff_x23,0);
                          if (*unaff_x23 != 0) {
                            FUN_03673f1c(*unaff_x23,2,0);
                            lVar8 = *unaff_x22;
                            lVar11 = *unaff_x23;
                            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                            if (uVar9 != 0) {
                              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                  puVar6 = (undefined8 *)
                                           (lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
                                  goto LAB_028a8b48;
                                }
                                uVar9 = uVar9 - 1;
                                piVar10 = piVar10 + 4;
                              } while (uVar9 != 0);
                            }
                            puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a8b48:
                            (*(code *)*puVar6)();
                            if (lVar11 != 0) {
                              FUN_03673e48(lVar11,0);
                              lVar8 = *unaff_x23;
                              if (lVar8 != 0) {
                                uVar3 = FUN_0367375c(lVar8,0);
                                lVar11 = *unaff_x22;
                                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                if (uVar9 != 0) {
                                  piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                      puVar6 = (undefined8 *)
                                               (lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                                      goto LAB_028a8bcc;
                                    }
                                    uVar9 = uVar9 - 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar9 != 0);
                                }
                                puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a8bcc:
                                uVar2 = (*(code *)*puVar6)();
                                uVar4 = FUN_036d0224(uVar2,0);
                                lVar11 = *unaff_x22;
                                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                if (uVar9 != 0) {
                                  piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                      puVar6 = (undefined8 *)
                                               (lVar11 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                                      goto LAB_028a8c38;
                                    }
                                    uVar9 = uVar9 - 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar9 != 0);
                                }
                                puVar6 = (undefined8 *)FUN_01a472ec();
LAB_028a8c38:
                                uVar2 = (*(code *)*puVar6)();
                                uVar5 = FUN_036d0224(uVar2,0);
                                FUN_03673798(lVar8,uVar5 | uVar3 & (uVar4 ^ 0xffffffff),0);
                                lVar8 = *(long *)(unaff_x20 + 0x50);
                                if (*(char *)(unaff_x20 + 0x71) == '\0') {
                                  lVar11 = *(long *)(unaff_x20 + 0x98);
                                  if (lVar11 != 0) {
                                    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_028a8d1c;
                                    if (lVar8 != 0) {
                                      FUN_03674eb0(lVar8,*(undefined8 *)(lVar11 + 0x20),0);
                                      if (*unaff_x23 != 0) {
                                        FUN_03674bb8(0,0,0x3f800000,0x3f800000,*unaff_x23,0);
                                        goto LAB_028a8cdc;
                                      }
                                    }
                                  }
                                }
                                else {
                                  lVar11 = *(long *)(unaff_x20 + 0x88);
                                  if (lVar11 != 0) {
                                    if (*(int *)(lVar11 + 0x18) == 0) {
LAB_028a8d1c:
                    /* WARNING: Subroutine does not return */
                                      FUN_01ab6c44();
                                    }
                                    if (lVar8 != 0) {
                                      FUN_03674eb0(lVar8,*(undefined8 *)(lVar11 + 0x20),0);
LAB_028a8cdc:
                                      uVar7 = FUN_036cbbbc();
                                      *in_stack_00000000 = uVar7;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (in_stack_00000000,uVar7);
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
LAB_028a8d18:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


