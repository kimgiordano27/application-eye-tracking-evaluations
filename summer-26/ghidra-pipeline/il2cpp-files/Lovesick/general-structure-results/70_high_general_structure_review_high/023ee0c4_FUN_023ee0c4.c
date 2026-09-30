/*
FUNCTION_NAME: FUN_023ee0c4
ENTRY_POINT: 023ee0c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5
*/


void FUN_023ee0c4(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_180;
  double dStack_178;
  long lStack_170;
  undefined8 uStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  long lStack_140;
  undefined8 uStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  long local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  long lStack_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  double local_a0;
  double dStack_98;
  
  if ((DAT_037821e5 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5436);
    thunk_FUN_00d48444(Meta_WitAi_WitRequest_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_Calendar_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037821e5 = 1;
  }
  puVar2 = Meta_WitAi_WitRequest_TypeInfo;
  uStack_a8 = 0;
  local_b0 = 0;
  dStack_98 = 0.0;
  local_a0 = 0.0;
  dStack_c8 = 0.0;
  local_d0 = 0.0;
  dStack_b8 = 0.0;
  local_c0 = 0.0;
  dStack_e8 = 0.0;
  local_f0 = 0.0;
  local_d8 = 0;
  lStack_e0 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    dVar13 = *(double *)(param_1 + 0x38);
    FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_120,
                 *(undefined8 *)Meta_WitAi_WitRequest_TypeInfo);
    dVar10 = local_120;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,*(undefined8 *)puVar2);
      dVar8 = local_120;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_120,*(undefined8 *)puVar2);
        dVar12 = dStack_118;
        puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,*(undefined8 *)puVar2);
          dVar11 = dStack_118;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          dVar10 = atan2(dVar13,dVar10 * dVar8 + dVar12 * dVar11);
          dVar13 = *(double *)(param_1 + 0x50) * ABS(dVar10);
          dVar10 = dVar13 + 0.5;
          if (dVar13 < 0.0) {
            dVar10 = dVar13 + -0.5;
          }
          uVar7 = 0;
          if (dVar10 != INFINITY) {
            uVar7 = (undefined4)(long)dVar10;
          }
          iVar5 = FUN_017724a8(uVar7,1,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_120,*(undefined8 *)puVar2);
            dVar10 = local_120;
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_0132138c(*(long *)(param_1 + 0x28),param_3,&local_120,*(undefined8 *)puVar2);
              puVar4 = StringLiteral_5436;
              puVar2 = System_Globalization_Calendar_TypeInfo;
              lVar6 = *(long *)(param_1 + 0x18);
              if (lVar6 != 0) {
                dVar8 = (double)(long)param_2;
                iVar9 = -1;
                dVar13 = dStack_118;
                do {
                  iVar9 = iVar9 + 1;
                  if (iVar5 <= iVar9) {
                    FUN_0132138c(lVar6,param_2,&local_120,*(undefined8 *)puVar2);
                    dVar10 = dStack_118;
                    puVar3 = Meta_WitAi_WitRequest_TypeInfo;
                    if (*(long *)(param_1 + 0x28) != 0) {
                      FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,
                                   *(undefined8 *)Meta_WitAi_WitRequest_TypeInfo);
                      dVar13 = local_120 * *(double *)(param_1 + 0x30) + (double)(long)dVar10;
                      dVar10 = dVar13 + 0.5;
                      if (dVar13 < 0.0) {
                        dVar10 = dVar13 + -0.5;
                      }
                      lVar6 = -0x8000000000000000;
                      if (dVar10 != INFINITY) {
                        lVar6 = (long)dVar10;
                      }
                      if (*(long *)(param_1 + 0x18) != 0) {
                        FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_120,
                                     *(undefined8 *)puVar2);
                        lVar1 = local_110;
                        if (*(long *)(param_1 + 0x28) != 0) {
                          FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,
                                       *(undefined8 *)puVar3);
                          dVar13 = dStack_118 * *(double *)(param_1 + 0x30) + (double)lVar1;
                          dVar10 = dVar13 + 0.5;
                          if (dVar13 < 0.0) {
                            dVar10 = dVar13 + -0.5;
                          }
                          lVar1 = -0x8000000000000000;
                          if (dVar10 != INFINITY) {
                            lVar1 = (long)dVar10;
                          }
                          FUN_023e1548(&local_c0,lVar6,lVar1,0);
                          if (*(long *)(param_1 + 0x28) != 0) {
                            FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,
                                         *(undefined8 *)puVar3);
                            local_a0 = local_120;
                            if (*(long *)(param_1 + 0x28) != 0) {
                              FUN_0132138c(*(long *)(param_1 + 0x28),param_2,&local_120,
                                           *(undefined8 *)puVar3);
                              dStack_158 = dStack_118;
                              uStack_a8 = 1;
                              dStack_98 = dStack_118;
                              dStack_f8 = dStack_118;
                              local_100 = local_a0;
                              dStack_118 = dStack_b8;
                              uStack_108 = 1;
                              local_110 = local_b0;
                              local_120 = dVar8;
                              local_c0 = dVar8;
                              if (*(long *)(param_1 + 0x20) != 0) {
                                dStack_178 = dStack_b8;
                                uStack_168 = 1;
                                lStack_170 = local_b0;
                                local_160 = local_a0;
                                local_180 = dVar8;
                                FUN_00cb0974(*(long *)(param_1 + 0x20),&local_180,
                                             *(undefined8 *)puVar4);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  }
                  FUN_0132138c(lVar6,param_2,&local_120,*(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 0x18) == 0) break;
                  dVar11 = dVar10 * *(double *)(param_1 + 0x30) + (double)(long)dStack_118;
                  dVar12 = dVar11 + 0.5;
                  if (dVar11 < 0.0) {
                    dVar12 = dVar11 + -0.5;
                  }
                  lVar6 = -0x8000000000000000;
                  if (dVar12 != INFINITY) {
                    lVar6 = (long)dVar12;
                  }
                  FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_120,*(undefined8 *)puVar2);
                  dVar11 = dVar13 * *(double *)(param_1 + 0x30) + (double)local_110;
                  dVar12 = dVar11 + 0.5;
                  if (dVar11 < 0.0) {
                    dVar12 = dVar11 + -0.5;
                  }
                  lVar1 = -0x8000000000000000;
                  if (dVar12 != INFINITY) {
                    lVar1 = (long)dVar12;
                  }
                  FUN_023e1548(&local_f0,lVar6,lVar1,0);
                  local_d8 = 1;
                  dStack_118 = dStack_e8;
                  uStack_108 = 1;
                  local_110 = lStack_e0;
                  local_120 = dVar8;
                  local_100 = dVar10;
                  dStack_f8 = dVar13;
                  local_f0 = dVar8;
                  local_d0 = dVar10;
                  dStack_c8 = dVar13;
                  if (*(long *)(param_1 + 0x20) == 0) break;
                  dStack_148 = dStack_e8;
                  uStack_138 = 1;
                  lStack_140 = lStack_e0;
                  local_150 = dVar8;
                  local_130 = dVar10;
                  dStack_128 = dVar13;
                  FUN_00cb0974(*(long *)(param_1 + 0x20),&local_150,*(undefined8 *)puVar4);
                  lVar6 = *(long *)(param_1 + 0x18);
                  dVar12 = dVar10 * *(double *)(param_1 + 0x40);
                  dVar10 = dVar10 * *(double *)(param_1 + 0x48) -
                           dVar13 * *(double *)(param_1 + 0x40);
                  dVar13 = dVar13 * *(double *)(param_1 + 0x48) + dVar12;
                } while (lVar6 != 0);
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


