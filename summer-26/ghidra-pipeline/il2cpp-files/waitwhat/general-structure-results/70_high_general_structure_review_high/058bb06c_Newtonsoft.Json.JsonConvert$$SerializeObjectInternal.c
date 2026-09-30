/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 058bb06c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObjectInternal(void)

{
  byte bVar1;
  long *plVar2;
  long unaff_x20;
  
  FUN_03188a78(PTR_DAT_07102638);
  *(undefined1 *)(unaff_x20 + 0x5d4) = 1;
  plVar2 = (long *)thunk_FUN_031c3aa8();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_07102638 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
     (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07102638)) {
    *(undefined1 *)(plVar2 + 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


