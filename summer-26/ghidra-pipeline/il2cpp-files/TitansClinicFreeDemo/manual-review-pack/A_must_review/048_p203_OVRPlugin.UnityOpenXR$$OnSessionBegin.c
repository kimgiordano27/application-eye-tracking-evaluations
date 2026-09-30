/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 01f93f30
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool in_CY;
  long in_x9;
  undefined8 unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  uint unaff_w29;
  long in_stack_00000040;
  
  if ((in_CY) && (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_3)) {
    FUN_01f89ca0(param_2,unaff_w23,param_4,0,*(int *)(param_2 + 0x18) - unaff_w23,0);
    *unaff_x28 = unaff_x22;
    thunk_FUN_01286abc();
    if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
      return *unaff_x26;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(param_4);
}


