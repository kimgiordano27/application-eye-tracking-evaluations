/*
FUNCTION_NAME: FUN_0619b96c
ENTRY_POINT: 0619b96c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_0619b96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = OVRInput_OVRControllerHands_TypeInfo;
  if ((DAT_06a83d22 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerLHand_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerLTouch_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerRHand_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerRTouch_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerTouch_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_CompositionMethod_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_EventListener_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_MrcCameraType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRInput_OVRControllerHands_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_PassthroughCapabilities_TypeInfo);
    DAT_06a83d22 = 1;
  }
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar5,0);
  puVar4 = OVRManager_PassthroughCapabilities_TypeInfo;
  puVar3 = OVRManager_MrcCameraType_TypeInfo;
  puVar2 = OVRInput_OVRControllerTouch_TypeInfo;
  puVar1 = OVRInput_OVRControllerLTouch_TypeInfo;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    FUN_04f7383c(param_1,0);
    *(long *)(lVar5 + 0x10) = param_1;
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_04a586d0(uVar6,lVar5,*(undefined8 *)puVar3,0);
    uVar6 = FUN_033eca20(param_2,uVar6,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar1 = OVRInput_OVRControllerLHand_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02cea894(*(undefined8 *)OVRManager_<>c_TypeInfo);
      FUN_04a5f114(lVar7,uVar8,*(undefined8 *)OVRManager_CompositionMethod_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar7;
    }
    uVar6 = FUN_033e41d8(uVar6,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar2 = OVRInput_OVRControllerRTouch_TypeInfo;
    puVar1 = OVRInput_OVRControllerRHand_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                  UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo);
      FUN_04a5f2f4(lVar7,uVar8,*(undefined8 *)OVRManager_EventListener_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar7;
    }
    uVar6 = FUN_033ef700(uVar6,lVar7,*(undefined8 *)puVar1);
    uVar6 = FUN_033fb070(uVar6,*(undefined8 *)puVar2);
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


