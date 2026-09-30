/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 0684b0ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
          (ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  
  ClearExclusiveLocal();
  DataMemoryBarrier(2,3);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + (param_1 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(unaff_x20 + 0x3b8);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    FUN_033b9870();
    lVar4 = *(long *)(unaff_x20 + 0x3b8);
  }
  DataMemoryBarrier(2,3);
  return **(undefined8 **)(lVar4 + 0xb8);
}


