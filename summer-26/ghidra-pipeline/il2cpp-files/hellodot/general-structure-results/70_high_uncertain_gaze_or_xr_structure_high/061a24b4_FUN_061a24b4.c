/*
FUNCTION_NAME: FUN_061a24b4
ENTRY_POINT: 061a24b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_061a24b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_065dc880;
  if ((DAT_06a83d77 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Locomotion_LocomotionGate_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Locomotion_LocomotionGate_GateSection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_TrackingConfidence_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_UnityOpenXR_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    DAT_06a83d77 = 1;
  }
  puVar2 = Oculus_Interaction_Locomotion_LocomotionGate_GateSection_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar3 = FUN_0353b038(param_1,*(undefined8 *)puVar2);
  puVar2 = OVRPlugin_TrackingConfidence_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_0353b038(param_1,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_0353b038(param_1,*(undefined8 *)
                                    Oculus_Interaction_Locomotion_LocomotionGate_<>c_TypeInfo);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_0353b338(param_1,*(undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo);
        return uVar4;
      }
    }
  }
  return 1;
}


