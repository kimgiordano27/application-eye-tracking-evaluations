/*
FUNCTION_NAME: SharedDeoVR.Generated.SLRv3.ScriptFileStreamingRoute.Request$$.ctor
ENTRY_POINT: 0948be88
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void SharedDeoVR_Generated_SLRv3_ScriptFileStreamingRoute_Request___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w23;
  undefined4 unaff_000040bc;
  int iStack0000000000000028;
  
  uVar3 = *unaff_x21;
  *(undefined8 *)(&stack0x00000018 + CONCAT44(unaff_000040bc,unaff_w23) * 8) = uVar3;
  iStack0000000000000028 = unaff_w23 + 1;
  __cxa_end_catch();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar1 = FUN_0941f478(*(long *)(unaff_x20 + 0x18),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac8d4c8);
    FUN_0433cdb4(2,uVar2,lVar1,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184(uVar3);
}


