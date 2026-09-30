/*
FUNCTION_NAME: FUN_05dc69d0
ENTRY_POINT: 05dc69d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 211
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_11
*/


void FUN_05dc69d0(void)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint uVar31;
  int iVar32;
  long unaff_x19;
  long unaff_x20;
  uint uVar33;
  long lVar34;
  uint unaff_w23;
  long lVar35;
  long lVar36;
  long lVar37;
  char cVar38;
  char cVar39;
  long unaff_x26;
  uint uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  uint uStack000000000000003c;
  uint uStack0000000000000044;
  uint uStack0000000000000060;
  uint uStack000000000000006c;
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
  long in_stack_000003d0;
  undefined8 in_stack_000003e0;
  undefined4 in_stack_0000070c;
  long in_stack_00000748;
  undefined4 in_stack_0000075c;
  int in_stack_00000854;
  long in_stack_00000858;
  undefined4 in_stack_00000978;
  uint in_stack_0000097c;
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
  long in_stack_000009c0;
  
  uVar12 = FUN_05dc6178();
  FUN_05dc8c00();
  bVar10 = FUN_05daa7ec();
  bVar11 = FUN_05dc5fb8();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uStack000000000000006c = FUN_05dc4094();
  uVar22 = 0;
  if ((bVar10 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = false;
    if ((uStack000000000000006c & 1) == 0) {
      uVar22 = in_stack_0000097c;
      if (in_stack_0000097c == 0) {
        bVar6 = true;
      }
      else {
        if (in_stack_0000097c != 1) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9678);
          uVar26 = thunk_FUN_02f45270();
          FUN_05056b68(uVar26,0);
          uVar27 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceShadows_ScreenSpaceShadowsPass_PassData>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar26,uVar27);
        }
        bVar6 = false;
      }
    }
  }
  FUN_05d6d958();
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  FUN_05d6d2bc();
  auVar44 = FUN_05dc8cbc();
  uVar28 = auVar44._0_8_;
  lVar23 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar44[2];
  if (lVar23 != 0) {
    *(undefined4 *)(lVar23 + 0x10) = in_stack_00000978;
    *(byte *)(lVar23 + 0x14) = bVar10 & 1;
    *(byte *)(lVar23 + 0x17) = bVar11 & 1;
    FUN_05de4e20();
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    FUN_05de4f8c(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_05dc8b54;
      FUN_03ac039c(&stack0x000003c0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<CustomMatchmaking>__);
      puVar7 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__;
      do {
        uVar24 = FUN_04aff1b0(&stack0x00000890,*(undefined8 *)puVar7);
        if ((uVar24 & 1) == 0) goto LAB_05dc6b78;
        if (in_stack_000003d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      } while (*(int *)(in_stack_000003d0 + 0x10) - 0xe7U < 0xfffffff5);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05de4f84(*(long *)(unaff_x19 + 0x2a0),0);
LAB_05dc6b78:
      FUN_04aff1ac(&stack0x00000890,
                   *(undefined8 *)Method_UnityEngine_Object_FindFirstObjectByType<XROrigin>__);
    }
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_05da1d1c(unaff_x19 + 0x310,0);
    uVar13 = uVar13 & 1;
  }
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  if (*(char *)(in_stack_000009c0 + 0x10) == '\0') {
    uStack000000000000003c = 0;
  }
  else {
    uStack000000000000003c = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  if (uVar13 == 0) {
    cVar38 = '\0';
  }
  else {
    cVar38 = *(char *)(unaff_x20 + 0x192);
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  uVar24 = FUN_05d6d2bc();
  if ((uVar24 & 1) == 0) {
    uStack0000000000000044 = FUN_05d6d2cc();
  }
  else {
    uStack0000000000000044 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar28 & 1) == 0)) {
    cVar39 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar39 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05dc8b54;
  uVar15 = Unity_XR_CoreUtils_OnDestroyNotifier__set_Destroyed();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05dc8b54;
  uVar16 = FUN_05deb620(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05dc8b54;
  bVar9 = cVar38 != '\0';
  uVar17 = FUN_05d9fa88(*(long *)(unaff_x19 + 0x1c0),0);
  uVar3 = uStack000000000000006c;
  if (cVar39 == '\0' && !bVar9) {
    cVar39 = '\0';
    uVar18 = 0;
  }
  else {
    iVar20 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar18 = FUN_05dc5e98();
    uVar18 = (uint)(iVar20 == 2) | uVar18 ^ 1;
  }
  uVar18 = (uint)(byte)(bVar11 | auVar44[1]) |
           in_stack_00000078._4_4_ | uVar18 | uStack0000000000000044;
  if ((uVar3 & uVar18 & 1) != 0) {
    uVar18 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar39 == '\0') {
    if (((uint)(cVar38 == '\0') & (uStack0000000000000044 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar23 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar23 == 0) goto LAB_05dc8b54;
    iVar20 = auVar44._12_4_ + -1;
    iVar32 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar32 = 300;
    }
    if (499 < iVar20) {
      iVar20 = 500;
    }
    if ((uVar28 & 1) != 0) {
      iVar32 = iVar20;
    }
    *(int *)(lVar23 + 0x10) = iVar32;
    if (iVar32 < 500) {
      *(undefined1 *)(lVar23 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar31 = (uint)(cVar4 != '\0');
  uVar40 = uVar18 | uVar31;
  uVar19 = FUN_05dc8f3c();
  if ((uVar3 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = uVar22;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar9) & (uVar40 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar12 = (unaff_w23 | uVar12 | uVar19) & (in_stack_00000078._4_4_ ^ 1);
  uVar24 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
  uVar19 = uVar12 | uVar3;
  iVar20 = FUN_060fb038(0);
  puVar7 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  if (iVar20 == 0x15) {
    uVar33 = uVar19;
    if ((uVar24 & 1) == 0) {
      uVar33 = uVar12;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_05dc6e90;
  }
  else {
LAB_05dc6e90:
    uVar33 = uVar19;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ +
              0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05c9d5cc(&stack0x000003c0,0);
  if ((float)in_stack_000003e0 == 1.0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c9d5cc(&stack0x000003c0,0);
    if ((float)((ulong)in_stack_000003e0 >> 0x20) != 1.0) goto LAB_05dc6ef4;
  }
  else {
LAB_05dc6ef4:
    uVar33 = uVar19;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar33 = uVar3 | uVar33;
  }
  uVar24 = FUN_060fb088(0);
  uVar12 = uVar3 | uVar33;
  uVar19 = uVar12;
  if ((uVar24 & 1) == 0) {
    uVar19 = uVar33;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x26 == 0) goto LAB_05dc8b54;
    iVar20 = thunk_FUN_060a6b50(unaff_x26,0);
    puVar8 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x000003c0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar24 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0), (uVar24 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05dc8b54;
    uVar3 = uVar12 & iVar20 != 1;
    puVar30 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar26 = FUN_05c9cb6c(&stack0x000005e0,0);
      *puVar30 = uVar26;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar24 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
      if ((uVar24 & 1) != 0) {
        FUN_05c9cc0c(puVar30,&stack0x00000550,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar26 = FUN_05c9cb6c(&stack0x00000520,0);
      *(undefined8 *)(unaff_x19 + 0x260) = uVar26;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar24 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
      if ((uVar24 & 1) != 0) {
        FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
      }
    }
    if (uVar3 != 0) {
      FUN_05dc9134();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
    bVar11 = (byte)uVar3 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
    if ((uVar19 & 1) == 0) {
      uVar26 = *puVar30;
    }
    else {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
      uVar26 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    }
    lVar23 = 0x248;
    if ((uVar12 & 1) == 0) {
      lVar23 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar23);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0335764c(*(long *)(unaff_x20 + 0x230),&stack0x00000858,
                      *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__),
        in_stack_00000858 == 0)) || (plVar25 = (long *)FUN_05dc2788(), plVar25 == (long *)0x0))
    goto LAB_05dc8b54;
    if (*plVar25 != *(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar25);
    }
    lVar23 = *(long *)(unaff_x19 + 0x228);
    if (lVar23 != plVar25[0x45]) {
      if (lVar23 == 0) goto LAB_05dc8b54;
      FUN_05e05ad0(lVar23,0);
      lVar23 = plVar25[0x45];
      *(long *)(unaff_x19 + 0x228) = lVar23;
    }
    if (lVar23 == 0) goto LAB_05dc8b54;
    uVar26 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(lVar23,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
    *(long *)(unaff_x19 + 0x240) = plVar25[0x48];
    *(long *)(unaff_x19 + 600) = plVar25[0x4b];
    *(long *)(unaff_x19 + 0x260) = plVar25[0x4c];
    uVar12 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000078 & 0x100000000) == 0)
  {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar26 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
  }
  cVar38 = *(char *)(unaff_x20 + 0x191);
  FUN_05d61b54();
  iVar20 = FUN_060fb038(0);
  if (iVar20 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000070 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(in_stack_00000070,&stack0x00000460,&stack0x00000430,0);
  }
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar34 = *(long *)(unaff_x19 + 0x108);
  lVar23 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar23 = *(long *)puVar7;
  }
  puVar30 = *(undefined8 **)(lVar23 + 0xb8);
  lVar35 = puVar30[1];
  if (lVar35 == 0) {
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar30 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar26 = *puVar30;
    lVar35 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar35,uVar26,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar35;
  }
  if (lVar34 == 0) goto LAB_05dc8b54;
  lVar23 = FUN_03abff58(lVar34,lVar35,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((uVar15 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((uVar16 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar15 = uStack000000000000006c;
  uStack0000000000000060 = (uint)(byte)(cVar38 != '\0' | auVar44[3]) & (in_stack_00000078._4_4_ ^ 1)
  ;
  if ((uVar18 & 1) == 0 && uVar31 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar9) {
      bVar11 = auVar44[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar34 = *(long *)(unaff_x19 + 0xe8);
  uVar12 = uVar12 & bVar11 != 0;
  if (lVar34 != 0) {
    uVar16 = FUN_05d6d2cc();
    uVar24 = FUN_05d43fe0(lVar34,uVar16 & 1,0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar40 = in_stack_00000854 == 1 | uVar40;
      uVar24 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar24 & 1) == 0) && ((uStack0000000000000044 & 1) == 0)) {
        uVar12 = 0;
        uVar40 = 0;
        uVar14 = 0;
        uStack0000000000000060 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        bVar11 = FUN_05d43b0c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar11 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05dc8b54;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar20 = auVar44._8_4_;
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar34 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar34 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar34 + 0x15) != '\0') &&
       ((iVar20 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar34,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar40 & 1) != 0 || uVar12 != 0)) {
    if (((uVar15 | uVar40 ^ 0xffffffff) & 1) == 0) {
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
    lVar34 = *(long *)(unaff_x19 + 0x268);
    if ((lVar34 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(lVar34 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
    FUN_06113868(in_stack_00000070,0);
  }
  if ((uVar15 & 1) == 0) {
    if ((bVar10 & 1) != 0) {
LAB_05dc7784:
      bVar9 = false;
      plVar25 = (long *)(unaff_x19 + 0x278);
      puVar30 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar26 = *puVar30;
      if (bVar9) {
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar34 == 0) goto LAB_05dc8b54;
        uVar21 = FUN_05de36ec(lVar34,0);
        uVar21 = FUN_05de37f8(lVar34,uVar21,0);
        FUN_060d69f4(&stack0x000007e0,uVar21,0);
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar34 == 0) goto LAB_05dc8b54;
        uVar21 = FUN_05de36ec(lVar34,0);
        FUN_05de52dc(lVar34,&stack0x00000380,uVar21,0);
      }
      else {
        uVar21 = FUN_05daad04(in_stack_00000978,0);
        FUN_060d69f4(&stack0x000007e0,uVar21,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar25,&stack0x000007e0,0,1,1,uVar26,0);
      }
      if ((*plVar25 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar25 + 0x58),&stack0x00000350,0);
      puVar7 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar34 = *(long *)puVar7;
      if (*(int *)(lVar34 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar34 = *(long *)puVar7;
      }
      lVar34 = **(long **)(lVar34 + 0xb8);
      if (lVar34 == 0) goto LAB_05dc8b54;
      *(long *)(lVar34 + 0x10) = in_stack_00000070;
      FUN_05daac20(lVar34,in_stack_00000978,0);
      if ((uVar15 & 1) != 0) {
        if (*plVar25 == 0) goto LAB_05dc8b54;
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
    bVar11 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar10 | bVar11) & 1) != 0) {
      if ((bVar11 & 1) == 0) goto LAB_05dc7784;
      lVar34 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar34 == 0) goto LAB_05dc8b54;
      lVar35 = *(long *)(lVar34 + 0x30);
      uVar16 = FUN_05de36ec(lVar34,0);
      if (lVar35 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_05dc8b64;
      plVar25 = (long *)(lVar35 + (long)(int)uVar16 * 8 + 0x20);
      if (*plVar25 == 0) goto LAB_05dc8b54;
      bVar9 = true;
      puVar30 = (undefined8 *)(*plVar25 + 0x58);
      goto LAB_05dc7794;
    }
  }
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  if ((uVar40 & 1) != 0) {
    if ((uVar28 & 0x10000) == 0) {
      if ((uVar15 & 1) != 0) goto LAB_05dc7e18;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05dc8b54;
      FUN_05dfae8c(*(long *)(unaff_x19 + 0x148),&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar34 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar34 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar34 = *(long *)puVar7;
        if ((uVar15 & 1) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar34 == 0) goto LAB_05dc8b54;
        lVar35 = *(long *)(lVar34 + 0x30);
        uVar16 = FUN_05de36c8(lVar34,0);
        if (lVar35 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_05dc8b64;
        plVar25 = (long *)(lVar35 + (long)(int)uVar16 * 8 + 0x20);
        if (*plVar25 == 0) goto LAB_05dc8b54;
        puVar30 = (undefined8 *)(*plVar25 + 0x58);
      }
      else {
        if ((uVar15 & 1) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar25 = (long *)(unaff_x19 + 0x270);
        puVar30 = (undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x18);
      }
      uVar26 = *puVar30;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar21 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar21,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar25,&stack0x000007a0,0,1,1,uVar26,0);
      }
      else {
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar34 == 0) goto LAB_05dc8b54;
        uVar21 = FUN_05de36c8(lVar34,0);
        uVar21 = FUN_05de37f8(lVar34,uVar21,0);
        FUN_060d69f4(&stack0x000007a0,uVar21,0);
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar34 == 0) goto LAB_05dc8b54;
        uVar21 = FUN_05de36c8(lVar34,0);
        FUN_05de52dc(lVar34,&stack0x000002e0,uVar21,0);
      }
      if ((*plVar25 == 0) || (in_stack_00000070 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*plVar25 + 0x58),&stack0x000002b0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar25 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(in_stack_00000070,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,in_stack_00000070,0);
      FUN_06113868(in_stack_00000070,0);
      if ((uVar15 & 1) == 0) {
        lVar34 = *(long *)(unaff_x19 + 0x150);
        if (bVar6) {
          if (lVar34 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar34,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar34 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar34,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar16 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar24 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar35 = *(long *)(unaff_x19 + 0x150);
        uVar26 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar34 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar24 & 1) == 0) {
          if (bVar6) {
            if ((lVar34 == 0) || (lVar34 = *(long *)(lVar34 + 0x30), lVar34 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_05dc8b64;
            if (lVar35 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar35,uVar26,*(undefined8 *)(lVar34 + (long)(int)uVar16 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
          else {
            if ((lVar34 == 0) || (lVar34 = *(long *)(lVar34 + 0x30), lVar34 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_05dc8b64;
            if (lVar35 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar35,uVar26,*(undefined8 *)(lVar34 + (long)(int)uVar16 * 8 + 0x20),0);
          }
        }
        else {
          if ((lVar34 == 0) || (lVar36 = *(long *)(lVar34 + 0x30), lVar36 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar36 + 0x18) <= uVar16) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar27 = *(undefined8 *)(lVar36 + (long)(int)uVar16 * 8 + 0x20);
          uVar16 = FUN_05de36ec(lVar34,0);
          if (*(uint *)(lVar36 + 0x18) <= uVar16) goto LAB_05dc8b64;
          if (lVar35 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar35,uVar26,uVar27,*(undefined8 *)(lVar36 + (long)(int)uVar16 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < iVar20 - 0xfbU) {
          lVar34 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar34 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar34 + 0xb8) =
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
  if ((uVar14 & 1) != 0) {
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
  uVar24 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar24 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar38 = *(char *)(unaff_x20 + 0x1e0);
  if ((uVar15 & 1) == 0) {
    uVar21 = 2;
    if ((uStack0000000000000060 & 1) == 0) {
      uVar21 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000988) {
      uVar2 = uVar21;
    }
    iVar20 = 0;
    if ((uVar12 == 0 && (uStack0000000000000060 & 1) == 0) && cVar38 != '\0') {
      iVar20 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar24 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar20 = 0;
      }
    }
    uVar14 = 0;
    if (1 < in_stack_00000988) {
      uVar14 = uVar12;
    }
    if (uVar14 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar24 = FUN_05dadd80(0);
      if ((uVar24 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 &&
            (uStack0000000000000060 & 1) == 0) {
          if (iVar20 == 0) {
            iVar20 = 2;
          }
          else if (iVar20 == 3) {
            iVar20 = 1;
          }
        }
      }
    }
    if (uVar22 == 0) {
      lVar34 = *(long *)(unaff_x19 + 0x198);
      if (lVar34 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar34 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar34 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar34,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar34,uVar2,0,0);
    FUN_05d5a5c8(lVar34,iVar20,0);
    puVar7 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar36 = *(long *)(unaff_x19 + 0x108);
    lVar35 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar35 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar35 = *(long *)puVar7;
    }
    puVar30 = *(undefined8 **)(lVar35 + 0xb8);
    lVar37 = puVar30[2];
    if (lVar37 == 0) {
      if (*(int *)(lVar35 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar30 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar26 = *puVar30;
      lVar37 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar37,uVar26,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar37;
    }
    if (lVar36 == 0) goto LAB_05dc8b54;
    lVar35 = FUN_03abff58(lVar36,lVar37,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar35 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x26 == 0) goto LAB_05dc8b54;
      iVar20 = FUN_060a4b6c(unaff_x26,0);
      if (iVar20 == 4) goto LAB_05dc8198;
      uVar21 = 1;
    }
    else {
LAB_05dc8198:
      uVar21 = 0;
    }
    uVar24 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar24 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar34,uVar21,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar34 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar34 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar34 + 0x15) != '\0') &&
       ((iVar20 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar34,0);
    }
    FUN_05dc973c();
  }
  if (unaff_x26 == 0) goto LAB_05dc8b54;
  iVar20 = FUN_060a4b6c(unaff_x26,0);
  if ((iVar20 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar26 = FUN_060bc2e8(0);
    puVar7 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar24 = FUN_060f078c(uVar26,0,0);
    if ((uVar24 & 1) == 0) {
      uVar24 = FUN_0335764c(unaff_x26,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar24 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar26 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar7);
        }
        uVar24 = FUN_060f078c(uVar26,0,0);
        if ((uVar24 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (uVar12 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar40 & 1) == 0) {
      uVar24 = FUN_060fb560(0);
      uVar26 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar24 & 1) == 0) {
        uVar27 = FUN_060cd288(0);
      }
      else {
        uVar27 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar26,uVar27,0);
    }
  }
  else if ((((uVar15 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar28 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((uStack0000000000000060 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar34 = FUN_05dd59d4(0);
    if (lVar34 == 0) goto LAB_05dc8b54;
    uVar21 = *(undefined4 *)(lVar34 + 0x48);
    FUN_05df6060(uVar21,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar21,0);
    FUN_05d6624c();
  }
  if ((uVar28 & 0x100000000) != 0) {
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
  if ((uVar17 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar22 = 0;
  if (cVar38 != '\0') {
    uVar22 = 3;
  }
  uVar14 = (uint)(cVar38 == '\0');
  if (in_stack_00000988 < 2) {
    uVar14 = 1;
  }
  if (uVar12 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar22 = 0, 1 < in_stack_00000988)
       ) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar22 = FUN_05dadd80(0);
      uVar22 = uVar22 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),((uVar14 | in_stack_00000078._4_4_) ^ 0xffffffff) & 1,0,
               0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar22,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar28 = FUN_05d6d5d0();
  uVar24 = FUN_05d6d398();
  if (((uVar28 & 1) != 0) && ((uVar24 & 1) != 0)) {
    lVar34 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar34 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar34);
    FUN_05d6624c();
  }
  uVar22 = (uint)(cVar38 == '\0');
  if (*(long *)(unaff_x20 + 0x1b0) == 0) {
    uVar22 = 1;
  }
  if (((cVar38 == '\0') != 0 || ((uStack000000000000003c ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar29 = FUN_05d6d958(), (uVar29 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05dc8718:
    if (uVar22 == 0) goto LAB_05dc8740;
LAB_05dc871c:
    bVar11 = lVar23 == 0 & (bVar10 ^ 1);
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
      bVar10 = 1;
      goto joined_r0x05dc8718;
    }
    bVar10 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
    if (uVar22 != 0) goto LAB_05dc871c;
LAB_05dc8740:
    bVar11 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar25 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (uVar13 == 0) {
    if (cVar38 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uStack000000000000006c = uVar22;
    uVar21 = FUN_060d65a4(&stack0x00000980,0);
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
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,in_stack_00000980,in_stack_00000984,uVar21,0,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x328,&stack0x00000650,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,0);
    if (cVar38 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar25,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar25,bVar11,plVar1,
                 &stack0x00000750,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05d6624c();
    uVar22 = uStack000000000000006c;
  }
  lVar34 = *plVar25;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar12 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar10 & 1) == 0) && (((uVar13 == 0 || (lVar23 != 0)) || (uVar22 != 1)))) {
    lVar23 = *plVar25;
    if (lVar23 == 0) goto LAB_05dc8b54;
    uVar41 = *(undefined8 *)(lVar23 + 0x30);
    uVar27 = *(undefined8 *)(lVar23 + 0x28);
    uVar43 = *(undefined8 *)(lVar23 + 0x40);
    uVar42 = *(undefined8 *)(lVar23 + 0x38);
    uVar26 = *(undefined8 *)(lVar23 + 0x48);
    lVar23 = *(long *)(unaff_x19 + 600);
    if (lVar23 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar23 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar23 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar27;
    in_stack_00000158 = uVar41;
    in_stack_00000160 = uVar42;
    in_stack_00000168 = uVar43;
    in_stack_00000170 = uVar26;
    uVar29 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar29 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar34,0);
      FUN_05d6624c();
    }
  }
  if (((uVar28 & 1) != 0) && ((uVar24 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar28 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar28 & 1) == 0) {
      return;
    }
    lVar23 = *plVar1;
    if (lVar23 != 0) {
      uVar41 = *(undefined8 *)(lVar23 + 0x30);
      uVar27 = *(undefined8 *)(lVar23 + 0x28);
      uVar43 = *(undefined8 *)(lVar23 + 0x40);
      uVar42 = *(undefined8 *)(lVar23 + 0x38);
      uVar26 = *(undefined8 *)(lVar23 + 0x48);
      lVar23 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar23 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar23 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar23 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar23 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar23 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar23 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar27;
        in_stack_000000b8 = uVar41;
        in_stack_000000c0 = uVar42;
        in_stack_000000c8 = uVar43;
        in_stack_000000d0 = uVar26;
        uVar28 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar28 & 1) != 0) {
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


