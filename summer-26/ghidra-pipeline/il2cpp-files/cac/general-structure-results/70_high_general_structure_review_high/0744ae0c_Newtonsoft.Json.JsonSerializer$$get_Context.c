/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Context
ENTRY_POINT: 0744ae0c
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Context(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  cVar1 = *(char *)(unaff_x21 + 0x52);
                    /* try { // try from 0744ae14 to 0754ae17 has its CatchHandler @ 0744ae2c */
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_03f13488();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (unaff_x20 == 0) {
        uVar3 = thunk_FUN_03f5b97c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar3,0);
      }
      goto LAB_0744ae3c;
    }
    pcVar4 = FUN_03e49470;
  }
  else {
    if (cVar1 != '\x01') {
LAB_0744ae3c:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_0744ae5c;
    }
    pcVar4 = FUN_03e4948c;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_0744ae5c:
  *(code **)(unaff_x19 + 0x38) = FUN_03e49428;
  return;
}


