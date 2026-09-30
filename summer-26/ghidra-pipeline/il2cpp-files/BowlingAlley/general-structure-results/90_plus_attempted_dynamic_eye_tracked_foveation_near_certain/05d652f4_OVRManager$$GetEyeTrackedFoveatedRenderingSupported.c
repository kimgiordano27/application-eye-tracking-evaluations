/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05d652f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_072b1150;
  puVar1 = PTR_DAT_072b1148;
  if ((DAT_076d861e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1150);
    thunk_FUN_032e1da0(PTR_DAT_072b1148);
    DAT_076d861e = 1;
  }
  uVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_041e256c(uVar3,param_2,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x40),uVar3);
  return;
}


