/*
FUNCTION_NAME: Best.HTTP.Request.Upload.JSonDataStream<object>$$Flush
ENTRY_POINT: 044499fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Upload_JSonDataStream<object>__Flush(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = thunk_FUN_0322f04c();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar2,0);
  }
  if (3 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
    thunk_FUN_0329bf60();
    thunk_FUN_03257e30(PTR_DAT_075d8d58);
    uVar2 = FUN_05c8969c();
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar3 = thunk_FUN_0322f148();
    FUN_05d75da4(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


