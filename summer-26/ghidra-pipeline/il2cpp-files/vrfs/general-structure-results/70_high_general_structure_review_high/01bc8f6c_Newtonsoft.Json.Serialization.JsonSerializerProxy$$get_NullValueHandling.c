/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 01bc8f6c
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


/* WARNING: Removing unreachable block (ram,0x01bc8fcc) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  
  uVar1 = FUN_01bc6008();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    fVar3 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(unaff_x19 + 0x48),0);
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 != 0) {
      fVar5 = *(float *)(unaff_x19 + 0x34);
      fVar6 = *(float *)(unaff_x19 + 0x38);
      fVar7 = param_2 + unaff_s10 * fVar5 * *(float *)(unaff_x19 + 0x3c);
      fVar8 = param_3 + unaff_s9 * fVar5 * *(float *)(unaff_x19 + 0x40);
      fVar4 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar2,0);
      if (unaff_s8 < 0.0) {
        unaff_s8 = 0.0;
      }
      FUN_04f1aa00(fVar4 + unaff_s8 * ((fVar3 + unaff_s11 * fVar5 * fVar6) - fVar4),
                   param_2 + unaff_s8 * (fVar7 - param_2),param_3 + unaff_s8 * (fVar8 - param_3),
                   lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


