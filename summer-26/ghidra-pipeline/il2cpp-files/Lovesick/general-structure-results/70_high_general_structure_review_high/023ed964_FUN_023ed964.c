/*
FUNCTION_NAME: FUN_023ed964
ENTRY_POINT: 023ed964
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


void FUN_023ed964(long param_1,int param_2,int *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_260;
  double dStack_258;
  long lStack_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  long local_220;
  undefined8 uStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  long local_190;
  undefined8 uStack_188;
  double dStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  long lStack_160;
  undefined8 uStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  long lStack_130;
  undefined8 uStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  long local_100;
  undefined8 uStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  long local_a0;
  undefined8 uStack_98;
  double local_90;
  double dStack_88;
  
  if ((DAT_037821e2 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5436);
    thunk_FUN_00d48444(Meta_WitAi_WitRequest_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_Calendar_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037821e2 = 1;
  }
  puVar4 = Meta_WitAi_WitRequest_TypeInfo;
  uStack_98 = 0;
  local_a0 = 0;
  dStack_88 = 0.0;
  local_90 = 0.0;
  dStack_b8 = 0.0;
  local_c0 = 0.0;
  dStack_a8 = 0.0;
  local_b0 = 0.0;
  dStack_d8 = 0.0;
  local_e0 = 0.0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
  FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,
               *(undefined8 *)Meta_WitAi_WitRequest_TypeInfo);
  dVar9 = local_110;
  if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
  FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_110,*(undefined8 *)puVar4);
  dVar7 = dStack_108;
  if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
  FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_110,*(undefined8 *)puVar4);
  dVar8 = local_110;
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
  FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
  dVar10 = *(double *)(param_1 + 0x30);
  dVar9 = dVar9 * dVar7 - dVar8 * dStack_108;
  *(double *)(param_1 + 0x38) = dVar9;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_5436;
  puVar3 = System_Globalization_Calendar_TypeInfo;
  if (1.0 <= ABS(dVar9 * dVar10)) {
    dVar9 = *(double *)(param_1 + 0x38);
    if (dVar9 <= 1.0) {
      if (-1.0 <= dVar9) goto LAB_023edcec;
      uVar6 = 0xbff0000000000000;
      dVar9 = -1.0;
    }
    else {
      uVar6 = 0x3ff0000000000000;
      dVar9 = 1.0;
    }
    *(undefined8 *)(param_1 + 0x38) = uVar6;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
    FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
    dVar9 = local_110;
    if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
    FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_110,*(undefined8 *)puVar4);
    dVar7 = local_110;
    if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
    FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_110,*(undefined8 *)puVar4);
    dVar8 = dStack_108;
    if (*(long *)(param_1 + 0x28) == 0) goto TMPro_TMP_Style___ctor;
    FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
    if (0.0 < dVar9 * dVar7 + dVar8 * dStack_108) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_110,*(undefined8 *)puVar3);
        dVar9 = dStack_108;
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
          dVar7 = local_110 * *(double *)(param_1 + 0x30) + (double)(long)dVar9;
          dVar9 = dVar7 + 0.5;
          if (dVar7 < 0.0) {
            dVar9 = dVar7 + -0.5;
          }
          lVar1 = -0x8000000000000000;
          if (dVar9 != INFINITY) {
            lVar1 = (long)dVar9;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_110,*(undefined8 *)puVar3);
            lVar2 = local_100;
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
              dVar7 = dStack_108 * *(double *)(param_1 + 0x30) + (double)lVar2;
              dVar9 = dVar7 + 0.5;
              if (dVar7 < 0.0) {
                dVar9 = dVar7 + -0.5;
              }
              lVar2 = -0x8000000000000000;
              if (dVar9 != INFINITY) {
                lVar2 = (long)dVar9;
              }
              FUN_023e1548(&local_b0,lVar1,lVar2,0);
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
                local_90 = local_110;
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
                  dStack_118 = dStack_108;
                  local_140 = (double)(long)param_2;
                  dStack_88 = dStack_108;
                  uStack_98 = 1;
                  dStack_e8 = dStack_108;
                  local_f0 = local_90;
                  dStack_108 = dStack_a8;
                  uStack_f8 = 1;
                  local_100 = local_a0;
                  local_110 = local_140;
                  local_b0 = local_140;
                  if (*(long *)(param_1 + 0x20) != 0) {
                    dStack_138 = dStack_a8;
                    uStack_128 = 1;
                    lStack_130 = local_a0;
                    local_120 = local_90;
                    FUN_00cb0974(*(long *)(param_1 + 0x20),&local_140,*(undefined8 *)puVar5);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto TMPro_TMP_Style___ctor;
    }
    dVar9 = *(double *)(param_1 + 0x38);
  }
LAB_023edcec:
  if (dVar9 * *(double *)(param_1 + 0x30) < 0.0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_110,*(undefined8 *)puVar3);
      dVar9 = dStack_108;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
        dVar7 = local_110 * *(double *)(param_1 + 0x30) + (double)(long)dVar9;
        dVar9 = dVar7 + 0.5;
        if (dVar7 < 0.0) {
          dVar9 = dVar7 + -0.5;
        }
        lVar1 = -0x8000000000000000;
        if (dVar9 != INFINITY) {
          lVar1 = (long)dVar9;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_110,*(undefined8 *)puVar3);
          lVar2 = local_100;
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
            dVar7 = dStack_108 * *(double *)(param_1 + 0x30) + (double)lVar2;
            dVar9 = dVar7 + 0.5;
            if (dVar7 < 0.0) {
              dVar9 = dVar7 + -0.5;
            }
            lVar2 = -0x8000000000000000;
            if (dVar9 != INFINITY) {
              lVar2 = (long)dVar9;
            }
            FUN_023e1548(&local_e0,lVar1,lVar2,0);
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
              local_c0 = local_110;
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_110,*(undefined8 *)puVar4);
                dStack_e8 = dStack_108;
                dStack_b8 = dStack_108;
                dStack_108 = dStack_d8;
                local_110 = local_e0;
                uStack_f8 = uStack_c8;
                local_100 = local_d0;
                local_f0 = local_c0;
                if (*(long *)(param_1 + 0x20) != 0) {
                  dStack_168 = dStack_d8;
                  local_170 = local_e0;
                  uStack_158 = uStack_c8;
                  lStack_160 = local_d0;
                  dStack_148 = dStack_e8;
                  local_150 = local_c0;
                  FUN_00cb0974(*(long *)(param_1 + 0x20),&local_170,*(undefined8 *)puVar5);
                  if (*(long *)(param_1 + 0x18) != 0) {
                    FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_1a0,*(undefined8 *)puVar3)
                    ;
                    uStack_c8 = uStack_188;
                    local_d0 = local_190;
                    dStack_b8 = dStack_178;
                    local_c0 = dStack_180;
                    dStack_d8 = dStack_198;
                    local_e0 = local_1a0;
                    if (*(long *)(param_1 + 0x28) != 0) {
                      FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_1d0,
                                   *(undefined8 *)puVar4);
                      local_c0 = local_1d0;
                      if (*(long *)(param_1 + 0x28) != 0) {
                        FUN_0132138c(*(long *)(param_1 + 0x28),*param_3,&local_1d0,
                                     *(undefined8 *)puVar4);
                        dVar9 = dStack_1c8;
                        dVar7 = (double)(long)param_2;
                        dStack_b8 = dStack_1c8;
                        uStack_c8 = 1;
                        dStack_1a8 = dStack_1c8;
                        local_1b0 = local_c0;
                        dStack_1c8 = dStack_d8;
                        uStack_1b8 = 1;
                        lStack_1c0 = local_d0;
                        local_1d0 = dVar7;
                        local_e0 = dVar7;
                        if (*(long *)(param_1 + 0x20) != 0) {
                          dStack_1f8 = dStack_d8;
                          uStack_1e8 = 1;
                          lStack_1f0 = local_d0;
                          dStack_1d8 = dVar9;
                          local_1e0 = local_c0;
                          local_200 = dVar7;
                          FUN_00cb0974(*(long *)(param_1 + 0x20),&local_200,*(undefined8 *)puVar5);
                          if (*(long *)(param_1 + 0x18) != 0) {
                            FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_230,
                                         *(undefined8 *)puVar3);
                            dVar9 = dStack_228;
                            if (*(long *)(param_1 + 0x28) != 0) {
                              FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_230,
                                           *(undefined8 *)puVar4);
                              dVar8 = local_230 * *(double *)(param_1 + 0x30) + (double)(long)dVar9;
                              dVar9 = dVar8 + 0.5;
                              if (dVar8 < 0.0) {
                                dVar9 = dVar8 + -0.5;
                              }
                              lVar1 = -0x8000000000000000;
                              if (dVar9 != INFINITY) {
                                lVar1 = (long)dVar9;
                              }
                              if (*(long *)(param_1 + 0x18) != 0) {
                                FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_230,
                                             *(undefined8 *)puVar3);
                                lVar2 = local_220;
                                if (*(long *)(param_1 + 0x28) != 0) {
                                  FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_230,
                                               *(undefined8 *)puVar4);
                                  dVar8 = dStack_228 * *(double *)(param_1 + 0x30) + (double)lVar2;
                                  dVar9 = dVar8 + 0.5;
                                  if (dVar8 < 0.0) {
                                    dVar9 = dVar8 + -0.5;
                                  }
                                  lVar2 = -0x8000000000000000;
                                  if (dVar9 != INFINITY) {
                                    lVar2 = (long)dVar9;
                                  }
                                  FUN_023e1548(&local_e0,lVar1,lVar2,0);
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_230,
                                                 *(undefined8 *)puVar4);
                                    local_c0 = local_230;
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_230,
                                                   *(undefined8 *)puVar4);
                                      dStack_238 = dStack_228;
                                      uStack_c8 = 1;
                                      dStack_b8 = dStack_228;
                                      dStack_208 = dStack_228;
                                      local_210 = local_c0;
                                      dStack_228 = dStack_d8;
                                      uStack_218 = 1;
                                      local_220 = local_d0;
                                      local_230 = dVar7;
                                      local_e0 = dVar7;
                                      if (*(long *)(param_1 + 0x20) != 0) {
                                        dStack_258 = dStack_d8;
                                        uStack_248 = 1;
                                        lStack_250 = local_d0;
                                        local_240 = local_c0;
                                        local_260 = dVar7;
                                        FUN_00cb0974(*(long *)(param_1 + 0x20),&local_260,
                                                     *(undefined8 *)puVar5);
                                        goto LAB_023ee094;
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
TMPro_TMP_Style___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (param_4 == 0) {
    FUN_023ee0c4(param_1,param_2,*param_3);
  }
LAB_023ee094:
  *param_3 = param_2;
  return;
}


