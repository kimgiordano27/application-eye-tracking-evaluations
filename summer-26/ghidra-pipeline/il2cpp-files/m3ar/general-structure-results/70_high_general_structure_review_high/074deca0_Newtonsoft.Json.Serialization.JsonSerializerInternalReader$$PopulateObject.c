/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 074deca0
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint in_w8;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar5 = (uint)param_3;
  uVar6 = (uint)(short)((ulong)param_2 >> 0x30);
  bVar2 = in_w8 <= uVar6;
  bVar3 = false;
  if (uVar6 == in_w8) {
    bVar3 = (uVar5 & 0xff) <= (uint)*(byte *)(param_1 + 8);
    if ((((uint)*(byte *)(param_1 + 8) == (uVar5 & 0xff)) &&
        (uVar6 = uVar5 >> 8 & 0xff, bVar3 = uVar6 <= *(byte *)(param_1 + 9),
        *(byte *)(param_1 + 9) == uVar6)) &&
       (uVar6 = uVar5 >> 0x10 & 0xff, bVar3 = uVar6 <= *(byte *)(param_1 + 10),
       *(byte *)(param_1 + 10) == uVar6)) {
      bVar2 = (uint)*(byte *)(param_1 + 0xb) <= uVar5 >> 0x18;
      bVar3 = uVar5 >> 0x18 == (uint)*(byte *)(param_1 + 0xb);
      if (!bVar3) goto LAB_074ded30;
      uVar6 = (uint)*(byte *)(param_1 + 0xc);
      uVar5 = uVar4;
      if ((uint)*(byte *)(param_1 + 0xc) == (uVar4 & 0xff)) {
        uVar5 = uVar4 >> 8;
        uVar6 = (uint)*(byte *)(param_1 + 0xd);
        if ((uint)*(byte *)(param_1 + 0xd) == (uVar5 & 0xff)) {
          uVar5 = uVar4 >> 0x10;
          uVar6 = (uint)*(byte *)(param_1 + 0xe);
          if ((uint)*(byte *)(param_1 + 0xe) == (uVar5 & 0xff)) {
            bVar2 = (uint)*(byte *)(param_1 + 0xf) <= uVar4 >> 0x18;
            bVar3 = false;
            if (uVar4 >> 0x18 == (uint)*(byte *)(param_1 + 0xf)) {
              return 0;
            }
            goto LAB_074ded30;
          }
        }
      }
      bVar3 = (uVar5 & 0xff) <= uVar6;
    }
    uVar1 = 1;
    if (!bVar3) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
LAB_074ded30:
  uVar1 = 1;
  if (bVar2 && !bVar3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


