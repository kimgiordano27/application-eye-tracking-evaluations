/*
FUNCTION_NAME: FUN_061a0a84
ENTRY_POINT: 061a0a84
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_061a0a84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = OVRPlugin_OVRP_1_73_0_TypeInfo;
  if ((DAT_06a83d55 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_74_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_121_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_35_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_75_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_76_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_78_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_79_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_7_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_81_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_12_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_73_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_82_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_06a83d55 = 1;
  }
  FUN_036b6054(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar5 = FUN_033aebfc(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,
                         *(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo);
    puVar4 = OVRPlugin_OVRP_1_82_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_12_0_TypeInfo;
    if (lVar5 != 0) {
      FUN_0339769c(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
      FUN_036b6054(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
      FUN_036b60a0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar3,*(undefined8 *)puVar4);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      thunk_FUN_05ef22b8(uVar6,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_06179d78(*(long *)(param_1 + 0x10),uVar6,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_033b2a80(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_033b314c(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_81_0_TypeInfo);
            lVar5 = *(long *)(param_1 + 0x10);
            uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
            thunk_FUN_05ef22b8(uVar6,0);
            puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
            if (lVar5 != 0) {
              FUN_033aebfc(lVar5,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
              lVar5 = *(long *)(param_1 + 0x10);
              uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
              thunk_FUN_05ef22b8(uVar6,0);
              if (lVar5 != 0) {
                FUN_033aebfc(lVar5,uVar6,*(undefined8 *)puVar1);
                if (*(long *)(param_1 + 0x10) != 0) {
                  FUN_033b2c58(*(long *)(param_1 + 0x10),
                               *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
                  if (*(long *)(param_1 + 0x10) != 0) {
                    FUN_033b0770(*(long *)(param_1 + 0x10),
                                 *(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      uVar6 = FUN_0618a7f0(*(long *)(param_1 + 0x10),0,0);
                      if (*(long *)(param_1 + 0x10) != 0) {
                        FUN_033b113c(*(long *)(param_1 + 0x10),0,
                                     *(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo);
                        if (*(long *)(param_1 + 0x10) != 0) {
                          FUN_033b0c0c(*(long *)(param_1 + 0x10),uVar6,
                                       *(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo);
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


