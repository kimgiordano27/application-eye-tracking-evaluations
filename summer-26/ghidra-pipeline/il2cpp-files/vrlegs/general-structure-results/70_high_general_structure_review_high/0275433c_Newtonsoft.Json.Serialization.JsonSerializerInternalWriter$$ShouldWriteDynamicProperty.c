/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 0275433c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty(void)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *unaff_x19;
  uint unaff_w20;
  undefined2 *unaff_x21;
  long unaff_x22;
  long lVar8;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  
  uVar5 = FUN_02745980();
  if (unaff_x22 != 0) {
    if (*(uint *)(unaff_x22 + 0x18) <= uVar5) {
LAB_02754558:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar7 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= iStack0000000000000008 - 1U) goto LAB_02754558;
      lVar8 = *(long *)(unaff_x22 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar7 + (long)(int)(iStack0000000000000008 - 1U) * 8 + 0x20);
        uVar4 = FUN_025b8a2c(lVar8,0,0);
        *unaff_x21 = uVar4;
        uVar4 = FUN_025b8a2c(lVar8,1,0);
        unaff_x21[1] = uVar4;
        uVar4 = FUN_025b8a2c(lVar8,2,0);
        unaff_x21[2] = uVar4;
        *(undefined4 *)(unaff_x21 + 3) = 0x20002c;
        unaff_x21[5] = (short)(in_stack_00000000._4_4_ / 10) + 0x30;
        unaff_x21[6] = (short)(in_stack_00000000._4_4_ % 10) + 0x30;
        unaff_x21[7] = 0x20;
        if (lVar7 != 0) {
          uVar4 = FUN_025b8a2c(lVar7,0,0);
          unaff_x21[8] = uVar4;
          uVar4 = FUN_025b8a2c(lVar7,1,0);
          unaff_x21[9] = uVar4;
          uVar4 = FUN_025b8a2c(lVar7,2,0);
          unaff_x21[10] = uVar4;
          unaff_x21[0xb] = 0x20;
          sVar1 = (short)(uStack000000000000000c / 100);
          sVar2 = (short)(uStack000000000000000c / 1000);
          unaff_x21[0xc] = sVar2 + 0x30;
          unaff_x21[0xf] = (short)(uStack000000000000000c % 10) + 0x30;
          unaff_x21[0xe] = (short)(uStack000000000000000c / 10) + sVar1 * -10 + 0x30;
          unaff_x21[0xd] = sVar1 + sVar2 * -10 + 0x30;
          unaff_x21[0x10] = 0x20;
          uVar6 = FUN_02745acc(&stack0x00000018);
          sVar1 = (short)((uVar6 & 0xffffffff) / 10);
          unaff_x21[0x11] = sVar1 + 0x30;
          unaff_x21[0x12] = (short)uVar6 + sVar1 * -10 + 0x30;
          unaff_x21[0x13] = 0x3a;
          uVar6 = FUN_02745c48(&stack0x00000018);
          sVar1 = (short)((uVar6 & 0xffffffff) / 10);
          unaff_x21[0x14] = sVar1 + 0x30;
          unaff_x21[0x15] = (short)uVar6 + sVar1 * -10 + 0x30;
          unaff_x21[0x16] = 0x3a;
          uVar6 = FUN_02745eac(&stack0x00000018);
          uVar3 = DAT_00d376a0;
          sVar1 = (short)((uVar6 & 0xffffffff) / 10);
          unaff_x21[0x17] = sVar1 + 0x30;
          unaff_x21[0x18] = (short)uVar6 + sVar1 * -10 + 0x30;
          *(undefined8 *)(unaff_x21 + 0x19) = uVar3;
          *unaff_x19 = 0x1d;
          return 0x1c < unaff_w20;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


