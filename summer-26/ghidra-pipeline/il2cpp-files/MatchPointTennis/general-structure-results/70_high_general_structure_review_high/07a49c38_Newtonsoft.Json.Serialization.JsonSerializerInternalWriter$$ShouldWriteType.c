/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 07a49c38
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar4;
  uint unaff_w23;
  int unaff_w24;
  uint uVar5;
  int unaff_w25;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07a49d38;
    uVar5 = unaff_w24 + 1;
    if ((int)unaff_w23 <= (int)uVar5) {
LAB_07a49cec:
      if (uVar5 < unaff_w23) goto LAB_07a49d00;
      goto LAB_07a49d30;
    }
    puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
    do {
      if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar1 = *puVar4;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_07a49cec;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (unaff_w23 != uVar5);
  }
  else {
LAB_07a49d00:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a4a680();
    if ((uVar2 & 1) == 0) {
LAB_07a49d38:
      unaff_x26 = 0;
      uVar3 = 0;
      goto LAB_07a49d40;
    }
LAB_07a49d30:
    unaff_w28 = unaff_w28 & 1;
  }
  if (((unaff_w28 & 1) == 0) && ((unaff_w20 & 1) != 0 || unaff_x26 == 0)) {
    uVar3 = 1;
  }
  else {
    unaff_x26 = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_07a49d40:
  *unaff_x19 = unaff_x26;
  return uVar3;
}


