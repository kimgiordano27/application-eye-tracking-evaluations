/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 067cbd18
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


void Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  uVar4 = FUN_03398188(DAT_083c7838);
  FUN_06736060(uVar4,DAT_0842cf40,0);
  puVar5 = (undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x118) + 0xb8) + 8);
  *puVar5 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  in_stack_00000008 = 0;
  FUN_0680ad88(&stack0x00000008,0x26e,7,0x12,0);
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x118) + 0xb8);
  *(undefined8 *)(lVar6 + 0x10) = in_stack_00000008;
  if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
    FUN_033b9870();
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x118) + 0xb8);
  }
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(DAT_083ca3d0 + 0xb8) + 0x18);
  return;
}


