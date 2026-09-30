/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_EqualityComparer
ENTRY_POINT: 07110e3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_EqualityComparer
               (long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long in_x10;
  long unaff_x19;
  
  bVar1 = *(byte *)(param_3 + 0x130);
  if ((bVar1 <= *(byte *)(in_x10 + 0x130)) &&
     (*(long *)(*(long *)(in_x10 + 200) + ((ulong)bVar1 - 1) * 8) == param_3)) {
    *(undefined8 *)(unaff_x19 + 0x78) = param_1;
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar1 - 1) * 8) == param_3)) {
      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x78),param_1);
      *(undefined1 *)(unaff_x19 + 0x140) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d8e4(param_1);
}


