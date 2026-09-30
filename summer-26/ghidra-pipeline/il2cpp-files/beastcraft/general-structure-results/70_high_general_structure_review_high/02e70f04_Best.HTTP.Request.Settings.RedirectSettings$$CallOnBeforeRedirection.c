/*
FUNCTION_NAME: Best.HTTP.Request.Settings.RedirectSettings$$CallOnBeforeRedirection
ENTRY_POINT: 02e70f04
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Best_HTTP_Request_Settings_RedirectSettings__CallOnBeforeRedirection
               (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte in_stack_00000000;
  ulong in_stack_00000008;
  char *in_stack_00000010;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000018;
  void *in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  void *in_stack_00000060;
  byte in_stack_00000070;
  ulong in_stack_00000078;
  char *in_stack_00000080;
  byte in_stack_00000088;
  size_t in_stack_00000090;
  void *in_stack_00000098;
  
  FUN_02e43874(&stack0x00000088,*(undefined8 *)(*param_2 + 0x18));
  FUN_02e43874(&stack0x00000070,*(undefined8 *)(*param_2 + 0x10));
  if (param_2[3] == 0) {
    sVar2 = (ulong)(in_stack_00000088 >> 1);
    if ((in_stack_00000088 & 1) != 0) {
      sVar2 = in_stack_00000090;
    }
    FUN_02e3d8f4(&stack0x00000050,extraout_x1,sVar2 + 1,&stack0x00000030);
    pvVar7 = (void *)((ulong)&stack0x00000050 | 1);
    if ((in_stack_00000050 & 1) != 0) {
      pvVar7 = in_stack_00000060;
    }
    if (sVar2 != 0) {
      pvVar3 = (void *)((ulong)&stack0x00000088 | 1);
      if ((in_stack_00000088 & 1) != 0) {
        pvVar3 = in_stack_00000098;
      }
      memmove(pvVar7,pvVar3,sVar2);
    }
    *(undefined2 *)((long)pvVar7 + sVar2) = 0x2e;
    uVar1 = (ulong)(in_stack_00000070 >> 1);
    pcVar4 = (char *)((ulong)&stack0x00000070 | 1);
    if ((in_stack_00000070 & 1) != 0) {
      uVar1 = in_stack_00000078;
      pcVar4 = in_stack_00000080;
    }
    puVar6 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&stack0x00000050,pcVar4,uVar1);
    uVar8 = puVar6[2];
    uVar10 = puVar6[1];
    uVar9 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[2] = uVar8;
    pvVar7 = in_stack_00000060;
    if ((in_stack_00000050 & 1) == 0) goto LAB_02e7115c;
  }
  else {
    sVar2 = (ulong)(in_stack_00000088 >> 1);
    if ((in_stack_00000088 & 1) != 0) {
      sVar2 = in_stack_00000090;
    }
    FUN_02e3d8f4(&stack0x00000018,extraout_x1,sVar2 + 1);
    pvVar7 = (void *)((ulong)&stack0x00000018 | 1);
    if (((byte)in_stack_00000018 & 1) != 0) {
      pvVar7 = in_stack_00000028;
    }
    if (sVar2 != 0) {
      pvVar3 = (void *)((ulong)&stack0x00000088 | 1);
      if ((in_stack_00000088 & 1) != 0) {
        pvVar3 = in_stack_00000098;
      }
      memmove(pvVar7,pvVar3,sVar2);
    }
    *(undefined2 *)((long)pvVar7 + sVar2) = 0x2e;
    uVar1 = (ulong)(in_stack_00000070 >> 1);
    pcVar4 = (char *)((ulong)&stack0x00000070 | 1);
    if ((in_stack_00000070 & 1) != 0) {
      uVar1 = in_stack_00000078;
      pcVar4 = in_stack_00000080;
    }
    puVar5 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(&stack0x00000018,pcVar4,uVar1);
    in_stack_00000040 = (void *)puVar5[2];
    in_stack_00000038 = puVar5[1];
    in_stack_00000030 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&stack0x00000030,": ");
    in_stack_00000060 = (void *)puVar5[2];
    in_stack_00000058 = puVar5[1];
    in_stack_00000050 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_02e726d0(param_2[3]);
    FUN_02e72314();
    uVar1 = (ulong)(in_stack_00000000 >> 1);
    pcVar4 = (char *)((ulong)&stack0x00000000 | 1);
    if ((in_stack_00000000 & 1) != 0) {
      uVar1 = in_stack_00000008;
      pcVar4 = in_stack_00000010;
    }
    puVar6 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&stack0x00000050,pcVar4,uVar1);
    uVar8 = puVar6[2];
    uVar10 = puVar6[1];
    uVar9 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[2] = uVar8;
    if ((in_stack_00000000 & 1) != 0) {
      operator_delete(in_stack_00000010);
    }
    if ((in_stack_00000050 & 1) != 0) {
      operator_delete(in_stack_00000060);
    }
    if ((in_stack_00000030 & 1) != 0) {
      operator_delete(in_stack_00000040);
    }
    pvVar7 = in_stack_00000028;
    if (((byte)in_stack_00000018 & 1) == 0) goto LAB_02e7115c;
  }
  operator_delete(pvVar7);
LAB_02e7115c:
  if ((in_stack_00000070 & 1) != 0) {
    operator_delete(in_stack_00000080);
  }
  if ((in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  return;
}


