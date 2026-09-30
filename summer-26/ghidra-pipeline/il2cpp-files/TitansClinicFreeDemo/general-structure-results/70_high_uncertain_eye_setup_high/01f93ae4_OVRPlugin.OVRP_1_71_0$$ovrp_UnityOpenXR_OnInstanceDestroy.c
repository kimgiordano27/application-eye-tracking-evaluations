/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceDestroy
ENTRY_POINT: 01f93ae4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceDestroy(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x28;
  
  if ((param_1 != 0) && (lVar1 = thunk_FUN_0124baac(), lVar1 == 0)) {
    uVar2 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar2,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x21;
    thunk_FUN_01286abc();
    *unaff_x28 = unaff_x22;
    thunk_FUN_01286abc();
    if (*(int *)(unaff_x24 + 0x18) != 0) {
      return *unaff_x26;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


