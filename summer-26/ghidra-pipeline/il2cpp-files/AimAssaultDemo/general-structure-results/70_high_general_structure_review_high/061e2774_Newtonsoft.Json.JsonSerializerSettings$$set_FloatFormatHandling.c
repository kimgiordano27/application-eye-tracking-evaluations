/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 061e2774
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(undefined8 param_1)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x20),param_1);
  iVar1 = *(int *)(unaff_x19 + 0x18) + 1;
  *(int *)(unaff_x19 + 0x18) = iVar1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x10) + 0x20)) {
      *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
    }
    return ~unaff_w20 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


