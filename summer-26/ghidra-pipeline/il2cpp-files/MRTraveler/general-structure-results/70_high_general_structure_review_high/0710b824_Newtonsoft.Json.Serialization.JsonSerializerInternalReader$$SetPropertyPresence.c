/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 0710b824
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

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
  
  thunk_FUN_03cd7500();
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0710b900;
    uVar6 = unaff_w24 + 1;
    if ((int)uVar6 < (int)unaff_w23) {
      puVar5 = (ushort *)(unaff_x21 + (long)(int)uVar6 * 2);
      do {
        if (unaff_w23 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar1 = *puVar5;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710b88c;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (unaff_w23 != uVar6);
    }
    else {
LAB_0710b88c:
      if (uVar6 < unaff_w23) goto LAB_0710b8a0;
    }
  }
  else {
LAB_0710b8a0:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0710d4b8();
    if ((uVar2 & 1) == 0) {
LAB_0710b900:
      lVar4 = 0;
      uVar3 = 0;
      goto LAB_0710b908;
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
LAB_0710b908:
  *unaff_x19 = lVar4;
  return uVar3;
}


