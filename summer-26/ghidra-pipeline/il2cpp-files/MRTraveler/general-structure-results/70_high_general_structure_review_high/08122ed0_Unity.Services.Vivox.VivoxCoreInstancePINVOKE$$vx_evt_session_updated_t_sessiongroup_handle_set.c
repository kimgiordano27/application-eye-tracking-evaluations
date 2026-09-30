/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_sessiongroup_handle_set
ENTRY_POINT: 08122ed0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_08122f9c;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08122f9c:
  uVar2 = (*(code *)*puVar1)();
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar2,*(undefined8 *)(lVar3 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_07178f58(uVar2,0);
  return;
}


