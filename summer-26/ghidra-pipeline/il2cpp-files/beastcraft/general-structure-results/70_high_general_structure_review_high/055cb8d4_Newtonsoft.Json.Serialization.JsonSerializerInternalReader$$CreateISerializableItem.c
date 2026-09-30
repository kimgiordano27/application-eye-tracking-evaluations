/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 055cb8d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  
  iVar1 = (**(code **)(param_1 + 0x358))
                    (param_2,*(undefined8 *)(unaff_x19 + 0x30),param_4,param_5,
                     *(undefined8 *)(param_1 + 0x360));
  *(undefined4 *)(unaff_x19 + 0x3c) = 0;
  *(int *)(unaff_x19 + 0x40) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x19 + 0x3c) = 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    uVar2 = (ulong)*(byte *)(lVar3 + 0x20);
  }
  return uVar2;
}


