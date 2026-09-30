/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 0685a694
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0685a7c0) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
          (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  char cStack000000000000000c;
  
  puVar6 = (undefined8 *)(param_1 + 0x10);
  *puVar6 = unaff_x21;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  cStack000000000000000c = '\0';
  FUN_0689bfb8();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar7 = *(long *)(lVar5 + 0x10);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar2 = *(uint *)(lVar5 + 0x18);
  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar2 + 1;
    puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
    *puVar6 = unaff_x21;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    FUN_04ab0e54();
  }
  if (cStack000000000000000c != '\0') {
    FUN_0336d814();
  }
  return param_2;
}


