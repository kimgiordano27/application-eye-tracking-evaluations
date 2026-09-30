/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 067d5090
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined1 unaff_w20;
  
  *(undefined1 *)(unaff_x19 + 0xa1a) = unaff_w20;
  lVar4 = FUN_03398188(DAT_083c73f0,1);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined2 *)(lVar4 + 0x20) = 0x7c;
    **(long **)(DAT_083c9990 + 0xb8) = lVar4;
    if (DAT_08908cd0 != 0) {
      uVar5 = *(ulong *)(DAT_083c9990 + 0xb8);
      puVar1 = &DAT_0873ccb0 + (uVar5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (uVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


