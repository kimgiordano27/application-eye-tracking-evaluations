/*
FUNCTION_NAME: OVRPlugin.OVRP_1_123_0$$.cctor
ENTRY_POINT: 01dc1860
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


undefined8 OVRPlugin_OVRP_1_123_0___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  if (in_w8 - unaff_w19 < unaff_w20) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar2 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_02354d90);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02350eb0);
    FUN_01c62494(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0235ab10);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar3);
  }
  if (unaff_w20 != 0) {
    lVar1 = 0;
    if (in_w8 != 0) {
      lVar1 = unaff_x22 + 0x20;
    }
    uVar2 = FUN_01c56388(lVar1 + unaff_w19,unaff_w20);
    return uVar2;
  }
  return **(undefined8 **)(*(long *)PTR_DAT_0234be00 + 0xb8);
}


