/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 04f3c498
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *unaff_x19;
  ushort *puVar4;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  int unaff_w26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  ulong in_stack_00000018;
  
  if ((int)unaff_w24 < (int)unaff_w23) {
    puVar4 = (ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    do {
      if (unaff_w23 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar1 = *puVar4;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
      unaff_w24 = unaff_w24 + 1;
      puVar4 = puVar4 + 1;
    } while (unaff_w23 != unaff_w24);
  }
  else {
LAB_04f3c4f0:
    if (unaff_w24 < unaff_w23) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_04f3d628();
      if ((uVar2 & 1) == 0) {
        unaff_w26 = 0;
        uVar3 = 0;
        goto LAB_04f3c55c;
      }
    }
    unaff_w28 = unaff_w28 & 1;
  }
  if (((unaff_w28 & 1) == 0) && ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0)) {
    uVar3 = 1;
  }
  else {
    unaff_w26 = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_04f3c55c:
  *unaff_x19 = unaff_w26;
  return uVar3;
}


