/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 05e8e5e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint in_w9;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0 || (unaff_w21 & 0x200) != 0) {
    in_w9 = in_w9 | 0x2000000;
  }
  thunk_FUN_03650fbc();
  *(uint *)(unaff_x19 + 0x38) = in_w9;
  if ((((unaff_w20 >> 2 & 1) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) &&
     (uVar2 = FUN_05e8ec6c(), (uVar2 >> 3 & 1) == 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_05e8e804();
  }
  if (*(int *)(*(long *)PTR_DAT_079fd0e8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_079fd118;
  uVar3 = FUN_05e7b18c(&stack0x00000008,0);
  if ((uVar3 & 1) != 0) {
    FUN_05e8e878();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_05e7b5e0(0);
  FUN_05e8eb7c();
  return;
}


