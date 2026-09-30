/*
FUNCTION_NAME: FUN_06b516c0
ENTRY_POINT: 06b516c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 152
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


bool FUN_06b516c0(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_076e3948 == (code *)0x0) {
    local_18 = 0;
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
    local_30 = "OculusFoveation_HasRequestedEyeTrackingPermissions";
    uStack_28 = 0x32;
    local_20 = DAT_0139df28;
    local_14 = 0;
    DAT_076e3948 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                     (&local_40);
  }
  cVar1 = (*DAT_076e3948)();
  return cVar1 != '\0';
}


