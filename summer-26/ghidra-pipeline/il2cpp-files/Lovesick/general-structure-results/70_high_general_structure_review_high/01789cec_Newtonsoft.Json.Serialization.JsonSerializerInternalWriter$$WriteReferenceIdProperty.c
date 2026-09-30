/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 01789cec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
               (undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = FUN_01780344(uVar3);
  if (lVar2 == unaff_x19) {
    bVar1 = true;
  }
  else {
    uVar3 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = FUN_01780344(uVar3);
    bVar1 = lVar2 == unaff_x19;
  }
  return bVar1;
}


