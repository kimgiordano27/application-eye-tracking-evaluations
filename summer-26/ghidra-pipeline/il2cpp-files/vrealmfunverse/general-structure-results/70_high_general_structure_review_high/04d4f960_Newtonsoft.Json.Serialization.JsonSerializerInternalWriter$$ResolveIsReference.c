/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 04d4f960
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


/* WARNING: Removing unreachable block (ram,0x04d4fa24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference
          (ulong param_1,long param_2)

{
  long unaff_x22;
  undefined8 uVar1;
  long unaff_x23;
  char cStack0000000000000024;
  long lStack0000000000000028;
  
  lStack0000000000000028 = param_2;
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06329c90);
    *(undefined1 *)(unaff_x23 + 0x70e) = 1;
  }
  cStack0000000000000024 = '\0';
  if (unaff_x22 != 0) {
    FUN_04ca4990();
    if (lStack0000000000000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(undefined8 *)(lStack0000000000000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = thunk_FUN_02b6def4(uVar1);
    if (cStack0000000000000024 != '\0') {
      if (lStack0000000000000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04ca4af4(lStack0000000000000028,0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


