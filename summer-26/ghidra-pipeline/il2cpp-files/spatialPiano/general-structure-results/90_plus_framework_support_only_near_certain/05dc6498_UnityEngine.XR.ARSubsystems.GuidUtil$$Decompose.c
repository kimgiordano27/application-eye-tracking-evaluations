/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.GuidUtil$$Decompose
ENTRY_POINT: 05dc6498
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 241
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x05dc8068) */
/* WARNING: Removing unreachable block (ram,0x05dc8070) */
/* WARNING: Removing unreachable block (ram,0x05dc6a38) */
/* WARNING: Removing unreachable block (ram,0x05dc8b68) */
/* WARNING: Removing unreachable block (ram,0x05dc6a40) */
/* WARNING: Removing unreachable block (ram,0x05dc6fc8) */
/* WARNING: Removing unreachable block (ram,0x05dc6fd0) */
/* WARNING: Removing unreachable block (ram,0x05dc8b5c) */
/* WARNING: Removing unreachable block (ram,0x05dc6fec) */
/* WARNING: Removing unreachable block (ram,0x05dc6ffc) */
/* WARNING: Removing unreachable block (ram,0x05dc7000) */
/* WARNING: Removing unreachable block (ram,0x05dc7010) */
/* WARNING: Removing unreachable block (ram,0x05dc7014) */
/* WARNING: Removing unreachable block (ram,0x05dc8270) */
/* WARNING: Removing unreachable block (ram,0x05dc8288) */
/* WARNING: Removing unreachable block (ram,0x05dc8290) */

void UnityEngine_XR_ARSubsystems_GuidUtil__Decompose(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
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
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  long lVar39;
  int iVar40;
  long unaff_x19;
  long unaff_x20;
  uint uVar41;
  long lVar42;
  long *plVar43;
  long lVar44;
  char cVar45;
  char cVar46;
  long lVar47;
  uint uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
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
  
  FUN_02f08768(Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__);
  FUN_02f08768(Method_Meta_XR_PassthroughCameraAccess_GetCameraIndex__);
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_DummyData>__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_PassData>__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_VFXProcessCameraPassData>__
              );
  *(undefined1 *)(unaff_x20 + 0xc1a) = 1;
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05dc8b54;
  lVar26 = FUN_05d4c208(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05dc8b54;
  lVar27 = FUN_05d4c208(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05dc8b54;
  uVar28 = FUN_05d4c208(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05dc8b54;
  uVar29 = FUN_05d4c208(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05dc8b54;
  lVar30 = FUN_05d4c208(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_ProbeReferenceVolume_<RegisterDebug>b__229_28__
                       );
  if ((*(long *)(unaff_x19 + 0x298) == 0) ||
     (FUN_05df1010(*(long *)(unaff_x19 + 0x298),lVar26,lVar27,uVar28,0), lVar27 == 0))
  goto LAB_05dc8b54;
  uVar4 = *(undefined4 *)(lVar27 + 0x128);
  uVar49 = *(undefined8 *)(lVar27 + 0x100);
  uVar36 = *(ulong *)(lVar27 + 0xf8);
  uVar52 = *(undefined8 *)(lVar27 + 0x110);
  uVar50 = *(undefined8 *)(lVar27 + 0x108);
  uVar55 = *(undefined8 *)(lVar27 + 0x120);
  uVar54 = *(undefined8 *)(lVar27 + 0x118);
  lVar47 = *(long *)(lVar27 + 0xd8);
  if (lVar26 == 0) goto LAB_05dc8b54;
  lVar31 = FUN_05d6dbd4(lVar26,0);
  lVar42 = *(long *)(unaff_x19 + 0xe8);
  if (lVar42 != 0) {
    uVar14 = FUN_05d6d2cc(lVar27,0);
    uVar32 = FUN_05d43fe0(lVar42,uVar14 & 1,0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar32 = thunk_FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        uVar15 = *(undefined4 *)(lVar27 + 0x160);
        uVar5 = *(undefined4 *)(lVar27 + 0x164);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05d44060(&stack0x000008f0,uVar15,uVar5,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        uVar33 = FUN_05d43a80(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
        }
        FUN_05daf224(0,uVar33,&stack0x000008f0,0,0,1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_VFXProcessCameraPassData>__
                     ,0);
        uVar15 = FUN_05dc418c();
        FUN_05d440a4(&stack0x000008b0,uVar15,*(undefined4 *)(lVar27 + 0x160),
                     *(undefined4 *)(lVar27 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        uVar33 = FUN_05d43a88(*(long *)(unaff_x19 + 0xe8),0);
        FUN_05daf224(0,uVar33,&stack0x000008b0,0,0,1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_DummyData>__
                     ,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar32 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        lVar42 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar42 == 0) || (*(long *)(lVar42 + 0x90) == 0)) ||
            (lVar39 = *(long *)(*(long *)(lVar42 + 0x90) + 0x30), lVar39 == 0)) ||
           ((*(long *)(lVar42 + 0x30) == 0 ||
            (FUN_05d7c764(*(long *)(lVar42 + 0x30),lVar27,*(undefined4 *)(lVar39 + 0x18),0),
            *(long *)(unaff_x19 + 0xe8) == 0)))) goto LAB_05dc8b54;
        FUN_05d6624c();
      }
    }
  }
  puVar9 = Method_System_Data_NewDiffgramGen_GenerateColumn__;
  if (*(int *)(lVar27 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar12 = FUN_05dc5d90();
  lVar42 = *(long *)puVar9;
  *(byte *)(unaff_x19 + 0x140) = bVar12 & 1;
  if (*(int *)(lVar42 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar32 = FUN_05dc5d00(lVar27);
  if ((uVar32 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d61b54();
    FUN_05d6624c();
    goto LAB_05dc692c;
  }
  uVar14 = FUN_05d6d2cc(lVar27,0);
  uVar32 = FUN_05dc602c();
  if (((uVar32 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar14 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar32 = FUN_060a33d8(0);
    if ((uVar32 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = FUN_05dc40c0();
    }
  }
  else {
    uVar16 = 1;
  }
  uVar33 = FUN_05dc6178();
  FUN_05dc8c00(uVar33,lVar27);
  bVar12 = FUN_05daa7ec();
  bVar13 = FUN_05dc5fb8();
  bVar12 = (bVar13 ^ 1) & bVar12;
  uVar17 = FUN_05dc4094();
  if ((bVar12 & 1) == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = false;
    if ((uVar17 & 1) == 0) {
      bVar11 = true;
    }
  }
  FUN_05d6d958(lVar27,0);
  if (lVar30 == 0) goto LAB_05dc8b54;
  FUN_05d6d2bc(lVar27,0);
  auVar56 = FUN_05dc8cbc();
  uVar32 = auVar56._0_8_;
  lVar42 = *(long *)(unaff_x19 + 0x2a0);
  bVar13 = auVar56[2];
  if (lVar42 != 0) {
    *(undefined4 *)(lVar42 + 0x10) = 0;
    *(byte *)(lVar42 + 0x14) = bVar12 & 1;
    *(byte *)(lVar42 + 0x17) = bVar13 & 1;
    FUN_05de4e20(lVar42,uVar28,0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    FUN_05de4f8c(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_05dc8b54;
      FUN_03ac039c(&stack0x000003c0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<CustomMatchmaking>__);
      puVar9 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__;
      do {
        uVar34 = FUN_04aff1b0(&stack0x00000890,*(undefined8 *)puVar9);
        if ((uVar34 & 1) == 0) goto LAB_05dc6b78;
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
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uVar18 = 0;
  }
  else {
    uVar18 = FUN_05da1d1c(unaff_x19 + 0x310,0);
    uVar18 = uVar18 & 1;
  }
  if (lVar30 == 0) goto LAB_05dc8b54;
  if (*(char *)(lVar30 + 0x10) == '\0') {
    uStack000000000000003c = 0;
  }
  else {
    uStack000000000000003c = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  if (uVar18 == 0) {
    cVar45 = '\0';
  }
  else {
    cVar45 = *(char *)(lVar27 + 0x192);
  }
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uVar19 = 0;
  }
  else {
    uVar19 = FUN_05da1d1c(unaff_x19 + 0x310,0);
  }
  uVar34 = FUN_05d6d2bc(lVar27,0);
  if ((uVar34 & 1) == 0) {
    uStack0000000000000044 = FUN_05d6d2cc(lVar27,0);
  }
  else {
    uStack0000000000000044 = 1;
  }
  if ((*(char *)(lVar27 + 400) == '\0') && ((uVar32 & 1) == 0)) {
    cVar46 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar46 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05dc8b54;
  uVar20 = Unity_XR_CoreUtils_OnDestroyNotifier__set_Destroyed
                     (*(long *)(unaff_x19 + 0x168),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05dc8b54;
  uVar21 = FUN_05deb620(*(long *)(unaff_x19 + 0x170),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05dc8b54;
  bVar10 = cVar45 != '\0';
  uVar22 = FUN_05d9fa88(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar46 == '\0' && !bVar10) {
    cVar46 = '\0';
    uVar23 = 0;
  }
  else {
    iVar25 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar23 = FUN_05dc5e98(lVar27);
    uVar23 = (uint)(iVar25 == 2) | uVar23 ^ 1;
  }
  uVar23 = (uint)(byte)(bVar13 | auVar56[1]) | uVar14 | uVar23 | uStack0000000000000044;
  if ((uVar17 & uVar23 & 1) != 0) {
    uVar23 = bVar13 & 1;
  }
  cVar6 = *(char *)(unaff_x19 + 0x140);
  if (cVar46 == '\0') {
    if (((uint)(cVar45 == '\0') & (uStack0000000000000044 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
      bVar7 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    lVar26 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar26 == 0) goto LAB_05dc8b54;
    iVar25 = auVar56._12_4_ + -1;
    iVar40 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar40 = 300;
    }
    if (499 < iVar25) {
      iVar25 = 500;
    }
    if ((uVar32 & 1) != 0) {
      iVar40 = iVar25;
    }
    *(int *)(lVar26 + 0x10) = iVar40;
    if (iVar40 < 500) {
      *(undefined1 *)(lVar26 + 0xd8) = 0;
      bVar7 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar7 = true;
    }
  }
  uVar38 = (uint)(cVar6 != '\0');
  uVar48 = uVar23 | uVar38;
  uVar24 = FUN_05dc8f3c();
  if ((uVar17 & 1) == 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = (uint)((bVar13 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
                (*(char *)(lVar27 + 0x1e0) != '\x01' ||
                ((uint)(bVar7 || bVar10) & (uVar48 ^ 1)) != 0));
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar16 = (uVar16 | (uint)uVar33 | uVar24) & (uVar14 ^ 1);
  uVar34 = FUN_05c35d3c(*(long *)(lVar27 + 0x1a0),0);
  uVar24 = uVar16 | uVar3;
  iVar25 = FUN_060fb038(0);
  puVar9 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  if (iVar25 == 0x15) {
    uVar41 = uVar24;
    if ((uVar34 & 1) == 0) {
      uVar41 = uVar16;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_05dc6e90;
  }
  else {
LAB_05dc6e90:
    uVar41 = uVar24;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ +
              0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05c9d5cc(&stack0x000003c0,0);
  if ((float)in_stack_000003e0 == 1.0) {
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c9d5cc(&stack0x000003c0,0);
    if ((float)((ulong)in_stack_000003e0 >> 0x20) != 1.0) goto LAB_05dc6ef4;
  }
  else {
LAB_05dc6ef4:
    uVar41 = uVar24;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar41 = uVar3 | uVar41;
  }
  uVar34 = FUN_060fb088(0);
  uVar16 = uVar3 | uVar41;
  uVar24 = uVar16;
  if ((uVar34 & 1) == 0) {
    uVar24 = uVar41;
  }
  FUN_060d7044(&stack0x00000930,0,0);
  FUN_060d7060(&stack0x00000930,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
  FUN_05e05f18(*(long *)(unaff_x19 + 0x228),&stack0x00000610,1,0);
  if (*(int *)(lVar27 + 0xe8) != 0) {
    if (*(long *)(lVar27 + 0x230) != 0) {
      FUN_0335764c(*(long *)(lVar27 + 0x230),&stack0x00000858,
                   *(undefined8 *)Method_System_Net_Sockets_NetworkStream_get_Length__);
    }
    goto LAB_05dc8b54;
  }
  if (lVar47 == 0) goto LAB_05dc8b54;
  iVar25 = thunk_FUN_060a6b50(lVar47,0);
  puVar8 = PTR_DAT_067c97a8;
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x000003c0,2,0);
  if ((*(long *)(lVar27 + 0x1a0) == 0) ||
     ((uVar34 = FUN_05c35d3c(*(long *)(lVar27 + 0x1a0),0), (uVar34 & 1) != 0 &&
      (*(long *)(lVar27 + 0x1a0) == 0)))) goto LAB_05dc8b54;
  uVar2 = uVar16 & iVar25 != 1;
  puVar37 = (undefined8 *)(unaff_x19 + 600);
  if (*(long *)(unaff_x19 + 600) == 0) {
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar28 = FUN_05c9cb6c(&stack0x000005e0,0);
    *puVar37 = uVar28;
  }
  else {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar34 = FUN_0610d678(&stack0x000005b0,&stack0x00000580,0);
    if ((uVar34 & 1) != 0) {
      FUN_05c9cc0c(puVar37,&stack0x00000550,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x260) == 0) {
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar28 = FUN_05c9cb6c(&stack0x00000520,0);
    *(undefined8 *)(unaff_x19 + 0x260) = uVar28;
  }
  else {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar34 = FUN_0610d678(&stack0x000004f0,&stack0x000004c0,0);
    if ((uVar34 & 1) != 0) {
      FUN_05c9cc0c((undefined8 *)(unaff_x19 + 0x260),&stack0x00000490,0);
    }
  }
  if (uVar2 != 0) {
    FUN_05dc9134();
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05dc8b54;
  bVar13 = (byte)uVar2 ^ 1;
  *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar13;
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar13;
  if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05dc8b54;
  *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar13;
  if ((uVar24 & 1) == 0) {
    uVar28 = *puVar37;
  }
  else {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar28 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
  }
  lVar26 = 0x248;
  if (uVar3 == 0 && (uVar41 & 1) == 0) {
    lVar26 = 0x260;
  }
  *(undefined8 *)(unaff_x19 + 0x230) = uVar28;
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar26);
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05dc8b54;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar14 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05dc8b54;
    uVar28 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x19 + 0x228),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar28;
  }
  cVar45 = *(char *)(lVar27 + 0x191);
  FUN_05d61b54();
  iVar25 = FUN_060fb038(0);
  if (iVar25 == 2) {
    FUN_05c9ac9c(&stack0x000003c0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_05c9ac9c(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar31 == 0) goto LAB_05dc8b54;
    FUN_0611ee5c(lVar31,&stack0x00000460,&stack0x00000430,0);
  }
  puVar9 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  lVar30 = *(long *)(unaff_x19 + 0x108);
  lVar26 = *(long *)
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
  ;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar26 = *(long *)puVar9;
  }
  puVar37 = *(undefined8 **)(lVar26 + 0xb8);
  lVar42 = puVar37[1];
  if (lVar42 == 0) {
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar37 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                 + 0xb8);
    }
    uVar28 = *puVar37;
    lVar42 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                               );
    FUN_03f6705c(lVar42,uVar28,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<InvokeOnRenderObjectCallbackPass_PassData>__
                 ,0);
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                       + 0xb8) + 8) = lVar42;
  }
  if (lVar30 == 0) goto LAB_05dc8b54;
  lVar26 = FUN_03abff58(lVar30,lVar42,
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                       );
  if ((uVar20 & 1) != 0) {
    FUN_05d6624c();
  }
  if ((uVar21 & 1) != 0) {
    FUN_05d6624c();
  }
  uStack0000000000000060 = (uint)(byte)(cVar45 != '\0' | auVar56[3]) & (uVar14 ^ 1);
  if ((uVar23 & 1) == 0 && uVar38 == 0) {
    if (*(char *)(lVar27 + 400) == '\0' && !bVar10) {
      bVar13 = auVar56[0] & 1;
    }
    else {
      bVar13 = 1;
    }
  }
  else {
    bVar13 = 0;
  }
  lVar30 = *(long *)(unaff_x19 + 0xe8);
  uVar16 = uVar16 & bVar13 != 0;
  if (lVar30 != 0) {
    uVar20 = FUN_05d6d2cc(lVar27,0);
    uVar34 = FUN_05d43fe0(lVar30,uVar20 & 1,0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      FUN_05d44008(*(long *)(unaff_x19 + 0xe8),&stack0x00000854,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
      uVar34 = FUN_05d439c4(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar34 & 1) == 0) && ((uStack0000000000000044 & 1) == 0)) {
        uVar16 = 0;
        uVar48 = 0;
        uVar19 = 0;
        uStack0000000000000060 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05dc8b54;
        bVar13 = FUN_05d43b0c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar13 & 1;
      }
    }
  }
  if (*(long *)(lVar27 + 0x1d8) == 0) goto LAB_05dc8b54;
  *(undefined1 *)(*(long *)(lVar27 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar25 = auVar56._8_4_;
  if ((uVar17 & 1) == 0) {
    bVar13 = 0;
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar25 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar30,0);
    }
    bVar13 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar13 != 0 || ((uVar48 & 1) != 0 || uVar16 != 0)) {
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
    lVar30 = *(long *)(unaff_x19 + 0x268);
    if ((lVar30 == 0) || (lVar31 == 0)) goto LAB_05dc8b54;
    FUN_0611f5d0(lVar31,*(undefined8 *)(lVar30 + 0x58),&stack0x00000400,0);
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06129b08(&stack0x000009c8,lVar31,0);
    FUN_06113868(lVar31,0);
  }
  if ((uVar17 & 1) == 0) {
    if ((bVar12 & 1) != 0) {
LAB_05dc7784:
      bVar10 = false;
      plVar43 = (long *)(unaff_x19 + 0x278);
      puVar37 = (undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
      ;
LAB_05dc7794:
      uVar28 = *puVar37;
      if (bVar10) {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05dc8b54;
        uVar15 = FUN_05de36ec(lVar30,0);
        uVar15 = FUN_05de37f8(lVar30,uVar15,0);
        FUN_060d69f4(&stack0x000007e0,uVar15,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05dc8b54;
        uVar15 = FUN_05de36ec(lVar30,0);
        FUN_05de52dc(lVar30,&stack0x00000380,uVar15,0);
      }
      else {
        uVar15 = FUN_05daad04(0,0);
        FUN_060d69f4(&stack0x000007e0,uVar15,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar43,&stack0x000007e0,0,1,1,uVar28,0);
      }
      if ((*plVar43 == 0) || (lVar31 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(lVar31,*(undefined8 *)(*plVar43 + 0x58),&stack0x00000350,0);
      puVar9 = Method_System_DateTimeOffset_ValidateStyles__;
      if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc38b4 == '\0') {
        FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
        DAT_06bc38b4 = '\x01';
      }
      lVar30 = *(long *)puVar9;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar30 = *(long *)puVar9;
      }
      lVar30 = **(long **)(lVar30 + 0xb8);
      if (lVar30 == 0) goto LAB_05dc8b54;
      *(long *)(lVar30 + 0x10) = lVar31;
      FUN_05daac20(lVar30,0,0);
      if ((uVar17 & 1) != 0) {
        if (*plVar43 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(lVar31,*(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlareScreenSpacePassData>__
                     ,&stack0x00000320,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,lVar31,0);
      FUN_06113868(lVar31,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
    bVar13 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar12 | bVar13) & 1) != 0) {
      if ((bVar13 & 1) == 0) goto LAB_05dc7784;
      lVar30 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar30 == 0) goto LAB_05dc8b54;
      lVar42 = *(long *)(lVar30 + 0x30);
      uVar20 = FUN_05de36ec(lVar30,0);
      if (lVar42 == 0) goto LAB_05dc8b54;
      if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_05dc8b64;
      plVar43 = (long *)(lVar42 + (long)(int)uVar20 * 8 + 0x20);
      if (*plVar43 == 0) goto LAB_05dc8b54;
      bVar10 = true;
      puVar37 = (undefined8 *)(*plVar43 + 0x58);
      goto LAB_05dc7794;
    }
  }
  puVar9 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
  ;
  if ((uVar48 & 1) != 0) {
    if ((uVar32 & 0x10000) == 0) {
      if ((uVar17 & 1) != 0) goto LAB_05dc7e18;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05dc8b54;
      FUN_05dfae8c(*(long *)(unaff_x19 + 0x148),&stack0x00000240,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar30 = *(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
      ;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar30 = *(long *)puVar9;
        if ((uVar17 & 1) != 0) goto LAB_05dc7a2c;
LAB_05dc7a70:
        plVar43 = (long *)(unaff_x19 + 0x270);
        puVar37 = (undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x18);
      }
      else {
        if ((uVar17 & 1) == 0) goto LAB_05dc7a70;
LAB_05dc7a2c:
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05dc8b54;
        lVar42 = *(long *)(lVar30 + 0x30);
        uVar20 = FUN_05de36c8(lVar30,0);
        if (lVar42 == 0) goto LAB_05dc8b54;
        if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_05dc8b64;
        plVar43 = (long *)(lVar42 + (long)(int)uVar20 * 8 + 0x20);
        if (*plVar43 == 0) goto LAB_05dc8b54;
        puVar37 = (undefined8 *)(*plVar43 + 0x58);
      }
      uVar28 = *puVar37;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar15 = FUN_05df956c(0);
        FUN_060d69f4(&stack0x000007a0,uVar15,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,plVar43,&stack0x000007a0,0,1,1,uVar28,0);
      }
      else {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05dc8b54;
        uVar15 = FUN_05de36c8(lVar30,0);
        uVar15 = FUN_05de37f8(lVar30,uVar15,0);
        FUN_060d69f4(&stack0x000007a0,uVar15,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05dc8b54;
        uVar15 = FUN_05de36c8(lVar30,0);
        FUN_05de52dc(lVar30,&stack0x000002e0,uVar15,0);
      }
      if ((*plVar43 == 0) || (lVar31 == 0)) goto LAB_05dc8b54;
      FUN_0611f5d0(lVar31,*(undefined8 *)(*plVar43 + 0x58),&stack0x000002b0,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*plVar43 == 0) goto LAB_05dc8b54;
        FUN_0611f5d0(lVar31,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18),
                     &stack0x00000280,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06129b08(&stack0x000009c8,lVar31,0);
      FUN_06113868(lVar31,0);
      if ((uVar17 & 1) == 0) {
        lVar30 = *(long *)(unaff_x19 + 0x150);
        if (bVar11) {
          if (lVar30 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar30 == 0) goto LAB_05dc8b54;
          FUN_05df95b4(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar20 = FUN_05de36c8(*(long *)(unaff_x19 + 0x2a0),0);
        if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05dc8b54;
        uVar34 = FUN_05de371c(*(long *)(unaff_x19 + 0x2a0),0);
        lVar42 = *(long *)(unaff_x19 + 0x150);
        uVar28 = *(undefined8 *)(unaff_x19 + 0x240);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if ((uVar34 & 1) == 0) {
          if (bVar11) {
            if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_05dc8b64;
            if (lVar42 == 0) goto LAB_05dc8b54;
            FUN_05df95c0(lVar42,uVar28,*(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x278),0);
          }
          else {
            if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0))
            goto LAB_05dc8b54;
            if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_05dc8b64;
            if (lVar42 == 0) goto LAB_05dc8b54;
            FUN_05df95b4(lVar42,uVar28,*(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20),0);
          }
        }
        else {
          if ((lVar30 == 0) || (lVar39 = *(long *)(lVar30 + 0x30), lVar39 == 0)) goto LAB_05dc8b54;
          if (*(uint *)(lVar39 + 0x18) <= uVar20) {
LAB_05dc8b64:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar29 = *(undefined8 *)(lVar39 + (long)(int)uVar20 * 8 + 0x20);
          uVar20 = FUN_05de36ec(lVar30,0);
          if (*(uint *)(lVar39 + 0x18) <= uVar20) goto LAB_05dc8b64;
          if (lVar42 == 0) goto LAB_05dc8b54;
          FUN_05df95c0(lVar42,uVar28,uVar29,*(undefined8 *)(lVar39 + (long)(int)uVar20 * 8 + 0x20),0
                      );
        }
        if (0xffffffe0 < iVar25 - 0xfbU) {
          lVar30 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar30 == 0) goto LAB_05dc8b54;
          *(undefined8 *)(lVar30 + 0xb8) =
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
    FUN_05daf224(0,unaff_x19 + 0x330,&stack0x00000760,0,1,0,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScriptableRenderer_PassData>__
                 ,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05dc8b54;
    FUN_05df3e38(*(long *)(unaff_x19 + 0x310),&stack0x00000750,0);
    FUN_05d6624c();
  }
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05dc8b54;
  uVar34 = FUN_05c3a444(*(long *)(lVar27 + 0x1a0),0);
  if ((uVar34 & 1) != 0) {
    FUN_05d6624c();
  }
  cVar45 = *(char *)(lVar27 + 0x1e0);
  iVar40 = (int)uVar49;
  if ((uVar17 & 1) == 0) {
    uVar15 = 2;
    if ((uStack0000000000000060 & 1) == 0) {
      uVar15 = 0;
    }
    uVar5 = 0;
    if (1 < iVar40) {
      uVar5 = uVar15;
    }
    iVar25 = 0;
    if ((uVar16 == 0 && (uStack0000000000000060 & 1) == 0) && cVar45 != '\0') {
      iVar25 = 3;
    }
    if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05dc8b54;
    uVar34 = FUN_05c35d3c(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05dc8b54;
      if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) != '\0') {
        iVar25 = 0;
      }
    }
    uVar19 = 0;
    if (1 < iVar40) {
      uVar19 = uVar16;
    }
    if (uVar19 == 1) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar34 = FUN_05dadd80(0);
      if ((uVar34 & 1) != 0) {
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
    lVar30 = *(long *)(unaff_x19 + 0x198);
    if (lVar30 == 0) goto LAB_05dc8b54;
    FUN_05d5a490(lVar30,uVar5,0,0);
    FUN_05d5a5c8(lVar30,iVar25,0);
    puVar9 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    lVar39 = *(long *)(unaff_x19 + 0x108);
    lVar42 = *(long *)
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
    ;
    if (*(int *)(lVar42 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar42 = *(long *)puVar9;
    }
    puVar37 = *(undefined8 **)(lVar42 + 0xb8);
    lVar44 = puVar37[2];
    if (lVar44 == 0) {
      if (*(int *)(lVar42 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar37 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                   + 0xb8);
      }
      uVar28 = *puVar37;
      lVar44 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<HDRDebugViewPass_PassDataCIExy>__
                                 );
      FUN_03f6705c(lVar44,uVar28,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_BloomPassData>__
                   ,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_LensFlarePassData>__
                         + 0xb8) + 0x10) = lVar44;
    }
    if (lVar39 == 0) goto LAB_05dc8b54;
    lVar42 = FUN_03abff58(lVar39,lVar44,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ForwardLights_SetupLightPassData>__
                         );
    if ((lVar42 == 0) && (*(int *)(lVar27 + 0xe8) == 0)) {
      if (lVar47 == 0) goto LAB_05dc8b54;
      iVar25 = FUN_060a4b6c(lVar47,0);
      if (iVar25 == 4) goto LAB_05dc8198;
      uVar15 = 1;
    }
    else {
LAB_05dc8198:
      uVar15 = 0;
    }
    uVar34 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar34 & 1) != 0) {
      FUN_05d5aa50(0,0,0,0x3f800000,lVar30,uVar15,0);
    }
    FUN_05d6624c();
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_05dc8b54;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar25 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_05de4f84(lVar30,0);
    }
    FUN_05dc973c();
  }
  if (lVar47 == 0) goto LAB_05dc8b54;
  iVar25 = FUN_060a4b6c(lVar47,0);
  if ((iVar25 == 1) && (*(int *)(lVar27 + 0xe8) != 1)) {
    uVar28 = FUN_060bc2e8(0);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar34 = FUN_060f078c(uVar28,0,0);
    if ((uVar34 & 1) == 0) {
      uVar34 = FUN_0335764c(lVar47,&stack0x00000748,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DrawScreenSpaceUIPass_UnsafePassData>__
                           );
      if ((uVar34 & 1) != 0) goto LAB_05dc8b54;
    }
    else {
      FUN_05d6624c();
    }
  }
  if (uVar16 == 0) {
    if (*(int *)(lVar27 + 0xe8) == 0 && (uVar48 & 1) == 0) {
      uVar34 = FUN_060fb560(0);
      uVar28 = *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnPointerMoved__;
      if ((uVar34 & 1) == 0) {
        uVar29 = FUN_060cd288(0);
      }
      else {
        uVar29 = FUN_060cd310(0);
      }
      FUN_060bd734(uVar28,uVar29,0);
    }
  }
  else if ((((uVar17 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar32 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    FUN_05df72fc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05d6624c();
  }
  if ((uStack0000000000000060 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar30 = FUN_05dd59d4(0);
    if (lVar30 == 0) goto LAB_05dc8b54;
    uVar15 = *(undefined4 *)(lVar30 + 0x48);
    FUN_05df6060(uVar15,&stack0x00000710,&stack0x0000070c,0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,unaff_x19 + 0x280,&stack0x00000710,0,1,1,
                 *(undefined8 *)Method_Unity_AppUI_UI_Panel_OnScaleContextChanged__,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05dc8b54;
    FUN_05df6100(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar15,0);
    FUN_05d6624c();
  }
  if ((uVar32 & 0x100000000) != 0) {
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
    FUN_05d7fa08(lVar31,lVar27,0);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05dc8b54;
    FUN_05d7e4a8(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05d6624c();
  }
  if ((uVar22 & 1) != 0) {
    FUN_05d6624c();
  }
  uVar17 = 0;
  if (cVar45 != '\0') {
    uVar17 = 3;
  }
  uVar19 = (uint)(cVar45 == '\0');
  if (iVar40 < 2) {
    uVar19 = 1;
  }
  if (uVar16 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05dc8b54;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar17 = 0, 1 < iVar40)) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar17 = FUN_05dadd80(0);
      uVar17 = uVar17 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a490(*(long *)(unaff_x19 + 0x1c8),((uVar19 | uVar14) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05dc8b54;
  FUN_05d5a5c8(*(long *)(unaff_x19 + 0x1c8),uVar17,0);
  FUN_05d6624c();
  FUN_05d6624c();
  FUN_05dc9894();
  uVar32 = FUN_05d6d5d0(lVar27,0);
  uVar34 = FUN_05d6d398(lVar27,0);
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) != 0)) {
    lVar30 = *(long *)(unaff_x19 + 0x200);
    uVar15 = FUN_05dc418c();
    if (lVar30 == 0) goto LAB_05dc8b54;
    FUN_05d78f68(lVar30,lVar27,uVar15,0);
    FUN_05d6624c();
  }
  bVar11 = cVar45 == '\0';
  bVar10 = *(long *)(lVar27 + 0x1b0) != 0;
  if ((bVar11 || ((uStack000000000000003c ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(lVar27 + 0x1cc) != 1 &&
       ((*(int *)(lVar27 + 0x170) != 1 || (*(int *)(lVar27 + 0x174) == 0)))) &&
      ((uVar35 = FUN_05d6d958(lVar27,0), (uVar35 & 1) == 0 || (*(float *)(lVar27 + 0x224) <= 0.0))))
     )) {
    bVar12 = 0;
joined_r0x05dc8718:
    if (!bVar10 || bVar11) goto LAB_05dc871c;
LAB_05dc8740:
    bVar13 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
      bVar12 = 1;
      goto joined_r0x05dc8718;
    }
    bVar12 = FUN_05d439a8(*(long *)(unaff_x19 + 0xe8),0);
    if (bVar10 && !bVar11) goto LAB_05dc8740;
LAB_05dc871c:
    bVar13 = lVar26 == 0 & (bVar12 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar14 = 1;
  }
  else {
    uVar14 = FUN_05d43a98(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
    uVar14 = uVar14 ^ 1;
  }
  plVar43 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (uVar18 == 0) {
    if (cVar45 == '\0') {
      return;
    }
    FUN_05dc589c();
  }
  else {
    uVar15 = FUN_060d65a4(&stack0x00000980,0);
    if (*(int *)(*(long *)Method_System_IO_Path_InsecureGetFullPath__ + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Method_System_IO_Path_InsecureGetFullPath__);
    }
    in_stack_00000180 = uVar36;
    in_stack_00000188 = uVar49;
    in_stack_00000190 = uVar50;
    in_stack_00000198 = uVar52;
    in_stack_000001a0 = uVar54;
    in_stack_000001a8 = uVar55;
    in_stack_000001b0 = uVar4;
    FUN_05d835c8(&stack0x000001c0,&stack0x00000180,uVar36 & 0xffffffff,(int)(uVar36 >> 0x20),uVar15,
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
      FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar43,0,plVar1,&stack0x00000750,
                   unaff_x19 + 0x288,0);
      goto LAB_05dc692c;
    }
    FUN_05dc589c();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05dc8b54;
    FUN_05d80c30(*(long *)(unaff_x19 + 0x318),&stack0x00000980,plVar43,bVar13,plVar1,
                 &stack0x00000750,unaff_x19 + 0x288,bVar12 & 1);
    FUN_05d6624c();
  }
  lVar30 = *plVar43;
  if ((bVar12 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05dc8b54;
    FUN_05d80d50(*(long *)(unaff_x19 + 800),&stack0x00000648,1,uVar14 & 1,0);
    FUN_05d6624c();
  }
  if (*(long *)(lVar27 + 0x1b0) != 0) {
    FUN_05d6624c();
  }
  if (((bVar12 & 1) == 0) && (((uVar18 == 0 || (lVar26 != 0)) || (bVar10 && !bVar11)))) {
    lVar26 = *plVar43;
    if (lVar26 == 0) goto LAB_05dc8b54;
    uVar33 = *(undefined8 *)(lVar26 + 0x30);
    uVar29 = *(undefined8 *)(lVar26 + 0x28);
    uVar53 = *(undefined8 *)(lVar26 + 0x40);
    uVar51 = *(undefined8 *)(lVar26 + 0x38);
    uVar28 = *(undefined8 *)(lVar26 + 0x48);
    lVar26 = *(long *)(unaff_x19 + 600);
    if (lVar26 == 0) goto LAB_05dc8b54;
    in_stack_000001c8 = *(undefined8 *)(lVar26 + 0x30);
    in_stack_000001c0 = *(undefined8 *)(lVar26 + 0x28);
    in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x40);
    in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x38);
    in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000128 = in_stack_000001c8;
    in_stack_00000120 = in_stack_000001c0;
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar29;
    in_stack_00000158 = uVar33;
    in_stack_00000160 = uVar51;
    in_stack_00000168 = uVar53;
    in_stack_00000170 = uVar28;
    uVar35 = FUN_0610d5f4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar35 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05dc8b54;
      in_stack_000000e0 = uVar36;
      in_stack_000000e8 = uVar49;
      in_stack_000000f0 = uVar50;
      in_stack_000000f8 = uVar52;
      in_stack_00000100 = uVar54;
      in_stack_00000108 = uVar55;
      in_stack_00000110 = uVar4;
      FUN_05dff16c(*(long *)(unaff_x19 + 0x1d8),&stack0x000000e0,lVar30,0);
      FUN_05d6624c();
    }
  }
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) == 0 && *(char *)(lVar27 + 0x238) != '\0')) {
    FUN_05d6624c();
  }
  if (*(long *)(lVar27 + 0x1a0) != 0) {
    uVar36 = FUN_05c35d3c(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar36 & 1) == 0) {
      return;
    }
    lVar26 = *plVar1;
    if (lVar26 != 0) {
      uVar49 = *(undefined8 *)(lVar26 + 0x30);
      uVar29 = *(undefined8 *)(lVar26 + 0x28);
      uVar52 = *(undefined8 *)(lVar26 + 0x40);
      uVar50 = *(undefined8 *)(lVar26 + 0x38);
      uVar28 = *(undefined8 *)(lVar26 + 0x48);
      lVar26 = *(long *)(lVar27 + 0x1a0);
      if (lVar26 != 0) {
        in_stack_000001c8 = *(undefined8 *)(lVar26 + 0x48);
        in_stack_000001c0 = *(undefined8 *)(lVar26 + 0x40);
        in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x58);
        in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x50);
        in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000088 = in_stack_000001c8;
        in_stack_00000080 = in_stack_000001c0;
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar29;
        in_stack_000000b8 = uVar49;
        in_stack_000000c0 = uVar50;
        in_stack_000000c8 = uVar52;
        in_stack_000000d0 = uVar28;
        uVar36 = FUN_0610d5f4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar36 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar27 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) == '\0') {
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


