/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_is_ad_playing_get
ENTRY_POINT: 081239d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_is_ad_playing_get
               (undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  
  if (unaff_x26 != 0) {
    *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x26 + 0x18) = unaff_x24;
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x26 + 0x20) = unaff_x23;
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x26 + 0x28) = unaff_x21;
    *(long *)(unaff_x22 + 0x28) = unaff_x26;
    param_1 = thunk_FUN_03d233cc();
    if (unaff_x20 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(unaff_x20 + 0x10) == '\0';
    }
    param_2 = *unaff_x27;
    *(bool *)(unaff_x22 + 0x20) = bVar1;
    if (unaff_x19 != 0) {
      FUN_081233f8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(param_1,param_2);
}


