/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_total_recorded_frames_set
ENTRY_POINT: 08124698
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_total_recorded_frames_set
               (void)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_07145224();
  if (unaff_x23 != 0) {
    *(undefined8 *)(unaff_x23 + 0x10) = unaff_x21;
    thunk_FUN_03d233cc();
    *(long *)(unaff_x22 + 0x28) = unaff_x23;
    uVar2 = thunk_FUN_03d233cc();
    if (unaff_x20 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    auVar3._8_8_ = *unaff_x24;
    auVar3._0_8_ = uVar2;
    *(bool *)(unaff_x22 + 0x20) = bVar1;
    if (unaff_x19 != 0) {
      FUN_081236ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar3._0_8_,auVar3._8_8_);
}


