/*
FUNCTION_NAME: FUN_0401ea30
ENTRY_POINT: 0401ea30
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 127
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering
*/


bool FUN_0401ea30(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_049236c8 == (code *)0x0) {
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
    local_30 = "OculusFoveation_GetHasEyeTrackingPermissions";
    uStack_28 = 0x2c;
    local_20 = DAT_00c57ec0;
    local_18 = 0;
    local_14 = 0;
    DAT_049236c8 = (code *)thunk_FUN_02094a00(&local_40);
  }
  cVar1 = (*DAT_049236c8)();
  return cVar1 != '\0';
}


