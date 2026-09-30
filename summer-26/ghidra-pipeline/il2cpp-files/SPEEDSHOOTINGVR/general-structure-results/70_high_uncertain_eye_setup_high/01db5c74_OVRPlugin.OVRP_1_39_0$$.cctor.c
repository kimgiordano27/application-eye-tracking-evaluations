/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 01db5c74
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_39_0___cctor(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  thunk_FUN_010400dc();
  if (unaff_x23 != 0) {
    FUN_01359ba8();
    if (unaff_x21 != 0) {
      FUN_017d4928();
      thunk_FUN_00ffe618();
      *(undefined1 *)(unaff_x19 + 0x10) = 0;
      *(long *)(unaff_x19 + 0x20) = unaff_x20;
      if (unaff_x20 == 0x7fffffffffffffff) {
        uVar2 = 0xffffffff;
      }
      else {
        lVar3 = thunk_FUN_01027094();
        if (unaff_x20 - lVar3 < 0x138800000000) {
          auVar1 = SEXT816(unaff_x20 - lVar3) * SEXT816(0x346dc5d63886594b);
          uVar2 = (int)(auVar1._8_8_ >> 0xb) - (auVar1._12_4_ >> 0x1f);
          uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar2 = 0x7ffffffe;
        }
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


