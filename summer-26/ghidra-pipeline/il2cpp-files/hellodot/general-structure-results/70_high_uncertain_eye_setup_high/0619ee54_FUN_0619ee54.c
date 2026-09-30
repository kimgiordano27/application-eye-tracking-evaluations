/*
FUNCTION_NAME: FUN_0619ee54
ENTRY_POINT: 0619ee54
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


void FUN_0619ee54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_06a83d4f & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_115_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_116_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_117_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_118_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_119_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_11_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_120_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_121_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_122_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_123_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_124_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_125_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_126_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_127_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_128_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_129_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_12_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_15_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_16_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_17_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_18_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_19_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_1_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_21_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_28_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_29_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_2_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_30_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_06a83d4f = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
    if (lVar7 != 0) {
      FUN_0616f974(lVar7,0);
      puVar5 = OVRPlugin_OVRP_1_127_0_TypeInfo;
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),
                             *(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
        puVar3 = OVRPlugin_OVRP_1_118_0_TypeInfo;
        if (lVar7 != 0) {
          lVar7 = FUN_032065d4(lVar7,*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
          puVar6 = OVRPlugin_OVRP_1_29_0_TypeInfo;
          puVar2 = PTR_DAT_065c92b8;
          puVar1 = PTR_DAT_065c89e8;
          if (lVar7 != 0) {
            FUN_0616f974(lVar7,0);
            lVar7 = *(long *)(param_1 + 0x10);
            plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,1);
            uVar11 = *(undefined8 *)puVar6;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02cd038c(*(long *)puVar1);
            }
            lVar9 = FUN_04f3fb68(uVar11,0);
            if (plVar8 != (long *)0x0) {
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_0619f70c;
              if ((int)plVar8[3] == 0) goto LAB_0619f708;
              plVar8[4] = lVar9;
              puVar1 = OVRPlugin_OVRP_1_129_0_TypeInfo;
              if (lVar7 != 0) {
                lVar7 = FUN_0617bc20(lVar7,plVar8,0);
                plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,1);
                lVar9 = FUN_04f3fb68(*(undefined8 *)puVar1,0);
                if (plVar8 != (long *)0x0) {
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_0619f70c;
                  if ((int)plVar8[3] == 0) goto LAB_0619f708;
                  plVar8[4] = lVar9;
                  if ((lVar7 != 0) && (lVar7 = thunk_FUN_06163740(lVar7,plVar8,0), lVar7 != 0)) {
                    FUN_0616f974(lVar7,0);
                    if ((*(long *)(param_1 + 0x10) != 0) &&
                       (lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4),
                       lVar7 != 0)) {
                      FUN_0616f94c(lVar7,0);
                      if (((*(long *)(param_1 + 0x10) != 0) &&
                          (lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5),
                          lVar7 != 0)) &&
                         (lVar7 = FUN_032065d4(lVar7,*(undefined8 *)puVar3), lVar7 != 0)) {
                        FUN_0616f94c(lVar7,0);
                        lVar9 = *(long *)(param_1 + 0x10);
                        plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,3);
                        lVar7 = FUN_04f3fb68(*(undefined8 *)puVar1,0);
                        if (plVar8 != (long *)0x0) {
                          if ((lVar7 != 0) &&
                             (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) {
LAB_0619f70c:
                            uVar11 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                            FUN_02ce7b54(uVar11,0);
                          }
                          if ((int)plVar8[3] != 0) {
                            plVar8[4] = lVar7;
                            lVar7 = FUN_04f3fb68(*(undefined8 *)puVar6,0);
                            if ((lVar7 != 0) &&
                               (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_0619f70c;
                            puVar3 = OVRPlugin_OVRP_1_28_0_TypeInfo;
                            if (1 < *(uint *)(plVar8 + 3)) {
                              plVar8[5] = lVar7;
                              lVar7 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                              if ((lVar7 != 0) &&
                                 (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_0619f70c;
                              if (2 < *(uint *)(plVar8 + 3)) {
                                plVar8[6] = lVar7;
                                if (((lVar9 != 0) &&
                                    (lVar7 = FUN_0617bc20(lVar9,plVar8,0), lVar7 != 0)) &&
                                   (lVar7 = FUN_03397360(lVar7,*(undefined8 *)
                                                                OVRPlugin_OVRP_1_119_0_TypeInfo),
                                   lVar7 != 0)) {
                                  FUN_0616f94c(lVar7,0);
                                  if ((*(long *)(param_1 + 0x10) != 0) &&
                                     (lVar7 = FUN_033af2c8(*(long *)(param_1 + 0x10),
                                                           *(undefined8 *)
                                                            OVRPlugin_OVRP_1_123_0_TypeInfo),
                                     lVar7 != 0)) {
                                    FUN_0616f94c(lVar7,0);
                                    if ((*(long *)(param_1 + 0x10) != 0) &&
                                       (lVar7 = FUN_033af3b8(*(long *)(param_1 + 0x10),
                                                             *(undefined8 *)
                                                              OVRPlugin_OVRP_1_124_0_TypeInfo),
                                       lVar7 != 0)) {
                                      FUN_0616f94c(lVar7,0);
                                      puVar3 = OVRPlugin_OVRP_1_12_0_TypeInfo;
                                      if (*(long *)(param_1 + 0x10) != 0) {
                                        lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                             *(undefined8 *)puVar4);
                                        uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                                        thunk_FUN_05ef22b8(uVar11,0);
                                        if (lVar7 != 0) {
                                          FUN_04a4713c(lVar7,uVar11,
                                                       *(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo
                                                      );
                                          lVar7 = *(long *)(param_1 + 0x10);
                                          uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                                          thunk_FUN_05ef22b8(uVar11,0);
                                          puVar1 = PTR_DAT_065c8a10;
                                          if (lVar7 != 0) {
                                            FUN_033aebfc(lVar7,uVar11,
                                                         *(undefined8 *)
                                                          OVRPlugin_OVRP_1_121_0_TypeInfo);
                                            lVar9 = *(long *)(param_1 + 0x10);
                                            plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar1,2);
                                            lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                                            thunk_FUN_05ef22b8(lVar7,0);
                                            if (plVar8 != (long *)0x0) {
                                              if ((lVar7 != 0) &&
                                                 (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)
                                                                                     (*plVar8 + 0x40
                                                                                     )), lVar10 == 0
                                                 )) goto LAB_0619f70c;
                                              puVar3 = OVRPlugin_OVRP_1_115_0_TypeInfo;
                                              if ((int)plVar8[3] != 0) {
                                                plVar8[4] = lVar7;
                                                lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                                                FUN_04f7383c(lVar7,0);
                                                if ((lVar7 != 0) &&
                                                   (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                   lVar10 == 0)) goto LAB_0619f70c;
                                                if (1 < *(uint *)(plVar8 + 3)) {
                                                  plVar8[5] = lVar7;
                                                  if (lVar9 != 0) {
                                                    FUN_0618d014(lVar9,plVar8,0);
                                                    if ((*(long *)(param_1 + 0x10) != 0) &&
                                                       (lVar7 = FUN_033ac5dc(*(long *)(param_1 +
                                                                                      0x10),
                                                                             *(undefined8 *)
                                                                                                                                                            
                                                  OVRPlugin_OVRP_1_128_0_TypeInfo), lVar7 != 0)) {
                                                    FUN_04a46cac(lVar7,10,*(undefined8 *)
                                                                                                                                                      
                                                  OVRPlugin_OVRP_1_17_0_TypeInfo);
                                                  if ((*(long *)(param_1 + 0x10) != 0) &&
                                                     (lVar7 = FUN_033ac590(*(long *)(param_1 + 0x10)
                                                                           ,*(undefined8 *)
                                                                                                                                                          
                                                  OVRPlugin_OVRP_1_125_0_TypeInfo), lVar7 != 0)) {
                                                    FUN_04a46818(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  OVRPlugin_OVRP_1_15_0_TypeInfo);
                                                  puVar3 = OVRPlugin_OVRP_1_122_0_TypeInfo;
                                                  if (*(long *)(param_1 + 0x10) != 0) {
                                                    OVRTask__Get<OVRResult<object,_Int32Enum>>
                                                              (*(long *)(param_1 + 0x10),10,
                                                               *(undefined8 *)
                                                                OVRPlugin_OVRP_1_122_0_TypeInfo);
                                                    if (*(long *)(param_1 + 0x10) != 0) {
                                                      FUN_033ae828(*(long *)(param_1 + 0x10),0,
                                                                   *(undefined8 *)
                                                                    OVRPlugin_OVRP_1_120_0_TypeInfo)
                                                      ;
                                                      if ((*(long *)(param_1 + 0x10) != 0) &&
                                                         (lVar7 = 
                                                  OVRTask__Get<OVRResult<object,_Int32Enum>>
                                                            (*(long *)(param_1 + 0x10),10,
                                                             *(undefined8 *)puVar3), lVar7 != 0)) {
                                                    FUN_0339769c(lVar7,*(undefined8 *)
                                                                                                                                                
                                                  OVRPlugin_OVRP_1_11_0_TypeInfo);
                                                  puVar1 = OVRPlugin_OVRP_1_1_0_TypeInfo;
                                                  puVar3 = OVRPlugin_OVRP_1_116_0_TypeInfo;
                                                  if (*(long *)(param_1 + 0x10) != 0) {
                                                    lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                                         *(undefined8 *)puVar4);
                                                    uVar11 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_04a5701c(uVar11,param_1,
                                                                 *(undefined8 *)puVar3,0);
                                                    puVar3 = OVRPlugin_OVRP_1_18_0_TypeInfo;
                                                    if (lVar7 != 0) {
                                                      FUN_04a47068(lVar7,uVar11,
                                                                   *(undefined8 *)
                                                                    OVRPlugin_OVRP_1_18_0_TypeInfo);
                                                      puVar6 = OVRPlugin_OVRP_1_21_0_TypeInfo;
                                                      puVar2 = OVRPlugin_OVRP_1_117_0_TypeInfo;
                                                      if (*(long *)(param_1 + 0x10) != 0) {
                                                        lVar7 = FUN_033ac628(*(long *)(param_1 +
                                                                                      0x10),
                                                                             *(undefined8 *)puVar5);
                                                        uVar11 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                     puVar6);
                                                        FUN_04a5701c(uVar11,param_1,
                                                                     *(undefined8 *)puVar2,0);
                                                        if (lVar7 != 0) {
                                                          FUN_04a47068(lVar7,uVar11,
                                                                       *(undefined8 *)
                                                                                                                                                
                                                  OVRPlugin_OVRP_1_19_0_TypeInfo);
                                                  puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                                  if (*(long *)(param_1 + 0x10) != 0) {
                                                    lVar7 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                                         *(undefined8 *)puVar4);
                                                    lVar9 = *(long *)puVar5;
                                                    if (*(int *)(lVar9 + 0xe0) == 0) {
                                                      thunk_FUN_02cd038c(lVar9);
                                                      lVar9 = *(long *)puVar5;
                                                    }
                                                    lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
                                                    if (lVar10 == 0) {
                                                      if (*(int *)(lVar9 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c(lVar9);
                                                        lVar9 = *(long *)puVar5;
                                                      }
                                                      uVar11 = **(undefined8 **)(lVar9 + 0xb8);
                                                      lVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                   puVar1);
                                                      FUN_04a5701c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    OVRPlugin_OVRP_1_2_0_TypeInfo,0)
                                                      ;
                                                      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                               8) = lVar10;
                                                    }
                                                    if (lVar7 != 0) {
                                                      FUN_04a47068(lVar7,lVar10,
                                                                   *(undefined8 *)puVar3);
                                                      if (*(long *)(param_1 + 0x10) != 0) {
                                                        lVar7 = FUN_033ac628(*(long *)(param_1 +
                                                                                      0x10),
                                                                             *(undefined8 *)puVar4);
                                                        lVar9 = *(long *)puVar5;
                                                        if (*(int *)(lVar9 + 0xe0) == 0) {
                                                          thunk_FUN_02cd038c(lVar9);
                                                          lVar9 = *(long *)puVar5;
                                                        }
                                                        lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) +
                                                                          0x10);
                                                        if (lVar10 == 0) {
                                                          if (*(int *)(lVar9 + 0xe0) == 0) {
                                                            thunk_FUN_02cd038c(lVar9);
                                                            lVar9 = *(long *)puVar5;
                                                          }
                                                          uVar11 = **(undefined8 **)(lVar9 + 0xb8);
                                                          lVar10 = thunk_FUN_02cea894(*(undefined8 *
                                                                                       )puVar1);
                                                          FUN_04a5701c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                                                                                                
                                                  OVRPlugin_OVRP_1_30_0_TypeInfo,0);
                                                  *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10
                                                           ) = lVar10;
                                                  }
                                                  if (lVar7 != 0) {
                                                    FUN_04a47068(lVar7,lVar10,*(undefined8 *)puVar3)
                                                    ;
                                                    FUN_0619f728(param_1);
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
                                                  goto LAB_0619f704;
                                                }
                                              }
                                              goto LAB_0619f708;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_0619f704;
                              }
                            }
                          }
LAB_0619f708:
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
LAB_0619f704:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


