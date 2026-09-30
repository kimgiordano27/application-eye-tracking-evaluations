/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$FlushToDisk
ENTRY_POINT: 076b6654
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_BufferX__FlushToDisk(undefined8 param_1)

{
  long unaff_x19;
  long *unaff_x21;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  
  FUN_073ea64c(param_1,0);
  FUN_073ea64c();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_07c765c0(*(long *)(unaff_x19 + 0x18),0);
    if (*(int *)(*(long *)PTR_DAT_084887d8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_073f8690(uStack0000000000000020,uStack0000000000000024,0,0);
    FUN_073a7e9c(&stack0x0000005c,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


