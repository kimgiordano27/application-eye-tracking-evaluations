/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 056067c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x19;
  short unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  double dVar4;
  double unaff_d8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000098;
  
  if (in_w8 == 0x45) {
    uVar3 = 0xf;
    if (0xe < in_stack_00000008._4_4_) {
      uVar3 = 0x11;
    }
LAB_056068ac:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_05606c1c(uVar3,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_05610694(&stack0x00000010,0);
joined_r0x05606900:
      if (unaff_x19 == 0) goto LAB_056069e4;
      if ((uVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
      }
      goto LAB_056069b4;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
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
LAB_056069a4:
        FUN_05604ce8();
      }
      uVar1 = 0;
      goto LAB_056069b4;
    }
  }
  else {
    if (in_w8 == 0x47) {
      uVar3 = 0x11;
      if (in_stack_00000008._4_4_ < 0x10) {
        uVar3 = 0xf;
      }
      goto LAB_056068ac;
    }
    if (in_w8 != 0x52) {
      uVar3 = 0xf;
      goto LAB_056068ac;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_05606c1c(0xf,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_05610694(&stack0x00000010,0);
      goto joined_r0x05606900;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      dVar4 = (double)FUN_05606ffc(&stack0x00000010);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (dVar4 != unaff_d8) {
        FUN_05606c1c(0x11,&stack0x00000010);
      }
      goto LAB_056069a4;
    }
  }
  if (unaff_x19 == 0) {
LAB_056069e4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
LAB_056069b4:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


