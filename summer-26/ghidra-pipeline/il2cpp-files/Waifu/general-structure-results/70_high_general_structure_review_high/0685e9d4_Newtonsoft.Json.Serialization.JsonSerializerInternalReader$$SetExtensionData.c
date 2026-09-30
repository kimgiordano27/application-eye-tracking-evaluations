/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0685e9d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData
               (undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 in_w8;
  
  while( true ) {
    param_1[5] = in_w8;
    param_1[6] = param_2[6];
    puVar4 = param_2 + 8;
    param_1[7] = param_2[7];
    puVar3 = param_1 + 8;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_OV = SBORROW4(param_3,0xf);
    in_NG = param_3 + -0xf < 0;
    in_ZR = param_3 == 0xf;
    param_3 = param_3 + -8;
    *puVar3 = *puVar4;
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    in_w8 = param_2[0xd];
    param_1 = puVar3;
    param_2 = puVar4;
  }
  iVar5 = param_3;
  if (1 < param_3) {
    do {
      param_3 = iVar5 + -2;
      *puVar3 = *puVar4;
      puVar2 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      puVar3[1] = *puVar2;
      puVar3 = puVar3 + 2;
      bVar1 = 3 < iVar5;
      iVar5 = param_3;
    } while (bVar1);
  }
  if (param_3 == 1) {
    *puVar3 = *puVar4;
  }
  return;
}


