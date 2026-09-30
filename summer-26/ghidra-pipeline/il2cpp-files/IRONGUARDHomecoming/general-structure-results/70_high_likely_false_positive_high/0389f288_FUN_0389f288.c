/*
FUNCTION_NAME: FUN_0389f288
ENTRY_POINT: 0389f288
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_21
*/


void FUN_0389f288(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  
  if (DAT_04837e07 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Animator>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Button>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__);
    DAT_04837e07 = '\x01';
  }
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lVar5 = *(long *)
           Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
  ;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  lVar7 = *(long *)(lVar5 + 0xb8);
  if (*(char *)(lVar7 + 0x134) == '\0') {
    if (param_5 != (long *)0x0) {
      lVar5 = param_5[9];
      uVar11 = FUN_038c22a0(param_1,0);
      puVar3 = Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__;
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + 0x20) = uVar11;
            *(undefined4 *)(lVar7 + 0x24) = param_2;
            *(undefined4 *)(lVar7 + 0x28) = param_3;
            *(undefined4 *)(lVar7 + 0x2c) = param_4;
          }
          else {
            FUN_03182994(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Button>__;
          lVar5 = *param_5;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_UnityEngine_Component_GetComponentInChildren<Button>__) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0389f87c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(param_5,*(long *)
                                         Method_UnityEngine_Component_GetComponentInChildren<Button>__
                                ,0);
LAB_0389f87c:
          lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
          puVar2 = 
          Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
          ;
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)
                     Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
            ;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xbf800000;
              }
              else {
                FUN_0314b890(0xbf800000,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = *param_5;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                    puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_0389f938;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,1);
LAB_0389f938:
              lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_0314b890(0,lVar5,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = *param_5;
                  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                        goto LAB_0389f9e8;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,2);
LAB_0389f9e8:
                  lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                  if (lVar5 != 0) {
                    lVar7 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar3;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + 0x20) = 0;
                        *(undefined8 *)(lVar7 + 0x28) = 0;
                      }
                      else {
                        FUN_03182994(0,0,0,0,lVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = *param_5;
                      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                            goto LAB_0389faa4;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,4);
LAB_0389faa4:
                      lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                      if (lVar5 != 0) {
                        lVar7 = *(long *)(lVar5 + 0x10);
                        lVar8 = *(long *)puVar3;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar7 + 0x20) = 0;
                            *(undefined8 *)(lVar7 + 0x28) = 0;
                          }
                          else {
                            FUN_03182994(0,0,0,0,lVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = *param_5;
                          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar9 != 0) {
                            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138)
                                ;
                                goto LAB_0389fb60;
                              }
                              uVar9 = uVar9 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar9 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,3);
LAB_0389fb60:
                          lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                          if (lVar5 != 0) {
                            lVar7 = *(long *)(lVar5 + 0x10);
                            lVar8 = *(long *)puVar3;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + 0x20) = 0;
                                *(undefined8 *)(lVar7 + 0x28) = 0;
                                return;
                              }
                              lVar7 = *(long *)(lVar8 + 0x20);
                              uVar11 = 0;
                              uVar12 = 0;
                              uVar13 = 0;
                              goto LAB_0389fbbc;
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
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    memcpy(&local_a0,(void *)(lVar7 + 0x138),0x50);
    if (param_5 != (long *)0x0) {
      uVar12 = (undefined4)(uStack_98 >> 0x20);
      uVar13 = (undefined4)local_90;
      uVar14 = (undefined4)((ulong)local_90 >> 0x20);
      lVar5 = param_5[9];
      uVar11 = FUN_038c22a0(uStack_98 & 0xffffffff,0);
      puVar3 = Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__;
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)Method_UnityEngine_Component_GetComponentInChildren<DistanceGrabbable>__;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + 0x20) = uVar11;
            *(undefined4 *)(lVar7 + 0x24) = uVar12;
            *(undefined4 *)(lVar7 + 0x28) = uVar13;
            *(undefined4 *)(lVar7 + 0x2c) = uVar14;
          }
          else {
            FUN_03182994(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Button>__;
          lVar5 = *param_5;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_UnityEngine_Component_GetComponentInChildren<Button>__) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0389f498;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(param_5,*(long *)
                                         Method_UnityEngine_Component_GetComponentInChildren<Button>__
                                ,0);
LAB_0389f498:
          lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
          puVar2 = 
          Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
          ;
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)
                     Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Transcription__
            ;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = (float)(int)local_a0;
              }
              else {
                FUN_0314b890(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                            );
              }
              lVar5 = *param_5;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                    puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_0389f554;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,1);
LAB_0389f554:
              lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = (float)local_a0._4_4_;
                  }
                  else {
                    FUN_0314b890(lVar5,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = *param_5;
                  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                        goto LAB_0389f608;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,2);
LAB_0389f608:
                  lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<Animator>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_Component_GetComponentInChildren<Animator>__
                                      );
                  }
                  uVar11 = FUN_038c1360(&local_a0,0);
                  if (lVar5 != 0) {
                    lVar7 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar3;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar7 + 0x20) = uVar11;
                        *(undefined4 *)(lVar7 + 0x24) = uVar12;
                        *(undefined4 *)(lVar7 + 0x28) = uVar13;
                        *(undefined4 *)(lVar7 + 0x2c) = uVar14;
                      }
                      else {
                        FUN_03182994(lVar5,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = *param_5;
                      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                            goto LAB_0389f6e8;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,4);
LAB_0389f6e8:
                      lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                      uVar12 = (undefined4)(uStack_88 >> 0x20);
                      uVar13 = (undefined4)local_80;
                      uVar14 = (undefined4)((ulong)local_80 >> 0x20);
                      uVar11 = FUN_038c22a0(uStack_88 & 0xffffffff,0);
                      if (lVar5 != 0) {
                        lVar7 = *(long *)(lVar5 + 0x10);
                        lVar8 = *(long *)puVar3;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar7 + 0x20) = uVar11;
                            *(undefined4 *)(lVar7 + 0x24) = uVar12;
                            *(undefined4 *)(lVar7 + 0x28) = uVar13;
                            *(undefined4 *)(lVar7 + 0x2c) = uVar14;
                          }
                          else {
                            FUN_03182994(lVar5,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = *param_5;
                          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar9 != 0) {
                            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138)
                                ;
                                goto LAB_0389f7b0;
                              }
                              uVar9 = uVar9 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar9 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_01ecb238(param_5,*(long *)puVar4,3);
LAB_0389f7b0:
                          lVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
                          if (lVar5 != 0) {
                            lVar7 = *(long *)(lVar5 + 0x10);
                            lVar8 = *(long *)puVar3;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined4 *)(lVar7 + 0x20) = local_70._4_4_;
                                *(undefined4 *)(lVar7 + 0x24) = (undefined4)uStack_68;
                                *(undefined4 *)(lVar7 + 0x28) = uStack_68._4_4_;
                                *(undefined4 *)(lVar7 + 0x2c) = 0;
                                return;
                              }
                              lVar7 = *(long *)(lVar8 + 0x20);
                              uVar11 = local_70._4_4_;
                              uVar12 = (undefined4)uStack_68;
                              uVar13 = uStack_68._4_4_;
LAB_0389fbbc:
                              FUN_03182994(uVar11,uVar12,uVar13,0,lVar5,
                                           *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
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


