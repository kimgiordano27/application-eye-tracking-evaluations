/*
FUNCTION_NAME: FUN_06006ca4
ENTRY_POINT: 06006ca4
PROGRAM: hellodot-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06006ca4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = OVRColocationSession_TypeInfo;
  if ((DAT_06a82561 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRControllerTest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRDisplay_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRDynamicObject_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRExternalComposition_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVREyeGaze_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRColocationSession_TypeInfo);
    DAT_06a82561 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)OVRDisplay_TypeInfo);
    FUN_04a48c38(lVar4,uVar5,*(undefined8 *)OVRExternalComposition_TypeInfo,0);
    lVar3 = *(long *)puVar1;
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = OVRDynamicObject_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)OVRControllerTest_TypeInfo);
    FUN_047b3b70(lVar6,uVar5,*(undefined8 *)OVREyeGaze_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
  }
  FUN_03804200(param_1,lVar4,lVar6,10000,*(undefined8 *)puVar2);
  return;
}


