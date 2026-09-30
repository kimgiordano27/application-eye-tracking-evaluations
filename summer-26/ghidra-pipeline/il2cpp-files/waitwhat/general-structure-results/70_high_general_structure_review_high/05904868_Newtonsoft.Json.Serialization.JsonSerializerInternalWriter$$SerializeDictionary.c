/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 05904868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0590491c) */

undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  undefined4 uVar1;
  undefined1 in_w8;
  long unaff_x23;
  undefined8 uVar2;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  long *plStack0000000000000010;
  char cStack000000000000001c;
  long in_stack_00000028;
  
  *(undefined1 *)(unaff_x24 + 0x839) = in_w8;
  puStack0000000000000008 = &stack0x0000001c;
  cStack000000000000001c = '\0';
  uStack0000000000000000 = 0;
  plStack0000000000000010 = &stack0x00000028;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_05854d6c();
  if (in_stack_00000028 != 0) {
    uVar2 = *(undefined8 *)(in_stack_00000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_070fbbf0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_0318f89c(uVar2);
    if (cStack000000000000001c != '\0') {
      if (*plStack0000000000000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_05854ed0(*plStack0000000000000010,0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


