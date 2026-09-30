/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 01f7ce3c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(ulong param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  
  while( true ) {
    lVar1 = FUN_01fb0288(param_1,0);
    *(undefined8 *)(unaff_x23 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(unaff_x20,0);
    *(undefined8 *)(unaff_x24 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(unaff_x20,0);
    *(undefined8 *)(unaff_x25 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(unaff_x20,0);
    *(undefined8 *)(unaff_x26 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(unaff_x20,0);
    *(undefined8 *)(unaff_x27 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(unaff_x20,0);
    param_1 = unaff_x20 - 8;
    *(undefined8 *)(unaff_x28 + lVar1 * 8) = 0;
    if (param_1 < 8) break;
    lVar1 = FUN_01fb0288(param_1,0);
    *(undefined8 *)(unaff_x21 + lVar1 * 8) = 0;
    lVar1 = FUN_01fb0288(param_1,0);
    *(undefined8 *)(unaff_x22 + lVar1 * 8) = 0;
    unaff_x20 = param_1;
  }
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        return;
      }
      goto LAB_01f7cf00;
    }
  }
  else {
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    lVar1 = FUN_01fb0288(param_1,0);
    unaff_x19[lVar1 + -3] = 0;
    lVar1 = FUN_01fb0288(param_1,0);
    unaff_x19[lVar1 + -2] = 0;
  }
  unaff_x19[1] = 0;
  lVar1 = FUN_01fb0288(param_1,0);
  unaff_x19[lVar1 + -1] = 0;
LAB_01f7cf00:
  *unaff_x19 = 0;
  return;
}


