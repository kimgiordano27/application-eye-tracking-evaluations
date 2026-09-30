/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$Start
ENTRY_POINT: 04c68b94
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__Start(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_065cca98;
  if ((DAT_06a6da2a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7278);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e78d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cca98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dfdf0);
    DAT_06a6da2a = 1;
  }
  puVar3 = PTR_DAT_065e78d0;
  puVar2 = PTR_DAT_065dfdf0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f7383c(param_1,0);
  uVar4 = FUN_03428244(param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  puVar1 = PTR_DAT_065e7278;
  if (param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065e7278 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6dac3 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7278);
      DAT_06a6dac3 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar1;
    }
    param_3 = **(long **)(lVar5 + 0xb8);
  }
  *(long *)(param_1 + 0x18) = param_3;
  puVar1 = PTR_DAT_065e2e70;
  if (param_4 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065e2e70 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6dac4 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e70);
      DAT_06a6dac4 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar1;
    }
    param_4 = **(long **)(lVar5 + 0xb8);
  }
  *(long *)(param_1 + 0x20) = param_4;
  return;
}


