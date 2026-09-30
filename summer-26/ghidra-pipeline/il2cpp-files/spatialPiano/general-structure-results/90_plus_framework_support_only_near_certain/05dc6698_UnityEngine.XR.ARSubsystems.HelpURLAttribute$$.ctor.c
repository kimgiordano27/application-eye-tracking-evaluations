/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.HelpURLAttribute$$.ctor
ENTRY_POINT: 05dc6698
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 198
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_11
*/


void UnityEngine_XR_ARSubsystems_HelpURLAttribute___ctor(void)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  long *plVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  uint uVar37;
  undefined8 uVar38;
  int iVar39;
  long unaff_x19;
  long unaff_x20;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  char cVar45;
  char cVar46;
  long lVar47;
  uint uVar48;
  long unaff_x29;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
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
  ulong in_stack_000000e0;
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
  ulong in_stack_00000180;
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
  long in_stack_000009c0;
  
  FUN_05df1010();
  if (unaff_x20 == 0) goto LAB_05dc8b54;
  uVar3 = *(undefined4 *)(unaff_x20 + 0x128);
  uVar38 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar34 = *(ulong *)(unaff_x20 + 0xf8);
  uVar50 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar35 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar54 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar52 = *(undefined8 *)(unaff_x20 + 0x118);
  lVar47 = *(long *)(unaff_x20 + 0xd8);
  if (unaff_x29 == 0) goto LAB_05dc8b54;
  lVar27 = FUN_05d6dbd4();
  lVar40 = *(long *)(unaff_x19 + 0xe8);
  if (lVar40 != 0) {
    uVar13 = FUN_05d6d2cc();
    uVar28 = FUN_05d43fe0(lVar40,uVar13 & 1,0);
    if ((uVar28 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar28 = thunk_FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
      if ((uVar28 & 1) != 0) {
        uVar14 = *(undefined4 *)(unaff_x20 + 0x160);
        uVar4 = *(undefined4 *)(unaff_x20 + 0x164);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05d44060(&stack0x000008f0,uVar14,uVar4,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        uVar29 = FUN_05d43a80(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
        }
        FUN_05daf224(0,uVar29,&stack0x000008f0,0,0,1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_VFXProcessCameraPassData>__
                     ,0);
        uVar14 = FUN_05dc418c();
        FUN_05d440a4(&stack0x000008b0,uVar14,*(undefined4 *)(unaff_x20 + 0x160),
                     *(undefined4 *)(unaff_x20 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        uVar29 = FUN_05d43a88(*(long *)(unaff_x19 + 0xe8),0);
        FUN_05daf224(0,uVar29,&stack0x000008b0,0,0,1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_DummyData>__
                     ,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar28 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
      if ((uVar28 & 1) != 0) {
        lVar40 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar40 == 0) || (*(long *)(lVar40 + 0x90) == 0)) ||
            (*(long *)(*(long *)(lVar40 + 0x90) + 0x30) == 0)) ||
           ((*(long *)(lVar40 + 0x30) == 0 || (FUN_05d7c764(), *(long *)(unaff_x19 + 0xe8) == 0))))
        goto LAB_05dc8b54;
        FUN_05d6624c();
      }
    }
  }
  puVar7 = Method_System_Data_NewDiffgramGen_GenerateColumn__;
  if (*(int *)(unaff_x20 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar11 = FUN_05dc5d90();
  lVar40 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x140) = bVar11 & 1;
  if (*(int *)(lVar40 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar28 = FUN_05dc5d00();
  if ((uVar28 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d61b54();
    FUN_05d6624c();
    goto LAB_05dc692c;
  }
  uVar13 = FUN_05d6d2cc();
  uVar28 = FUN_05dc602c();
  if (((uVar28 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar13 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar28 = FUN_060a33d8(0);
    if ((uVar28 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_05dc40c0();
    }
  }
  else {
    uVar15 = 1;
  }
  uVar16 = FUN_05dc6178();
  FUN_05dc8c00();
  bVar11 = FUN_05daa7ec();
  bVar12 = FUN_05dc5fb8();
  bVar11 = (bVar12 ^ 1) & bVar11;
  uVar17 = FUN_05dc4094();
  uVar26 = 0;
  if ((bVar11 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = false;
    if ((uVar17 & 1) == 0) {
      uVar26 = in_stack_0000097c;
      if (in_stack_0000097c == 0) {
        bVar10 = true;
      }
      else {
        if (in_stack_0000097c != 1) {
          thunk_FUN_02f6ef30(PTR_DAT_067c9678);
          uVar38 = thunk_FUN_02f45270();
          FUN_05056b68(uVar38,0);
          uVar35 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceShadows_ScreenSpaceShadowsPass_PassData>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar38,uVar35);
        }
        bVar10 = false;
      }
    }
  }
  FUN_05d6d958();
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  FUN_05d6d2bc();
  auVar55 = FUN_05dc8cbc();
  uVar28 = auVar55._0_8_;
  lVar40 = *(long *)(unaff_x19 + 0x2a0);
  bVar12 = auVar55[2];
  if (lVar40 != 0) {
    *(undefined4 *)(lVar40 + 0x10) = in_stack_00000978;
    *(byte *)(lVar40 + 0x14) = bVar11 & 1;
    *(byte *)(lVar40 + 0x17) = bVar12 & 1;
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
        uVar30 = FUN_04aff1b0(&stack0x00000890,*(undefined8 *)puVar7);
        if ((uVar30 & 1) == 0) goto LAB_05dc6b78;
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
    uVar18 = 0;
  }
  else {
    uVar18 = FUN_05da1d1c(unaff_x19 + 0x310,0);
    uVar18 = uVar18 & 1;
  }
  if (in_stack_000009c0 == 0) goto LAB_05dc8b54;
  if (*(char *)(in_stack_000009c0 + 0x10) == '\0') {
    uStack000000000000003c = 0;
  }
  else {
    uStack000000000000003c = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  if (uVar18 == 0) {
    cVar45 = '\0';
  }
  else {
    cVar45 = *(char *)(unaff_x20 + 0x192);
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar19 = 0;
  }
  else {
    uVar19 = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  uVar30 = FUN_05d6d2bc();
  if ((uVar30 & 1) == 0) {
    uStack0000000000000044 = FUN_05d6d2cc();
  }
  else {
    uStack0000000000000044 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar28 & 1) == 0)) {
    cVar46 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar46 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05dc8b54;
  uVar20 = Unity_XR_CoreUtils_OnDestroyNotifier__set_Destroyed();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05dc8b54;
  uVar21 = FUN_05deb620(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05dc8b54;
  bVar9 = cVar45 != '\0';
  uVar22 = FUN_05d9fa88(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar46 == '\0' && !bVar9) {
    cVar46 = '\0';
    uVar23 = 0;
  }
  else {
    iVar25 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar23 = FUN_05dc5e98();
    uVar23 = (uint)(iVar25 == 2) | uVar23 ^ 1;
  }
  uVar23 = (uint)(byte)(bVar12 | auVar55[1]) | uVar13 | uVar23 | uStack0000000000000044;
  if ((uVar17 & uVar23 & 1) != 0) {
    uVar23 = bVar12 & 1;
  }
  cVar5 = *(char *)(unaff_x19 + 0x140);
  if (cVar46 == '\0') {
    if (((uint)(cVar45 == '\0') & (uStack0000000000000044 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
      bVar6 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    lVar40 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar40 == 0) goto LAB_05dc8b54;
    iVar25 = auVar55._12_4_ + -1;
    iVar39 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar39 = 300;
    }
    if (499 < iVar25) {
      iVar25 = 500;
    }
    if ((uVar28 & 1) != 0) {
      iVar39 = iVar25;
    }
    *(int *)(lVar40 + 0x10) = iVar39;
    if (iVar39 < 500) {
      *(undefined1 *)(lVar40 + 0xd8) = 0;
      bVar6 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  uVar37 = (uint)(cVar5 != '\0');
  uVar48 = uVar23 | uVar37;
  uVar24 = FUN_05dc8f3c();
  if ((uVar17 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar2 = uVar26;
  if ((bVar12 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar6 || bVar9) & (uVar48 ^ 1)) != 0)) {
    uVar2 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar15 = (uVar15 | uVar16 | uVar24) & (uVar13 ^ 1);
  uVar30 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
  uVar16 = uVar15 | uVar2;
  iVar25 = FUN_060fb038(0);
  puVar7 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  if (iVar25 == 0x15) {
    uVar24 = uVar16;
    if ((uVar30 & 1) == 0) {
      uVar24 = uVar15;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_05dc6e90;
  }
  else {
LAB_05dc6e90:
    uVar24 = uVar16;
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
    uVar24 = uVar16;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar24 = uVar2 | uVar24;
  }
  uVar30 = FUN_060fb088(0);
  uVar15 = uVar2 | uVar24;
  uVar16 = uVar15;
  if ((uVar30 & 1) == 0) {
    uVar16 = uVar24;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (lVar47 == 0) goto LAB_05dc8b54;
    iVar25 = thunk_FUN_060a6b50(lVar47,0);
    puVar8 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x000003c0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar30 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0), (uVar30 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05dc8b54;
    uVar24 = uVar15 & iVar25 != 1;
    puVar36 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar29 = FUN_05c9cb6c(&stack0x000005e0,0);
      *puVar36 = uVar29;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar30 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
      if ((uVar30 & 1) != 0) {
        FUN_05c9cc0c(puVar36,&stack0x00000550,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar29 = FUN_05c9cb6c(&stack0x00000520,0);
      *(undefined8 *)(unaff_x19 + 0x260) = uVar29;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar30 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
      if ((uVar30 & 1) != 0) {
        FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
      }
    }
    if (uVar24 != 0) {
      FUN_05dc9134();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
    bVar12 = (byte)uVar24 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar12;
    if ((uVar16 & 1) == 0) {
      uVar29 = *puVar36;
    }
    else {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
      uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    }
    lVar40 = 0x248;
    if ((uVar15 & 1) == 0) {
      lVar40 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar29;
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar40);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0335764c(*(long *)(unaff_x20 + 0x230),&stack0x00000858,
                      *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__),
        in_stack_00000858 == 0)) || (plVar31 = (long *)FUN_05dc2788(), plVar31 == (long *)0x0))
    goto LAB_05dc8b54;
    if (*plVar31 != *(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar31);
    }
    lVar40 = *(long *)(unaff_x19 + 0x228);
    if (lVar40 != plVar31[0x45]) {
      if (lVar40 == 0) goto LAB_05dc8b54;
      FUN_05e05ad0(lVar40,0);
      lVar40 = plVar31[0x45];
      *(long *)(unaff_x19 + 0x228) = lVar40;
    }
    if (lVar40 == 0) goto LAB_05dc8b54;
    uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(lVar40,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar29;
    *(long *)(unaff_x19 + 0x240) = plVar31[0x48];
    *(long *)(unaff_x19 + 600) = plVar31[0x4b];
    *(long *)(unaff_x19 + 0x260) = plVar31[0x4c];
    uVar15 = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar13 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar29 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar29;
  }
  cVar45 = *(char *)(unaff_x20 + 0x191);
  FUN_05d61b54();
  iVar25 = FUN_060fb038(0);
  if (iVar25 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar27 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(lVar27,&stack0x00000460,&stack0x00000430,0);
  }
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar41 = *(long *)(unaff_x19 + 0x108);
  lVar40 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar40 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar40 = *(long *)puVar7;
  }
  puVar36 = *(undefined8 **)(lVar40 + 0xb8);
  lVar42 = puVar36[1];
  if (lVar42 == 0) {
    if (*(int *)(lVar40 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar36 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar29 = *puVar36;
    lVar42 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar42,uVar29,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar42;
  }
  if (lVar41 == 0) goto LAB_05dc8b54;
  lVar40 = FUN_03abff58(lVar41,lVar42,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((uVar20 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((uVar21 & 1) != 0) {
    FUN_05d6624c();
  }
  uStack0000000000000060 = (uint)(byte)(cVar45 != '\0' | auVar55[3]) & (uVar13 ^ 1);
  if ((uVar23 & 1) == 0 && uVar37 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar9) {
      bVar12 = auVar55[0] & 1;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    bVar12 = 0;
  }
  lVar41 = *(long *)(unaff_x19 + 0xe8);
  uVar15 = uVar15 & bVar12 != 0;
  if (lVar41 != 0) {
    uVar16 = FUN_05d6d2cc();
    uVar30 = FUN_05d43fe0(lVar41,uVar16 & 1,0);
    if ((uVar30 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar48 = in_stack_00000854 == 1 | uVar48;
      uVar30 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar30 & 1) == 0) && ((uStack0000000000000044 & 1) == 0)) {
        uVar15 = 0;
        uVar48 = 0;
        uVar19 = 0;
        uStack0000000000000060 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        bVar12 = FUN_05d43b0c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar12 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05dc8b54;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar25 = auVar55._8_4_;
  if ((uVar17 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    lVar41 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar41 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar41 + 0x15) != '\0') &&
       ((iVar25 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar41,0);
    }
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar12 != 0 || ((uVar48 & 1) != 0 || uVar15 != 0)) {
    if (((uVar17 | uVar48 ^ 0xffffffff) & 1) == 0) {
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
    lVar41 = *(long *)(unaff_x19 + 0x268);
    if ((lVar41 == 0) || (lVar27 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(lVar27,*(undefined8 *)(lVar41 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,lVar27,0);
    FUN_06113868(lVar27,0);
  }
  if ((uVar17 & 1) == 0) {
    if ((bVar11 & 1) != 0) {
LAB_05dc7784:
      bVar9 = false;
      plVar31 = (long *)(unaff_x19 + 0x278);
      puVar36 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar29 = *puVar36;
      if (bVar9) {
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar41 == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de36ec(lVar41,0);
        uVar14 = FUN_05de37f8(lVar41,uVar14,0);
        FUN_060d69f4(&stack0x000007e0,uVar14,0);
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar41 == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de36ec(lVar41,0);
        FUN_05de52dc(lVar41,&stack0x00000380,uVar14,0);
      }
      else {
        uVar14 = FUN_05daad04(in_stack_00000978,0);
        FUN_060d69f4(&stack0x000007e0,uVar14,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar31,&stack0x000007e0,0,1,1,uVar29,0);
      }
      if ((*plVar31 == 0) || (lVar27 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(lVar27,*(undefined8 *)(*plVar31 + 0x58),&stack0x00000350,0);
      puVar7 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar41 = *(long *)puVar7;
      if (*(int *)(lVar41 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar41 = *(long *)puVar7;
      }
      lVar41 = **(long **)(lVar41 + 0xb8);
      if (lVar41 == 0) goto LAB_05dc8b54;
      *(long *)(lVar41 + 0x10) = lVar27;
      FUN_05daac20(lVar41,in_stack_00000978,0);
      if ((uVar17 & 1) != 0) {
        if (*plVar31 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(lVar27,*(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
                     ,&stack0x00000320,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,lVar27,0);
      FUN_06113868(lVar27,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    bVar12 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar11 | bVar12) & 1) != 0) {
      if ((bVar12 & 1) == 0) goto LAB_05dc7784;
      lVar41 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar41 == 0) goto LAB_05dc8b54;
      lVar42 = *(long *)(lVar41 + 0x30);
      uVar16 = FUN_05de36ec(lVar41,0);
      if (lVar42 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar42 + 0x18) <= uVar16) goto LAB_05dc8b64;
      plVar31 = (long *)(lVar42 + (long)(int)uVar16 * 8 + 0x20);
      if (*plVar31 == 0) goto LAB_05dc8b54;
      bVar9 = true;
      puVar36 = (undefined8 *)(*plVar31 + 0x58);
      goto LAB_05dc7794;
    }
  }
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  if ((uVar48 & 1) != 0) {
    if ((uVar28 & 0x10000) == 0) {
      if ((uVar17 & 1) != 0) goto LAB_05dc7e18;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05dc8b54;
      FUN_05dfae8c(*(long *)(unaff_x19 + 0x148),&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar41 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar41 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar41 = *(long *)puVar7;
        if ((uVar17 & 1) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar41 == 0) goto LAB_05dc8b54;
        lVar42 = *(long *)(lVar41 + 0x30);
        uVar16 = FUN_05de36c8(lVar41,0);
        if (lVar42 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar42 + 0x18) <= uVar16) goto LAB_05dc8b64;
        plVar31 = (long *)(lVar42 + (long)(int)uVar16 * 8 + 0x20);
        if (*plVar31 == 0) goto LAB_05dc8b54;
        puVar36 = (undefined8 *)(*plVar31 + 0x58);
      }
      else {
        if ((uVar17 & 1) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar31 = (long *)(unaff_x19 + 0x270);
        puVar36 = (undefined8 *)(*(long *)(lVar41 + 0xb8) + 0x18);
      }
      uVar29 = *puVar36;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar14,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar31,&stack0x000007a0,0,1,1,uVar29,0);
      }
      else {
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar41 == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de36c8(lVar41,0);
        uVar14 = FUN_05de37f8(lVar41,uVar14,0);
        FUN_060d69f4(&stack0x000007a0,uVar14,0);
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar41 == 0) goto LAB_05dc8b54;
        uVar14 = FUN_05de36c8(lVar41,0);
        FUN_05de52dc(lVar41,&stack0x000002e0,uVar14,0);
      }
      if ((*plVar31 == 0) || (lVar27 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(lVar27,*(undefined8 *)(*plVar31 + 0x58),&stack0x000002b0,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar31 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(lVar27,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,lVar27,0);
      FUN_06113868(lVar27,0);
      if ((uVar17 & 1) == 0) {
        lVar41 = *(long *)(unaff_x19 + 0x150);
        if (bVar10) {
          if (lVar41 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar41,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar41 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar41,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar16 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar30 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar42 = *(long *)(unaff_x19 + 0x150);
        uVar29 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar41 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar30 & 1) == 0) {
          if (bVar10) {
            if ((lVar41 == 0) || (lVar41 = *(long *)(lVar41 + 0x30), lVar41 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar41 + 0x18) <= uVar16) goto LAB_05dc8b64;
            if (lVar42 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar42,uVar29,*(undefined8 *)(lVar41 + (long)(int)uVar16 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
          else {
            if ((lVar41 == 0) || (lVar41 = *(long *)(lVar41 + 0x30), lVar41 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar41 + 0x18) <= uVar16) goto LAB_05dc8b64;
            if (lVar42 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar42,uVar29,*(undefined8 *)(lVar41 + (long)(int)uVar16 * 8 + 0x20),0);
          }
        }
        else {
          if ((lVar41 == 0) || (lVar43 = *(long *)(lVar41 + 0x30), lVar43 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar43 + 0x18) <= uVar16) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar32 = *(undefined8 *)(lVar43 + (long)(int)uVar16 * 8 + 0x20);
          uVar16 = FUN_05de36ec(lVar41,0);
          if (*(uint *)(lVar43 + 0x18) <= uVar16) goto LAB_05dc8b64;
          if (lVar42 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar42,uVar29,uVar32,*(undefined8 *)(lVar43 + (long)(int)uVar16 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < iVar25 - 0xfbU) {
          lVar41 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar41 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar41 + 0xb8) =
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
  if ((uVar19 & 1) != 0) {
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
  uVar30 = FUN_05c3a444(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar30 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar45 = *(char *)(unaff_x20 + 0x1e0);
  iVar39 = (int)uVar38;
  if ((uVar17 & 1) == 0) {
    uVar14 = 2;
    if ((uStack0000000000000060 & 1) == 0) {
      uVar14 = 0;
    }
    uVar4 = 0;
    if (1 < iVar39) {
      uVar4 = uVar14;
    }
    iVar25 = 0;
    if ((uVar15 == 0 && (uStack0000000000000060 & 1) == 0) && cVar45 != '\0') {
      iVar25 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar30 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar30 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar25 = 0;
      }
    }
    uVar16 = 0;
    if (1 < iVar39) {
      uVar16 = uVar15;
    }
    if (uVar16 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar30 = FUN_05dadd80(0);
      if ((uVar30 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 &&
            (uStack0000000000000060 & 1) == 0) {
          if (iVar25 == 0) {
            iVar25 = 2;
          }
          else if (iVar25 == 3) {
            iVar25 = 1;
          }
        }
      }
    }
    if (uVar26 == 0) {
      lVar41 = *(long *)(unaff_x19 + 0x198);
      if (lVar41 == 0) goto LAB_05dc8b54;
    }
    else {
      lVar41 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar41 == 0) goto LAB_05dc8b54;
      FUN_05dfdd70(lVar41,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05d5a490(lVar41,uVar4,0,0);
    FUN_05d5a5c8(lVar41,iVar25,0);
    puVar7 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar43 = *(long *)(unaff_x19 + 0x108);
    lVar42 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar42 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar42 = *(long *)puVar7;
    }
    puVar36 = *(undefined8 **)(lVar42 + 0xb8);
    lVar44 = puVar36[2];
    if (lVar44 == 0) {
      if (*(int *)(lVar42 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar36 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar29 = *puVar36;
      lVar44 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar44,uVar29,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar44;
    }
    if (lVar43 == 0) goto LAB_05dc8b54;
    lVar42 = FUN_03abff58(lVar43,lVar44,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar42 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (lVar47 == 0) goto LAB_05dc8b54;
      iVar25 = FUN_060a4b6c(lVar47,0);
      if (iVar25 == 4) goto LAB_05dc8198;
      uVar14 = 1;
    }
    else {
LAB_05dc8198:
      uVar14 = 0;
    }
    uVar30 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar30 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar41,uVar14,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar41 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar41 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar41 + 0x15) != '\0') &&
       ((iVar25 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar41,0);
    }
    FUN_05dc973c();
  }
  if (lVar47 == 0) goto LAB_05dc8b54;
  iVar25 = FUN_060a4b6c(lVar47,0);
  if ((iVar25 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar29 = FUN_060bc2e8(0);
    puVar7 = PTR_DAT_067c8f20;
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar30 = FUN_060f078c(uVar29,0,0);
    if ((uVar30 & 1) == 0) {
      uVar30 = FUN_0335764c(lVar47,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar30 & 1) != 0) {
        if (in_stack_00000748 == 0) goto LAB_05dc8b54;
        uVar29 = FUN_060c3960(in_stack_00000748,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar7);
        }
        uVar30 = FUN_060f078c(uVar29,0,0);
        if ((uVar30 & 1) != 0) goto LAB_05dc8238;
      }
    }
    else {
LAB_05dc8238:
      FUN_05d6624c();
    }
  }
  if (uVar15 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar48 & 1) == 0) {
      uVar30 = FUN_060fb560(0);
      uVar29 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar30 & 1) == 0) {
        uVar32 = FUN_060cd288(0);
      }
      else {
        uVar32 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar29,uVar32,0);
    }
  }
  else if ((((uVar17 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar28 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((uStack0000000000000060 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar47 = FUN_05dd59d4(0);
    if (lVar47 == 0) goto LAB_05dc8b54;
    uVar14 = *(undefined4 *)(lVar47 + 0x48);
    FUN_05df6060(uVar14,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,in_stack_0000070c,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar14,0);
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
    FUN_05d7fa08(lVar27);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05dc8b54;
    FUN_05d7e4a8(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05d6624c();
  }
  if ((uVar22 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar26 = 0;
  if (cVar45 != '\0') {
    uVar26 = 3;
  }
  uVar16 = (uint)(cVar45 == '\0');
  if (iVar39 < 2) {
    uVar16 = 1;
  }
  if (uVar15 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar26 = 0, 1 < iVar39)) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar26 = FUN_05dadd80(0);
      uVar26 = uVar26 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),((uVar16 | uVar13) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar26,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar28 = FUN_05d6d5d0();
  uVar30 = FUN_05d6d398();
  if (((uVar28 & 1) != 0) && ((uVar30 & 1) != 0)) {
    lVar47 = *(long *)(unaff_x19 + 0x200);
    FUN_05dc418c();
    if (lVar47 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar47);
    FUN_05d6624c();
  }
  bVar10 = cVar45 == '\0';
  bVar9 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar10 || ((uStack000000000000003c ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar33 = FUN_05d6d958(), (uVar33 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar11 = 0;
joined_r0x05dc8718:
    if (!bVar9 || bVar10) goto LAB_05dc871c;
LAB_05dc8740:
    bVar12 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar11 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05dc8718;
    }
    bVar11 = 1;
    if (bVar9 && !bVar10) goto LAB_05dc8740;
LAB_05dc871c:
    bVar12 = lVar40 == 0 & (bVar11 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar31 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (uVar18 == 0) {
    if (cVar45 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar14 = FUN_060d65a4(&stack0x00000980,0);
    if (*(int *)(*(long *)Method_System_IO_Path_InsecureGetFullPath__ + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Method_System_IO_Path_InsecureGetFullPath__);
    }
    in_stack_00000180 = uVar34;
    in_stack_00000188 = uVar38;
    in_stack_00000190 = uVar35;
    in_stack_00000198 = uVar50;
    in_stack_000001a0 = uVar52;
    in_stack_000001a8 = uVar54;
    in_stack_000001b0 = uVar3;
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,uVar34 & 0xffffffff,(int)(uVar34 >> 0x20),uVar14,
                 0,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x328,&stack0x00000650,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,0);
    if (cVar45 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar31,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar31,bVar12,plVar1,
                 &stack0x00000750,unaff_x19 + 0x288,bVar11 & 1);
    FUN_05d6624c();
  }
  lVar47 = *plVar31;
  if ((bVar11 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar13 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar11 & 1) == 0) && (((uVar18 == 0 || (lVar40 != 0)) || (bVar9 && !bVar10)))) {
    lVar27 = *plVar31;
    if (lVar27 == 0) goto LAB_05dc8b54;
    uVar49 = *(undefined8 *)(lVar27 + 0x30);
    uVar32 = *(undefined8 *)(lVar27 + 0x28);
    uVar53 = *(undefined8 *)(lVar27 + 0x40);
    uVar51 = *(undefined8 *)(lVar27 + 0x38);
    uVar29 = *(undefined8 *)(lVar27 + 0x48);
    lVar27 = *(long *)(unaff_x19 + 600);
    if (lVar27 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar27 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar27 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar27 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar27 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar27 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar32;
    in_stack_00000158 = uVar49;
    in_stack_00000160 = uVar51;
    in_stack_00000168 = uVar53;
    in_stack_00000170 = uVar29;
    uVar33 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar33 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e0 = uVar34;
      in_stack_000000e8 = uVar38;
      in_stack_000000f0 = uVar35;
      in_stack_000000f8 = uVar50;
      in_stack_00000100 = uVar52;
      in_stack_00000108 = uVar54;
      in_stack_00000110 = uVar3;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar47,0);
      FUN_05d6624c();
    }
  }
  if (((uVar28 & 1) != 0) && ((uVar30 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar34 = FUN_05c35d3c(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar34 & 1) == 0) {
      return;
    }
    lVar47 = *plVar1;
    if (lVar47 != 0) {
      uVar50 = *(undefined8 *)(lVar47 + 0x30);
      uVar35 = *(undefined8 *)(lVar47 + 0x28);
      uVar54 = *(undefined8 *)(lVar47 + 0x40);
      uVar52 = *(undefined8 *)(lVar47 + 0x38);
      uVar38 = *(undefined8 *)(lVar47 + 0x48);
      lVar47 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar47 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar47 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar47 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar47 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar47 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar47 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar35;
        in_stack_000000b8 = uVar50;
        in_stack_000000c0 = uVar52;
        in_stack_000000c8 = uVar54;
        in_stack_000000d0 = uVar38;
        uVar34 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar34 & 1) != 0) {
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


