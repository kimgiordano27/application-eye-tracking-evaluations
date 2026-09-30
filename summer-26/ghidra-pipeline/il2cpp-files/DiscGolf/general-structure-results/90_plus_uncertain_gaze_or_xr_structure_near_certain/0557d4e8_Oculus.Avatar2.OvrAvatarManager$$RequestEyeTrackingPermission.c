/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$RequestEyeTrackingPermission
ENTRY_POINT: 0557d4e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Avatar2_OvrAvatarManager__RequestEyeTrackingPermission
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long in_stack_00000068;
  
  uVar1 = FUN_054600c0(param_1,param_2,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_0545f19c(uVar1,0);
  if (*(int *)(*(long *)StreamJsonParser_var + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05585324(uVar1,0);
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  FUN_05571cb8();
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000068) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


