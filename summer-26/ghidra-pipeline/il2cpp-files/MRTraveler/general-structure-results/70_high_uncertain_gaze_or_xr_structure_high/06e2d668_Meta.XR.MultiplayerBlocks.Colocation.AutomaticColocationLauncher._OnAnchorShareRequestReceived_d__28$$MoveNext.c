/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 06e2d668
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 *unaff_x21;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_03d233cc();
  uVar1 = FUN_06e2d770();
  *(undefined4 *)(unaff_x19 + 7) = uVar1;
  uVar1 = FUN_06e2d770();
  *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar1;
  FUN_06e2cf68();
  FUN_06e2d1a8();
  lVar3 = (**(code **)(*unaff_x19 + 0x198))();
  unaff_x19[2] = lVar3;
  thunk_FUN_03d233cc(unaff_x19 + 2,lVar3);
  uVar2 = FUN_06f74e14(*unaff_x21,0);
  return ~uVar2 & 1;
}


