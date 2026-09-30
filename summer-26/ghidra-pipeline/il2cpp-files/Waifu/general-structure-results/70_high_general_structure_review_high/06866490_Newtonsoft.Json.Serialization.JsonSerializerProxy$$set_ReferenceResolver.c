/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 06866490
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  long unaff_x21;
  
  lVar4 = FUN_0339898c();
  if (lVar4 == 0) {
    uVar5 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar5,0);
  }
  if (*(int *)(unaff_x21 + 0x18) != 0) {
                    /* try { // try from 068664a4 to 069664bf has its CatchHandler @ 068665ec */
    puVar6 = (undefined8 *)(unaff_x21 + 0x20);
    *puVar6 = unaff_x19;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_068791ec();
    lVar4 = FUN_03398a84(DAT_083c8a08);
    FUN_0683efb8(lVar4,uVar5,0);
    *(undefined4 *)(lVar4 + 0x60) = 0x80070057;
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


