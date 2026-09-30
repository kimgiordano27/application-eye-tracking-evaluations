/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 01bc90a8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  float fVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_04f1ae7c((param_2 * param_7 + param_4 * param_5 + param_1 * param_6) - param_3 * param_8,
               (param_3 * param_5 + param_4 * param_8 + param_2 * param_6) - param_1 * param_7,
               (param_1 * param_8 + param_4 * param_7 + param_3 * param_6) - param_2 * param_5,
               ((param_4 * param_6 - param_1 * param_5) - param_2 * param_8) - param_3 * param_7);
  fVar4 = *(float *)(unaff_x19 + 0x18) * *(float *)(unaff_x19 + 0x18);
  fVar1 = 1.4013e-45;
  if (*(float *)(unaff_x19 + 0x10) * *(float *)(unaff_x19 + 0x10) +
      *(float *)(unaff_x19 + 0x14) * *(float *)(unaff_x19 + 0x14) + fVar4 <= 1.4013e-45) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x50);
  if (lVar2 != 0) {
    fVar3 = (float)FUN_04f1aa98(lVar2,0);
    FUN_04f1ab38(fVar3 + *(float *)(unaff_x19 + 0x10),fVar1 + *(float *)(unaff_x19 + 0x14),
                 fVar4 + *(float *)(unaff_x19 + 0x18),lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


