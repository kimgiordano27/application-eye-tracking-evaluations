/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 01a1e7e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01a1e830) */

bool OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  byte bVar1;
  bool in_ZR;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  uint unaff_w22;
  undefined8 *unaff_x23;
  float fVar4;
  undefined8 in_stack_00000038;
  
  if (!in_ZR) {
    FUN_012b8948(&stack0x00000020,*unaff_x23);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_012b8948(&stack0x00000020,*unaff_x23);
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),(long)&stack0x00000038 + 4,
               *(undefined8 *)(lVar3 + 0x28));
    bVar1 = *(byte *)(unaff_x19 + 0x59);
    if (unaff_w22 == bVar1) {
      fVar4 = *(float *)(unaff_x19 + 0x5c);
    }
    else {
      *(float *)(unaff_x19 + 0x5c) = in_stack_00000038._4_4_;
      fVar4 = in_stack_00000038._4_4_;
    }
    if (*(float *)(unaff_x19 + 0x40) <= in_stack_00000038._4_4_ - fVar4) {
      *(byte *)(unaff_x19 + 0x58) = bVar1;
    }
    else {
      bVar1 = *(byte *)(unaff_x19 + 0x58);
    }
    return bVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00dbe778(lVar3);
}


