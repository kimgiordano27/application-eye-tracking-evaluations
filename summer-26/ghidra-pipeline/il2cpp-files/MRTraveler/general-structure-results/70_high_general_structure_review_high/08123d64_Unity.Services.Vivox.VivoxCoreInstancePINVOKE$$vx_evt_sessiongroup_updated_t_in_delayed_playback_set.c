/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_in_delayed_playback_set
ENTRY_POINT: 08123d64
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_in_delayed_playback_set
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  puVar1 = PTR_DAT_08f02ac8;
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)PTR_DAT_08f02ac8;
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x21;
    param_1 = thunk_FUN_03d233cc();
    if (unaff_x20 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    param_2 = *(undefined8 *)puVar1;
    *(bool *)(unaff_x22 + 0x20) = bVar2;
    if (unaff_x19 != 0) {
      FUN_081236ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(param_1,param_2);
}


