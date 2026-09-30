/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TraceWriter
ENTRY_POINT: 01bc8e78
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TraceWriter(long *param_1)

{
  float *pfVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  
  fVar5 = unaff_s10 - unaff_s13;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar4 = SQRT(fVar5 * fVar5 + unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9);
  if (fVar4 <= DAT_0533fbb4) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s11 / fVar4;
    fVar3 = unaff_s9 / fVar4;
    fVar5 = fVar5 / fVar4;
  }
  *(float *)(unaff_x19 + 0x38) = fVar2;
  *(float *)(unaff_x19 + 0x3c) = fVar3;
  *(float *)(unaff_x19 + 0x40) = fVar5;
  return;
}


