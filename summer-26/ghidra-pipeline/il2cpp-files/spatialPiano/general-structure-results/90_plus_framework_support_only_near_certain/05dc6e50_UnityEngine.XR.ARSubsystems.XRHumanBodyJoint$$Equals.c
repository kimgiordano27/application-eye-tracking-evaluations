/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRHumanBodyJoint$$Equals
ENTRY_POINT: 05dc6e50
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_11
*/


void UnityEngine_XR_ARSubsystems_XRHumanBodyJoint__Equals(undefined8 param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  byte in_w9;
  byte in_w10;
  long unaff_x19;
  long unaff_x20;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte unaff_w26;
  int unaff_w29;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 in_stack_00000028;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  uint uStack0000000000000058;
  ulong in_stack_00000060;
  int iStack0000000000000068;
  byte bStack000000000000006c;
  long in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined8 in_stack_000003e0;
  undefined4 in_stack_0000070c;
  long in_stack_00000748;
  undefined4 in_stack_0000075c;
  int in_stack_00000854;
  long in_stack_00000858;
  byte in_stack_00000968;
  byte in_stack_0000096a;
  byte in_stack_0000096b;
  byte in_stack_0000096c;
  int in_stack_00000970;
  undefined4 in_stack_00000978;
  undefined4 in_stack_00000980;
  undefined4 in_stack_00000984;
  int in_stack_00000988;
  undefined4 in_stack_0000098c;
  undefined8 in_stack_00000990;
  undefined4 in_stack_00000998;
  undefined4 in_stack_0000099c;
  undefined8 in_stack_000009a0;
  undefined8 in_stack_000009a8;
  undefined4 in_stack_000009b0;
  
  bVar10 = (in_w9 | param_2) & (in_w10 ^ 1);
  uVar14 = FUN_05c35d3c(param_1,0);
  bVar2 = bVar10 | unaff_w26;
  iVar11 = FUN_060fb038(0);
  puVar5 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  if (iVar11 == 0x15) {
    bVar9 = bVar2;
    if ((uVar14 & 1) == 0) {
      bVar9 = bVar10;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_05dc6e90;
  }
  else {
LAB_05dc6e90:
    bVar9 = bVar2;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ +
              0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05c9d5cc(&stack0x000003c0,0);
  if ((float)in_stack_000003e0 == 1.0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c9d5cc(&stack0x000003c0,0);
    if ((float)((ulong)in_stack_000003e0 >> 0x20) != 1.0) goto LAB_05dc6ef4;
  }
  else {
LAB_05dc6ef4:
    bVar9 = bVar2;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    bVar9 = unaff_w26 | bVar9;
  }
  uVar14 = FUN_060fb088(0);
  bVar10 = unaff_w26 | bVar9;
  bVar2 = bVar10;
  if ((uVar14 & 1) == 0) {
    bVar2 = bVar9;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000048 == 0) goto LAB_05dc8b54;
    iVar11 = thunk_FUN_060a6b50(in_stack_00000048,0);
    puVar6 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x000003c0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar14 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0), (uVar14 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05dc8b54;
    bVar9 = bVar10 & iVar11 != 1;
    puVar21 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar17 = FUN_05c9cb6c(&stack0x000005e0,0);
      *puVar21 = uVar17;
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
      if ((uVar14 & 1) != 0) {
        FUN_05c9cc0c(puVar21,&stack0x00000550,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar17 = FUN_05c9cb6c(&stack0x00000520,0);
      *(undefined8 *)(unaff_x19 + 0x260) = uVar17;
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
      if ((uVar14 & 1) != 0) {
        FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
      }
    }
    if (bVar9 != 0) {
      FUN_05dc9134();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
    bVar9 = bVar9 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar9;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar9;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar9;
    if ((bVar2 & 1) == 0) {
      uVar17 = *puVar21;
    }
    else {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
      uVar17 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    }
    lVar16 = 0x248;
    if ((bVar10 & 1) == 0) {
      lVar16 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar17;
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar16);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0335764c(*(long *)(unaff_x20 + 0x230),&stack0x00000858,
                      *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__),
        in_stack_00000858 == 0)) || (plVar15 = (long *)FUN_05dc2788(), plVar15 == (long *)0x0))
    goto LAB_05dc8b54;
    if (*plVar15 != *(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
    lVar16 = *(long *)(unaff_x19 + 0x228);
    if (lVar16 != plVar15[0x45]) {
      if (lVar16 == 0) goto LAB_05dc8b54;
      FUN_05e05ad0(lVar16,0);
      lVar16 = plVar15[0x45];
      *(long *)(unaff_x19 + 0x228) = lVar16;
    }
    if (lVar16 == 0) goto LAB_05dc8b54;
    uVar17 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(lVar16,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar17;
    *(long *)(unaff_x19 + 0x240) = plVar15[0x48];
    *(long *)(unaff_x19 + 600) = plVar15[0x4b];
    *(long *)(unaff_x19 + 0x260) = plVar15[0x4c];
    bVar10 = unaff_w26;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000078 & 0x100000000) == 0)
  {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar17 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar17;
  }
  cVar4 = *(char *)(unaff_x20 + 0x191);
  FUN_05d61b54();
  iVar11 = FUN_060fb038(0);
  if (iVar11 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000070 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(in_stack_00000070,&stack0x00000460,&stack0x00000430,0);
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar22 = *(long *)(unaff_x19 + 0x108);
  lVar16 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar16 = *(long *)puVar5;
  }
  puVar21 = *(undefined8 **)(lVar16 + 0xb8);
  lVar23 = puVar21[1];
  if (lVar23 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar21 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar17 = *puVar21;
    lVar23 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar23,uVar17,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar23;
  }
  if (lVar22 == 0) goto LAB_05dc8b54;
  lVar16 = FUN_03abff58(lVar22,lVar23,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((in_stack_00000060 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((_uStack0000000000000058 & 0x100000000) != 0) {
    FUN_05d6624c();
  }
  bVar2 = (cVar4 != '\0' | in_stack_0000096b) & (in_w10 ^ 1);
  if ((in_stack_00000060 & 0x100000000) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w29 == 0) {
      bVar9 = in_stack_00000968 & 1;
    }
    else {
      bVar9 = 1;
    }
  }
  else {
    bVar9 = 0;
  }
  lVar22 = *(long *)(unaff_x19 + 0xe8);
  bVar10 = bVar10 & bVar9 != 0;
  if (lVar22 != 0) {
    uVar12 = FUN_05d6d2cc();
    uVar14 = FUN_05d43fe0(lVar22,uVar12 & 1,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      in_stack_00000060._4_1_ = in_stack_00000854 == 1 | in_stack_00000060._4_1_;
      uVar14 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar14 & 1) == 0) && ((_uStack0000000000000040 & 0x100000000) == 0)) {
        bVar10 = 0;
        in_stack_00000060._4_1_ = 0;
        uStack0000000000000040 = 0;
        bVar2 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        bVar9 = FUN_05d43b0c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar9 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05dc8b54;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    bVar9 = 0;
  }
  else {
    lVar22 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar22 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar22 + 0x15) != '\0') &&
       ((in_stack_00000970 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar22,0);
    }
    bVar9 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar9 != 0 || ((in_stack_00000060._4_1_ & 1) != 0 || bVar10 != 0)) {
    if (((bStack000000000000006c | in_stack_00000060._4_1_ ^ 0xff) & 1) == 0) {
      FUN_060d69f4(&stack0x00000820,0,0);
      FUN_05dc418c();
    }
    else {
      FUN_060d69f4(&stack0x00000820,0x31,0);
    }
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        );
    }
    FUN_05daf224(0,(long *)(unaff_x19 + 0x268),&stack0x00000820,0,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__,0);
    lVar22 = *(long *)(unaff_x19 + 0x268);
    if ((lVar22 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(lVar22 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
    FUN_06113868(in_stack_00000070,0);
  }
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    if ((_uStack0000000000000058 & 1) != 0) {
LAB_05dc7784:
      bVar7 = false;
      plVar15 = (long *)(unaff_x19 + 0x278);
      puVar21 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar17 = *puVar21;
      if (bVar7) {
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        uVar13 = FUN_05de36ec(lVar22,0);
        uVar13 = FUN_05de37f8(lVar22,uVar13,0);
        FUN_060d69f4(&stack0x000007e0,uVar13,0);
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        uVar13 = FUN_05de36ec(lVar22,0);
        FUN_05de52dc(lVar22,&stack0x00000380,uVar13,0);
      }
      else {
        uVar13 = FUN_05daad04(in_stack_00000978,0);
        FUN_060d69f4(&stack0x000007e0,uVar13,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar15,&stack0x000007e0,0,1,1,uVar17,0);
      }
      if ((*plVar15 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar15 + 0x58),&stack0x00000350,0);
      puVar5 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar22 = *(long *)puVar5;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar22 = *(long *)puVar5;
      }
      lVar22 = **(long **)(lVar22 + 0xb8);
      if (lVar22 == 0) goto LAB_05dc8b54;
      *(long *)(lVar22 + 0x10) = in_stack_00000070;
      FUN_05daac20(lVar22,in_stack_00000978,0);
      if ((_iStack0000000000000068 & 0x100000000) != 0) {
        if (*plVar15 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(in_stack_00000070,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
                     ,&stack0x00000320,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
      FUN_06113868(in_stack_00000070,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    uVar12 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((uStack0000000000000058 | uVar12) & 1) != 0) {
      if ((uVar12 & 1) == 0) goto LAB_05dc7784;
      lVar22 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar22 == 0) goto LAB_05dc8b54;
      lVar23 = *(long *)(lVar22 + 0x30);
      uVar12 = FUN_05de36ec(lVar22,0);
      if (lVar23 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar23 + 0x18) <= uVar12) goto LAB_05dc8b64;
      plVar15 = (long *)(lVar23 + (long)(int)uVar12 * 8 + 0x20);
      if (*plVar15 == 0) goto LAB_05dc8b54;
      bVar7 = true;
      puVar21 = (undefined8 *)(*plVar15 + 0x58);
      goto LAB_05dc7794;
    }
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  if ((in_stack_00000060._4_1_ & 1) != 0) {
    if ((in_stack_0000096a & 1) == 0) {
      if ((_iStack0000000000000068 & 0x100000000) != 0) goto LAB_05dc7e18;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05dc8b54;
      FUN_05dfae8c(*(long *)(unaff_x19 + 0x148),&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar22 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar22 = *(long *)puVar5;
        if ((_iStack0000000000000068 & 0x100000000) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        lVar23 = *(long *)(lVar22 + 0x30);
        uVar12 = FUN_05de36c8(lVar22,0);
        if (lVar23 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar23 + 0x18) <= uVar12) goto LAB_05dc8b64;
        plVar15 = (long *)(lVar23 + (long)(int)uVar12 * 8 + 0x20);
        if (*plVar15 == 0) goto LAB_05dc8b54;
        puVar21 = (undefined8 *)(*plVar15 + 0x58);
      }
      else {
        if ((_iStack0000000000000068 & 0x100000000) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar15 = (long *)(unaff_x19 + 0x270);
        puVar21 = (undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x18);
      }
      uVar17 = *puVar21;
      if ((_iStack0000000000000068 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar13 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar13,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar15,&stack0x000007a0,0,1,1,uVar17,0);
      }
      else {
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        uVar13 = FUN_05de36c8(lVar22,0);
        uVar13 = FUN_05de37f8(lVar22,uVar13,0);
        FUN_060d69f4(&stack0x000007a0,uVar13,0);
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        uVar13 = FUN_05de36c8(lVar22,0);
        FUN_05de52dc(lVar22,&stack0x000002e0,uVar13,0);
      }
      if ((*plVar15 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar15 + 0x58),&stack0x000002b0,0);
      if ((_iStack0000000000000068 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar15 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
      FUN_06113868(in_stack_00000070,0);
      if ((_iStack0000000000000068 & 0x100000000) == 0) {
        lVar22 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000028._4_4_ == 0) {
          if (lVar22 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar22,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar22 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar22,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar12 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar23 = *(long *)(unaff_x19 + 0x150);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar14 & 1) == 0) {
          if (in_stack_00000028._4_4_ == 0) {
            if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_05dc8b64;
            if (lVar23 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar23,uVar17,*(undefined8 *)(lVar22 + (long)(int)uVar12 * 8 + 0x20),0);
          }
          else {
            if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_05dc8b64;
            if (lVar23 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar23,uVar17,*(undefined8 *)(lVar22 + (long)(int)uVar12 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
        }
        else {
          if ((lVar22 == 0) || (lVar24 = *(long *)(lVar22 + 0x30), lVar24 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar24 + 0x18) <= uVar12) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar18 = *(undefined8 *)(lVar24 + (long)(int)uVar12 * 8 + 0x20);
          uVar12 = FUN_05de36ec(lVar22,0);
          if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_05dc8b64;
          if (lVar23 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar23,uVar17,uVar18,*(undefined8 *)(lVar24 + (long)(int)uVar12 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < in_stack_00000970 - 0xfbU) {
          lVar22 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar22 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar22 + 0xb8) =
               **(undefined8 **)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xb8)
          ;
        }
      }
    }
    FUN_05d6624c();
  }
LAB_05dc7e18:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((uStack0000000000000040 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05dc8b54;
    FUN_05df3e9c(*(long *)(unaff_x19 + 0x310),&stack0x000009c0,&stack0x00000760,&stack0x0000075c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x330,&stack0x00000760,in_stack_0000075c,1,0,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_PassData>__
                 ,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05dc8b54;
    FUN_05df3e38(*(long *)(unaff_x19 + 0x310),&stack0x00000750,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar14 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar14 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar4 = *(char *)(unaff_x20 + 0x1e0);
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    uVar13 = 2;
    if ((bVar2 & 1) == 0) {
      uVar13 = 0;
    }
    uVar3 = 0;
    if (1 < in_stack_00000988) {
      uVar3 = uVar13;
    }
    iVar11 = 0;
    if ((bVar10 == 0 && (bVar2 & 1) == 0) && cVar4 != '\0') {
      iVar11 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar14 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar11 = 0;
      }
    }
    bVar9 = 0;
    if (1 < in_stack_00000988) {
      bVar9 = bVar10;
    }
    if (bVar9 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_05dadd80(0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (bVar2 & 1) == 0) {
          if (iVar11 == 0) {
            iVar11 = 2;
          }
          else if (iVar11 == 3) {
            iVar11 = 1;
          }
        }
      }
    }
    if (iStack0000000000000068 == 0) {
      lVar22 = *(long *)(unaff_x19 + 0x198);
      if (lVar22 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar22 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar22 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar22,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar22,uVar3,0,0);
    FUN_05d5a5c8(lVar22,iVar11,0);
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar24 = *(long *)(unaff_x19 + 0x108);
    lVar23 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar23 = *(long *)puVar5;
    }
    puVar21 = *(undefined8 **)(lVar23 + 0xb8);
    lVar25 = puVar21[2];
    if (lVar25 == 0) {
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar21 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar17 = *puVar21;
      lVar25 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar25,uVar17,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar25;
    }
    if (lVar24 == 0) goto LAB_05dc8b54;
    lVar23 = FUN_03abff58(lVar24,lVar25,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar23 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000048 == 0) goto LAB_05dc8b54;
      iVar11 = FUN_060a4b6c(in_stack_00000048,0);
      if (iVar11 == 4) goto LAB_05dc8198;
      uVar13 = 1;
    }
    else {
LAB_05dc8198:
      uVar13 = 0;
    }
    uVar14 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar14 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar22,uVar13,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar22 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar22 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar22 + 0x15) != '\0') &&
       ((in_stack_00000970 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar22,0);
    }
    FUN_05dc973c();
  }
  if (in_stack_00000048 == 0) goto LAB_05dc8b54;
  iVar11 = FUN_060a4b6c(in_stack_00000048,0);
  if ((iVar11 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar17 = FUN_060bc2e8(0);
    puVar5 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar14 = FUN_060f078c(uVar17,0,0);
    if ((uVar14 & 1) == 0) {
      uVar14 = FUN_0335764c(in_stack_00000048,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar17 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar5);
        }
        uVar14 = FUN_060f078c(uVar17,0,0);
        if ((uVar14 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (bVar10 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (in_stack_00000060._4_1_ & 1) == 0) {
      uVar14 = FUN_060fb560(0);
      uVar17 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar14 & 1) == 0) {
        uVar18 = FUN_060cd288(0);
      }
      else {
        uVar18 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar17,uVar18,0);
    }
  }
  else if ((((_iStack0000000000000068 & 0x100000000) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')
           ) || ((in_stack_00000968 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((bVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar22 = FUN_05dd59d4(0);
    if (lVar22 == 0) goto LAB_05dc8b54;
    uVar13 = *(undefined4 *)(lVar22 + 0x48);
    FUN_05df6060(uVar13,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar13,0);
    FUN_05d6624c();
  }
  if ((in_stack_0000096c & 1) != 0) {
    FUN_060d69f4(&stack0x000006d0,0x2e,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x288,&stack0x000006d0,0,1,1,
                 *(undefined8 *)Method_Meta_XR_PassthroughCameraAccess_GetCameraIndex__,0);
    FUN_060d69f4(&stack0x00000690,0,0);
    FUN_05daf224(0,unaff_x19 + 0x290,&stack0x00000690,0,1,1,
                 *(undefined8 *)Method_System_Xml_Schema_ParticleContentValidator_ValidateElement__,
                 0);
    if (*(int *)(*(long *)Method_System_Xml_Schema_Parser_LoadAttributeNode__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05d7fa08(in_stack_00000070);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05dc8b54;
    FUN_05d7e4a8(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05d6624c();
  }
  if ((in_stack_00000038 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar12 = 0;
  if (cVar4 != '\0') {
    uVar12 = 3;
  }
  if (bVar10 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar12 = 0, 1 < in_stack_00000988)
       ) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_05dadd80(0);
      uVar12 = uVar12 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000988 < 2 || cVar4 == '\0') | in_stack_00000078._4_1_) ^ 0xff) & 1,0,0
              );
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar12,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar14 = FUN_05d6d5d0();
  uVar19 = FUN_05d6d398();
  if (((uVar14 & 1) != 0) && ((uVar19 & 1) != 0)) {
    lVar22 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar22 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar22);
    FUN_05d6624c();
  }
  bVar7 = cVar4 == '\0';
  bVar8 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar7 || ((in_stack_00000038._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar20 = FUN_05d6d958(), (uVar20 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05dc8718:
    if (!bVar8 || bVar7) goto LAB_05dc871c;
LAB_05dc8740:
    bVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar10 = 1;
    if (bVar8 && !bVar7) goto LAB_05dc8740;
LAB_05dc871c:
    bVar2 = lVar16 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar15 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (in_stack_00000050._4_4_ == 0) {
    if (cVar4 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar13 = FUN_060d65a4(&stack0x00000980,0);
    if (*(int *)(*(long *)Method_System_IO_Path_InsecureGetFullPath__ + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Method_System_IO_Path_InsecureGetFullPath__);
    }
    in_stack_00000180 = CONCAT44(in_stack_00000984,in_stack_00000980);
    in_stack_00000188 = CONCAT44(in_stack_0000098c,in_stack_00000988);
    in_stack_00000190 = in_stack_00000990;
    in_stack_00000198 = CONCAT44(in_stack_0000099c,in_stack_00000998);
    in_stack_000001a0 = in_stack_000009a0;
    in_stack_000001a8 = in_stack_000009a8;
    in_stack_000001b0 = in_stack_000009b0;
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,in_stack_00000980,in_stack_00000984,uVar13,0,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x328,&stack0x00000650,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,0);
    if (cVar4 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar15,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar15,bVar2,plVar1,&stack0x00000750
                 ,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05d6624c();
  }
  lVar22 = *plVar15;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar12 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar10 & 1) == 0) &&
     (((in_stack_00000050._4_4_ == 0 || (lVar16 != 0)) || (bVar8 && !bVar7)))) {
    lVar16 = *plVar15;
    if (lVar16 == 0) goto LAB_05dc8b54;
    uVar26 = *(undefined8 *)(lVar16 + 0x30);
    uVar18 = *(undefined8 *)(lVar16 + 0x28);
    uVar28 = *(undefined8 *)(lVar16 + 0x40);
    uVar27 = *(undefined8 *)(lVar16 + 0x38);
    uVar17 = *(undefined8 *)(lVar16 + 0x48);
    lVar16 = *(long *)(unaff_x19 + 600);
    if (lVar16 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar16 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar16 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar16 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar16 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar16 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar18;
    in_stack_00000158 = uVar26;
    in_stack_00000160 = uVar27;
    in_stack_00000168 = uVar28;
    in_stack_00000170 = uVar17;
    uVar20 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar20 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar22,0);
      FUN_05d6624c();
    }
  }
  if (((uVar14 & 1) != 0) && ((uVar19 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar14 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar14 & 1) == 0) {
      return;
    }
    lVar16 = *plVar1;
    if (lVar16 != 0) {
      uVar26 = *(undefined8 *)(lVar16 + 0x30);
      uVar18 = *(undefined8 *)(lVar16 + 0x28);
      uVar28 = *(undefined8 *)(lVar16 + 0x40);
      uVar27 = *(undefined8 *)(lVar16 + 0x38);
      uVar17 = *(undefined8 *)(lVar16 + 0x48);
      lVar16 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar16 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar16 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar16 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar16 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar16 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar16 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar18;
        in_stack_000000b8 = uVar26;
        in_stack_000000c0 = uVar27;
        in_stack_000000c8 = uVar28;
        in_stack_000000d0 = uVar17;
        uVar14 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar14 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            FUN_05df72fc(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x240),
                         *(undefined8 *)(unaff_x19 + 0x260),0);
            if (*(long *)(unaff_x19 + 0x1f0) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
LAB_05dc692c:
              FUN_05d6624c();
              return;
            }
          }
        }
      }
    }
  }
LAB_05dc8b54:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


