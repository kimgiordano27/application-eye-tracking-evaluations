/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 08e0d724
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 08e0d72c to 08f0d753 has its CatchHandler @ 08e0d92c */
  uVar1 = FUN_04a7eb24();
  lVar2 = FUN_04a7eb24();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a930);
                    /* try { // try from 08e0d76c to 08f0d777 has its CatchHandler @ 08e0d96c */
    FUN_08e314d8(uVar3,uVar1,uVar5,uVar4,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


