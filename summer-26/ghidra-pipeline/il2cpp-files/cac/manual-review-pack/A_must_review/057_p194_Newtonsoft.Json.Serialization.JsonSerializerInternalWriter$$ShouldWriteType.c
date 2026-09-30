/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 074bf27c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
          (int *param_1,uint *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  if ((iVar6 < 0xb) && (*param_1 <= iVar6)) {
    puVar3 = (ushort *)FUN_074c4780(param_1,0);
    uVar5 = 0;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      if (0xccccccc < uVar5) goto LAB_074bf298;
      uVar1 = *puVar3;
      uVar5 = uVar5 * 10;
      if (uVar1 != 0) {
        puVar3 = puVar3 + 1;
        uVar5 = (uVar5 + uVar1) - 0x30;
      }
    }
    uVar4 = FUN_074c4764(param_1,0);
    if ((uVar4 & 1) == 0) {
      if ((int)uVar5 < 0) goto LAB_074bf298;
    }
    else {
      uVar5 = -uVar5;
      if (0 < (int)uVar5) {
        return 0;
      }
    }
    uVar2 = 1;
    *param_2 = uVar5;
  }
  else {
LAB_074bf298:
    uVar2 = 0;
  }
  return uVar2;
}


