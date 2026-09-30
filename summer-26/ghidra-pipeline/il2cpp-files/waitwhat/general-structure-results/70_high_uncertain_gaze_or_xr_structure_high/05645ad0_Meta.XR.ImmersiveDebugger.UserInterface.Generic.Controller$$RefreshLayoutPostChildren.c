/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 05645ad0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x24;
  
  uVar2 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_0593e698(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
  uVar2 = FUN_0597090c(uVar2);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
  }
  FUN_02d37100(uVar2,lVar1);
  return;
}


