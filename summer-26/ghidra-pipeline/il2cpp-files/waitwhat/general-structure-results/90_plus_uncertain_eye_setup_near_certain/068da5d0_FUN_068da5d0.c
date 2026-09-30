/*
FUNCTION_NAME: FUN_068da5d0
ENTRY_POINT: 068da5d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068da5d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((DAT_075592a6 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_RectField_UxmlFactory_TypeInfo);
    FUN_03188a78(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    DAT_075592a6 = 1;
  }
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo;
  if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((*(int *)(*(long *)(param_1 + 0xf0) + 0x20) == 1) && (*(long *)(param_1 + 0x80) != 0)) {
    FUN_04cd85e8(*(long *)(param_1 + 0x80),param_2,
                 *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo)
    ;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_04cd85e8(*(long *)(param_1 + 0x90),param_2,*(undefined8 *)puVar1);
    return;
  }
  return;
}


