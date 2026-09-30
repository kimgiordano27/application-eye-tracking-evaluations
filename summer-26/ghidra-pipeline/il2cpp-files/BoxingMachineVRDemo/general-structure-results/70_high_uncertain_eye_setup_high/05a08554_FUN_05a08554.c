/*
FUNCTION_NAME: FUN_05a08554
ENTRY_POINT: 05a08554
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a08554(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__;
  puVar2 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  puVar1 = PTR_DAT_0675e1b8;
  if ((DAT_06b810ab & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06760eb0);
    FUN_02d6084c(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__);
    FUN_02d6084c(OVRPlugin_OVRP_1_88_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_added__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b810ab = 1;
  }
  uVar4 = FUN_0335b1b8(param_1,*(undefined8 *)puVar3);
  uVar5 = FUN_0335b1b8(param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_06767d28;
  uVar6 = FUN_0606f530(uVar5,0);
  puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_added__;
  puVar1 = PTR_DAT_06760eb0;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05a484b4(uVar5,0);
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    uVar7 = FUN_04f7d1b0(uVar5,param_1,*(undefined8 *)puVar3,0);
    uVar5 = UnityEngine_Rendering_Universal_ScriptableRenderer__RecordCustomRenderGraphPassesInEventRange
                      (uVar7,uVar5);
    FUN_0606c84c(param_1,uVar5,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05a484b4(uVar4,0);
  return;
}


