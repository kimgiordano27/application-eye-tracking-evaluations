/*
FUNCTION_NAME: OVRTrackedKeyboard$$UpdatePresentation
ENTRY_POINT: 07a964a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 122
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRTrackedKeyboard__UpdatePresentation(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_09288e00;
  if ((DAT_0989745f & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0ea0);
    FUN_04077588(PTR_DAT_09288e00);
    DAT_0989745f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_09885867 == '\0') {
    FUN_04077588(PTR_DAT_09288e00);
    DAT_09885867 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_092f0ea0;
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    uVar3 = FUN_076d5104(0x1e0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar1);
    }
    OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(param_1,uVar3);
    return;
  }
  return;
}


