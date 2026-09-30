/*
FUNCTION_NAME: Unity.Mathematics.uint3x4$$.ctor
ENTRY_POINT: 021495e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_14;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Mathematics_uint3x4___ctor
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x24;
  long *plVar15;
  int *piVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000070;
  long in_stack_00000078;
  int iStack0000000000000114;
  
  plVar15 = *(long **)(unaff_x24 + 0x968);
  if ((*(byte *)(unaff_x21 + 0x244) & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7979);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ebeb0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<bool>>,_WitTTSVRequest_<RequestDownload>d__25>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Keyboard_add_onTextInput__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_UriParser_BuiltInUriParser_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_WitWebSocketClient_SendChunk__);
    thunk_FUN_00d48444(PTR_DAT_033f1c58);
    thunk_FUN_00d48444(StringLiteral_8812);
    thunk_FUN_00d48444(UnityEngine_Events_UnityEvent<Collider,_GameObject>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    *(undefined1 *)(unaff_x21 + 0x244) = 1;
  }
  memset(&stack0x00000118,0,0xd8);
  iStack0000000000000114 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar13 = **(undefined8 **)(*plVar15 + 0xb8);
  uVar6 = FUN_0214a040(param_1);
  if ((uVar6 & 1) != 0) {
    uVar13 = FUN_015f5b28(uVar13,*(undefined8 *)
                                  Method_Meta_Voice_Net_WebSockets_WitWebSocketClient_SendChunk__,0)
    ;
  }
  puVar2 = StringLiteral_7979;
  puVar1 = System_UriParser_BuiltInUriParser_TypeInfo;
  piVar16 = (int *)(param_1 + 2);
  puVar18 = (undefined8 *)StringLiteral_3287;
  if (0 < *piVar16) {
    iVar17 = 0;
    uVar8 = **(undefined8 **)(*plVar15 + 0xb8);
    do {
      FUN_012f24b4(piVar16,iVar17,&stack0x00000038,*(undefined8 *)puVar2);
      uVar6 = FUN_0213a9a0(&stack0x00000200,0);
      uVar7 = uVar8;
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_015fe7e8(uVar8,**(undefined8 **)(*plVar15 + 0xb8),0);
        FUN_012f24b4(piVar16,iVar17,&stack0x00000038,*(undefined8 *)puVar2);
        uVar7 = FUN_0214b9cc(in_stack_00000038,in_stack_00000040);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_01600424(uVar8,*(undefined8 *)puVar1,uVar7,0);
        }
      }
      iVar17 = iVar17 + 1;
      uVar8 = uVar7;
    } while (iVar17 < *piVar16);
    uVar6 = FUN_015fe7e8(uVar7,**(undefined8 **)(*plVar15 + 0xb8),0);
    puVar18 = (undefined8 *)StringLiteral_3287;
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_015fe7e8(uVar13,**(undefined8 **)(*plVar15 + 0xb8),0);
      puVar18 = (undefined8 *)StringLiteral_3287;
      if ((uVar6 & 1) == 0) {
        uVar13 = FUN_015f5b28(uVar13,uVar7,0);
      }
      else {
        uVar13 = FUN_01600424(uVar13,*(undefined8 *)StringLiteral_3287,uVar7,0);
      }
    }
  }
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
  ;
  uVar6 = FUN_0213a9a0(param_1,0);
  if ((uVar6 & 1) == 0) {
    uVar8 = FUN_0213ad2c(param_1,0);
    *param_4 = uVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_021ebc50(0);
    lVar9 = FUN_021eec94(uVar8,*param_4,0,0);
    if ((lVar9 == 0) || (uVar6 = FUN_015ff8a0(*(undefined8 *)(lVar9 + 0x98),0), (uVar6 & 1) != 0)) {
      uVar8 = FUN_0214b9cc(*param_1,param_1[1]);
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + 0x98);
    }
    uVar6 = FUN_015ff8a0(uVar13,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = FUN_01600424(uVar13,*puVar18,uVar8,0);
    }
    else {
      uVar13 = FUN_015f5b28(uVar13,uVar8,0);
    }
  }
  uVar6 = FUN_0213a9a0(param_1 + 6,0);
  if (((uVar6 & 1) != 0) || (uVar6 = FUN_0214a040(param_1), (uVar6 & 1) != 0)) goto LAB_02149cb4;
  uVar6 = FUN_015ff8a0(param_2,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_021ebc50(0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_021f605c(&stack0x00000038,param_2,0);
    uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000038,in_stack_00000040,0);
    lVar9 = FUN_021eec94(uVar8,uVar7,0,0);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<bool>>,_WitTTSVRequest_<RequestDownload>d__25>__
    ;
    if (lVar9 == 0) goto LAB_02149c6c;
    uVar8 = FUN_0213ad2c(param_1 + 6,0);
    FUN_021f605c(&stack0x000001f0,uVar8,0);
    uVar8 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
    FUN_021e7488(&stack0x00000038,lVar9,uVar8,&stack0x00000114,0);
    memcpy(&stack0x00000118,&stack0x00000038,0xd8);
    lVar9 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000118,*(undefined8 *)(lVar9 + 0x80));
    puVar4 = Method_UnityEngine_InputSystem_Keyboard_add_onTextInput__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    puVar1 = PTR_DAT_033ebeb0;
    if (*pcVar10 == '\0') goto LAB_02149c6c;
    uVar6 = FUN_015ff8a0(in_stack_00000020,0);
    puVar5 = StringLiteral_8812;
    puVar3 = Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__;
    puVar14 = (undefined8 *)PTR_DAT_033f1c58;
    if ((uVar6 & 1) == 0) {
      if (iStack0000000000000114 == -1) {
        FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
        uVar8 = *(undefined8 *)puVar1;
        puVar12 = &stack0x00000038;
        goto LAB_02149b70;
      }
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000038);
      in_stack_00000030._4_4_ = iStack0000000000000114;
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000030 + 4);
      uVar8 = FUN_01600ba0(*(undefined8 *)puVar5,in_stack_00000020,uVar8,uVar7,0);
    }
    else if (iStack0000000000000114 == -1) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar8 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000038,in_stack_00000040,0);
    }
    else {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      in_stack_00000020 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000038);
      uVar8 = *(undefined8 *)puVar2;
      puVar12 = (undefined8 *)((long)&stack0x00000030 + 4);
      in_stack_00000030._4_4_ = iStack0000000000000114;
      puVar14 = (undefined8 *)puVar3;
LAB_02149b70:
      uVar8 = thunk_FUN_00d61fa0(uVar8,puVar12);
      uVar8 = FUN_01600b5c(*puVar14,in_stack_00000020,uVar8,0);
    }
    *param_5 = uVar8;
    if ((in_stack_00000018._4_4_ >> 2 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      lVar9 = in_stack_00000078;
    }
    uVar6 = FUN_015ff8a0(lVar9,0);
    if ((uVar6 & 1) != 0) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      lVar9 = in_stack_00000070;
    }
    uVar6 = FUN_015ff8a0(lVar9,0);
    puVar1 = UnityEngine_Events_UnityEvent<Collider,_GameObject>_TypeInfo;
    lVar11 = 0;
    if (((uVar6 & 1) == 0) && (lVar11 = lVar9, iStack0000000000000114 != -1)) {
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,iStack0000000000000114);
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000038);
      lVar11 = FUN_01600b5c(*(undefined8 *)puVar1,lVar9,uVar8,0);
    }
    uVar6 = FUN_015ff8a0(*param_4,0);
    if ((uVar6 & 1) != 0) {
      FUN_01347408(&stack0x00000118,&stack0x00000038,*(undefined8 *)puVar4);
      uVar8 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(in_stack_00000048,in_stack_00000050,0);
      *param_4 = uVar8;
    }
    if (lVar11 == 0) goto LAB_02149c6c;
  }
  else {
LAB_02149c6c:
    lVar11 = FUN_0214b9cc(param_1[6],param_1[7]);
  }
  uVar6 = FUN_015ff8a0(uVar13,0);
  if ((uVar6 & 1) == 0) {
    uVar13 = FUN_01600424(uVar13,*puVar18,lVar11,0);
  }
  else {
    uVar13 = FUN_015f5b28(uVar13,lVar11,0);
  }
LAB_02149cb4:
  uVar6 = FUN_0213a9a0(param_1 + 8,0);
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
  if ((uVar6 & 1) == 0) {
    uVar8 = FUN_0214b9cc(param_1[8],param_1[9]);
    uVar8 = FUN_01600424(*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar1,0);
    uVar6 = FUN_015ff8a0(uVar13,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = FUN_01600424(uVar13,*puVar18,uVar8,0);
    }
    else {
      uVar13 = FUN_015f5b28(uVar13,uVar8,0);
    }
  }
  return uVar13;
}


