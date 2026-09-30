/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 07a489f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  ushort uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  ushort *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x26;
  undefined1 *unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  int in_stack_00000010;
  
  while( true ) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar1 = *unaff_x22;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    unaff_x22 = unaff_x22 + 1;
    if (unaff_w23 == unaff_w24) goto LAB_07a48a7c;
    in_CY = unaff_w24 <= unaff_w23;
    in_ZR = unaff_w23 == unaff_w24;
  }
  if (unaff_w24 < unaff_w23) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a4a680();
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
      uVar3 = 0;
      goto LAB_07a48ab4;
    }
  }
LAB_07a48a7c:
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


