/*
FUNCTION_NAME: FUN_023923e8
ENTRY_POINT: 023923e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_023923e8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if ((DAT_0482fd32 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Animator>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Button>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__);
    DAT_0482fd32 = 1;
  }
  lVar6 = *(long *)puVar3;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  puVar5 = Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__;
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Button>__;
  puVar2 = 
  Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
  ;
  lVar8 = *(long *)(lVar6 + 0xb8);
  if (*(char *)(lVar8 + 0x134) == '\0') {
    if (param_5 != (long *)0x0) {
      lVar6 = param_5[9];
      uVar12 = FUN_038c22a0(param_1,0);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)puVar5;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar12;
            *(undefined4 *)(lVar8 + 0x24) = param_2;
            *(undefined4 *)(lVar8 + 0x28) = param_3;
            *(undefined4 *)(lVar8 + 0x2c) = param_4;
          }
          else {
            FUN_03182994(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *param_5;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_023929cc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,0);
LAB_023929cc:
          lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xbf800000;
              }
              else {
                FUN_0314b890(0xbf800000,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *param_5;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_02392a80;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,1);
LAB_02392a80:
              lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
              if (lVar6 != 0) {
                lVar8 = *(long *)(lVar6 + 0x10);
                lVar9 = *(long *)puVar2;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_0314b890(0,lVar6,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = *param_5;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                        goto LAB_02392b30;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,2);
LAB_02392b30:
                  lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)puVar5;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar8 + 0x20) = 0;
                        *(undefined8 *)(lVar8 + 0x28) = 0;
                      }
                      else {
                        FUN_03182994(0,0,0,0,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = *param_5;
                      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                            goto LAB_02392bec;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,4);
LAB_02392bec:
                      lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                      if (lVar6 != 0) {
                        lVar8 = *(long *)(lVar6 + 0x10);
                        lVar9 = *(long *)puVar5;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + 0x20) = 0;
                            *(undefined8 *)(lVar8 + 0x28) = 0;
                          }
                          else {
                            FUN_03182994(0,0,0,0,lVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar6 = *param_5;
                          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar10 != 0) {
                            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138)
                                ;
                                goto LAB_02392ca8;
                              }
                              uVar10 = uVar10 - 1;
                              piVar11 = piVar11 + 4;
                            } while (uVar10 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,3);
LAB_02392ca8:
                          lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                          if (lVar6 != 0) {
                            lVar8 = *(long *)(lVar6 + 0x10);
                            lVar9 = *(long *)puVar5;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + 0x20) = 0;
                                *(undefined8 *)(lVar8 + 0x28) = 0;
                                return;
                              }
                              lVar8 = *(long *)(lVar9 + 0x20);
                              uVar12 = 0;
                              uVar13 = 0;
                              uVar14 = 0;
                              goto LAB_02392d04;
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
  else {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    memcpy(&local_a0,(void *)(lVar8 + 0x138),0x50);
    if (param_5 != (long *)0x0) {
      uVar13 = (undefined4)(uStack_98 >> 0x20);
      uVar14 = (undefined4)local_90;
      uVar15 = (undefined4)((ulong)local_90 >> 0x20);
      lVar6 = param_5[9];
      uVar12 = FUN_038c22a0(uStack_98 & 0xffffffff,0);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)puVar5;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar12;
            *(undefined4 *)(lVar8 + 0x24) = uVar13;
            *(undefined4 *)(lVar8 + 0x28) = uVar14;
            *(undefined4 *)(lVar8 + 0x2c) = uVar15;
          }
          else {
            FUN_03182994(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *param_5;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_023925f8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,0);
LAB_023925f8:
          lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = (float)(int)local_a0;
              }
              else {
                FUN_0314b890(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                            );
              }
              lVar6 = *param_5;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_023926ac;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,1);
LAB_023926ac:
              lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
              if (lVar6 != 0) {
                lVar8 = *(long *)(lVar6 + 0x10);
                lVar9 = *(long *)puVar2;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = (float)local_a0._4_4_;
                  }
                  else {
                    FUN_0314b890(lVar6,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Animator>__;
                  lVar6 = *param_5;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                        goto LAB_02392768;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,2);
LAB_02392768:
                  lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)puVar3);
                  }
                  uVar12 = FUN_038c1360(&local_a0,0);
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)puVar5;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar8 + 0x20) = uVar12;
                        *(undefined4 *)(lVar8 + 0x24) = uVar13;
                        *(undefined4 *)(lVar8 + 0x28) = uVar14;
                        *(undefined4 *)(lVar8 + 0x2c) = uVar15;
                      }
                      else {
                        FUN_03182994(lVar6,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = *param_5;
                      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                            goto LAB_02392840;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,4);
LAB_02392840:
                      lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                      uVar13 = (undefined4)(uStack_88 >> 0x20);
                      uVar14 = (undefined4)local_80;
                      uVar15 = (undefined4)((ulong)local_80 >> 0x20);
                      uVar12 = FUN_038c22a0(uStack_88 & 0xffffffff,0);
                      if (lVar6 != 0) {
                        lVar8 = *(long *)(lVar6 + 0x10);
                        lVar9 = *(long *)puVar5;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar8 + 0x20) = uVar12;
                            *(undefined4 *)(lVar8 + 0x24) = uVar13;
                            *(undefined4 *)(lVar8 + 0x28) = uVar14;
                            *(undefined4 *)(lVar8 + 0x2c) = uVar15;
                          }
                          else {
                            FUN_03182994(lVar6,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar6 = *param_5;
                          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar10 != 0) {
                            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138)
                                ;
                                goto LAB_02392908;
                              }
                              uVar10 = uVar10 - 1;
                              piVar11 = piVar11 + 4;
                            } while (uVar10 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,3);
LAB_02392908:
                          lVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
                          if (lVar6 != 0) {
                            lVar8 = *(long *)(lVar6 + 0x10);
                            lVar9 = *(long *)puVar5;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined4 *)(lVar8 + 0x20) = local_70._4_4_;
                                *(undefined4 *)(lVar8 + 0x24) = (undefined4)uStack_68;
                                *(undefined4 *)(lVar8 + 0x28) = uStack_68._4_4_;
                                *(undefined4 *)(lVar8 + 0x2c) = 0;
                                return;
                              }
                              lVar8 = *(long *)(lVar9 + 0x20);
                              uVar12 = local_70._4_4_;
                              uVar13 = (undefined4)uStack_68;
                              uVar14 = uStack_68._4_4_;
LAB_02392d04:
                              FUN_03182994(uVar12,uVar13,uVar14,0,lVar6,
                                           *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


