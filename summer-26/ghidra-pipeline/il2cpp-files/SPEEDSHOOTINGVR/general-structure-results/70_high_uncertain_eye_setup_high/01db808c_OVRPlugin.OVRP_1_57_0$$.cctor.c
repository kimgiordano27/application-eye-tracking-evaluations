/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$.cctor
ENTRY_POINT: 01db808c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  __cxa_end_catch();
  thunk_FUN_010303a8(PTR_DAT_0235a688);
  uVar2 = thunk_FUN_010400dc();
  FUN_01db627c(uVar2,uVar4);
  FUN_01db8bac();
  FUN_01db7a34();
  uVar1 = FUN_01db71b8();
  if ((uVar1 >> 9 & 1) != 0) {
code_r0x01db8124:
    uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a6e0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar4);
  }
  lVar3 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_00ffe618();
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x20);
    thunk_FUN_00ffe618();
    if (lVar3 != 0) {
      FUN_01dbefa8(lVar3,0,0);
      goto code_r0x01db8124;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


