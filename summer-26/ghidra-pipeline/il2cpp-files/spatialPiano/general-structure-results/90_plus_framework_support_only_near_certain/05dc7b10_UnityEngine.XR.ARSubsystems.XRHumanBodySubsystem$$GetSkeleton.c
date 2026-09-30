/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem$$GetSkeleton
ENTRY_POINT: 05dc7b10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem__GetSkeleton(void)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar18;
  long unaff_x23;
  long lVar19;
  long *unaff_x24;
  undefined8 uVar20;
  long lVar21;
  long unaff_x25;
  long lVar22;
  long unaff_x26;
  ulong unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  uint in_stack_00000060;
  int in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
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
  byte in_stack_00000968;
  byte in_stack_0000096c;
  int in_stack_00000970;
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
  
  if (unaff_x23 == 0) goto LAB_05dc8b54;
                    /* try { // try from 05dc7b1c to 05ec7b2f has its CatchHandler @ 05dc7b68 */
  FUN_05de36c8();
                    /* try { // try from 05dc7b30 to 05ec7b47 has its CatchHandler @ 05dc7a8c */
                    /* try { // try from 05dc7b48 to 05ec7b4b has its CatchHandler @ 05dc7b60 */
  FUN_05de52dc();
                    /* try { // try from 05dc7b4c to 05ec7b4f has its CatchHandler @ 05dc7b5c */
  if ((*unaff_x22 == 0) || (unaff_x25 == 0)) goto LAB_05dc8b54;
  FUN_0611f5d0();
  if ((unaff_x27 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*unaff_x22 == 0) goto LAB_05dc8b54;
    FUN_0611f5d0();
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x000009c8);
  FUN_06113868();
  if ((unaff_x27 & 1) == 0) {
    lVar14 = *(long *)(unaff_x19 + 0x150);
    if (in_stack_00000028._4_4_ == 0) {
      if (lVar14 == 0) goto LAB_05dc8b54;
      FUN_05df95b4(lVar14,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),0);
    }
    else {
      if (lVar14 == 0) goto LAB_05dc8b54;
      FUN_05df95c0(lVar14,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x278),0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    uVar10 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    uVar13 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    lVar19 = *(long *)(unaff_x19 + 0x150);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x240);
    lVar14 = *(long *)(unaff_x19 + 0x2a0);
    if ((uVar13 & 1) == 0) {
      if (in_stack_00000028._4_4_ == 0) {
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0)) goto LAB_05dc8b54;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05dc8b64;
        if (lVar19 == 0) goto LAB_05dc8b54;
        FUN_05df95b4(lVar19,uVar18,*(undefined8 *)(lVar14 + (long)(int)uVar10 * 8 + 0x20),0);
      }
      else {
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0)) goto LAB_05dc8b54;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05dc8b64;
        if (lVar19 == 0) goto LAB_05dc8b54;
        FUN_05df95c0(lVar19,uVar18,*(undefined8 *)(lVar14 + (long)(int)uVar10 * 8 + 0x20),
                     *(undefined8 *)(unaff_x19 + 0x278),0);
      }
    }
    else {
      if ((lVar14 == 0) || (lVar22 = *(long *)(lVar14 + 0x30), lVar22 == 0)) goto LAB_05dc8b54;
      if (*(uint *)(lVar22 + 0x18) <= uVar10) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar20 = *(undefined8 *)(lVar22 + (long)(int)uVar10 * 8 + 0x20);
      uVar10 = FUN_05de36ec(lVar14,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05dc8b64;
      if (lVar19 == 0) goto LAB_05dc8b54;
      FUN_05df95c0(lVar19,uVar18,uVar20,*(undefined8 *)(lVar22 + (long)(int)uVar10 * 8 + 0x20),0);
      unaff_x25 = in_stack_00000070;
    }
    if (0xffffffe0 < in_stack_00000970 - 0xfbU) {
      lVar14 = *(long *)(unaff_x19 + 0x150);
      if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar14 == 0) goto LAB_05dc8b54;
      *(undefined8 *)(lVar14 + 0xb8) =
           **(undefined8 **)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xb8);
    }
  }
  FUN_05d6624c();
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((unaff_x21 & 1) != 0) {
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
  uVar13 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar13 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar5 = *(char *)(unaff_x20 + 0x1e0);
  if ((unaff_x27 & 1) == 0) {
    unaff_x27 = unaff_x27 & 0xffffffff;
    uVar12 = 2;
    if ((in_stack_00000060 & 1) == 0) {
      uVar12 = 0;
    }
    uVar4 = 0;
    if (1 < in_stack_00000988) {
      uVar4 = uVar12;
    }
    iVar11 = 0;
    if (((unaff_w28 | in_stack_00000060) & 1) == 0 && cVar5 != '\0') {
      iVar11 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar13 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar11 = 0;
      }
    }
    uVar10 = 0;
    if (1 < in_stack_00000988) {
      uVar10 = unaff_w28;
    }
    if (uVar10 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_05dadd80(0);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (in_stack_00000060 & 1) == 0) {
          if (iVar11 == 0) {
            iVar11 = 2;
          }
          else if (iVar11 == 3) {
            iVar11 = 1;
          }
        }
      }
    }
    if (in_stack_00000068 == 0) {
      lVar14 = *(long *)(unaff_x19 + 0x198);
      if (lVar14 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar14 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar14 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar14,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar14,uVar4,0,0);
    FUN_05d5a5c8(lVar14,iVar11,0);
    puVar6 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar22 = *(long *)(unaff_x19 + 0x108);
    lVar19 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar19 = *(long *)puVar6;
    }
    puVar17 = *(undefined8 **)(lVar19 + 0xb8);
    lVar21 = puVar17[2];
    if (lVar21 == 0) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar17 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar18 = *puVar17;
      lVar21 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar21,uVar18,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar21;
      unaff_x26 = in_stack_00000048;
    }
    if (lVar22 == 0) goto LAB_05dc8b54;
    lVar19 = FUN_03abff58(lVar22,lVar21,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar19 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x26 == 0) goto LAB_05dc8b54;
      iVar11 = FUN_060a4b6c(unaff_x26,0);
      if (iVar11 == 4) goto LAB_05dc8198;
      uVar12 = 1;
    }
    else {
LAB_05dc8198:
      uVar12 = 0;
    }
    uVar13 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar13 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar14,uVar12,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar14 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar14 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar14 + 0x15) != '\0') &&
       ((in_stack_00000970 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar14,0);
    }
    FUN_05dc973c();
    in_stack_00000070 = unaff_x25;
  }
  if (unaff_x26 == 0) goto LAB_05dc8b54;
  iVar11 = FUN_060a4b6c(unaff_x26,0);
  if ((iVar11 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar18 = FUN_060bc2e8(0);
    puVar6 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar13 = FUN_060f078c(uVar18,0,0);
    if ((uVar13 & 1) == 0) {
      uVar13 = FUN_0335764c(unaff_x26,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar18 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar6);
        }
        uVar13 = FUN_060f078c(uVar18,0,0);
        if ((uVar13 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (unaff_w28 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (unaff_w29 & 1) == 0) {
      uVar13 = FUN_060fb560(0);
      uVar18 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar13 & 1) == 0) {
        uVar20 = FUN_060cd288(0);
      }
      else {
        uVar20 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar18,uVar20,0);
    }
  }
  else if ((((unaff_x27 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((in_stack_00000968 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((in_stack_00000060 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar14 = FUN_05dd59d4(0);
    if (lVar14 == 0) goto LAB_05dc8b54;
    uVar12 = *(undefined4 *)(lVar14 + 0x48);
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
  uVar10 = 0;
  if (cVar5 != '\0') {
    uVar10 = 3;
  }
  if (unaff_w28 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar10 = 0, 1 < in_stack_00000988)
       ) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05dadd80(0);
      uVar10 = uVar10 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000988 < 2 || cVar5 == '\0') | in_stack_00000078._4_1_) ^ 0xff) & 1,0,0
              );
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar10,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar13 = FUN_05d6d5d0();
  uVar15 = FUN_05d6d398();
  if (((uVar13 & 1) != 0) && ((uVar15 & 1) != 0)) {
    lVar14 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar14 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar14);
    FUN_05d6624c();
  }
  bVar7 = cVar5 == '\0';
  bVar8 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar7 || ((in_stack_00000038._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar16 = FUN_05d6d958(), (uVar16 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar9 = 0;
joined_r0x05dc8718:
    if (!bVar8 || bVar7) goto LAB_05dc871c;
LAB_05dc8740:
    bVar3 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar9 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar9 = 1;
    if (bVar8 && !bVar7) goto LAB_05dc8740;
LAB_05dc871c:
    bVar3 = in_stack_00000030 == 0 & (bVar9 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar10 = uVar10 ^ 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x230);
  plVar2 = (long *)(unaff_x19 + 0x240);
  if (in_stack_00000050._4_4_ == 0) {
    if (cVar5 == '\0') {
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
    if (cVar5 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar1,0,plVar2,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar1,bVar3,plVar2,&stack0x00000750,
                 unaff_x19 + 0x288,bVar9 & 1);
    FUN_05d6624c();
  }
  lVar14 = *plVar1;
  if ((bVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar10 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar9 & 1) == 0) &&
     (((in_stack_00000050._4_4_ == 0 || (in_stack_00000030 != 0)) || (bVar8 && !bVar7)))) {
    lVar19 = *plVar1;
    if (lVar19 == 0) goto LAB_05dc8b54;
    uVar23 = *(undefined8 *)(lVar19 + 0x30);
    uVar20 = *(undefined8 *)(lVar19 + 0x28);
    uVar25 = *(undefined8 *)(lVar19 + 0x40);
    uVar24 = *(undefined8 *)(lVar19 + 0x38);
    uVar18 = *(undefined8 *)(lVar19 + 0x48);
    lVar19 = *(long *)(unaff_x19 + 600);
    if (lVar19 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar19 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar19 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar19 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar19 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar19 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar20;
    in_stack_00000158 = uVar23;
    in_stack_00000160 = uVar24;
    in_stack_00000168 = uVar25;
    in_stack_00000170 = uVar18;
    uVar16 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar14,0);
      FUN_05d6624c();
    }
  }
  if (((uVar13 & 1) != 0) && ((uVar15 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar13 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar13 & 1) == 0) {
      return;
    }
    lVar14 = *plVar2;
    if (lVar14 != 0) {
      uVar23 = *(undefined8 *)(lVar14 + 0x30);
      uVar20 = *(undefined8 *)(lVar14 + 0x28);
      uVar25 = *(undefined8 *)(lVar14 + 0x40);
      uVar24 = *(undefined8 *)(lVar14 + 0x38);
      uVar18 = *(undefined8 *)(lVar14 + 0x48);
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
        in_stack_000000b0 = uVar20;
        in_stack_000000b8 = uVar23;
        in_stack_000000c0 = uVar24;
        in_stack_000000c8 = uVar25;
        in_stack_000000d0 = uVar18;
        uVar13 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar13 & 1) != 0) {
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


