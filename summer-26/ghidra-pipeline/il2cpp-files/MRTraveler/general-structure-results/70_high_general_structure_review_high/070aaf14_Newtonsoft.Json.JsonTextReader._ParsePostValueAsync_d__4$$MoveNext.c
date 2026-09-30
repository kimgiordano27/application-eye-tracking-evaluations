/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 070aaf14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x21;
  
  lVar3 = FUN_03c8f97c();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((unaff_x21 & 1) == 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_08ea2ea0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_08ea2e90;
  }
  if (iVar1 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *puVar2;
    thunk_FUN_03d233cc();
    *(long *)(unaff_x19 + 0x38) = lVar3;
    thunk_FUN_03d233cc((long *)(unaff_x19 + 0x38),lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


