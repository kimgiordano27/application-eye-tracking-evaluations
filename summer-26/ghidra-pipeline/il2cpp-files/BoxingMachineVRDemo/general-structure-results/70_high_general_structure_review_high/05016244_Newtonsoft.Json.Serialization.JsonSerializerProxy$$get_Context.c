/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 05016244
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  
  if (unaff_w21 < 1) {
    *unaff_x20 = 0;
    thunk_FUN_02dd37b4();
LAB_05016288:
    uVar1 = 0;
  }
  else {
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x20);
    thunk_FUN_02dd37b4();
    if (unaff_w21 == 1) goto LAB_05016288;
    if (*(uint *)(unaff_x19 + 0x18) < 2) goto LAB_050162e0;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  }
  unaff_x20[1] = uVar1;
  thunk_FUN_02dd37b4();
  if (unaff_w21 < 3) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(unaff_x19 + 0x18) < 3) {
LAB_050162e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  }
  unaff_x20[2] = uVar1;
  thunk_FUN_02dd37b4();
  unaff_x20[3] = unaff_x19;
  thunk_FUN_02dd37b4(unaff_x20 + 3);
  return;
}


