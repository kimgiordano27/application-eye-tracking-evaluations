/*
FUNCTION_NAME: FUN_028199e4
ENTRY_POINT: 028199e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_028199e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_83__;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
  ;
  if ((DAT_03788b98 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_83__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_TypeInfo
                      );
    DAT_03788b98 = 1;
  }
  local_40 = *(undefined4 *)(param_1 + 2);
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_50);
  FUN_01146218(uVar3,*(undefined8 *)puVar1);
  return;
}


