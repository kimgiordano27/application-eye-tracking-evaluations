/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 01dbb20c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x01dbb270) */

undefined8 OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != 1) {
    uVar1 = FUN_01db86c8();
    if ((uVar1 & 1) == 0) {
      FUN_01db751c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar2;
  __cxa_end_catch();
  uVar1 = FUN_01db86c8();
  if ((uVar1 & 1) == 0) {
    FUN_01db751c();
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c(lVar3);
  }
  return 0;
}


