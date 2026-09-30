/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 01bc8e38
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  fVar2 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine();
  if (DAT_0722a39f == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    DAT_0722a39f = '\x01';
  }
  fVar2 = unaff_s8 - fVar2;
  param_2 = unaff_s9 - param_2;
  param_3 = unaff_s10 - param_3;
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar3 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
  if (fVar3 <= DAT_0533fbb4) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    fVar2 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar2 = fVar2 / fVar3;
    param_2 = param_2 / fVar3;
    param_3 = param_3 / fVar3;
  }
  *(float *)(unaff_x19 + 0x38) = fVar2;
  *(float *)(unaff_x19 + 0x3c) = param_2;
  *(float *)(unaff_x19 + 0x40) = param_3;
  return;
}


