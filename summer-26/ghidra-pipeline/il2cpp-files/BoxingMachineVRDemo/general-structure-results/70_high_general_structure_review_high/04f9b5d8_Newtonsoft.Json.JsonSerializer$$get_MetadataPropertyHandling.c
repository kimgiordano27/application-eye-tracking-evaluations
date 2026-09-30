/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MetadataPropertyHandling
ENTRY_POINT: 04f9b5d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b6c0) */

undefined4 Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(long param_1)

{
  ulong uVar1;
  undefined8 extraout_x1;
  long *unaff_x21;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = FUN_0488a014();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uStack0000000000000008 = FUN_04f9b270();
    if (*(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(0,extraout_x1,uStack0000000000000008);
    }
    FUN_04888538();
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_02d6ec70();
  }
  return uStack0000000000000008;
}


