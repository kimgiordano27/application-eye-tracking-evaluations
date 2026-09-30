/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 076c9c18
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


void OVRPlugin__GetHandNodePoseStateLatency(code *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = (*param_1)();
  *(undefined4 *)(unaff_x19 + 0x84) = uVar2;
  lVar1 = *(long *)(unaff_x19 + 0x78);
  if (lVar1 != 0) {
    fVar3 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    if (*(float *)(unaff_x19 + 0x60) <= fVar3 - *(float *)(unaff_x19 + 0x84)) {
      *(undefined1 *)(unaff_x19 + 0x8d) = *(undefined1 *)(unaff_x19 + 0x8c);
    }
    lVar1 = *(long *)(unaff_x19 + 0x78);
    if (lVar1 != 0) {
      uVar2 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      *(undefined4 *)(unaff_x19 + 0x88) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


