/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode.<get_Children>d__40$$System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current
ENTRY_POINT: 031c3d18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void OVRSimpleJSON_JSONNode_<get_Children>d__40__System_Collections_Generic_IEnumerator<OVRSimpleJSON_JSONNode>_get_Current
               (undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_Message_GetNetSyncSessionArray";
  uStack0000000000000018 = 0x22;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_01afad98();
  *(code **)(unaff_x20 + 0x788) = pcVar1;
  (*pcVar1)();
  return;
}


