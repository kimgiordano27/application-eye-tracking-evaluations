/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 04d52164
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04d52224) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(long param_1)

{
  undefined4 uVar1;
  long unaff_x23;
  undefined8 uVar2;
  long unaff_x24;
  char cStack000000000000001c;
  long in_stack_00000028;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xc90));
  *(undefined1 *)(unaff_x24 + 0x70c) = 1;
  cStack000000000000001c = '\0';
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_04ca4990();
  if (in_stack_00000028 != 0) {
    uVar2 = *(undefined8 *)(in_stack_00000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_02b45288(uVar2);
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


