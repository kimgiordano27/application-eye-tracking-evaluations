/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 054bcfd4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x054bd084) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  uint uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  char cStack0000000000000024;
  long in_stack_00000028;
  
  FUN_02d965b8(PTR_DAT_06a18a98);
  *(undefined1 *)(unaff_x21 + 0xd02) = 1;
  cStack0000000000000024 = '\0';
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_0540a960();
  if (in_stack_00000028 != 0) {
    uVar2 = *(undefined8 *)(in_stack_00000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06a18a98 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar1 = thunk_FUN_02d97a9c(uVar2);
    if (cStack0000000000000024 != '\0') {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0540aac4(in_stack_00000028,0);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


