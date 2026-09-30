/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeClass>b__16_0
ENTRY_POINT: 055d0d58
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeClass>b__16_0(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_032d5d54();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) {
      uVar3 = thunk_FUN_032f9fe8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(unaff_x19 + 0x18) = FUN_02efd8f0;
    goto LAB_055d0d98;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_055d0d98:
  *(code **)(unaff_x19 + 0x38) = FUN_02efd888;
  return;
}


