/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 0675c710
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
               (undefined1 param_1 [16])

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000008;
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
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  long in_stack_00000098;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  if ((unaff_w19 >> 9 & 1) == 0) {
    in_stack_00000080 = param_1._6_2_;
    uStack0000000000000078 = param_1._8_2_;
    uStack000000000000007a = param_1._10_6_;
    in_stack_00000010 = uVar3;
    in_stack_00000018 = uVar4;
    in_stack_00000020 = uVar3;
    in_stack_00000028 = uVar4;
    in_stack_00000030 = uVar3;
    in_stack_00000038 = uVar4;
    in_stack_00000040 = uVar3;
    in_stack_00000048 = uVar4;
    in_stack_00000050 = uVar3;
    in_stack_00000058 = uVar4;
    in_stack_00000060 = uVar3;
    in_stack_00000068 = uVar4;
    in_stack_00000070 = uVar3;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0675b428();
    uVar1 = FUN_0675a9d8(&stack0x00000010,&stack0x00000008);
    if ((uVar1 & 1) == 0) {
      lVar2 = *unaff_x24;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        lVar2 = thunk_FUN_03ae8be4();
      }
      if (*(long *)(unaff_x23 + 0x28) != in_stack_00000098) goto LAB_0675c830;
      FUN_0675b068(1,*(undefined8 *)PTR_DAT_084a5ca8);
      goto LAB_0675c798;
    }
  }
  else {
LAB_0675c798:
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_0675bb2c();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar2 = 0;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        lVar2 = FUN_0675b068(0,*(undefined8 *)PTR_DAT_084a5ca8);
      }
      goto LAB_0675c830;
    }
  }
  lVar2 = in_stack_00000008;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_0675c830:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


