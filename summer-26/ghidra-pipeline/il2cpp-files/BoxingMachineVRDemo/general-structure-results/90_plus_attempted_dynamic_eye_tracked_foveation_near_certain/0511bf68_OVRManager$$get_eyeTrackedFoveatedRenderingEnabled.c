/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0511bf68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long *unaff_x20;
  
  plVar1 = unaff_x20;
  if (*(long *)(in_x10 + -8) != param_1) {
    plVar1 = (long *)0x0;
  }
  *(undefined8 *)(unaff_x19 + 0x30) = plVar1;
  if ((uint)*(byte *)(*unaff_x20 + 0x130) < (uint)in_x9) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + in_x9 * 8 + -8) != param_1) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x30),unaff_x20);
  uVar2 = FUN_0511d858();
  FUN_0511dc04();
  return uVar2;
}


