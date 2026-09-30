/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 01a1e710
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  uint unaff_w22;
  float fVar3;
  undefined8 in_stack_00000038;
  
  FUN_012b8948(&stack0x00000020,*unaff_x21);
  lVar2 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),(long)&stack0x00000038 + 4,
               *(undefined8 *)(lVar2 + 0x28));
    bVar1 = *(byte *)(unaff_x19 + 0x59);
    if (unaff_w22 == bVar1) {
      fVar3 = *(float *)(unaff_x19 + 0x5c);
    }
    else {
      *(float *)(unaff_x19 + 0x5c) = in_stack_00000038._4_4_;
      fVar3 = in_stack_00000038._4_4_;
    }
    if (*(float *)(unaff_x19 + 0x40) <= in_stack_00000038._4_4_ - fVar3) {
      *(byte *)(unaff_x19 + 0x58) = bVar1;
    }
    else {
      bVar1 = *(byte *)(unaff_x19 + 0x58);
    }
    return bVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


