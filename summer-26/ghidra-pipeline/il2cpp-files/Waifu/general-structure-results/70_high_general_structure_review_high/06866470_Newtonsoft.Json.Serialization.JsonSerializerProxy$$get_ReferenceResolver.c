/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceResolver
ENTRY_POINT: 06866470
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceResolver(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  
  plVar4 = (long *)FUN_03398188();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((lVar7 != 0) && (lVar5 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
    uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4 = plVar4 + 4;
    *plVar4 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar4 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_068791ec();
    lVar7 = FUN_03398a84(DAT_083c8a08);
    FUN_0683efb8(lVar7,uVar6,0);
    *(undefined4 *)(lVar7 + 0x60) = 0x80070057;
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


