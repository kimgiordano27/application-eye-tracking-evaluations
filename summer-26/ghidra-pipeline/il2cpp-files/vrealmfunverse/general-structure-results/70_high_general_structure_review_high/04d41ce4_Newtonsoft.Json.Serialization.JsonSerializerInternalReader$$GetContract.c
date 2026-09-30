/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 04d41ce4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d41ef8) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  bool in_ZR;
  undefined8 uVar1;
  char in_w8;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack000000000000003c;
  undefined8 in_stack_00000048;
  
  if (in_ZR) {
    in_stack_00000008 = 0;
    if ((*(uint *)(unaff_x20 + 0x18) < (uint)(unaff_w24 + unaff_w22)) ||
       (*(uint *)(unaff_x20 + 0x18) - (unaff_w24 + unaff_w22) < (uint)(unaff_w21 - unaff_w24))) {
      FUN_04d9bcc4(0);
    }
    thunk_FUN_02bb0e9c(&stack0x00000008);
    _in_stack_00000020 = FUN_04d41f5c();
    uVar1 = FUN_0415e818(&stack0x00000020,*(undefined8 *)PTR_DAT_06332450);
  }
  else {
    cStack000000000000003c = in_w8;
    if (unaff_x25 == 0) {
      uVar1 = FUN_04d41a98();
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06312bb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar1 = FUN_03337a58();
    }
    if (cStack000000000000003c != '\0') {
      if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04de299c(*in_stack_00000018,0);
    }
  }
  return uVar1;
}


