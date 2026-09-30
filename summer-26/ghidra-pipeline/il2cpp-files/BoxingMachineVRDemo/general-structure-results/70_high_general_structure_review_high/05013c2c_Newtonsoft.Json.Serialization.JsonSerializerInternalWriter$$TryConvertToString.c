/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 05013c2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
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
  
  puVar2 = PTR_DAT_06777060;
  lVar1 = tpidr_el0;
  lStack0000000000000098 = *(long *)(lVar1 + 0x28);
  if ((DAT_06b79223 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06777060);
    FUN_02d6084c(PTR_DAT_0677a8f0);
    DAT_06b79223 = 1;
  }
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
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
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  in_stack_00000080 = 0;
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05013340(param_1,param_2,param_3,&stack0x00000010,param_4,0);
  if ((uVar3 & 1) == 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(param_1,param_2);
    auVar8 = FUN_050091bc();
    uVar5 = auVar8._8_8_;
    uVar7 = auVar8._0_8_;
    if (param_4 == 0) goto LAB_05013f60;
    uVar3 = *(ulong *)(param_4 + 0x70);
    if (DAT_06b77dad == '\0') {
      FUN_02d6084c(PTR_DAT_0676c428);
      DAT_06b77dad = '\x01';
      if (uVar3 != 0)
      goto Newtonsoft_Json_Serialization_JsonTypeReflector__CanTypeDescriptorConvertString;
LAB_05013d68:
      uVar4 = 0;
    }
    else {
      if (uVar3 == 0) goto LAB_05013d68;
Newtonsoft_Json_Serialization_JsonTypeReflector__CanTypeDescriptorConvertString:
      uVar4 = FUN_04e8a8a0(uVar3,0);
      uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    if (DAT_06b78c44 == '\0') {
      FUN_02d6084c(PTR_DAT_067711b0);
      FUN_02d6084c(PTR_DAT_06770f78);
      DAT_06b78c44 = '\x01';
    }
    iVar6 = auVar8._8_4_;
    if ((iVar6 == (int)uVar3) &&
       ((iVar6 == 0 ||
        (uVar3 = FUN_04e93a1c(uVar7,uVar5,uVar4,uVar3,*(undefined8 *)PTR_DAT_067711b0),
        (uVar3 & 1) != 0)))) {
      uVar7 = 0x7ff0000000000000;
    }
    else {
      uVar3 = *(ulong *)(param_4 + 0x78);
      if (DAT_06b77dad == '\0') {
        FUN_02d6084c(PTR_DAT_0676c428);
        DAT_06b77dad = '\x01';
        if (uVar3 != 0) goto LAB_05013de0;
LAB_05013e10:
        uVar4 = 0;
      }
      else {
        if (uVar3 == 0) goto LAB_05013e10;
LAB_05013de0:
        uVar4 = FUN_04e8a8a0(uVar3,0);
        uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
      }
      if (DAT_06b78c44 == '\0') {
        FUN_02d6084c(PTR_DAT_067711b0);
        FUN_02d6084c(PTR_DAT_06770f78);
        DAT_06b78c44 = '\x01';
      }
      if ((iVar6 == (int)uVar3) &&
         ((iVar6 == 0 ||
          (uVar3 = FUN_04e93a1c(uVar7,uVar5,uVar4,uVar3,*(undefined8 *)PTR_DAT_067711b0),
          (uVar3 & 1) != 0)))) {
        uVar7 = 0xfff0000000000000;
      }
      else {
        uVar3 = *(ulong *)(param_4 + 0x68);
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
          if (uVar3 != 0) goto LAB_05013e84;
LAB_05013eb4:
          uVar4 = 0;
        }
        else {
          if (uVar3 == 0) goto LAB_05013eb4;
LAB_05013e84:
          uVar4 = FUN_04e8a8a0(uVar3,0);
          uVar3 = (ulong)*(uint *)(uVar3 + 0x10);
        }
        if (DAT_06b78c44 == '\0') {
          FUN_02d6084c(PTR_DAT_067711b0);
          FUN_02d6084c(PTR_DAT_06770f78);
          DAT_06b78c44 = '\x01';
        }
        if ((iVar6 != (int)uVar3) ||
           ((iVar6 != 0 &&
            (uVar3 = FUN_04e93a1c(uVar7,uVar5,uVar4,uVar3,*(undefined8 *)PTR_DAT_067711b0),
            (uVar3 & 1) == 0)))) {
          FUN_028f4b80(*(undefined8 *)puVar2);
          uVar7 = FUN_05010df8(0,0);
          goto LAB_05013f78;
        }
        uVar7 = 0x7ff8000000000000;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_05013f7c(&stack0x00000010,&stack0x00000008);
    uVar7 = in_stack_00000008;
    if ((uVar3 & 1) == 0) {
      FUN_028f4b80(*(undefined8 *)puVar2);
      FUN_05010df8(1,*(undefined8 *)PTR_DAT_0677a8f0);
LAB_05013f60:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000098) {
    return;
  }
LAB_05013f78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


