/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ConstructorHandling
ENTRY_POINT: 07099b48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ConstructorHandling(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x118) = param_1;
  thunk_FUN_03d233cc(unaff_x19 + 0x118);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_070b6564(*(long *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
    thunk_FUN_03d233cc(unaff_x19 + 0x110);
    if (unaff_x21 != 0) {
      uVar1 = FUN_070b6918();
      *(undefined8 *)(unaff_x19 + 0x108) = uVar1;
      thunk_FUN_03d233cc(unaff_x19 + 0x108);
      uVar1 = FUN_070b68fc();
                    /* try { // try from 07099bac to 07199bb3 has its CatchHandler @ 07099c50 */
      *(undefined8 *)(unaff_x19 + 0x100) = uVar1;
      thunk_FUN_03d233cc(unaff_x19 + 0x100);
      uVar1 = FUN_070b6934();
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar1;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xf8),uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


