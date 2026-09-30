/*
FUNCTION_NAME: FUN_024092e0
ENTRY_POINT: 024092e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_024092e0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_System_Net_WebRequestStream_Close_internal__;
  if ((DAT_03782292 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_03782292 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


