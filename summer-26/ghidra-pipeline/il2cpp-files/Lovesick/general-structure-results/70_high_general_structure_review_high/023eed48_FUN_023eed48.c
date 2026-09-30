/*
FUNCTION_NAME: FUN_023eed48
ENTRY_POINT: 023eed48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_023eed48(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_160;
  double dStack_158;
  long lStack_150;
  undefined8 uStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  long local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  long local_90;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  
  if ((DAT_037821e3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5436);
    thunk_FUN_00d48444(Meta_WitAi_WitRequest_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_Calendar_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037821e3 = 1;
  }
  puVar4 = Meta_WitAi_WitRequest_TypeInfo;
  uStack_88 = 0;
  local_90 = 0;
  dStack_78 = 0.0;
  local_80 = 0.0;
  dStack_98 = 0.0;
  local_a0 = 0.0;
  if (*(long *)(param_1 + 0x28) != 0) {
    dVar9 = *(double *)(param_1 + 0x38);
    FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,
                 *(undefined8 *)Meta_WitAi_WitRequest_TypeInfo);
    dVar7 = local_d0;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_d0,*(undefined8 *)puVar4);
      dVar8 = local_d0;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,*(undefined8 *)puVar4);
        dVar10 = dStack_c8;
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_d0,*(undefined8 *)puVar4);
          dVar6 = dStack_c8;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          dVar7 = atan2(dVar9,dVar7 * dVar8 + dVar10 * dVar6);
          dVar7 = tan(dVar7 * 0.25);
          puVar3 = System_Globalization_Calendar_TypeInfo;
          if (*(long *)(param_1 + 0x18) != 0) {
            FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_d0,
                         *(undefined8 *)System_Globalization_Calendar_TypeInfo);
            dVar9 = dStack_c8;
            if (*(long *)(param_1 + 0x28) != 0) {
              dVar10 = *(double *)(param_1 + 0x30);
              FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,*(undefined8 *)puVar4);
              dVar8 = local_d0;
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,*(undefined8 *)puVar4);
                dVar8 = dVar10 * (dVar8 - dVar7 * dStack_c8) + (double)(long)dVar9;
                dVar9 = dVar8 + 0.5;
                if (dVar8 < 0.0) {
                  dVar9 = dVar8 + -0.5;
                }
                lVar1 = -0x8000000000000000;
                if (dVar9 != INFINITY) {
                  lVar1 = (long)dVar9;
                }
                if (*(long *)(param_1 + 0x18) != 0) {
                  FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_d0,*(undefined8 *)puVar3);
                  lVar2 = local_c0;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    dVar8 = *(double *)(param_1 + 0x30);
                    FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,*(undefined8 *)puVar4);
                    dVar9 = dStack_c8;
                    if (*(long *)(param_1 + 0x28) != 0) {
                      FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,*(undefined8 *)puVar4
                                  );
                      dVar8 = dVar8 * (dVar9 + dVar7 * local_d0) + (double)lVar2;
                      dVar9 = dVar8 + 0.5;
                      if (dVar8 < 0.0) {
                        dVar9 = dVar8 + -0.5;
                      }
                      lVar2 = -0x8000000000000000;
                      if (dVar9 != INFINITY) {
                        lVar2 = (long)dVar9;
                      }
                      FUN_023e1548(&local_a0,lVar1,lVar2,0);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,
                                     *(undefined8 *)puVar4);
                        dVar9 = local_d0;
                        if (*(long *)(param_1 + 0x28) != 0) {
                          FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,
                                       *(undefined8 *)puVar4);
                          local_80 = dVar9 - dVar7 * dStack_c8;
                          if (*(long *)(param_1 + 0x28) != 0) {
                            FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,
                                         *(undefined8 *)puVar4);
                            if (*(long *)(param_1 + 0x28) != 0) {
                              FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_d0,
                                           *(undefined8 *)puVar4);
                              puVar5 = StringLiteral_5436;
                              dStack_a8 = dStack_c8 + dVar7 * local_d0;
                              dStack_c8 = dStack_98;
                              local_d0 = local_a0;
                              uStack_b8 = uStack_88;
                              local_c0 = local_90;
                              local_b0 = local_80;
                              dStack_78 = dStack_a8;
                              if (*(long *)(param_1 + 0x20) != 0) {
                                local_e0 = local_80;
                                dStack_f8 = dStack_98;
                                local_100 = local_a0;
                                uStack_e8 = uStack_88;
                                lStack_f0 = local_90;
                                dStack_d8 = dStack_a8;
                                FUN_00cb0974(*(long *)(param_1 + 0x20),&local_100,
                                             *(undefined8 *)StringLiteral_5436);
                                if (*(long *)(param_1 + 0x18) != 0) {
                                  FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_130,
                                               *(undefined8 *)puVar3);
                                  dVar9 = dStack_128;
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    dVar10 = *(double *)(param_1 + 0x30);
                                    FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_130,
                                                 *(undefined8 *)puVar4);
                                    dVar8 = local_130;
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_130,
                                                   *(undefined8 *)puVar4);
                                      dVar8 = dVar10 * (dVar8 + dVar7 * dStack_128) +
                                              (double)(long)dVar9;
                                      dVar9 = dVar8 + 0.5;
                                      if (dVar8 < 0.0) {
                                        dVar9 = dVar8 + -0.5;
                                      }
                                      lVar1 = -0x8000000000000000;
                                      if (dVar9 != INFINITY) {
                                        lVar1 = (long)dVar9;
                                      }
                                      if (*(long *)(param_1 + 0x18) != 0) {
                                        FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_130,
                                                     *(undefined8 *)puVar3);
                                        lVar2 = local_120;
                                        if (*(long *)(param_1 + 0x28) != 0) {
                                          dVar8 = *(double *)(param_1 + 0x30);
                                          FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_130,
                                                       *(undefined8 *)puVar4);
                                          dVar9 = dStack_128;
                                          if (*(long *)(param_1 + 0x28) != 0) {
                                            FUN_0132138c(*(long *)(param_1 + 0x28),param_2,
                                                         &local_130,*(undefined8 *)puVar4);
                                            dVar8 = dVar8 * (dVar9 - dVar7 * local_130) +
                                                    (double)lVar2;
                                            dVar9 = dVar8 + 0.5;
                                            if (dVar8 < 0.0) {
                                              dVar9 = dVar8 + -0.5;
                                            }
                                            lVar2 = -0x8000000000000000;
                                            if (dVar9 != INFINITY) {
                                              lVar2 = (long)dVar9;
                                            }
                                            FUN_023e1548(&local_a0,lVar1,lVar2,0);
                                            if (*(long *)(param_1 + 0x28) != 0) {
                                              FUN_0132138c(*(long *)(param_1 + 0x28),param_3,
                                                           &local_130,*(undefined8 *)puVar4);
                                              dVar9 = local_130;
                                              if (*(long *)(param_1 + 0x28) != 0) {
                                                FUN_0132138c(*(long *)(param_1 + 0x28),param_3,
                                                             &local_130,*(undefined8 *)puVar4);
                                                local_80 = dVar9 + dVar7 * dStack_128;
                                                if (*(long *)(param_1 + 0x28) != 0) {
                                                  FUN_0132138c(*(long *)(param_1 + 0x28),param_3,
                                                               &local_130,*(undefined8 *)puVar4);
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    FUN_0132138c(*(long *)(param_1 + 0x28),param_3,
                                                                 &local_130,*(undefined8 *)puVar4);
                                                    dStack_138 = dStack_128 - dVar7 * local_130;
                                                    dStack_128 = dStack_98;
                                                    local_130 = local_a0;
                                                    uStack_118 = uStack_88;
                                                    local_120 = local_90;
                                                    local_110 = local_80;
                                                    dStack_108 = dStack_138;
                                                    dStack_78 = dStack_138;
                                                    if (*(long *)(param_1 + 0x20) != 0) {
                                                      dStack_158 = dStack_98;
                                                      local_160 = local_a0;
                                                      uStack_148 = uStack_88;
                                                      lStack_150 = local_90;
                                                      local_140 = local_80;
                                                      FUN_00cb0974(*(long *)(param_1 + 0x20),
                                                                   &local_160,*(undefined8 *)puVar5)
                                                      ;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


