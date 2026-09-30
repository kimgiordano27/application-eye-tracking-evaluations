/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 0515c1e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Size3f___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 unaff_x24;
  
  if (in_w8 != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x24;
    thunk_FUN_02dd37b4();
    if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_02d9d438(), lVar1 == 0)) {
      uVar2 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,0);
    }
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      *(long *)(unaff_x19 + 0x28) = unaff_x23;
      thunk_FUN_02dd37b4();
      if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


