/*
FUNCTION_NAME: FUN_0619f728
ENTRY_POINT: 0619f728
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_0619f728(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_06a83d52 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_32_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_118_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_34_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_35_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_36_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_126_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_127_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_37_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_129_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_38_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_39_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_3_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_40_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_41_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_42_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_43_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_31_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_44_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_45_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_46_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_47_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_48_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_49_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_06a83d52 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
    if (lVar8 != 0) {
      FUN_0616f94c(lVar8,0);
      puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo
                            );
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar10);
          lVar10 = *(long *)puVar5;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (lVar11 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar10);
            lVar10 = *(long *)puVar5;
          }
          uVar12 = **(undefined8 **)(lVar10 + 0xb8);
          lVar11 = thunk_FUN_02cea894(*(undefined8 *)OVRPlugin_OVRP_1_40_0_TypeInfo);
          FUN_04a5701c(lVar11,uVar12,*(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,0);
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar11;
        }
        if (lVar8 != 0) {
          FUN_0320fcb4(lVar8,lVar11,*(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo);
          puVar7 = OVRPlugin_OVRP_1_37_0_TypeInfo;
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                 *(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo);
            lVar10 = *(long *)puVar5;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar10);
              lVar10 = *(long *)puVar5;
            }
            lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
            if (lVar11 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02cd038c(lVar10);
                lVar10 = *(long *)puVar5;
              }
              uVar12 = **(undefined8 **)(lVar10 + 0xb8);
              lVar11 = thunk_FUN_02cea894(*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo);
              FUN_04a5701c(lVar11,uVar12,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo,0);
              *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = lVar11;
            }
            if (lVar8 != 0) {
              FUN_0320fcb4(lVar8,lVar11,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo);
              if (((*(long *)(param_1 + 0x10) != 0) &&
                  (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4), lVar8 != 0
                  )) && (lVar8 = FUN_0616a300(lVar8,0), lVar8 != 0)) {
                FUN_0616f94c(lVar8,0);
                if (((*(long *)(param_1 + 0x10) != 0) &&
                    (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4),
                    lVar8 != 0)) &&
                   ((lVar8 = FUN_0616a300(lVar8,0), lVar8 != 0 &&
                    (lVar8 = FUN_0616f774(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_47_0_TypeInfo,0),
                    lVar8 != 0)))) {
                  FUN_0616f94c(lVar8,0);
                  puVar5 = OVRPlugin_OVRP_1_127_0_TypeInfo;
                  if (*(long *)(param_1 + 0x10) != 0) {
                    lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                         *(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
                    puVar3 = OVRPlugin_OVRP_1_118_0_TypeInfo;
                    if (lVar8 != 0) {
                      lVar8 = FUN_032065d4(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
                      if ((lVar8 != 0) && (lVar8 = FUN_0616a300(lVar8,0), lVar8 != 0)) {
                        FUN_0616f94c(lVar8,0);
                        if ((*(long *)(param_1 + 0x10) != 0) &&
                           ((lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4),
                            lVar8 != 0 && (lVar8 = FUN_0616a930(lVar8,0,0), lVar8 != 0)))) {
                          FUN_0616f94c(lVar8,0);
                          if ((*(long *)(param_1 + 0x10) != 0) &&
                             (((lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5
                                                    ), lVar8 != 0 &&
                               (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)puVar3), lVar8 != 0)) &&
                              (lVar8 = FUN_0616a930(lVar8,0,0),
                              puVar6 = OVRPlugin_OVRP_1_129_0_TypeInfo, puVar2 = PTR_DAT_065c92b8,
                              puVar1 = PTR_DAT_065c89e8, lVar8 != 0)))) {
                            FUN_0616f94c(lVar8,0);
                            lVar8 = *(long *)(param_1 + 0x10);
                            plVar9 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,2);
                            uVar12 = *(undefined8 *)puVar6;
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_02cd038c(*(long *)puVar1);
                            }
                            lVar10 = FUN_04f3fb68(uVar12,0);
                            if (plVar9 != (long *)0x0) {
                              if ((lVar10 != 0) &&
                                 (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar9 + 0x40)
                                                             ), lVar11 == 0)) {
LAB_0619fd74:
                                uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                                FUN_02ce7b54(uVar12,0);
                              }
                              puVar1 = OVRPlugin_OVRP_1_32_0_TypeInfo;
                              if ((int)plVar9[3] != 0) {
                                plVar9[4] = lVar10;
                                lVar10 = FUN_04f3fb68(*(undefined8 *)puVar1,0);
                                if ((lVar10 != 0) &&
                                   (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)
                                                                        (*plVar9 + 0x40)),
                                   lVar11 == 0)) goto LAB_0619fd74;
                                if (1 < *(uint *)(plVar9 + 3)) {
                                  plVar9[5] = lVar10;
                                  if (((lVar8 != 0) &&
                                      (lVar8 = FUN_0617bc20(lVar8,plVar9,0), lVar8 != 0)) &&
                                     (lVar8 = FUN_0616a930(lVar8,0,0), lVar8 != 0)) {
                                    FUN_0616f94c(lVar8,0);
                                    if (((*(long *)(param_1 + 0x10) != 0) &&
                                        (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                              *(undefined8 *)puVar4), lVar8 != 0))
                                       && (lVar8 = FUN_0616a930(lVar8,0,0), lVar8 != 0)) {
                                      FUN_0616f974(lVar8,0);
                                      if (((*(long *)(param_1 + 0x10) != 0) &&
                                          (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                                *(undefined8 *)puVar5), lVar8 != 0))
                                         && (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)puVar3),
                                            lVar8 != 0)) {
                                        FUN_0616a930(lVar8,0,0);
                                        if ((*(long *)(param_1 + 0x10) != 0) &&
                                           (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                                 *(undefined8 *)puVar7),
                                           puVar4 = OVRPlugin_OVRP_1_48_0_TypeInfo, lVar8 != 0)) {
                                          lVar8 = FUN_0446d200(lVar8,*(undefined8 *)
                                                                      OVRPlugin_OVRP_1_48_0_TypeInfo
                                                               ,*(undefined8 *)
                                                                 OVRPlugin_OVRP_1_34_0_TypeInfo);
                                          puVar5 = OVRPlugin_OVRP_1_45_0_TypeInfo;
                                          if (lVar8 != 0) {
                                            FUN_04a4713c(lVar8,*(undefined8 *)
                                                                OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                         *(undefined8 *)
                                                          OVRPlugin_OVRP_1_38_0_TypeInfo);
                                            puVar7 = OVRPlugin_OVRP_1_35_0_TypeInfo;
                                            if (*(long *)(param_1 + 0x10) != 0) {
                                              lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10),
                                                                   *(undefined8 *)puVar5,
                                                                   *(undefined8 *)
                                                                    OVRPlugin_OVRP_1_35_0_TypeInfo);
                                              if (lVar8 != 0) {
                                                FUN_0616f860(lVar8,*(undefined8 *)puVar4,0);
                                                if ((*(long *)(param_1 + 0x10) != 0) &&
                                                   (lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10),
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  OVRPlugin_OVRP_1_50_0_TypeInfo,
                                                  *(undefined8 *)puVar7), lVar8 != 0)) {
                                                  FUN_0616f860(lVar8,*(undefined8 *)
                                                                      OVRPlugin_OVRP_1_49_0_TypeInfo
                                                               ,0);
                                                  if ((*(long *)(param_1 + 0x10) != 0) &&
                                                     (lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10)
                                                                           ,*(undefined8 *)
                                                                                                                                                          
                                                  OVRPlugin_OVRP_1_46_0_TypeInfo,
                                                  *(undefined8 *)puVar7), lVar8 != 0)) {
                                                    FUN_0616f860(lVar8,*(undefined8 *)
                                                                                                                                                
                                                  OVRPlugin_OVRP_1_44_0_TypeInfo,0);
                                                  FUN_0619fe8c(param_1);
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
                                  goto LAB_0619fd6c;
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_02ce7c84();
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
LAB_0619fd6c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


