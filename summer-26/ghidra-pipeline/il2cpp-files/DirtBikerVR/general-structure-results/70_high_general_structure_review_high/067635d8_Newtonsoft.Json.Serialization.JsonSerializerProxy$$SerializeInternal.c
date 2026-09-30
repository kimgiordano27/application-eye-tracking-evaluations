/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 067635d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal
              (float *param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)thunk_FUN_03ac7604(param_2);
                    /* try { // try from 067635e4 to 06863613 has its CatchHandler @ 06763670 */
  fVar3 = *param_1;
  fVar2 = *pfVar1;
  if (fVar3 < fVar2) {
    return -1;
  }
  if (fVar3 <= fVar2) {
    if (fVar3 == fVar2) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar3)) {
      return -(uint)((uint)ABS(fVar2) < 0x7f800001);
    }
  }
  return 1;
}


