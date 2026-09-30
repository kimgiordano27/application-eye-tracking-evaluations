/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 01bc9088
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (!in_ZR && in_NG == in_OV) {
    lVar1 = *(long *)(unaff_x19 + 0x50);
    if (lVar1 == 0) goto LAB_01bc9198;
    fVar2 = (float)FUN_04f1adf8(lVar1,0);
    fVar3 = *(float *)(unaff_x19 + 0x1c);
    fVar6 = *(float *)(unaff_x19 + 0x20);
    fVar5 = *(float *)(unaff_x19 + 0x24);
    fVar4 = *(float *)(unaff_x19 + 0x28);
    FUN_04f1ae7c((param_2 * fVar5 + param_4 * fVar3 + fVar2 * fVar4) - param_3 * fVar6,
                 (param_3 * fVar3 + param_4 * fVar6 + param_2 * fVar4) - fVar2 * fVar5,
                 (fVar2 * fVar6 + param_4 * fVar5 + param_3 * fVar4) - param_2 * fVar3,
                 ((param_4 * fVar4 - fVar2 * fVar3) - param_2 * fVar6) - param_3 * fVar5,lVar1,0);
  }
  fVar3 = *(float *)(unaff_x19 + 0x18) * *(float *)(unaff_x19 + 0x18);
  fVar2 = 1.4013e-45;
  if (*(float *)(unaff_x19 + 0x10) * *(float *)(unaff_x19 + 0x10) +
      *(float *)(unaff_x19 + 0x14) * *(float *)(unaff_x19 + 0x14) + fVar3 <= 1.4013e-45) {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0x50);
  if (lVar1 != 0) {
    fVar4 = (float)FUN_04f1aa98(lVar1,0);
    FUN_04f1ab38(fVar4 + *(float *)(unaff_x19 + 0x10),fVar2 + *(float *)(unaff_x19 + 0x14),
                 fVar3 + *(float *)(unaff_x19 + 0x18),lVar1,0);
    return;
  }
LAB_01bc9198:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


