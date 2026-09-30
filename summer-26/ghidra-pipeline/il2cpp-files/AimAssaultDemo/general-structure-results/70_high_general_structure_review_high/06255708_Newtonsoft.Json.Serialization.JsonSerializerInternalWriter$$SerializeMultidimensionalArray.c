/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 06255708
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x22 + 0xe20);
  if (in_w8 == 0) {
    FUN_0373b518(PTR_DAT_07d98650);
    *(undefined1 *)(unaff_x21 + 0xbd1) = 1;
  }
  uVar2 = FUN_060be1d4();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar3 = FUN_061c3fd0();
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70(*plVar4);
  }
  FUN_0624fdd4(uVar2,uVar1,0xe7,uVar3,0);
  return;
}


