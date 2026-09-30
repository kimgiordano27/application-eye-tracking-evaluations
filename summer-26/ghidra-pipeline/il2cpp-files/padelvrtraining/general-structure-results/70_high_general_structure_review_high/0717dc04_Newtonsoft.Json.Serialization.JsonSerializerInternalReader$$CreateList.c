/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 0717dc04
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(undefined8 param_1)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x19;
  short unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  double dVar4;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  long in_stack_00000098;
  
  uStack000000000000007a = (undefined6)param_1;
  uStack0000000000000080 = (undefined2)((ulong)param_1 >> 0x30);
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_1;
  uStack0000000000000060 = param_1;
  uStack0000000000000070 = param_1;
  if (in_CY && !in_ZR) {
    if (in_w8 == 0x65) goto LAB_0717dcf0;
    if (in_w8 == 0x67) goto LAB_0717dcd8;
    if (in_w8 != 0x72) goto LAB_0717dc34;
LAB_0717dc54:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0717d150((double)unaff_s8,7,&stack0x00000010);
    if (uStack0000000000000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_07186bc8(&stack0x00000010,0);
      goto joined_r0x0717ddd0;
    }
    if (uStack0000000000000010._4_4_ != -0x80000000) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      dVar4 = (double)FUN_0717d530(&stack0x00000010);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((float)dVar4 != unaff_s8) {
        FUN_0717d150((double)unaff_s8,9,&stack0x00000010);
      }
      goto LAB_0717ddfc;
    }
  }
  else {
    if (in_w8 == 0x45) {
LAB_0717dcf0:
      uVar3 = 7;
      if (6 < in_stack_00000008._4_4_) {
        uVar3 = 9;
      }
    }
    else if (in_w8 == 0x47) {
LAB_0717dcd8:
      uVar3 = 9;
      if (in_stack_00000008._4_4_ < 8) {
        uVar3 = 7;
      }
    }
    else {
      if (in_w8 == 0x52) goto LAB_0717dc54;
LAB_0717dc34:
      uVar3 = 7;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0717d150((double)unaff_s8,uVar3,&stack0x00000010);
    if (uStack0000000000000010._4_4_ == 0x7fffffff) {
      uVar2 = FUN_07186bc8(&stack0x00000010,0);
joined_r0x0717ddd0:
      if (unaff_x19 == 0) goto LAB_0717de40;
      if ((uVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
      }
      goto LAB_0717de0c;
    }
    if (uStack0000000000000010._4_4_ != -0x80000000) {
      if (unaff_w23 == 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717b7ac();
      }
      else {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
LAB_0717ddfc:
        FUN_0717b21c();
      }
      uVar1 = 0;
      goto LAB_0717de0c;
    }
  }
  if (unaff_x19 == 0) {
LAB_0717de40:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
LAB_0717de0c:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


