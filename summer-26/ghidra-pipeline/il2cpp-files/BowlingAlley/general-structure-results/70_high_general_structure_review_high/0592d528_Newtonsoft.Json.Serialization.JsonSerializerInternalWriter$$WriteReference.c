/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0592d528
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *unaff_x19;
  ushort *puVar4;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar5;
  int unaff_w25;
  int unaff_w26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592d5fc;
    uVar5 = unaff_w24 + 1;
    if ((int)uVar5 < (int)unaff_w23) {
      puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
      do {
        if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar1 = *puVar4;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592d5a0;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (unaff_w23 != uVar5);
    }
    else {
LAB_0592d5a0:
      if (uVar5 < unaff_w23) goto LAB_0592d5b4;
    }
  }
  else {
LAB_0592d5b4:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_0592fca4();
    if ((uVar2 & 1) == 0) {
LAB_0592d5fc:
      in_stack_00000018._4_4_ = 0;
      uVar3 = 0;
      goto LAB_0592d604;
    }
  }
  if ((unaff_w28 & 1) == 0) {
    uVar3 = 1;
    in_stack_00000018._4_4_ = unaff_w26 * in_stack_00000018._4_4_;
  }
  else {
    in_stack_00000018._4_4_ = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_0592d604:
  *unaff_x19 = in_stack_00000018._4_4_;
  return uVar3;
}


