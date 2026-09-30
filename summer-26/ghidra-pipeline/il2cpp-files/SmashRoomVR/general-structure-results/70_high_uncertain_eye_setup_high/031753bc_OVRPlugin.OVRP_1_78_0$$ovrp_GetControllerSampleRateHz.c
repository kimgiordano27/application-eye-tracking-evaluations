/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerSampleRateHz
ENTRY_POINT: 031753bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerSampleRateHz(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x22;
  
  FUN_0391fb70(param_1,0,0);
  lVar1 = FUN_0391c2b8();
  if (lVar1 != 0) {
    FUN_0391fb2c(lVar1,*(undefined4 *)(unaff_x20 + 0x3c),0);
    lVar1 = *(long *)(unaff_x20 + 0x68);
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_01afa9e0();
      if (lVar2 == 0) {
        uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar3,0);
      }
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x22;
        thunk_FUN_01b4f09c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


