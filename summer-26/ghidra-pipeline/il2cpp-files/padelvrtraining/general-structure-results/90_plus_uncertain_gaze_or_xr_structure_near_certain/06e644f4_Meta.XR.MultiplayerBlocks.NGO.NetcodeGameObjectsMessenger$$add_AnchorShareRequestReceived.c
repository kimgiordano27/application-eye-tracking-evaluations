/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 06e644f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__add_AnchorShareRequestReceived
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  System_Collections_Generic_List<ValueTuple<Vector3,_Vector3>>__Sort(&stack0x00000018);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


