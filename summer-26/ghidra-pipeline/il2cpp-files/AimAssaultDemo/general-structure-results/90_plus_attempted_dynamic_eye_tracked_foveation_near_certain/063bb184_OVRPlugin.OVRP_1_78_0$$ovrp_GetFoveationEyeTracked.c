/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 063bb184
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x5e8);
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db75e8);
    FUN_0373b518(PTR_DAT_07db7318);
    *(undefined1 *)(unaff_x21 + 0x7dd) = 1;
  }
  lVar2 = FUN_03c6a848(param_7,*puVar3);
  puVar1 = PTR_DAT_07db7318;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xb8) = param_8;
    thunk_FUN_037aeb94((undefined8 *)(lVar2 + 0xb8),param_8);
    *(undefined1 *)(lVar2 + 0xc0) = 1;
    FUN_054d372c(param_2,param_3,param_4,param_5,param_6,lVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


