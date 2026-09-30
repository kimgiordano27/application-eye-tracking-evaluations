/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 05013a40
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  uint uVar1;
  int in_w8;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  uVar1 = -unaff_w23;
  if (in_w8 == 0) {
    FUN_02d6084c(PTR_DAT_0676b960);
    FUN_02d6084c(PTR_DAT_0675e6d8);
    *(undefined1 *)(unaff_x24 + 0xb17) = 1;
  }
  if (0x1b < (int)uVar1) {
    uVar1 = 0x1c;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_05061f70(&stack0x00000008,0,0,0,unaff_w20 & 1,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),0);
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


