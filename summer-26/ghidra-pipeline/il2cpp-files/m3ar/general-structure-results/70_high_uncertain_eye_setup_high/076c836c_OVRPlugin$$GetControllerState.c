/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 076c836c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(long param_1)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    fVar2 = (float)(**(code **)(param_1 + 0x18))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    if (*(float *)(unaff_x19 + 0x48) <= fVar2 - *(float *)(unaff_x19 + 0x74)) {
      *(undefined1 *)(unaff_x19 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x7c);
    }
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 != 0) {
      uVar3 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      *(undefined4 *)(unaff_x19 + 0x78) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


