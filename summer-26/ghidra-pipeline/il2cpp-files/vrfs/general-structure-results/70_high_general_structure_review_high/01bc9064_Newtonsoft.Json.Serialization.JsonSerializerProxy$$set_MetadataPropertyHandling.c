/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 01bc9064
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  float fVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)FUN_04f14190();
  param_3 = param_3 * param_3;
  fVar1 = 1.4013e-45;
  if (1.4013e-45 < param_3 + fVar3 * fVar3 + param_2 * param_2) {
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 == 0) goto LAB_01bc9198;
    fVar3 = (float)FUN_04f1adf8(lVar2,0);
    fVar4 = *(float *)(unaff_x19 + 0x1c);
    fVar7 = *(float *)(unaff_x19 + 0x20);
    fVar6 = *(float *)(unaff_x19 + 0x24);
    fVar5 = *(float *)(unaff_x19 + 0x28);
    FUN_04f1ae7c((fVar1 * fVar6 + param_4 * fVar4 + fVar3 * fVar5) - param_3 * fVar7,
                 (param_3 * fVar4 + param_4 * fVar7 + fVar1 * fVar5) - fVar3 * fVar6,
                 (fVar3 * fVar7 + param_4 * fVar6 + param_3 * fVar5) - fVar1 * fVar4,
                 ((param_4 * fVar5 - fVar3 * fVar4) - fVar1 * fVar7) - param_3 * fVar6,lVar2,0);
  }
  fVar3 = *(float *)(unaff_x19 + 0x18) * *(float *)(unaff_x19 + 0x18);
  fVar1 = 1.4013e-45;
  if (*(float *)(unaff_x19 + 0x10) * *(float *)(unaff_x19 + 0x10) +
      *(float *)(unaff_x19 + 0x14) * *(float *)(unaff_x19 + 0x14) + fVar3 <= 1.4013e-45) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x50);
  if (lVar2 != 0) {
    fVar4 = (float)FUN_04f1aa98(lVar2,0);
    FUN_04f1ab38(fVar4 + *(float *)(unaff_x19 + 0x10),fVar1 + *(float *)(unaff_x19 + 0x14),
                 fVar3 + *(float *)(unaff_x19 + 0x18),lVar2,0);
    return;
  }
LAB_01bc9198:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


