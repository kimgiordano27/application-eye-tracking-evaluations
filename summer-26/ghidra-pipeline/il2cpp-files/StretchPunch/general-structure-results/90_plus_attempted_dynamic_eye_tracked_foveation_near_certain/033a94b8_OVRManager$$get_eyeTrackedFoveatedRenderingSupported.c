/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 033a94b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


int OVRManager__get_eyeTrackedFoveatedRenderingSupported(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_044a689a & 1) == 0) {
    FUN_01d7d918(StringLiteral_513);
    DAT_044a689a = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)StringLiteral_513) {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar2 = thunk_FUN_01de27b8();
      uVar3 = thunk_FUN_01dd295c(StringLiteral_8465);
      FUN_0328dba4(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01dd295c(StringLiteral_8466);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar2,uVar3);
    }
    plVar1 = (long *)thunk_FUN_01de290c(param_2);
    if (*param_1 <= *plVar1) {
      return -(uint)(*param_1 < *plVar1);
    }
  }
  return 1;
}


