/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 06941644
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerVibration(float param_1,float param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *in_x9;
  long *unaff_x19;
  float unaff_s10;
  
  param_1 = param_1 + (unaff_s10 - param_1) * param_2;
  (*in_x9)(param_1);
  *(float *)(unaff_x19 + 7) = param_1;
  if (param_1 < DAT_015c5994) {
    if (unaff_x19[6] == 0) goto LAB_06941604;
    uVar1 = FUN_07c35ac4(unaff_x19[6],0);
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*unaff_x19 + 0x328);
      goto LAB_0694168c;
    }
  }
  if (unaff_x19[6] != 0) {
    uVar1 = FUN_07c35ac4(unaff_x19[6],0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    puVar2 = (undefined8 *)(*unaff_x19 + 0x2e8);
LAB_0694168c:
                    /* WARNING: Could not recover jumptable at 0x069416b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)();
    return;
  }
LAB_06941604:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


