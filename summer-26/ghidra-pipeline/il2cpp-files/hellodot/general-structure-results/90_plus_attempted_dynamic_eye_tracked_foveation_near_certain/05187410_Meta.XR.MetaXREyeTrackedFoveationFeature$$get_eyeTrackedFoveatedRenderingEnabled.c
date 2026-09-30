/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05187410
PROGRAM: hellodot-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled
          (undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x9;
  undefined4 unaff_w20;
  undefined8 uVar2;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  uVar2 = *param_1;
  uVar1 = thunk_FUN_02cea894(**(undefined8 **)(in_x9 + 0x98));
  FUN_04a4f054(uVar1,uVar2,*(undefined8 *)PTR_DAT_066080a8,0);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = uVar1;
  uVar1 = FUN_033efc10();
  uVar2 = thunk_FUN_02cea894(*unaff_x25);
  UnityEngine_UIElements_BaseField<object>__AlignLabel(uVar2,unaff_w20,uVar1,*unaff_x24);
  return uVar2;
}


