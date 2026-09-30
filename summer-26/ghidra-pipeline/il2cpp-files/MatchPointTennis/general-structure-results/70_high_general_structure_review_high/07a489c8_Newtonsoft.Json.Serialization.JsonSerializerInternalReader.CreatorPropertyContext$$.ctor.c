/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 07a489c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
          (long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar5;
  uint unaff_w23;
  int unaff_w24;
  uint uVar6;
  int unaff_w25;
  long *unaff_x26;
  undefined1 *unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  int in_stack_00000010;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a48aac;
    uVar6 = unaff_w24 + 1;
    if ((int)uVar6 < (int)unaff_w23) {
      puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
      do {
        if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar1 = *puVar5;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a48a38;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (unaff_w23 != uVar6);
    }
    else {
LAB_07a48a38:
      if (uVar6 < unaff_w23) goto LAB_07a48a4c;
    }
  }
  else {
LAB_07a48a4c:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a4a680();
    if ((uVar2 & 1) == 0) {
LAB_07a48aac:
      lVar4 = 0;
      uVar3 = 0;
      goto LAB_07a48ab4;
    }
  }
  if ((unaff_w29 & 1) == 0) {
    uVar3 = 1;
    lVar4 = unaff_x28 * in_stack_00000010;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_07a48ab4:
  *unaff_x19 = lVar4;
  return uVar3;
}


