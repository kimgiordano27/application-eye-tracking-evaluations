/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 0506764c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = FUN_05067464();
  if (lVar3 != 0) {
    lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067dc188,*(undefined4 *)(lVar3 + 0x18));
    lVar4 = FUN_05067464();
    if (lVar4 != 0) {
      uVar5 = 0;
      do {
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
          return lVar3;
        }
        lVar4 = FUN_05067464();
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_050676ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_050676ec;
        lVar1 = uVar5 * 4;
        lVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(short *)(lVar3 + lVar2 + 0x20) = (short)*(undefined4 *)(lVar4 + lVar1 + 0x20);
        lVar4 = FUN_05067464();
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


