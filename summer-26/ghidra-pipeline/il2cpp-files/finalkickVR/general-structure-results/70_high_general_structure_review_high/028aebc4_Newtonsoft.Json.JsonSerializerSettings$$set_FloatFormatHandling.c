/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 028aebc4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(undefined8 param_1)

{
  long lVar1;
  long unaff_x29;
  undefined1 auVar2 [16];
  ulong uStack0000000000000000;
  undefined8 uStack0000000000000050;
  
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  auVar2._0_8_ = *(ulong *)(unaff_x29 + -0x98);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    auVar2._8_8_ = 0;
    return auVar2;
  }
  uStack0000000000000000 = auVar2._0_8_;
  uStack0000000000000050 = param_1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


