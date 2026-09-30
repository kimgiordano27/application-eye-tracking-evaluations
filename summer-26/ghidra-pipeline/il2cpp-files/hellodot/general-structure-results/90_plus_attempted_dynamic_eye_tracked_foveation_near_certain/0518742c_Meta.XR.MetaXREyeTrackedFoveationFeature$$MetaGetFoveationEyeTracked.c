/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 0518742c
PROGRAM: hellodot-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 unaff_w20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_04a4f054(param_2,param_3,*param_1,0);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = param_2;
  uVar1 = FUN_033efc10();
  uVar2 = thunk_FUN_02cea894(*unaff_x25);
  UnityEngine_UIElements_BaseField<object>__AlignLabel(uVar2,unaff_w20,uVar1,*unaff_x24);
  return uVar2;
}


