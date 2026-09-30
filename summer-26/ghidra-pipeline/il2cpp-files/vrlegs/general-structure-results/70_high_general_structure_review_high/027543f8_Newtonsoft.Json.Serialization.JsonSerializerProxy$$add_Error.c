/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 027543f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined2 in_w8;
  undefined2 in_w9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  short unaff_w23;
  ulong unaff_x24;
  undefined2 unaff_w25;
  undefined8 in_stack_00000008;
  
  *(undefined2 *)(unaff_x21 + 10) = in_w9;
  *(undefined2 *)(unaff_x21 + 0xc) = in_w8;
  *(undefined2 *)(unaff_x21 + 0xe) = unaff_w25;
  if (unaff_x22 != 0) {
    uVar5 = FUN_025b8a2c();
    *(undefined2 *)(unaff_x21 + 0x10) = uVar5;
    uVar5 = FUN_025b8a2c();
    *(undefined2 *)(unaff_x21 + 0x12) = uVar5;
    uVar5 = FUN_025b8a2c();
    *(undefined2 *)(unaff_x21 + 0x14) = uVar5;
    *(undefined2 *)(unaff_x21 + 0x16) = unaff_w25;
    sVar3 = (short)(uint)(in_stack_00000008._4_4_ * unaff_x24 >> 0x23);
    sVar1 = (short)(in_stack_00000008._4_4_ / 100);
    sVar2 = (short)(in_stack_00000008._4_4_ / 1000);
    *(short *)(unaff_x21 + 0x18) = sVar2 + 0x30;
    *(short *)(unaff_x21 + 0x1e) =
         (short)((ulong)in_stack_00000008 >> 0x20) + sVar3 * unaff_w23 + 0x30;
    *(short *)(unaff_x21 + 0x1c) = sVar3 + sVar1 * unaff_w23 + 0x30;
    *(short *)(unaff_x21 + 0x1a) = sVar1 + sVar2 * unaff_w23 + 0x30;
    *(undefined2 *)(unaff_x21 + 0x20) = unaff_w25;
    uVar6 = FUN_02745acc(&stack0x00000018);
    sVar1 = (short)(uint)((uVar6 & 0xffffffff) * (unaff_x24 & 0xffffffff) >> 0x23);
    *(short *)(unaff_x21 + 0x22) = sVar1 + 0x30;
    *(short *)(unaff_x21 + 0x24) = (short)uVar6 + sVar1 * unaff_w23 + 0x30;
    *(undefined2 *)(unaff_x21 + 0x26) = 0x3a;
    uVar6 = FUN_02745c48(&stack0x00000018);
    sVar1 = (short)(uint)((uVar6 & 0xffffffff) * (unaff_x24 & 0xffffffff) >> 0x23);
    *(short *)(unaff_x21 + 0x28) = sVar1 + 0x30;
    *(short *)(unaff_x21 + 0x2a) = (short)uVar6 + sVar1 * unaff_w23 + 0x30;
    *(undefined2 *)(unaff_x21 + 0x2c) = 0x3a;
    uVar6 = FUN_02745eac(&stack0x00000018);
    uVar4 = DAT_00d376a0;
    sVar1 = (short)(uint)((uVar6 & 0xffffffff) * (unaff_x24 & 0xffffffff) >> 0x23);
    *(short *)(unaff_x21 + 0x2e) = sVar1 + 0x30;
    *(short *)(unaff_x21 + 0x30) = (short)uVar6 + sVar1 * unaff_w23 + 0x30;
    *(undefined8 *)(unaff_x21 + 0x32) = uVar4;
    *unaff_x19 = 0x1d;
    return 0x1c < unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


