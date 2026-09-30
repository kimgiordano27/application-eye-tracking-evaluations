/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 056068b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  short unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  long in_stack_00000098;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05606c1c(unaff_w24,&stack0x00000010);
  if (in_stack_00000010._4_4_ == 0x7fffffff) {
    uVar2 = FUN_05610694(&stack0x00000010,0);
    if (unaff_x19 == 0) {
LAB_056069e4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
    }
  }
  else if (in_stack_00000010._4_4_ == -0x80000000) {
    if (unaff_x19 == 0) goto LAB_056069e4;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  }
  else {
    if (unaff_w23 == 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_05605278();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_05604ce8();
    }
    uVar1 = 0;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


