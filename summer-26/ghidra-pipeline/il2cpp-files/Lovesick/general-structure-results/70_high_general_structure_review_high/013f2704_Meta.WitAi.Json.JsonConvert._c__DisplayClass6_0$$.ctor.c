/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0$$.ctor
ENTRY_POINT: 013f2704
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


undefined8
Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0___ctor
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  while( true ) {
    (*in_x9)(param_1,param_2,param_3);
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_1 = *(long **)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
    param_2 = (**(code **)(*unaff_x20 + 0x178))();
    if (param_1 == (long *)0x0) goto Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0;
    in_x9 = *(code **)(*param_1 + 0x188);
    param_3 = *(undefined8 *)(*param_1 + 400);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x11) = 1;
    return 0;
  }
Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


