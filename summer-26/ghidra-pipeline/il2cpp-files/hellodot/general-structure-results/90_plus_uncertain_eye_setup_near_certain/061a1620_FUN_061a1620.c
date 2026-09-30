/*
FUNCTION_NAME: FUN_061a1620
ENTRY_POINT: 061a1620
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_061a1620(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_065ca370;
  if ((DAT_06a83d65 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_92_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_93_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_94_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_95_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca370);
    DAT_06a83d65 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_05ef6494(lVar2,uVar4,0);
  if (lVar2 != 0) {
    lVar3 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar2,0);
    if ((*(long *)(param_1 + 0x10) != 0) && (lVar3 != 0)) {
      FUN_05f02644(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78),0,0);
      lVar3 = *(long *)(param_1 + 0x10);
      uVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar2,0);
      if (lVar3 != 0) {
        FUN_0617ce88(lVar3,uVar4,0);
        if ((((*(long *)(param_1 + 0x10) != 0) &&
             (lVar3 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                   *(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo), lVar3 != 0)) &&
            (lVar3 = FUN_032065d4(lVar3,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo), lVar3 != 0))
           && (lVar3 = FUN_0616f92c(lVar3,0), lVar3 != 0)) {
          FUN_03585700(lVar3,lVar2,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_033acf08(*(long *)(param_1 + 0x10),0x80000000,
                         *(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


