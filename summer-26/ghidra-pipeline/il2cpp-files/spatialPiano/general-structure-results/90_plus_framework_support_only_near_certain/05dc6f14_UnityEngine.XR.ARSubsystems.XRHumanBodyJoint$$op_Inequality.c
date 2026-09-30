/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRHumanBodyJoint$$op_Inequality
ENTRY_POINT: 05dc6f14
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


void UnityEngine_XR_ARSubsystems_XRHumanBodyJoint__op_Inequality(ulong param_1)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w22;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte unaff_w26;
  long *unaff_x27;
  byte unaff_w28;
  int unaff_w29;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
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
  
  bVar9 = unaff_w26 | unaff_w22;
  bVar2 = bVar9;
  if ((param_1 & 1) == 0) {
    bVar2 = unaff_w22;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000048 == 0) goto LAB_05dc8b54;
    iVar10 = thunk_FUN_060a6b50(in_stack_00000048,0);
    puVar5 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x000003c0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar16 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0), (uVar16 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05dc8b54;
    bVar8 = bVar9 & iVar10 != 1;
    puVar20 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_05c9cb6c(&stack0x000005e0,0);
      *puVar20 = uVar15;
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar16 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
      if ((uVar16 & 1) != 0) {
        FUN_05c9cc0c(puVar20,&stack0x00000550,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_05c9cb6c(&stack0x00000520,0);
      *(undefined8 *)(unaff_x19 + 0x260) = uVar15;
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar16 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
      if ((uVar16 & 1) != 0) {
        FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
      }
    }
    if (bVar8 != 0) {
      FUN_05dc9134();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
    bVar8 = bVar8 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar8;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar8;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar8;
    if ((bVar2 & 1) == 0) {
      uVar15 = *puVar20;
    }
    else {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
      uVar15 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    }
    lVar14 = 0x248;
    if ((bVar9 & 1) == 0) {
      lVar14 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar15;
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar14);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0335764c(*(long *)(unaff_x20 + 0x230),&stack0x00000858,
                      *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__),
        in_stack_00000858 == 0)) || (plVar13 = (long *)FUN_05dc2788(), plVar13 == (long *)0x0))
    goto LAB_05dc8b54;
    if (*plVar13 != *(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar13);
    }
    lVar14 = *(long *)(unaff_x19 + 0x228);
    if (lVar14 != plVar13[0x45]) {
      if (lVar14 == 0) goto LAB_05dc8b54;
      FUN_05e05ad0(lVar14,0);
      lVar14 = plVar13[0x45];
      *(long *)(unaff_x19 + 0x228) = lVar14;
    }
    if (lVar14 == 0) goto LAB_05dc8b54;
    uVar15 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(lVar14,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar15;
    *(long *)(unaff_x19 + 0x240) = plVar13[0x48];
    *(long *)(unaff_x19 + 600) = plVar13[0x4b];
    *(long *)(unaff_x19 + 0x260) = plVar13[0x4c];
    bVar9 = unaff_w26;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000078 & 0x100000000) == 0)
  {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar15 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar15;
  }
  cVar4 = *(char *)(unaff_x20 + 0x191);
  FUN_05d61b54();
  iVar10 = FUN_060fb038(0);
  if (iVar10 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000070 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(in_stack_00000070,&stack0x00000460,&stack0x00000430,0);
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar21 = *(long *)(unaff_x19 + 0x108);
  lVar14 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar14 = *(long *)puVar5;
  }
  puVar20 = *(undefined8 **)(lVar14 + 0xb8);
  lVar22 = puVar20[1];
  if (lVar22 == 0) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar20 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar15 = *puVar20;
    lVar22 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar22,uVar15,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar22;
  }
  if (lVar21 == 0) goto LAB_05dc8b54;
  lVar14 = FUN_03abff58(lVar21,lVar22,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((in_stack_00000060 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((_uStack0000000000000058 & 0x100000000) != 0) {
    FUN_05d6624c();
  }
  bVar2 = (cVar4 != '\0' | in_stack_0000096b) & unaff_w28;
  if ((in_stack_00000060 & 0x100000000) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w29 == 0) {
      bVar8 = in_stack_00000968 & 1;
    }
    else {
      bVar8 = 1;
    }
  }
  else {
    bVar8 = 0;
  }
  lVar21 = *(long *)(unaff_x19 + 0xe8);
  bVar9 = bVar9 & bVar8 != 0;
  if (lVar21 != 0) {
    uVar11 = FUN_05d6d2cc();
    uVar16 = FUN_05d43fe0(lVar21,uVar11 & 1,0);
    if ((uVar16 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      in_stack_00000060._4_1_ = in_stack_00000854 == 1 | in_stack_00000060._4_1_;
      uVar16 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar16 & 1) == 0) && ((_uStack0000000000000040 & 0x100000000) == 0)) {
        bVar9 = 0;
        in_stack_00000060._4_1_ = 0;
        uStack0000000000000040 = 0;
        bVar2 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        bVar8 = FUN_05d43b0c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar8 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05dc8b54;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    bVar8 = 0;
  }
  else {
    lVar21 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar21 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar21 + 0x15) != '\0') &&
       ((in_stack_00000970 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar21,0);
    }
    bVar8 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar8 != 0 || ((in_stack_00000060._4_1_ & 1) != 0 || bVar9 != 0)) {
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
    lVar21 = *(long *)(unaff_x19 + 0x268);
    if ((lVar21 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(lVar21 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
    FUN_06113868(in_stack_00000070,0);
  }
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    if ((_uStack0000000000000058 & 1) != 0) {
LAB_05dc7784:
      bVar6 = false;
      plVar13 = (long *)(unaff_x19 + 0x278);
      puVar20 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar15 = *puVar20;
      if (bVar6) {
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar21 == 0) goto LAB_05dc8b54;
        uVar12 = FUN_05de36ec(lVar21,0);
        uVar12 = FUN_05de37f8(lVar21,uVar12,0);
        FUN_060d69f4(&stack0x000007e0,uVar12,0);
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar21 == 0) goto LAB_05dc8b54;
        uVar12 = FUN_05de36ec(lVar21,0);
        FUN_05de52dc(lVar21,&stack0x00000380,uVar12,0);
      }
      else {
        uVar12 = FUN_05daad04(in_stack_00000978,0);
        FUN_060d69f4(&stack0x000007e0,uVar12,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar13,&stack0x000007e0,0,1,1,uVar15,0);
      }
      if ((*plVar13 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar13 + 0x58),&stack0x00000350,0);
      puVar5 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar21 = *(long *)puVar5;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar21 = *(long *)puVar5;
      }
      lVar21 = **(long **)(lVar21 + 0xb8);
      if (lVar21 == 0) goto LAB_05dc8b54;
      *(long *)(lVar21 + 0x10) = in_stack_00000070;
      FUN_05daac20(lVar21,in_stack_00000978,0);
      if ((_iStack0000000000000068 & 0x100000000) != 0) {
        if (*plVar13 == 0) goto LAB_05dc8b54;
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
    uVar11 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((uStack0000000000000058 | uVar11) & 1) != 0) {
      if ((uVar11 & 1) == 0) goto LAB_05dc7784;
      lVar21 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar21 == 0) goto LAB_05dc8b54;
      lVar22 = *(long *)(lVar21 + 0x30);
      uVar11 = FUN_05de36ec(lVar21,0);
      if (lVar22 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_05dc8b64;
      plVar13 = (long *)(lVar22 + (long)(int)uVar11 * 8 + 0x20);
      if (*plVar13 == 0) goto LAB_05dc8b54;
      bVar6 = true;
      puVar20 = (undefined8 *)(*plVar13 + 0x58);
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
      lVar21 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar21 = *(long *)puVar5;
        if ((_iStack0000000000000068 & 0x100000000) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar21 == 0) goto LAB_05dc8b54;
        lVar22 = *(long *)(lVar21 + 0x30);
        uVar11 = FUN_05de36c8(lVar21,0);
        if (lVar22 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_05dc8b64;
        plVar13 = (long *)(lVar22 + (long)(int)uVar11 * 8 + 0x20);
        if (*plVar13 == 0) goto LAB_05dc8b54;
        puVar20 = (undefined8 *)(*plVar13 + 0x58);
      }
      else {
        if ((_iStack0000000000000068 & 0x100000000) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar13 = (long *)(unaff_x19 + 0x270);
        puVar20 = (undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x18);
      }
      uVar15 = *puVar20;
      if ((_iStack0000000000000068 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar12 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar12,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar13,&stack0x000007a0,0,1,1,uVar15,0);
      }
      else {
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar21 == 0) goto LAB_05dc8b54;
        uVar12 = FUN_05de36c8(lVar21,0);
        uVar12 = FUN_05de37f8(lVar21,uVar12,0);
        FUN_060d69f4(&stack0x000007a0,uVar12,0);
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar21 == 0) goto LAB_05dc8b54;
        uVar12 = FUN_05de36c8(lVar21,0);
        FUN_05de52dc(lVar21,&stack0x000002e0,uVar12,0);
      }
      if ((*plVar13 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar13 + 0x58),&stack0x000002b0,0);
      if ((_iStack0000000000000068 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar13 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
      FUN_06113868(in_stack_00000070,0);
      if ((_iStack0000000000000068 & 0x100000000) == 0) {
        lVar21 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000028._4_4_ == 0) {
          if (lVar21 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar21,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar21 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar21,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar11 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar16 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar22 = *(long *)(unaff_x19 + 0x150);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar21 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar16 & 1) == 0) {
          if (in_stack_00000028._4_4_ == 0) {
            if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x30), lVar21 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_05dc8b64;
            if (lVar22 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar22,uVar15,*(undefined8 *)(lVar21 + (long)(int)uVar11 * 8 + 0x20),0);
          }
          else {
            if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x30), lVar21 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_05dc8b64;
            if (lVar22 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar22,uVar15,*(undefined8 *)(lVar21 + (long)(int)uVar11 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
        }
        else {
          if ((lVar21 == 0) || (lVar23 = *(long *)(lVar21 + 0x30), lVar23 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar23 + 0x18) <= uVar11) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar17 = *(undefined8 *)(lVar23 + (long)(int)uVar11 * 8 + 0x20);
          uVar11 = FUN_05de36ec(lVar21,0);
          if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_05dc8b64;
          if (lVar22 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar22,uVar15,uVar17,*(undefined8 *)(lVar23 + (long)(int)uVar11 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < in_stack_00000970 - 0xfbU) {
          lVar21 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar21 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar21 + 0xb8) =
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
  uVar16 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar16 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar4 = *(char *)(unaff_x20 + 0x1e0);
  if ((_iStack0000000000000068 & 0x100000000) == 0) {
    uVar12 = 2;
    if ((bVar2 & 1) == 0) {
      uVar12 = 0;
    }
    uVar3 = 0;
    if (1 < in_stack_00000988) {
      uVar3 = uVar12;
    }
    iVar10 = 0;
    if ((bVar9 == 0 && (bVar2 & 1) == 0) && cVar4 != '\0') {
      iVar10 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar16 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar16 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar10 = 0;
      }
    }
    bVar8 = 0;
    if (1 < in_stack_00000988) {
      bVar8 = bVar9;
    }
    if (bVar8 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar16 = FUN_05dadd80(0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (bVar2 & 1) == 0) {
          if (iVar10 == 0) {
            iVar10 = 2;
          }
          else if (iVar10 == 3) {
            iVar10 = 1;
          }
        }
      }
    }
    if (iStack0000000000000068 == 0) {
      lVar21 = *(long *)(unaff_x19 + 0x198);
      if (lVar21 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar21 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar21 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar21,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar21,uVar3,0,0);
    FUN_05d5a5c8(lVar21,iVar10,0);
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar23 = *(long *)(unaff_x19 + 0x108);
    lVar22 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar22 = *(long *)puVar5;
    }
    puVar20 = *(undefined8 **)(lVar22 + 0xb8);
    lVar24 = puVar20[2];
    if (lVar24 == 0) {
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar20 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar15 = *puVar20;
      lVar24 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar24,uVar15,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar24;
    }
    if (lVar23 == 0) goto LAB_05dc8b54;
    lVar22 = FUN_03abff58(lVar23,lVar24,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar22 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000048 == 0) goto LAB_05dc8b54;
      iVar10 = FUN_060a4b6c(in_stack_00000048,0);
      if (iVar10 == 4) goto LAB_05dc8198;
      uVar12 = 1;
    }
    else {
LAB_05dc8198:
      uVar12 = 0;
    }
    uVar16 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar16 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar21,uVar12,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar21 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar21 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar21 + 0x15) != '\0') &&
       ((in_stack_00000970 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar21,0);
    }
    FUN_05dc973c();
  }
  if (in_stack_00000048 == 0) goto LAB_05dc8b54;
  iVar10 = FUN_060a4b6c(in_stack_00000048,0);
  if ((iVar10 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar15 = FUN_060bc2e8(0);
    puVar5 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar16 = FUN_060f078c(uVar15,0,0);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_0335764c(in_stack_00000048,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar16 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar15 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar5);
        }
        uVar16 = FUN_060f078c(uVar15,0,0);
        if ((uVar16 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (bVar9 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (in_stack_00000060._4_1_ & 1) == 0) {
      uVar16 = FUN_060fb560(0);
      uVar15 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar16 & 1) == 0) {
        uVar17 = FUN_060cd288(0);
      }
      else {
        uVar17 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar15,uVar17,0);
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
    lVar21 = FUN_05dd59d4(0);
    if (lVar21 == 0) goto LAB_05dc8b54;
    uVar12 = *(undefined4 *)(lVar21 + 0x48);
    FUN_05df6060(uVar12,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar12,0);
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
  uVar11 = 0;
  if (cVar4 != '\0') {
    uVar11 = 3;
  }
  if (bVar9 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar11 = 0, 1 < in_stack_00000988)
       ) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_05dadd80(0);
      uVar11 = uVar11 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000988 < 2 || cVar4 == '\0') | in_stack_00000078._4_1_) ^ 0xff) & 1,0,0
              );
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar11,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar16 = FUN_05d6d5d0();
  uVar18 = FUN_05d6d398();
  if (((uVar16 & 1) != 0) && ((uVar18 & 1) != 0)) {
    lVar21 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar21 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar21);
    FUN_05d6624c();
  }
  bVar6 = cVar4 == '\0';
  bVar7 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar6 || ((in_stack_00000038._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar19 = FUN_05d6d958(), (uVar19 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar9 = 0;
joined_r0x05dc8718:
    if (!bVar7 || bVar6) goto LAB_05dc871c;
LAB_05dc8740:
    bVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar9 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar9 = 1;
    if (bVar7 && !bVar6) goto LAB_05dc8740;
LAB_05dc871c:
    bVar2 = lVar14 == 0 & (bVar9 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar11 = uVar11 ^ 1;
  }
  plVar13 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (in_stack_00000050._4_4_ == 0) {
    if (cVar4 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar12 = FUN_060d65a4(&stack0x00000980,0);
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
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,in_stack_00000980,in_stack_00000984,uVar12,0,0);
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
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar13,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar13,bVar2,plVar1,&stack0x00000750
                 ,unaff_x19 + 0x288,bVar9 & 1);
    FUN_05d6624c();
  }
  lVar21 = *plVar13;
  if ((bVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar11 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar9 & 1) == 0) && (((in_stack_00000050._4_4_ == 0 || (lVar14 != 0)) || (bVar7 && !bVar6)))
     ) {
    lVar14 = *plVar13;
    if (lVar14 == 0) goto LAB_05dc8b54;
    uVar25 = *(undefined8 *)(lVar14 + 0x30);
    uVar17 = *(undefined8 *)(lVar14 + 0x28);
    uVar27 = *(undefined8 *)(lVar14 + 0x40);
    uVar26 = *(undefined8 *)(lVar14 + 0x38);
    uVar15 = *(undefined8 *)(lVar14 + 0x48);
    lVar14 = *(long *)(unaff_x19 + 600);
    if (lVar14 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar14 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar14 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar14 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar14 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar14 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar17;
    in_stack_00000158 = uVar25;
    in_stack_00000160 = uVar26;
    in_stack_00000168 = uVar27;
    in_stack_00000170 = uVar15;
    uVar19 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar19 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar21,0);
      FUN_05d6624c();
    }
  }
  if (((uVar16 & 1) != 0) && ((uVar18 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar16 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar16 & 1) == 0) {
      return;
    }
    lVar14 = *plVar1;
    if (lVar14 != 0) {
      uVar25 = *(undefined8 *)(lVar14 + 0x30);
      uVar17 = *(undefined8 *)(lVar14 + 0x28);
      uVar27 = *(undefined8 *)(lVar14 + 0x40);
      uVar26 = *(undefined8 *)(lVar14 + 0x38);
      uVar15 = *(undefined8 *)(lVar14 + 0x48);
      lVar14 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar14 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar14 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar14 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar14 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar14 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar14 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar17;
        in_stack_000000b8 = uVar25;
        in_stack_000000c0 = uVar26;
        in_stack_000000c8 = uVar27;
        in_stack_000000d0 = uVar15;
        uVar16 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar16 & 1) != 0) {
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


