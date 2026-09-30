/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem.Provider$$get_pose3DScaleEstimationRequested
ENTRY_POINT: 05dc7f98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider__get_pose3DScaleEstimationRequested
               (void)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  bool in_ZR;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  int in_w8;
  undefined8 *puVar16;
  undefined4 in_w9;
  uint in_w10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  long lVar17;
  long lVar18;
  int unaff_w24;
  long lVar19;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar20;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  uint in_stack_00000060;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
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
  byte in_stack_00000968;
  byte in_stack_0000096c;
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
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05dc7f1c with catch @ 05dc7f98
                       catch(type#1 @ 06402238) { ... } // from try @ 05dc7f8c with catch @ 05dc7f98
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05dc7f30 with catch @ 05dc7f9c
                        */
  if (in_ZR) {
    in_w9 = 0;
  }
  uVar10 = 0;
  if (1 < in_w8) {
    uVar10 = in_w9;
  }
  iVar8 = 0;
  if (((unaff_w28 | in_w11 | in_w10) & 1) == 0) {
    iVar8 = 3;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar11 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
      iVar8 = 0;
    }
  }
  uVar9 = 0;
  if (1 < in_stack_00000988) {
    uVar9 = unaff_w28;
  }
  if (uVar9 == 1) {
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05dadd80(0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
      if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (in_stack_00000060 & 1) == 0) {
        if (iVar8 == 0) {
          iVar8 = 2;
        }
        else if (iVar8 == 3) {
          iVar8 = 1;
        }
      }
    }
  }
  if (in_stack_00000068 == 0) {
    lVar17 = *(long *)(unaff_x19 + 0x198);
    if (lVar17 == 0) goto LAB_05dc8b54;
  }
  else {
    lVar17 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar17 == 0) goto LAB_05dc8b54;
    FUN_05dfdd70(lVar17,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x240),0);
  }
  FUN_05d5a490(lVar17,uVar10,0,0);
  FUN_05d5a5c8(lVar17,iVar8,0);
  puVar4 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar18 = *(long *)(unaff_x19 + 0x108);
  lVar12 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar4;
  }
  puVar16 = *(undefined8 **)(lVar12 + 0xb8);
  lVar19 = puVar16[2];
  if (lVar19 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar16 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar20 = *puVar16;
    lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar19,uVar20,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 0x10) = lVar19;
    unaff_x26 = in_stack_00000048;
  }
  if (lVar18 == 0) goto LAB_05dc8b54;
  lVar12 = FUN_03abff58(lVar18,lVar19,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((lVar12 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
    if (unaff_x26 == 0) goto LAB_05dc8b54;
    iVar8 = FUN_060a4b6c(unaff_x26,0);
    if (iVar8 == 4) goto LAB_05dc8198;
    uVar10 = 1;
  }
  else {
LAB_05dc8198:
    uVar10 = 0;
  }
  uVar11 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
  if ((uVar11 & 1) != 0) {
    FUN_05d5aa50(0,0,0,0x3f800000,lVar17,uVar10,0);
  }
  FUN_05d6624c();
  if (unaff_x26 == 0) goto LAB_05dc8b54;
  iVar8 = FUN_060a4b6c(unaff_x26,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar20 = FUN_060bc2e8(0);
    puVar4 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar11 = FUN_060f078c(uVar20,0,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_0335764c(unaff_x26,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar11 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar20 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar4);
        }
        uVar11 = FUN_060f078c(uVar20,0,0);
        if ((uVar11 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (unaff_w28 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (unaff_w29 & 1) == 0) {
      uVar11 = FUN_060fb560(0);
      uVar20 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar11 & 1) == 0) {
        uVar13 = FUN_060cd288(0);
      }
      else {
        uVar13 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar20,uVar13,0);
    }
  }
  else if ((((unaff_x25 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
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
    lVar17 = FUN_05dd59d4(0);
    if (lVar17 == 0) goto LAB_05dc8b54;
    uVar10 = *(undefined4 *)(lVar17 + 0x48);
    FUN_05df6060(uVar10,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar10,0);
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
  uVar9 = 0;
  if (unaff_w24 != 0) {
    uVar9 = 3;
  }
  if (unaff_w28 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar9 = 0, 1 < in_stack_00000988))
    {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_05dadd80(0);
      uVar9 = uVar9 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000988 < 2 || unaff_w24 == 0) | in_stack_00000078._4_1_) ^ 0xff) & 1,0,
               0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar9,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar11 = FUN_05d6d5d0();
  uVar14 = FUN_05d6d398();
  if (((uVar11 & 1) != 0) && ((uVar14 & 1) != 0)) {
    lVar17 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar17 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar17);
    FUN_05d6624c();
  }
  bVar5 = unaff_w24 == 0;
  bVar6 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar5 || ((in_stack_00000038._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar15 = FUN_05d6d958(), (uVar15 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x05dc8718:
    if (!bVar6 || bVar5) goto LAB_05dc871c;
LAB_05dc8740:
    bVar3 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar7 = 1;
    if (bVar6 && !bVar5) goto LAB_05dc8740;
LAB_05dc871c:
    bVar3 = in_stack_00000030 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar9 = uVar9 ^ 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x230);
  plVar2 = (long *)(unaff_x19 + 0x240);
  if (in_stack_00000050._4_4_ == 0) {
    if (unaff_w24 == 0) {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar10 = FUN_060d65a4(&stack0x00000980,0);
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
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,in_stack_00000980,in_stack_00000984,uVar10,0,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x328,&stack0x00000650,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,0);
    if (unaff_w24 == 0) {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar1,0,plVar2,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar1,bVar3,plVar2,&stack0x00000750,
                 unaff_x19 + 0x288,bVar7 & 1);
    FUN_05d6624c();
  }
  lVar17 = *plVar1;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar9 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar7 & 1) == 0) &&
     (((in_stack_00000050._4_4_ == 0 || (in_stack_00000030 != 0)) || (bVar6 && !bVar5)))) {
    lVar12 = *plVar1;
    if (lVar12 == 0) goto LAB_05dc8b54;
    uVar21 = *(undefined8 *)(lVar12 + 0x30);
    uVar13 = *(undefined8 *)(lVar12 + 0x28);
    uVar23 = *(undefined8 *)(lVar12 + 0x40);
    uVar22 = *(undefined8 *)(lVar12 + 0x38);
    uVar20 = *(undefined8 *)(lVar12 + 0x48);
    lVar12 = *(long *)(unaff_x19 + 600);
    if (lVar12 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar12 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar12 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar12 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar12 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar12 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar13;
    in_stack_00000158 = uVar21;
    in_stack_00000160 = uVar22;
    in_stack_00000168 = uVar23;
    in_stack_00000170 = uVar20;
    uVar15 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar17,0);
      FUN_05d6624c();
    }
  }
  if (((uVar11 & 1) != 0) && ((uVar14 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar11 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar17 = *plVar2;
    if (lVar17 != 0) {
      uVar21 = *(undefined8 *)(lVar17 + 0x30);
      uVar13 = *(undefined8 *)(lVar17 + 0x28);
      uVar23 = *(undefined8 *)(lVar17 + 0x40);
      uVar22 = *(undefined8 *)(lVar17 + 0x38);
      uVar20 = *(undefined8 *)(lVar17 + 0x48);
      lVar17 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar17 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar17 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar17 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar17 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar17 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar17 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar13;
        in_stack_000000b8 = uVar21;
        in_stack_000000c0 = uVar22;
        in_stack_000000c8 = uVar23;
        in_stack_000000d0 = uVar20;
        uVar11 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar11 & 1) != 0) {
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


