/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 03699390
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x22 + 0xf0b) = 1;
  uStack0000000000000008 = _UNK_00c8f1e8;
  uStack0000000000000000 = _DAT_00c8f1e0;
  uVar1 = FUN_01f08898(*unaff_x21);
  FUN_034a9d80(uVar1,*unaff_x19,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_01f51358(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


