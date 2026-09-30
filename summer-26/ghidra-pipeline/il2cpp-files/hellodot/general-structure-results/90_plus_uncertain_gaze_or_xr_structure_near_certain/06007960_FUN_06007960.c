/*
FUNCTION_NAME: FUN_06007960
ENTRY_POINT: 06007960
PROGRAM: hellodot-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06007960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  puVar10 = OVRPlatformMenu_TypeInfo;
  puVar9 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  puVar8 = OVRPermissionsRequester_TypeInfo;
  puVar7 = OVRPassthroughLayer_TypeInfo;
  puVar6 = OVRPassthroughColorLut_TypeInfo;
  puVar5 = OVROverlayCanvasSettings_TypeInfo;
  puVar4 = OVROverlayCanvas_TypeInfo;
  puVar3 = OVROverlay_TypeInfo;
  puVar2 = System_Linq_Expressions_Interpreter_Interpreter_TypeInfo;
  puVar1 = PTR_DAT_065c8998;
  if ((DAT_06a8256d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVROverlayCanvas_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVROverlay_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_Interpreter_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de650);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPose_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRProfile_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlatformMenu_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum(OVROverlayCanvasSettings_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPassthroughLayer_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPermissionsRequester_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPassthroughColorLut_TypeInfo);
    DAT_06a8256d = 1;
  }
  puVar11 = UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
  uVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_03802f28(uVar13,*(undefined8 *)puVar4);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar13;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = 0;
  uVar12 = FUN_05ec177c(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar12;
  uVar12 = FUN_05ec177c(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar12;
  uVar12 = FUN_05ec177c(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar12;
  uVar12 = FUN_05ec177c(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar12;
  uVar13 = FUN_05ea9644(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar13;
  uVar13 = FUN_05ea9644(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar13;
  uVar13 = FUN_05ea9644(*(undefined8 *)OVRPose_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar13;
  uVar13 = FUN_05ea9644(*(undefined8 *)Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = uVar13;
  uVar13 = FUN_05ea9644(*(undefined8 *)OVRProfile_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = uVar13;
  uVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04e9e238(uVar13,0,*(undefined8 *)OVRPlugin_TypeInfo,0);
  if (*(int *)(*(long *)PTR_DAT_065de650 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05ff8ae8(uVar13,0);
  uVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04e9e238(uVar13,0,*(undefined8 *)puVar11,0);
  FUN_05ff8ca0(uVar13,0);
  return;
}


