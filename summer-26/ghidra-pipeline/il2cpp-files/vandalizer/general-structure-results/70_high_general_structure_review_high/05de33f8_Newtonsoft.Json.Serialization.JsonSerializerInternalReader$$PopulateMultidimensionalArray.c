/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 05de33f8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  undefined4 uVar6;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  uVar3 = FUN_05c857f0(param_1,0);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
  if (*(char *)(unaff_x23 + 0x293) == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    *(undefined1 *)(unaff_x23 + 0x293) = 1;
  }
  if (unaff_x21 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = FUN_05c857f0();
    uVar6 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  puVar2 = PTR_DAT_075e81c8;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar5 = FUN_05d547ec();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
  }
  FUN_05de34ec(uVar3,uVar1,uVar4,uVar6,uVar5,unaff_w19);
  return;
}


