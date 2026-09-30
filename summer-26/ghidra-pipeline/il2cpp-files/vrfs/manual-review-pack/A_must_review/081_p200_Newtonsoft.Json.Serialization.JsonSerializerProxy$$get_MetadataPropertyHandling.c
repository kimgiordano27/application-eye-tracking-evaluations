/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 01bc9040
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = (float)FUN_04f13a40(0);
  param_2 = param_2 * DAT_0533fbbc;
  param_3 = param_3 * DAT_0533fbbc;
  fVar1 = DAT_0533fbbc;
  fVar4 = (float)FUN_04f14190(fVar3 * DAT_0533fbbc,0);
  param_3 = param_3 * param_3;
  fVar3 = 1.4013e-45;
  if (1.4013e-45 < param_3 + fVar4 * fVar4 + param_2 * param_2) {
    lVar2 = *(long *)(param_4 + 0x50);
    if (lVar2 == 0) goto LAB_01bc9198;
    fVar4 = (float)FUN_04f1adf8(lVar2,0);
    fVar5 = *(float *)(param_4 + 0x1c);
    fVar8 = *(float *)(param_4 + 0x20);
    fVar7 = *(float *)(param_4 + 0x24);
    fVar6 = *(float *)(param_4 + 0x28);
    FUN_04f1ae7c((fVar3 * fVar7 + fVar1 * fVar5 + fVar4 * fVar6) - param_3 * fVar8,
                 (param_3 * fVar5 + fVar1 * fVar8 + fVar3 * fVar6) - fVar4 * fVar7,
                 (fVar4 * fVar8 + fVar1 * fVar7 + param_3 * fVar6) - fVar3 * fVar5,
                 ((fVar1 * fVar6 - fVar4 * fVar5) - fVar3 * fVar8) - param_3 * fVar7,lVar2,0);
  }
  fVar3 = *(float *)(param_4 + 0x18) * *(float *)(param_4 + 0x18);
  fVar1 = 1.4013e-45;
  if (*(float *)(param_4 + 0x10) * *(float *)(param_4 + 0x10) +
      *(float *)(param_4 + 0x14) * *(float *)(param_4 + 0x14) + fVar3 <= 1.4013e-45) {
    return;
  }
  lVar2 = *(long *)(param_4 + 0x50);
  if (lVar2 != 0) {
    fVar4 = (float)FUN_04f1aa98(lVar2,0);
    FUN_04f1ab38(fVar4 + *(float *)(param_4 + 0x10),fVar1 + *(float *)(param_4 + 0x14),
                 fVar3 + *(float *)(param_4 + 0x18),lVar2,0);
    return;
  }
LAB_01bc9198:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


