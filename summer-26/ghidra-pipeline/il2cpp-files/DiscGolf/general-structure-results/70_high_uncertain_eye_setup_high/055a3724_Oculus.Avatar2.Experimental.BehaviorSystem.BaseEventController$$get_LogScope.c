/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.BehaviorSystem.BaseEventController$$get_LogScope
ENTRY_POINT: 055a3724
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Avatar2_Experimental_BehaviorSystem_BaseEventController__get_LogScope(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
  if (puVar2[6] == 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar3 = *puVar2;
    uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                              );
    FUN_03b78798(uVar1,uVar3,
                 *(undefined8 *)
                  UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *puVar2 = uVar1;
    LeanTween__value(puVar2,uVar1);
  }
  uVar1 = FUN_0360a08c();
  FUN_03615f24(uVar1,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
  return;
}


