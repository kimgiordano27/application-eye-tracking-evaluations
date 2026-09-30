/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 04d52148
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x04d52224) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling
          (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x24;
  char cStack000000000000001c;
  long in_stack_00000028;
  
  if ((*(byte *)(unaff_x24 + 0x70c) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06329c90);
    *(undefined1 *)(unaff_x24 + 0x70c) = 1;
  }
  cStack000000000000001c = '\0';
  if (param_1 != 0) {
    FUN_04ca4990(param_1,&stack0x0000001c,0);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = *(undefined8 *)(in_stack_00000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_02b45288(uVar2,param_2,param_3,param_4);
    if (cStack000000000000001c != '\0') {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04ca4af4(in_stack_00000028,0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


