/*
FUNCTION_NAME: FUN_061a1b78
ENTRY_POINT: 061a1b78
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_061a1b78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06a83d68 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_96_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_97_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_PoseStatef_TypeInfo);
    DAT_06a83d68 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_97_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar3 = *(long *)OVRPlugin_OVRP_1_96_0_TypeInfo;
    lVar1 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar1 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978();
    }
    if (**(long **)(lVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = FUN_04002edc(**(long **)(lVar1 + 0xb8),*(undefined8 *)OVRPlugin_PoseStatef_TypeInfo);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return;
}


