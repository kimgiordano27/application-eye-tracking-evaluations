/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteValue
ENTRY_POINT: 0326ad0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonWriter__WriteValue
               (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  if ((DAT_04532b65 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_Start<HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
                );
    FUN_01c5d288(UnityEngine_Rendering_ProfilingSampler_TypeInfo);
    DAT_04532b65 = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_Start<HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
  ;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x58] = param_4;
  param_1[0x59] = param_5;
  param_1[0x5a] = param_6;
  param_1[0x5b] = param_7;
  param_1[0x5c] = in_stack_00000150;
  param_1[0x5d] = in_stack_00000158;
  param_1[0x11] = in_stack_00000160;
  param_1[0x12] = in_stack_00000168;
  auVar7 = FUN_03091804(*(undefined8 *)puVar2);
  *(undefined1 (*) [16])(param_1 + 0x13) = auVar7;
  auVar7 = FUN_03091804(*(undefined8 *)puVar2);
  iVar5 = (int)((ulong)param_3 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x15) = auVar7;
  if (iVar5 == 10) {
LAB_0326ae0c:
    auVar7 = FUN_0326af84(param_1);
    puVar2 = UnityEngine_Rendering_ProfilingSampler_TypeInfo;
    if (*(int *)(*(long *)UnityEngine_Rendering_ProfilingSampler_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    iVar4 = FUN_03132918(auVar7._0_8_,auVar7._8_8_,&stack0x00000080,0);
    if (iVar4 < 0) {
      auVar7 = FUN_0326af84(param_1);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar4 = FUN_03132a6c(auVar7._0_8_,auVar7._8_8_,&stack0x00000080,0);
      if (iVar4 < 0) goto Newtonsoft_Json_JsonWriter__WriteValue;
    }
    bVar3 = (in_stack_00000080._4_4_ & 0xf000) == 0x4000;
LAB_0326ae9c:
    if (iVar5 == 10) {
      uVar6 = 0x400;
      goto LAB_0326af10;
    }
    if (iVar5 == 0) {
      auVar7 = FUN_0326af84(param_1);
      if (*(int *)(*(long *)UnityEngine_Rendering_ProfilingSampler_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar5 = FUN_03132a6c(auVar7._0_8_,auVar7._8_8_,&stack0x00000010,0);
      if (-1 < iVar5) {
        uVar6 = (uint)((in_stack_00000010._4_4_ & 0xf000) == 0xa000) << 10;
        goto LAB_0326af10;
      }
    }
  }
  else {
    if (iVar5 != 4) {
      if (iVar5 == 0) goto LAB_0326ae0c;
Newtonsoft_Json_JsonWriter__WriteValue:
      bVar3 = false;
      goto LAB_0326ae9c;
    }
    bVar3 = true;
  }
  uVar6 = 0;
LAB_0326af10:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_03234fb8(param_1 + 2,bVar3,0);
  uVar1 = uVar6 | 0x10;
  if (bVar3 == false) {
    uVar1 = uVar6;
  }
  uVar6 = uVar1 | 2;
  if (*param_2 != '.') {
    uVar6 = uVar1;
  }
  uVar1 = 0x80;
  if (uVar6 != 0) {
    uVar1 = uVar6;
  }
  *(uint *)(param_1 + 0x57) = uVar1;
  return;
}


