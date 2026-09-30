/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
ENTRY_POINT: 08123cd0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  uVar1 = *unaff_x23;
  *(undefined1 *)(unaff_x21 + 0x20) = in_w8;
  if (unaff_x19 != 0) {
    FUN_081233f8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(param_1,uVar1);
}


