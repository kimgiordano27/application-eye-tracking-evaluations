/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 074c2e14
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


float Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  int iVar5;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar6;
  undefined1 auVar7 [16];
  double in_stack_00000008;
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
  long in_stack_00000098;
  
  FUN_03f13384();
  FUN_03f13384(PTR_DAT_091333b0);
  *(undefined1 *)(unaff_x23 + 0x4b1) = 1;
  in_stack_00000008 = 0.0;
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
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  in_stack_00000080 = 0;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar1 = FUN_074c2090();
  if ((uVar1 & 1) == 0) {
LAB_074c2ef0:
    FUN_074b78d0();
    auVar7 = FUN_074b79bc();
    uVar4 = auVar7._8_8_;
    uVar2 = auVar7._0_8_;
    if (unaff_x19 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      goto LAB_074c316c;
    }
    uVar1 = *(ulong *)(unaff_x19 + 0x70);
    if (DAT_096846f8 == '\0') {
      FUN_03f13384(PTR_DAT_0910b618);
      DAT_096846f8 = '\x01';
      if (uVar1 != 0) goto LAB_074c2f20;
LAB_074c2f50:
      uVar3 = 0;
    }
    else {
      if (uVar1 == 0) goto LAB_074c2f50;
LAB_074c2f20:
      uVar3 = FUN_07324190(uVar1,0);
      uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
    }
    if (DAT_0968e007 == '\0') {
      FUN_03f13384(PTR_DAT_09129058);
      FUN_03f13384(PTR_DAT_09120b00);
      DAT_0968e007 = '\x01';
    }
    iVar5 = auVar7._8_4_;
    if ((iVar5 == (int)uVar1) &&
       ((iVar5 == 0 ||
        (uVar1 = FUN_0732d940(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_09129058),
        (uVar1 & 1) != 0)))) {
      fVar6 = INFINITY;
    }
    else {
      uVar1 = *(ulong *)(unaff_x19 + 0x78);
      if (DAT_096846f8 == '\0') {
        FUN_03f13384(PTR_DAT_0910b618);
        DAT_096846f8 = '\x01';
        if (uVar1 != 0) goto LAB_074c2fc8;
LAB_074c2ff8:
        uVar3 = 0;
      }
      else {
        if (uVar1 == 0) goto LAB_074c2ff8;
LAB_074c2fc8:
        uVar3 = FUN_07324190(uVar1,0);
        uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
      }
      if (DAT_0968e007 == '\0') {
        FUN_03f13384(PTR_DAT_09129058);
        FUN_03f13384(PTR_DAT_09120b00);
        DAT_0968e007 = '\x01';
      }
      if ((iVar5 == (int)uVar1) &&
         ((iVar5 == 0 ||
          (uVar1 = FUN_0732d940(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_09129058),
          (uVar1 & 1) != 0)))) {
        fVar6 = -INFINITY;
      }
      else {
        uVar1 = *(ulong *)(unaff_x19 + 0x68);
        if (DAT_096846f8 == '\0') {
          FUN_03f13384(PTR_DAT_0910b618);
          DAT_096846f8 = '\x01';
          if (uVar1 != 0) goto LAB_074c306c;
LAB_074c309c:
          uVar3 = 0;
        }
        else {
          if (uVar1 == 0) goto LAB_074c309c;
LAB_074c306c:
          uVar3 = FUN_07324190(uVar1,0);
          uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
        }
        if (DAT_0968e007 == '\0') {
          FUN_03f13384(PTR_DAT_09129058);
          FUN_03f13384(PTR_DAT_09120b00);
          DAT_0968e007 = '\x01';
        }
        if ((iVar5 != (int)uVar1) ||
           ((iVar5 != 0 &&
            (uVar1 = FUN_0732d940(uVar2,uVar4,uVar3,uVar1,*(undefined8 *)PTR_DAT_09129058),
            (uVar1 & 1) == 0)))) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
            FUN_074bfb24(0,0);
          }
          goto LAB_074c316c;
        }
        fVar6 = NAN;
      }
    }
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar1 = FUN_074c2d3c(&stack0x00000010,&stack0x00000008);
    if (((uVar1 & 1) == 0) || (fVar6 = (float)in_stack_00000008, ABS(fVar6) == INFINITY)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (*(long *)(unaff_x24 + 0x28) != in_stack_00000098) goto LAB_074c316c;
      FUN_074bfb24(1,*(undefined8 *)PTR_DAT_091333b0);
      goto LAB_074c2ef0;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return fVar6;
  }
LAB_074c316c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


