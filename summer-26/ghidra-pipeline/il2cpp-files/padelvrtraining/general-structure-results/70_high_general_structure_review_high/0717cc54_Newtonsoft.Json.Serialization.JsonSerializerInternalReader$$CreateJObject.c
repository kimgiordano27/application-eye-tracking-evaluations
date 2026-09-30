/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 0717cc54
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
               )

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long unaff_x25;
  double dVar8;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined2 in_stack_00000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  undefined8 uStack0000000000000082;
  long lStack0000000000000098;
  
  puVar2 = PTR_DAT_0920eb10;
  lStack0000000000000098 = *(long *)(unaff_x25 + 0x28);
  if ((DAT_09842fcb & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0920eb10);
    DAT_09842fcb = 1;
  }
  iStack000000000000000c = 0;
  uStack0000000000000082 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007a = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_0717ae9c(param_3,param_4,&stack0x0000000c);
  uVar1 = uVar3 & 0xffff;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  in_stack_00000080 = 0;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x45) {
LAB_0717cdcc:
      uVar7 = 0xf;
      if (0xe < iStack000000000000000c) {
        uVar7 = 0x11;
      }
    }
    else if (uVar1 == 0x47) {
LAB_0717cdb4:
      uVar7 = 0x11;
      if (iStack000000000000000c < 0x10) {
        uVar7 = 0xf;
      }
    }
    else {
      if (uVar1 == 0x52) goto LAB_0717cd34;
LAB_0717cd14:
      uVar7 = 0xf;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0717d150(param_1,uVar7,&stack0x00000010);
    iVar6 = iStack000000000000000c;
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar5 = FUN_07186bc8(&stack0x00000010,0);
joined_r0x0717ceac:
      if (param_5 == 0) goto LAB_0717cf18;
      if ((uVar5 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_5 + 0x70);
      }
      else {
        uVar4 = *(undefined8 *)(param_5 + 0x78);
      }
      goto LAB_0717cee8;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
      if ((uVar3 & 0xffff) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717b7ac(param_2,&stack0x00000010,param_3,param_4,param_5);
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
LAB_0717ced8:
        FUN_0717b21c(param_2,&stack0x00000010,uVar3,iVar6,param_5,0);
      }
      uVar4 = 0;
      goto LAB_0717cee8;
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_0717cdcc;
    if (uVar1 == 0x67) goto LAB_0717cdb4;
    if (uVar1 != 0x72) goto LAB_0717cd14;
LAB_0717cd34:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0717d150(param_1,0xf,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) {
      uVar5 = FUN_07186bc8(&stack0x00000010,0);
      goto joined_r0x0717ceac;
    }
    if (in_stack_00000010._4_4_ != -0x80000000) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      dVar8 = (double)FUN_0717d530(&stack0x00000010);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (dVar8 == param_1) {
        iVar6 = 0xf;
      }
      else {
        FUN_0717d150(param_1,0x11,&stack0x00000010);
        iVar6 = 0x11;
      }
      uVar3 = 0x47;
      goto LAB_0717ced8;
    }
  }
  if (param_5 == 0) {
LAB_0717cf18:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar4 = *(undefined8 *)(param_5 + 0x68);
LAB_0717cee8:
  if (*(long *)(unaff_x25 + 0x28) != lStack0000000000000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


