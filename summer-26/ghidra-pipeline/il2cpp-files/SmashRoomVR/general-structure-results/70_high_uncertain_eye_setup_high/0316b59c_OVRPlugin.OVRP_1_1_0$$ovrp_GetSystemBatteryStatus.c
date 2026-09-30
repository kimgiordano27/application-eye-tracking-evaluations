/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryStatus
ENTRY_POINT: 0316b59c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_030d0278(param_1,param_2,1,0);
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_030d0278(*(long *)(unaff_x19 + 0x78),param_2,1,0);
    uVar1 = FUN_0316b994(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0xa0));
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_030d0278(*(long *)(unaff_x19 + 0x60),uVar1,1,0);
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        FUN_030d0278(*(long *)(unaff_x19 + 0x68),uVar1,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


