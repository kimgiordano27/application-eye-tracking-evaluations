/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_session_handle_get
ENTRY_POINT: 08123094
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = (*(code *)*param_1)();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar1,*(undefined8 *)(lVar2 + 0x28));
  }
  FUN_08125864();
  if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_07178f58(uVar1,0);
  return;
}


