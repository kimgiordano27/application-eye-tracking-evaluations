/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 0500ee10
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0500f064) */

undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  ushort uVar1;
  ulong uVar2;
  int unaff_w20;
  ushort *puVar3;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar4;
  undefined4 uVar5;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((unaff_w20 - 9U < 5) || (unaff_w20 == 0x20)) {
    if ((in_stack_00000008._4_4_ >> 1 & 1) == 0) goto LAB_0500f018;
    uVar4 = unaff_w24 + 1;
    if ((int)uVar4 < (int)unaff_w23) {
      puVar3 = (ushort *)(unaff_x21 + (long)(int)uVar4 * 2);
      do {
        if (unaff_w23 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        uVar1 = *puVar3;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0500efc0;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (unaff_w23 != uVar4);
    }
    else {
LAB_0500efc0:
      if (uVar4 < unaff_w23) goto LAB_0500efd4;
    }
  }
  else {
LAB_0500efd4:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar2 = FUN_0500f958();
    if ((uVar2 & 1) == 0) {
LAB_0500f018:
      uVar5 = 0;
      goto LAB_0500f020;
    }
  }
  uVar5 = 1;
LAB_0500f020:
  *unaff_x22 = 0;
  return uVar5;
}


