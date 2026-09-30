/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 05933178
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
               (long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  long in_x9;
  uint *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar3;
  undefined2 *puVar4;
  long *unaff_x25;
  
  puVar4 = (undefined2 *)(unaff_x21 + param_1 * 2);
  param_1 = in_x9 - param_1;
  do {
    if (unaff_w20 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar1 = *puVar4;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_058a1fe4(uVar1,0);
    uVar3 = unaff_w22;
    if ((uVar2 & 1) == 0) break;
    unaff_w22 = unaff_w22 + 1;
    param_1 = param_1 + -1;
    puVar4 = puVar4 + 1;
    uVar3 = unaff_w20;
  } while (param_1 != 0);
  *unaff_x19 = uVar3;
  return;
}


