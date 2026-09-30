/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 03699548
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Utility_OculusProvider_<>c__DisplayClass8_0_<GetLeaderboardFriends>b__1__;
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
  ;
  if ((DAT_04833f0f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(
                      Method_Utility_OculusProvider_<>c__DisplayClass8_0_<GetLeaderboardFriends>b__1__
                      );
    DAT_04833f0f = 1;
  }
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034f6024(uVar3,param_1,*(undefined8 *)puVar2,0);
  FUN_035fd964(param_1,param_1 + 0x110,uVar3,0);
  FUN_035fd9d8(param_1,param_1 + 0x110,0);
  return;
}


