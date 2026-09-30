/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 01bc8f24
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc8fcc) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(long *)(param_5 + 0x48) != 0) {
    fVar5 = param_2;
    fVar6 = param_3;
    Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_5 + 0x48),0);
    uVar1 = FUN_01bc6008();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x50) != 0) {
      Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(param_5 + 0x50),0);
      uVar1 = FUN_01bc6008();
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)(param_5 + 0x48) != 0) {
        fVar3 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine
                                 (*(long *)(param_5 + 0x48),0);
        lVar2 = *(long *)(param_5 + 0x50);
        if (lVar2 != 0) {
          fVar7 = *(float *)(param_5 + 0x34);
          fVar8 = *(float *)(param_5 + 0x38);
          fVar9 = fVar5 + param_2 * fVar7 * *(float *)(param_5 + 0x3c);
          fVar10 = fVar6 + param_3 * fVar7 * *(float *)(param_5 + 0x40);
          fVar4 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar2,0);
          if (param_4 < 0.0) {
            param_4 = 0.0;
          }
          FUN_04f1aa00(fVar4 + param_4 * ((fVar3 + param_1 * fVar7 * fVar8) - fVar4),
                       fVar5 + param_4 * (fVar9 - fVar5),fVar6 + param_4 * (fVar10 - fVar6),lVar2,0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


