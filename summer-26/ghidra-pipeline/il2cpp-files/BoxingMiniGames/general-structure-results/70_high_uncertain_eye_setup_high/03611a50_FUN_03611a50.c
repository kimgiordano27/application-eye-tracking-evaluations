/*
FUNCTION_NAME: FUN_03611a50
ENTRY_POINT: 03611a50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03611a50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = OVRRaycaster_<>c_TypeInfo;
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  if ((DAT_07eebe23 & 1) == 0) {
    FUN_03642964(OVRRaycaster_<>c_TypeInfo);
    FUN_03642964(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    DAT_07eebe23 = 1;
  }
  uVar3 = FUN_03642d0c("Cannot marshal field \'%s\' of type \'%s\': Reference type field marshaling is not supported."
                       ,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,0);
}


