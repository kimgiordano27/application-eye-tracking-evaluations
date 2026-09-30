/*
FUNCTION_NAME: Unity.Mathematics.uint3x4$$op_Explicit
ENTRY_POINT: 0214975c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


undefined8 Unity_Mathematics_uint3x4__op_Explicit(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar13;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  int *unaff_x27;
  int unaff_w28;
  undefined8 *puVar14;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000110;
  
  do {
    FUN_012f24b4();
    unaff_x22[2] = in_stack_00000038;
    unaff_x22[3] = in_stack_00000040;
    uVar6 = FUN_0213a9a0(&stack0x00000200,0);
    uVar7 = unaff_x26;
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_015fe7e8(unaff_x26,**(undefined8 **)(*unaff_x24 + 0xb8),0);
      FUN_012f24b4();
      uVar7 = FUN_0214b9cc(in_stack_00000038,in_stack_00000040);
      if ((uVar6 & 1) != 0) {
        uVar7 = FUN_01600424(unaff_x26,*unaff_x25,uVar7,0);
      }
    }
    unaff_w28 = unaff_w28 + 1;
    unaff_x26 = uVar7;
  } while (unaff_w28 < *unaff_x27);
  uVar6 = FUN_015fe7e8(uVar7,**(undefined8 **)(*unaff_x24 + 0xb8),0);
  puVar14 = (undefined8 *)StringLiteral_3287;
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_015fe7e8();
    puVar14 = (undefined8 *)StringLiteral_3287;
    if ((uVar6 & 1) == 0) {
      unaff_x21 = FUN_015f5b28();
    }
    else {
      unaff_x21 = FUN_01600424();
    }
  }
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
  ;
  uVar6 = FUN_0213a9a0();
  if ((uVar6 & 1) == 0) {
    uVar7 = FUN_0213ad2c();
    *in_stack_00000028 = uVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_021ebc50(0);
    lVar8 = FUN_021eec94(uVar7,*in_stack_00000028,0,0);
    if ((lVar8 == 0) || (uVar6 = FUN_015ff8a0(*(undefined8 *)(lVar8 + 0x98),0), (uVar6 & 1) != 0)) {
      uVar7 = FUN_0214b9cc(*unaff_x19,unaff_x19[1]);
    }
    else {
      uVar7 = *(undefined8 *)(lVar8 + 0x98);
    }
    uVar6 = FUN_015ff8a0(unaff_x21,0);
    if ((uVar6 & 1) == 0) {
      unaff_x21 = FUN_01600424(unaff_x21,*puVar14,uVar7,0);
    }
    else {
      unaff_x21 = FUN_015f5b28(unaff_x21,uVar7,0);
    }
  }
  uVar6 = FUN_0213a9a0(unaff_x19 + 6,0);
  if (((uVar6 & 1) != 0) || (uVar6 = FUN_0214a040(), (uVar6 & 1) != 0)) goto LAB_02149cb4;
  uVar6 = FUN_015ff8a0();
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_021ebc50(0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_021f605c(&stack0x00000038);
    uVar9 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000038,in_stack_00000040,0);
    lVar8 = FUN_021eec94(uVar7,uVar9,0,0);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<bool>>,_WitTTSVRequest_<RequestDownload>d__25>__
    ;
    if (lVar8 == 0) goto LAB_02149c6c;
    uVar7 = FUN_0213ad2c(unaff_x19 + 6,0);
    FUN_021f605c(&stack0x000001f0,uVar7,0);
    uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(*unaff_x22,unaff_x22[1],0);
    FUN_021e7488(&stack0x00000038,lVar8,uVar7,(long)&stack0x00000110 + 4,0);
    memcpy(&stack0x00000118,&stack0x00000038,0xd8);
    lVar8 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000118,*(undefined8 *)(lVar8 + 0x80));
    puVar4 = Method_UnityEngine_InputSystem_Keyboard_add_onTextInput__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    puVar1 = PTR_DAT_033ebeb0;
    if (*pcVar10 == '\0') goto LAB_02149c6c;
    uVar6 = FUN_015ff8a0(in_stack_00000020,0);
    puVar5 = StringLiteral_8812;
    puVar3 = Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__;
    puVar13 = (undefined8 *)PTR_DAT_033f1c58;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000110._4_4_ == -1) {
        FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
        uVar7 = *(undefined8 *)puVar1;
        puVar12 = &stack0x00000038;
        goto LAB_02149b70;
      }
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000038);
      in_stack_00000030._4_4_ = in_stack_00000110._4_4_;
      uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000030 + 4);
      uVar7 = FUN_01600ba0(*(undefined8 *)puVar5,in_stack_00000020,uVar7,uVar9,0);
    }
    else if (in_stack_00000110._4_4_ == -1) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000038,in_stack_00000040,0);
    }
    else {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      in_stack_00000020 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000038);
      uVar7 = *(undefined8 *)puVar2;
      puVar12 = (undefined8 *)((long)&stack0x00000030 + 4);
      in_stack_00000030._4_4_ = in_stack_00000110._4_4_;
      puVar13 = (undefined8 *)puVar3;
LAB_02149b70:
      uVar7 = thunk_FUN_00d61fa0(uVar7,puVar12);
      uVar7 = FUN_01600b5c(*puVar13,in_stack_00000020,uVar7,0);
    }
    *in_stack_00000010 = uVar7;
    if ((in_stack_00000018._4_4_ >> 2 & 1) == 0) {
      lVar8 = 0;
    }
    else {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      lVar8 = in_stack_00000078;
    }
    uVar6 = FUN_015ff8a0(lVar8,0);
    if ((uVar6 & 1) != 0) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      lVar8 = in_stack_00000070;
    }
    uVar6 = FUN_015ff8a0(lVar8,0);
    puVar1 = UnityEngine_Events_UnityEvent<Collider,_GameObject>_TypeInfo;
    lVar11 = 0;
    if (((uVar6 & 1) == 0) && (lVar11 = lVar8, in_stack_00000110._4_4_ != -1)) {
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,in_stack_00000110._4_4_);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000038);
      lVar11 = FUN_01600b5c(*(undefined8 *)puVar1,lVar8,uVar7,0);
    }
    uVar6 = FUN_015ff8a0(*in_stack_00000028,0);
    if ((uVar6 & 1) != 0) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000048,in_stack_00000050,0);
      *in_stack_00000028 = uVar7;
    }
    if (lVar11 == 0) goto LAB_02149c6c;
  }
  else {
LAB_02149c6c:
    lVar11 = FUN_0214b9cc(unaff_x19[6],unaff_x19[7]);
  }
  uVar6 = FUN_015ff8a0(unaff_x21,0);
  if ((uVar6 & 1) == 0) {
    unaff_x21 = FUN_01600424(unaff_x21,*puVar14,lVar11,0);
  }
  else {
    unaff_x21 = FUN_015f5b28(unaff_x21,lVar11,0);
  }
LAB_02149cb4:
  uVar6 = FUN_0213a9a0(unaff_x19 + 8,0);
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
  if ((uVar6 & 1) == 0) {
    uVar7 = FUN_0214b9cc(unaff_x19[8],unaff_x19[9]);
    uVar7 = FUN_01600424(*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar1,0);
    uVar6 = FUN_015ff8a0(unaff_x21,0);
    if ((uVar6 & 1) == 0) {
      unaff_x21 = FUN_01600424(unaff_x21,*puVar14,uVar7,0);
    }
    else {
      unaff_x21 = FUN_015f5b28(unaff_x21,uVar7,0);
    }
  }
  return unaff_x21;
}


