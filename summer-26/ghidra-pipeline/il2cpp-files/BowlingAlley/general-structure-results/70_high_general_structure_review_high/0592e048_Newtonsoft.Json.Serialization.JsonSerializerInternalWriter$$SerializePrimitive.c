/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 0592e048
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  long *unaff_x19;
  uint unaff_w20;
  ushort *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x26;
  undefined1 *unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  int in_stack_00000010;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((4 < unaff_w20 - 9) && (unaff_w20 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    unaff_x22 = unaff_x22 + 1;
    if (unaff_w23 == unaff_w24) goto LAB_0592e0bc;
    if (unaff_w23 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    unaff_w20 = (uint)*unaff_x22;
    in_w8 = *(int *)(*unaff_x26 + 0xe0);
  }
  if (unaff_w24 < unaff_w23) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar1 = FUN_0592fca4();
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
      uVar2 = 0;
      goto LAB_0592e0f4;
    }
  }
LAB_0592e0bc:
  if ((unaff_w29 & 1) == 0) {
    uVar2 = 1;
    lVar3 = unaff_x28 * in_stack_00000010;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    *unaff_x27 = 1;
  }
LAB_0592e0f4:
  *unaff_x19 = lVar3;
  return uVar2;
}


