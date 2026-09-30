/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_CheckAdditionalContent
ENTRY_POINT: 08e00e88
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_CheckAdditionalContent(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  FUN_08dbf2f0();
  lVar1 = FUN_08dea498();
  if (lVar1 != 0) {
    *(long *)(unaff_x19 + 0x18) = lVar1;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x18),lVar1);
    return;
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac0ac08);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac6a060);
  FUN_08d79944(uVar2,uVar3,0);
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac6a068);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,uVar3);
}


