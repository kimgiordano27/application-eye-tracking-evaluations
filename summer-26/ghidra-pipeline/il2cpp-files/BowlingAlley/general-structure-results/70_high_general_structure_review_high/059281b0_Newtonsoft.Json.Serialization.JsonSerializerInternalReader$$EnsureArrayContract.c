/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 059281b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(long param_1)

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
    thunk_FUN_032cd7c0();
  }
  FUN_0592851c(unaff_w24,&stack0x00000010);
  if (in_stack_00000010._4_4_ == 0x7fffffff) {
    uVar2 = FUN_059321b0(&stack0x00000010,0);
    if (unaff_x19 == 0) {
LAB_059282e4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
    }
  }
  else if (in_stack_00000010._4_4_ == -0x80000000) {
    if (unaff_x19 == 0) goto LAB_059282e4;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  }
  else {
    if (unaff_w23 == 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_05926b78();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_059265e8();
    }
    uVar1 = 0;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


