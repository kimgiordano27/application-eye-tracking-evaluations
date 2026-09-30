/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 0500ef58
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues(void)

{
  ushort uVar1;
  bool in_CY;
  ulong unaff_x19;
  int unaff_w20;
  ushort *puVar2;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar3;
  uint unaff_w25;
  undefined4 uVar4;
  long *unaff_x26;
  long unaff_x27;
  ulong uVar5;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000018;
  
  if ((in_CY) && (unaff_w20 != 0x20)) {
LAB_0500efd4:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_0500f958();
    unaff_x19 = unaff_x19 & 0xffffffff;
    if ((uVar5 & 1) == 0) {
LAB_0500f018:
      unaff_x27 = 0;
      uVar4 = 0;
      goto LAB_0500f020;
    }
  }
  else {
    if ((in_stack_00000008._4_4_ >> 1 & 1) == 0) goto LAB_0500f018;
    uVar3 = unaff_w24 + 1;
    uVar5 = unaff_x19;
    if ((int)uVar3 < (int)unaff_w23) {
      puVar2 = (ushort *)(unaff_x21 + (long)(int)uVar3 * 2);
      uVar5 = unaff_x19 & 0xffffffff;
      do {
        if (unaff_w23 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        uVar1 = *puVar2;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0500efc0;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (unaff_w23 != uVar3);
    }
    else {
LAB_0500efc0:
      unaff_x19 = uVar5;
      if (uVar3 < unaff_w23) goto LAB_0500efd4;
    }
  }
  if ((unaff_x19 & 1) == 0) {
    if (unaff_x27 == 0) {
      unaff_w25 = 1;
    }
    if ((unaff_w25 & 1) != 0) {
      uVar4 = 1;
      goto LAB_0500f020;
    }
  }
  unaff_x27 = 0;
  uVar4 = 0;
  *in_stack_00000018 = 1;
LAB_0500f020:
  *unaff_x22 = unaff_x27;
  return uVar4;
}


