/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 06755444
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


short * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
                  (short *param_1,ulong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  ulong uVar5;
  int iVar6;
  
  if ((-1 < param_3 + -1) || ((int)param_2 != 0)) {
    psVar4 = param_1 + -1;
    iVar6 = param_3 + -2;
    do {
      do {
        param_1 = psVar4;
        uVar3 = (uint)param_2;
        uVar5 = (param_2 & 0xffffffff) / 10;
        *param_1 = (short)param_2 + (short)((param_2 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        param_2 = uVar5;
        psVar4 = param_1 + -1;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  return param_1;
}


