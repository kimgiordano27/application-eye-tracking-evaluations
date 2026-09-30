/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 0592df84
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  uint in_w11;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar5;
  uint unaff_w23;
  uint uVar6;
  long *unaff_x26;
  int unaff_w27;
  uint uVar7;
  undefined1 *in_stack_00000008;
  int in_stack_00000010;
  
  uVar6 = unaff_w27 + 0x13;
  uVar7 = in_w11 | (ulong)(param_1 + in_x10) < in_x9 - 0x30U;
  if (unaff_w23 <= uVar6) {
    if (uVar7 != 0) goto LAB_0592e0c4;
    goto LAB_0592e128;
  }
  do {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (9 < uVar1 - 0x30) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592e08c;
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592e0ec;
      uVar6 = uVar6 + 1;
      if ((int)unaff_w23 <= (int)uVar6) goto LAB_0592e078;
      puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
      goto LAB_0592e034;
    }
    uVar6 = uVar6 + 1;
    uVar7 = 1;
  } while (unaff_w23 != uVar6);
  goto LAB_0592e0c4;
LAB_0592e078:
  if (uVar6 < unaff_w23) {
LAB_0592e08c:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_0592fca4();
    if ((uVar2 & 1) == 0) {
LAB_0592e0ec:
      lVar4 = 0;
      uVar3 = 0;
      goto LAB_0592e0f4;
    }
  }
  goto LAB_0592e0bc;
  while( true ) {
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
    if (unaff_w23 == uVar6) break;
LAB_0592e034:
    if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar1 = *puVar5;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592e078;
  }
LAB_0592e0bc:
  if ((uVar7 & 1) == 0) {
LAB_0592e128:
    uVar3 = 1;
    lVar4 = (in_x9 - 0x30U) * (long)in_stack_00000010;
  }
  else {
LAB_0592e0c4:
    lVar4 = 0;
    uVar3 = 0;
    *in_stack_00000008 = 1;
  }
LAB_0592e0f4:
  *unaff_x19 = lVar4;
  return uVar3;
}


