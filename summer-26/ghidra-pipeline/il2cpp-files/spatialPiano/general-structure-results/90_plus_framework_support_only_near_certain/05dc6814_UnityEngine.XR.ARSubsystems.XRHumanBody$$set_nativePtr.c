/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRHumanBody$$set_nativePtr
ENTRY_POINT: 05dc6814
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 191
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_11
*/


void UnityEngine_XR_ARSubsystems_XRHumanBody__set_nativePtr(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
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
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  uint uVar34;
  int iVar35;
  long unaff_x19;
  long unaff_x20;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  char cVar40;
  long unaff_x25;
  char cVar41;
  long unaff_x26;
  uint uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  uint uStack000000000000003c;
  uint uStack0000000000000044;
  uint uStack0000000000000060;
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
  
  FUN_05daf224(0,param_2,&stack0x000008b0,0,0,1,**(undefined8 **)(param_1 + 0xec0),0);
  if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
  uVar26 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
  if ((uVar26 & 1) != 0) {
    lVar32 = *(long *)(unaff_x19 + 0xe8);
    if ((((lVar32 == 0) || (*(long *)(lVar32 + 0x90) == 0)) ||
        (*(long *)(*(long *)(lVar32 + 0x90) + 0x30) == 0)) ||
       ((*(long *)(lVar32 + 0x30) == 0 || (FUN_05d7c764(), *(long *)(unaff_x19 + 0xe8) == 0))))
    goto LAB_05dc8b54;
    FUN_05d6624c();
  }
  puVar6 = Method_System_Data_NewDiffgramGen_GenerateColumn__;
  if (*(int *)(unaff_x20 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar10 = FUN_05dc5d90();
  lVar32 = *(long *)puVar6;
  *(byte *)(unaff_x19 + 0x140) = bVar10 & 1;
  if (*(int *)(lVar32 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar26 = FUN_05dc5d00();
  if ((uVar26 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d61b54();
    FUN_05d6624c();
    goto LAB_05dc692c;
  }
  uVar12 = FUN_05d6d2cc();
  uVar26 = FUN_05dc602c();
  if (((uVar26 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar12 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar26 = FUN_060a33d8(0);
    if ((uVar26 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_05dc40c0();
    }
  }
  else {
    uVar13 = 1;
  }
  uVar14 = FUN_05dc6178();
  FUN_05dc8c00();
  bVar10 = FUN_05daa7ec();
  bVar11 = FUN_05dc5fb8();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uVar15 = FUN_05dc4094();
  uVar25 = 0;
  if ((bVar10 & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = false;
    if ((uVar15 & 1) == 0) {
      uVar25 = in_stack_0000097c;
      if (in_stack_0000097c == 0) {
        bVar9 = true;
      }
      else {
        if (in_stack_0000097c != 1) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9678);
          uVar29 = thunk_FUN_02f45270();
          FUN_05056b68(uVar29,0);
          uVar30 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceShadows_ScreenSpaceShadowsPass_PassData>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar29,uVar30);
        }
        bVar9 = false;
      }
    }
  }
  FUN_05d6d958();
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  FUN_05d6d2bc();
  auVar46 = FUN_05dc8cbc();
  uVar26 = auVar46._0_8_;
  lVar32 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar46[2];
  if (lVar32 != 0) {
    *(undefined4 *)(lVar32 + 0x10) = in_stack_00000978;
    *(byte *)(lVar32 + 0x14) = bVar10 & 1;
    *(byte *)(lVar32 + 0x17) = bVar11 & 1;
    FUN_05de4e20();
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    FUN_05de4f8c(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_05dc8b54;
      FUN_03ac039c(&stack0x000003c0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<CustomMatchmaking>__);
      puVar6 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__;
      do {
        uVar27 = FUN_04aff1b0(&stack0x00000890,*(undefined8 *)puVar6);
        if ((uVar27 & 1) == 0) goto LAB_05dc6b78;
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
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_05da1d1c(unaff_x19 + 0x310,0);
    uVar16 = uVar16 & 1;
  }
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  if (*(char *)(in_stack_000009c0 + 0x10) == '\0') {
    uStack000000000000003c = 0;
  }
  else {
    uStack000000000000003c = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  if (uVar16 == 0) {
    cVar40 = '\0';
  }
  else {
    cVar40 = *(char *)(unaff_x20 + 0x192);
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  uVar27 = FUN_05d6d2bc();
  if ((uVar27 & 1) == 0) {
    uStack0000000000000044 = FUN_05d6d2cc();
  }
  else {
    uStack0000000000000044 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar26 & 1) == 0)) {
    cVar41 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar41 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05dc8b54;
  uVar18 = Unity_XR_CoreUtils_OnDestroyNotifier__set_Destroyed();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05dc8b54;
  uVar19 = FUN_05deb620(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05dc8b54;
  bVar8 = cVar40 != '\0';
  uVar20 = FUN_05d9fa88(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar41 == '\0' && !bVar8) {
    cVar41 = '\0';
    uVar21 = 0;
  }
  else {
    iVar23 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar21 = FUN_05dc5e98();
    uVar21 = (uint)(iVar23 == 2) | uVar21 ^ 1;
  }
  uVar21 = (uint)(byte)(bVar11 | auVar46[1]) | uVar12 | uVar21 | uStack0000000000000044;
  if ((uVar15 & uVar21 & 1) != 0) {
    uVar21 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar41 == '\0') {
    if (((uint)(cVar40 == '\0') & (uStack0000000000000044 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar32 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar32 == 0) goto LAB_05dc8b54;
    iVar23 = auVar46._12_4_ + -1;
    iVar35 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar35 = 300;
    }
    if (499 < iVar23) {
      iVar23 = 500;
    }
    if ((uVar26 & 1) != 0) {
      iVar35 = iVar23;
    }
    *(int *)(lVar32 + 0x10) = iVar35;
    if (iVar35 < 500) {
      *(undefined1 *)(lVar32 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar34 = (uint)(cVar4 != '\0');
  uVar42 = uVar21 | uVar34;
  uVar22 = FUN_05dc8f3c();
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = uVar25;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar8) & (uVar42 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar13 = (uVar13 | uVar14 | uVar22) & (uVar12 ^ 1);
  uVar27 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
  uVar14 = uVar13 | uVar3;
  iVar23 = FUN_060fb038(0);
  puVar6 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  if (iVar23 == 0x15) {
    uVar22 = uVar14;
    if ((uVar27 & 1) == 0) {
      uVar22 = uVar13;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_05dc6e90;
  }
  else {
LAB_05dc6e90:
    uVar22 = uVar14;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ +
              0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05c9d5cc(&stack0x000003c0,0);
  if ((float)in_stack_000003e0 == 1.0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c9d5cc(&stack0x000003c0,0);
    if ((float)((ulong)in_stack_000003e0 >> 0x20) != 1.0) goto LAB_05dc6ef4;
  }
  else {
LAB_05dc6ef4:
    uVar22 = uVar14;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar22 = uVar3 | uVar22;
  }
  uVar27 = FUN_060fb088(0);
  uVar13 = uVar3 | uVar22;
  uVar14 = uVar13;
  if ((uVar27 & 1) == 0) {
    uVar14 = uVar22;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x26 == 0) goto LAB_05dc8b54;
    iVar23 = thunk_FUN_060a6b50(unaff_x26,0);
    puVar7 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x000003c0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar27 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0), (uVar27 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05dc8b54;
    uVar22 = uVar13 & iVar23 != 1;
    puVar33 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar29 = FUN_05c9cb6c(&stack0x000005e0,0);
      *puVar33 = uVar29;
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar27 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
      if ((uVar27 & 1) != 0) {
        FUN_05c9cc0c(puVar33,&stack0x00000550,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar29 = FUN_05c9cb6c(&stack0x00000520,0);
      *(undefined8 *)(unaff_x19 + 0x260) = uVar29;
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar27 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
      if ((uVar27 & 1) != 0) {
        FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
      }
    }
    if (uVar22 != 0) {
      FUN_05dc9134();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
    bVar11 = (byte)uVar22 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
    if ((uVar14 & 1) == 0) {
      uVar29 = *puVar33;
    }
    else {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
      uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    }
    lVar32 = 0x248;
    if ((uVar13 & 1) == 0) {
      lVar32 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar29;
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar32);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0335764c(*(long *)(unaff_x20 + 0x230),&stack0x00000858,
                      *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__),
        in_stack_00000858 == 0)) || (plVar28 = (long *)FUN_05dc2788(), plVar28 == (long *)0x0))
    goto LAB_05dc8b54;
    if (*plVar28 != *(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar28);
    }
    lVar32 = *(long *)(unaff_x19 + 0x228);
    if (lVar32 != plVar28[0x45]) {
      if (lVar32 == 0) goto LAB_05dc8b54;
      FUN_05e05ad0(lVar32,0);
      lVar32 = plVar28[0x45];
      *(long *)(unaff_x19 + 0x228) = lVar32;
    }
    if (lVar32 == 0) goto LAB_05dc8b54;
    uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(lVar32,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar29;
    *(long *)(unaff_x19 + 0x240) = plVar28[0x48];
    *(long *)(unaff_x19 + 600) = plVar28[0x4b];
    *(long *)(unaff_x19 + 0x260) = plVar28[0x4c];
    uVar13 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar12 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar29;
  }
  cVar40 = *(char *)(unaff_x20 + 0x191);
  FUN_05d61b54();
  iVar23 = FUN_060fb038(0);
  if (iVar23 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (unaff_x25 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(unaff_x25,&stack0x00000460,&stack0x00000430,0);
  }
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar36 = *(long *)(unaff_x19 + 0x108);
  lVar32 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar32 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar32 = *(long *)puVar6;
  }
  puVar33 = *(undefined8 **)(lVar32 + 0xb8);
  lVar37 = puVar33[1];
  if (lVar37 == 0) {
    if (*(int *)(lVar32 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar33 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar29 = *puVar33;
    lVar37 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar37,uVar29,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar37;
  }
  if (lVar36 == 0) goto LAB_05dc8b54;
  lVar32 = FUN_03abff58(lVar36,lVar37,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((uVar18 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((uVar19 & 1) != 0) {
    FUN_05d6624c();
  }
  uStack0000000000000060 = (uint)(byte)(cVar40 != '\0' | auVar46[3]) & (uVar12 ^ 1);
  if ((uVar21 & 1) == 0 && uVar34 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar11 = auVar46[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar36 = *(long *)(unaff_x19 + 0xe8);
  uVar13 = uVar13 & bVar11 != 0;
  if (lVar36 != 0) {
    uVar14 = FUN_05d6d2cc();
    uVar27 = FUN_05d43fe0(lVar36,uVar14 & 1,0);
    if ((uVar27 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar42 = in_stack_00000854 == 1 | uVar42;
      uVar27 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar27 & 1) == 0) && ((uStack0000000000000044 & 1) == 0)) {
        uVar13 = 0;
        uVar42 = 0;
        uVar17 = 0;
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
  iVar23 = auVar46._8_4_;
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar36 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar36 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar36,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar42 & 1) != 0 || uVar13 != 0)) {
    if (((uVar15 | uVar42 ^ 0xffffffff) & 1) == 0) {
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
    lVar36 = *(long *)(unaff_x19 + 0x268);
    if ((lVar36 == 0) || (unaff_x25 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(unaff_x25,*(undefined8 *)(lVar36 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,unaff_x25,0);
    FUN_06113868(unaff_x25,0);
  }
  if ((uVar15 & 1) == 0) {
    if ((bVar10 & 1) != 0) {
LAB_05dc7784:
      bVar8 = false;
      plVar28 = (long *)(unaff_x19 + 0x278);
      puVar33 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar29 = *puVar33;
      if (bVar8) {
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05dc8b54;
        uVar24 = FUN_05de36ec(lVar36,0);
        uVar24 = FUN_05de37f8(lVar36,uVar24,0);
        FUN_060d69f4(&stack0x000007e0,uVar24,0);
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05dc8b54;
        uVar24 = FUN_05de36ec(lVar36,0);
        FUN_05de52dc(lVar36,&stack0x00000380,uVar24,0);
      }
      else {
        uVar24 = FUN_05daad04(in_stack_00000978,0);
        FUN_060d69f4(&stack0x000007e0,uVar24,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar28,&stack0x000007e0,0,1,1,uVar29,0);
      }
      if ((*plVar28 == 0) || (unaff_x25 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(unaff_x25,*(undefined8 *)(*plVar28 + 0x58),&stack0x00000350,0);
      puVar6 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar36 = *(long *)puVar6;
      if (*(int *)(lVar36 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar36 = *(long *)puVar6;
      }
      lVar36 = **(long **)(lVar36 + 0xb8);
      if (lVar36 == 0) goto LAB_05dc8b54;
      *(long *)(lVar36 + 0x10) = unaff_x25;
      FUN_05daac20(lVar36,in_stack_00000978,0);
      if ((uVar15 & 1) != 0) {
        if (*plVar28 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(unaff_x25,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
                     ,&stack0x00000320,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,unaff_x25,0);
      FUN_06113868(unaff_x25,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    bVar11 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar10 | bVar11) & 1) != 0) {
      if ((bVar11 & 1) == 0) goto LAB_05dc7784;
      lVar36 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar36 == 0) goto LAB_05dc8b54;
      lVar37 = *(long *)(lVar36 + 0x30);
      uVar14 = FUN_05de36ec(lVar36,0);
      if (lVar37 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_05dc8b64;
      plVar28 = (long *)(lVar37 + (long)(int)uVar14 * 8 + 0x20);
      if (*plVar28 == 0) goto LAB_05dc8b54;
      bVar8 = true;
      puVar33 = (undefined8 *)(*plVar28 + 0x58);
      goto LAB_05dc7794;
    }
  }
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  if ((uVar42 & 1) != 0) {
    if ((uVar26 & 0x10000) == 0) {
      if ((uVar15 & 1) != 0) goto LAB_05dc7e18;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05dc8b54;
      FUN_05dfae8c(*(long *)(unaff_x19 + 0x148),&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar36 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar36 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar36 = *(long *)puVar6;
        if ((uVar15 & 1) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05dc8b54;
        lVar37 = *(long *)(lVar36 + 0x30);
        uVar14 = FUN_05de36c8(lVar36,0);
        if (lVar37 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_05dc8b64;
        plVar28 = (long *)(lVar37 + (long)(int)uVar14 * 8 + 0x20);
        if (*plVar28 == 0) goto LAB_05dc8b54;
        puVar33 = (undefined8 *)(*plVar28 + 0x58);
      }
      else {
        if ((uVar15 & 1) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar28 = (long *)(unaff_x19 + 0x270);
        puVar33 = (undefined8 *)(*(long *)(lVar36 + 0xb8) + 0x18);
      }
      uVar29 = *puVar33;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar24 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar24,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar28,&stack0x000007a0,0,1,1,uVar29,0);
      }
      else {
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05dc8b54;
        uVar24 = FUN_05de36c8(lVar36,0);
        uVar24 = FUN_05de37f8(lVar36,uVar24,0);
        FUN_060d69f4(&stack0x000007a0,uVar24,0);
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05dc8b54;
        uVar24 = FUN_05de36c8(lVar36,0);
        FUN_05de52dc(lVar36,&stack0x000002e0,uVar24,0);
      }
      if ((*plVar28 == 0) || (unaff_x25 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(unaff_x25,*(undefined8 *)(*plVar28 + 0x58),&stack0x000002b0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar28 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(unaff_x25,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,unaff_x25,0);
      FUN_06113868(unaff_x25,0);
      if ((uVar15 & 1) == 0) {
        lVar36 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar36 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar36,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar36 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar36,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar27 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar37 = *(long *)(unaff_x19 + 0x150);
        uVar29 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar27 & 1) == 0) {
          if (bVar9) {
            if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_05dc8b64;
            if (lVar37 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar37,uVar29,*(undefined8 *)(lVar36 + (long)(int)uVar14 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
          else {
            if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_05dc8b64;
            if (lVar37 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar37,uVar29,*(undefined8 *)(lVar36 + (long)(int)uVar14 * 8 + 0x20),0);
          }
        }
        else {
          if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x30), lVar38 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar38 + 0x18) <= uVar14) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar30 = *(undefined8 *)(lVar38 + (long)(int)uVar14 * 8 + 0x20);
          uVar14 = FUN_05de36ec(lVar36,0);
          if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_05dc8b64;
          if (lVar37 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar37,uVar29,uVar30,*(undefined8 *)(lVar38 + (long)(int)uVar14 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < iVar23 - 0xfbU) {
          lVar36 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar36 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar36 + 0xb8) =
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
  if ((uVar17 & 1) != 0) {
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
  uVar27 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar27 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar40 = *(char *)(unaff_x20 + 0x1e0);
  if ((uVar15 & 1) == 0) {
    uVar24 = 2;
    if ((uStack0000000000000060 & 1) == 0) {
      uVar24 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000988) {
      uVar2 = uVar24;
    }
    iVar23 = 0;
    if ((uVar13 == 0 && (uStack0000000000000060 & 1) == 0) && cVar40 != '\0') {
      iVar23 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar27 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar27 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar23 = 0;
      }
    }
    uVar14 = 0;
    if (1 < in_stack_00000988) {
      uVar14 = uVar13;
    }
    if (uVar14 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar27 = FUN_05dadd80(0);
      if ((uVar27 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 &&
            (uStack0000000000000060 & 1) == 0) {
          if (iVar23 == 0) {
            iVar23 = 2;
          }
          else if (iVar23 == 3) {
            iVar23 = 1;
          }
        }
      }
    }
    if (uVar25 == 0) {
      lVar36 = *(long *)(unaff_x19 + 0x198);
      if (lVar36 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar36 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar36 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar36,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar36,uVar2,0,0);
    FUN_05d5a5c8(lVar36,iVar23,0);
    puVar6 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar38 = *(long *)(unaff_x19 + 0x108);
    lVar37 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar37 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar37 = *(long *)puVar6;
    }
    puVar33 = *(undefined8 **)(lVar37 + 0xb8);
    lVar39 = puVar33[2];
    if (lVar39 == 0) {
      if (*(int *)(lVar37 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar33 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar29 = *puVar33;
      lVar39 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar39,uVar29,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar39;
    }
    if (lVar38 == 0) goto LAB_05dc8b54;
    lVar37 = FUN_03abff58(lVar38,lVar39,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar37 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x26 == 0) goto LAB_05dc8b54;
      iVar23 = FUN_060a4b6c(unaff_x26,0);
      if (iVar23 == 4) goto LAB_05dc8198;
      uVar24 = 1;
    }
    else {
LAB_05dc8198:
      uVar24 = 0;
    }
    uVar27 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar27 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar36,uVar24,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar36 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar36 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar36,0);
    }
    FUN_05dc973c();
  }
  if (unaff_x26 == 0) goto LAB_05dc8b54;
  iVar23 = FUN_060a4b6c(unaff_x26,0);
  if ((iVar23 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar29 = FUN_060bc2e8(0);
    puVar6 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar27 = FUN_060f078c(uVar29,0,0);
    if ((uVar27 & 1) == 0) {
      uVar27 = FUN_0335764c(unaff_x26,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar27 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar29 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar6);
        }
        uVar27 = FUN_060f078c(uVar29,0,0);
        if ((uVar27 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (uVar13 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar42 & 1) == 0) {
      uVar27 = FUN_060fb560(0);
      uVar29 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar27 & 1) == 0) {
        uVar30 = FUN_060cd288(0);
      }
      else {
        uVar30 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar29,uVar30,0);
    }
  }
  else if ((((uVar15 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar26 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((uStack0000000000000060 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar36 = FUN_05dd59d4(0);
    if (lVar36 == 0) goto LAB_05dc8b54;
    uVar24 = *(undefined4 *)(lVar36 + 0x48);
    FUN_05df6060(uVar24,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar24,0);
    FUN_05d6624c();
  }
  if ((uVar26 & 0x100000000) != 0) {
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
    FUN_05d7fa08(unaff_x25);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05dc8b54;
    FUN_05d7e4a8(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05d6624c();
  }
  if ((uVar20 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar25 = 0;
  if (cVar40 != '\0') {
    uVar25 = 3;
  }
  uVar14 = (uint)(cVar40 == '\0');
  if (in_stack_00000988 < 2) {
    uVar14 = 1;
  }
  if (uVar13 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar25 = 0, 1 < in_stack_00000988)
       ) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar25 = FUN_05dadd80(0);
      uVar25 = uVar25 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),((uVar14 | uVar12) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar25,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar26 = FUN_05d6d5d0();
  uVar27 = FUN_05d6d398();
  if (((uVar26 & 1) != 0) && ((uVar27 & 1) != 0)) {
    lVar36 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar36 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar36);
    FUN_05d6624c();
  }
  bVar9 = cVar40 == '\0';
  bVar8 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar9 || ((uStack000000000000003c ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar31 = FUN_05d6d958(), (uVar31 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05dc8718:
    if (!bVar8 || bVar9) goto LAB_05dc871c;
LAB_05dc8740:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar10 = 1;
    if (bVar8 && !bVar9) goto LAB_05dc8740;
LAB_05dc871c:
    bVar11 = lVar32 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar28 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (uVar16 == 0) {
    if (cVar40 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar24 = FUN_060d65a4(&stack0x00000980,0);
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
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,in_stack_00000980,in_stack_00000984,uVar24,0,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x328,&stack0x00000650,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,0);
    if (cVar40 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar28,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar28,bVar11,plVar1,
                 &stack0x00000750,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05d6624c();
  }
  lVar36 = *plVar28;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar12 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar10 & 1) == 0) && (((uVar16 == 0 || (lVar32 != 0)) || (bVar8 && !bVar9)))) {
    lVar32 = *plVar28;
    if (lVar32 == 0) goto LAB_05dc8b54;
    uVar43 = *(undefined8 *)(lVar32 + 0x30);
    uVar30 = *(undefined8 *)(lVar32 + 0x28);
    uVar45 = *(undefined8 *)(lVar32 + 0x40);
    uVar44 = *(undefined8 *)(lVar32 + 0x38);
    uVar29 = *(undefined8 *)(lVar32 + 0x48);
    lVar32 = *(long *)(unaff_x19 + 600);
    if (lVar32 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar32 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar32 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar32 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar32 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar32 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar30;
    in_stack_00000158 = uVar43;
    in_stack_00000160 = uVar44;
    in_stack_00000168 = uVar45;
    in_stack_00000170 = uVar29;
    uVar31 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar31 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e8 = CONCAT44(in_stack_0000098c,in_stack_00000988);
      in_stack_000000e0 = CONCAT44(in_stack_00000984,in_stack_00000980);
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = in_stack_00000990;
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000108 = in_stack_000009a8;
      in_stack_00000110 = in_stack_000009b0;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar36,0);
      FUN_05d6624c();
    }
  }
  if (((uVar26 & 1) != 0) && ((uVar27 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar26 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar26 & 1) == 0) {
      return;
    }
    lVar32 = *plVar1;
    if (lVar32 != 0) {
      uVar43 = *(undefined8 *)(lVar32 + 0x30);
      uVar30 = *(undefined8 *)(lVar32 + 0x28);
      uVar45 = *(undefined8 *)(lVar32 + 0x40);
      uVar44 = *(undefined8 *)(lVar32 + 0x38);
      uVar29 = *(undefined8 *)(lVar32 + 0x48);
      lVar32 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar32 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar32 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar32 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar32 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar32 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar32 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar30;
        in_stack_000000b8 = uVar43;
        in_stack_000000c0 = uVar44;
        in_stack_000000c8 = uVar45;
        in_stack_000000d0 = uVar29;
        uVar26 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar26 & 1) != 0) {
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


