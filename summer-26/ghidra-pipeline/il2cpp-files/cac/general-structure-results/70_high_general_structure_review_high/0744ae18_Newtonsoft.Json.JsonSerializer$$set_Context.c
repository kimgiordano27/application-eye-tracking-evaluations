/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 0744ae18
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_Context(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
                    /* try { // try from 0744ae18 to 0754ae43 has its CatchHandler @ 0744ad34 */
  uVar1 = FUN_03f13488();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 0) {
      if (unaff_x20 == 0) {
        uVar2 = thunk_FUN_03f5b97c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar2,0);
      }
      goto LAB_0744ae3c;
    }
    pcVar3 = FUN_03e49470;
  }
  else {
    if (unaff_w22 != 1) {
LAB_0744ae3c:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_0744ae5c;
    }
    pcVar3 = FUN_03e4948c;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
LAB_0744ae5c:
  *(code **)(unaff_x19 + 0x38) = FUN_03e49428;
  return;
}


