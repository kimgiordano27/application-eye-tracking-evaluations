/*
FUNCTION_NAME: FUN_05b6933c
ENTRY_POINT: 05b6933c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_05b6933c(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar27;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar9 = UnityEngine_XR_ARSubsystems_XRCpuImage_Plane_TypeInfo;
  uVar16 = (undefined4)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  if ((DAT_06b81c62 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                );
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_get_Current__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<InstanceType>_MoveNext__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_Dispose__
                );
                    /* try { // try from 05b69464 to 05c695a7 has its CatchHandler @ 05b69464
                       catch() { ... } // from try @ 05b69464 with catch @ 05b69464
                       catch() { ... } // from try @ 05b696d8 with catch @ 05b69464
                       catch() { ... } // from try @ 05b69770 with catch @ 05b69464
                       catch() { ... } // from try @ 05b69778 with catch @ 05b69464
                       catch() { ... } // from try @ 05b69838 with catch @ 05b69464 */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_MoveNext__
                );
    FUN_02d6084c(PTR_DAT_06761808);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<IRuntimePanelComponent>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_get_Current__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<EasingFunction>_Dispose__);
    FUN_02d6084c(PTR_DAT_06769e90);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<DebugUIHandlerValue>_MoveNext__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<Texture,_DynamicAtlas_TextureInfo>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<Controller>_get_Current__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray_Enumerator<XRLoadAnchorResult>_get_Current__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRCpuImage_Plane_TypeInfo);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_MoveNext__
                );
    FUN_02d6084c(PTR_DAT_06769158);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<TransitionData>_MoveNext__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_Dispose__
                );
    FUN_02d6084c(Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_AssetEntry>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__);
    DAT_06b81c62 = 1;
  }
  puVar8 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar9 = Method_System_Collections_Generic_List_Enumerator<Controller>_get_Current__;
  uVar14 = FUN_05a5103c(0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar8);
  }
  puVar8 = Method_System_Collections_Generic_List_Enumerator<EasingFunction>_Dispose__;
  uVar17 = FUN_05a56214(uVar14,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar17;
  thunk_FUN_02dd37b4(param_1 + 0x348);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar7 = PTR_DAT_06761808;
  FUN_05b056e0(param_1,param_2,0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_Dispose__;
  FUN_05b87efc(0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar18 = FUN_033f7d70(&local_68,*(undefined8 *)puVar6);
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_Dispose__;
  if ((uVar18 & 1) != 0) {
    uVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_Dispose__
                               );
    FUN_04d66d6c(uVar17,0,*(undefined8 *)puVar6,0);
    if (local_68 == 0) goto LAB_05b6a664;
    uVar23 = *(undefined8 *)(local_68 + 0x10);
    uVar21 = *(undefined8 *)(local_68 + 0x18);
    if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_059e5c70(uVar17,uVar23,uVar21,0);
    if (local_68 == 0) goto LAB_05b6a664;
    uVar23 = *(undefined8 *)(local_68 + 0x20);
    uVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<TransitionData>_MoveNext__
                               );
    FUN_05b477d8(uVar17,0x96,uVar23,0);
    *(undefined8 *)(param_1 + 0x1f8) = uVar17;
    thunk_FUN_02dd37b4(param_1 + 0x1f8,uVar17);
  }
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar18 = FUN_033f7d70(&local_70,*(undefined8 *)puVar6);
  if ((uVar18 & 1) != 0) {
    if (local_70 == 0) goto LAB_05b6a664;
    uVar17 = *(undefined8 *)(local_70 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar17 = FUN_05a55cc4(uVar17,0);
    *(undefined8 *)(param_1 + 0x2d8) = uVar17;
    thunk_FUN_02dd37b4(param_1 + 0x2d8);
    if (local_70 == 0) goto LAB_05b6a664;
    uVar17 = FUN_05a55cc4(*(undefined8 *)(local_70 + 0x20),0);
    *(undefined8 *)(param_1 + 0x2e0) = uVar17;
    thunk_FUN_02dd37b4(param_1 + 0x2e0);
    if (local_70 == 0) goto LAB_05b6a664;
    uVar17 = FUN_05a55cc4(*(undefined8 *)(local_70 + 0x38),0);
    *(undefined8 *)(param_1 + 0x2e8) = uVar17;
    thunk_FUN_02dd37b4(param_1 + 0x2e8);
  }
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_MoveNext__;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar18 = FUN_033f7d70(&local_78,*(undefined8 *)puVar6);
  if ((uVar18 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    if (local_78 == 0) goto LAB_05b6a664;
    uVar17 = *(undefined8 *)(local_78 + 0x18);
    uVar23 = *(undefined8 *)(local_78 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar23 = FUN_05a55cc4(uVar23,0);
    *(undefined8 *)(param_1 + 0x2f0) = uVar23;
    thunk_FUN_02dd37b4(param_1 + 0x2f0);
    if (local_78 == 0) goto LAB_05b6a664;
    uVar23 = FUN_05a55cc4(*(undefined8 *)(local_78 + 0x20),0);
    *(undefined8 *)(param_1 + 0x2f8) = uVar23;
    thunk_FUN_02dd37b4(param_1 + 0x2f8);
  }
  if (param_2 != 0) {
    lVar24 = *(long *)(param_2 + 0x68);
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x2b5);
    auVar26 = FUN_060a2bbc(0);
    *pauVar1 = auVar26;
    puVar7 = PTR_DAT_06769158;
    if (lVar24 != 0) {
      FUN_060a7280(pauVar1,*(undefined1 *)(lVar24 + 0x10),0);
      FUN_060a730c(pauVar1,*(undefined4 *)(lVar24 + 0x18),0);
      FUN_060a7328(pauVar1,*(undefined4 *)(lVar24 + 0x1c),0);
      FUN_060a7344(pauVar1,*(undefined4 *)(lVar24 + 0x20),0);
      FUN_060a7360(pauVar1,*(undefined4 *)(lVar24 + 0x24),0);
      *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x8c);
      *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x60);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      puVar6 = PTR_DAT_0675e1b8;
      lVar19 = FUN_05b6a66c();
      if ((lVar19 != 0) && (*(char *)(lVar19 + 0xf7) != '\0')) {
        FUN_05b17e2c(&local_110,0);
        uStack_98 = uStack_108;
        local_a0 = local_110;
        local_90 = local_100;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar19 = FUN_05b6a66c();
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar6);
        }
        uVar18 = FUN_0606f530(lVar19,0);
        if ((uVar18 & 1) != 0) {
          if (lVar19 == 0) goto LAB_05b6a664;
          uVar14 = FUN_05ada4ac(lVar19,0);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar14);
          local_a0 = FUN_05ada6d8(lVar19,0);
        }
        uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<IRuntimePanelComponent>_Dispose__
                                   );
        FUN_05b1521c(uVar23,&local_a0,0);
        *(undefined8 *)(param_1 + 0x2c8) = uVar23;
        thunk_FUN_02dd37b4(param_1 + 0x2c8,uVar23);
      }
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      *(undefined2 *)(param_1 + 0x141) = 0x101;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b819f9 == '\0') {
        FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<EasingFunction>_Dispose__);
        DAT_06b819f9 = '\x01';
      }
      puVar10 = 
      Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_get_Current__
      ;
      puVar6 = 
      Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_get_Current__;
      puVar7 = Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__;
      puVar9 = Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__;
      lVar19 = *(long *)puVar8;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *(long *)puVar8;
      }
      puVar8 = 
      Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_Dispose__
      ;
      local_88 = *(undefined8 *)(param_1 + 0x2c8);
      *(byte *)(param_1 + 0x142) = *(byte *)(*(long *)(lVar19 + 0xb8) + 8) ^ 1;
      thunk_FUN_02dd37b4(&local_88);
      uVar23 = local_88;
      bVar12 = *(int *)(param_2 + 0x74) == 2;
      local_80 = CONCAT71(local_80._1_7_,bVar12);
      uVar21 = local_80;
      *(bool *)(param_1 + 0x143) = bVar12;
      uVar20 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
      FUN_05b9473c(uVar20,uVar23,uVar21,0);
      *(undefined8 *)(param_1 + 0x290) = uVar20;
      thunk_FUN_02dd37b4(param_1 + 0x290,uVar20);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x74);
      *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x7c);
      uVar14 = FUN_05b10074(param_2,0);
      *(undefined4 *)(param_1 + 0x2ac) = uVar14;
      uVar14 = FUN_05b101cc(param_2,0);
      *(undefined4 *)(param_1 + 0x2b0) = uVar14;
      uVar4 = *(undefined1 *)(param_2 + 0x40);
      *(undefined1 *)(param_1 + 0x2b4) = 0;
      *(undefined1 *)(param_1 + 0x134) = uVar4;
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
      FUN_05ba8070(uVar23,0x32,0);
      *(undefined8 *)(param_1 + 0x168) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x168,uVar23);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
      FUN_05b8fce8(uVar23,0x32,0);
      *(undefined8 *)(param_1 + 0x170) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x170,uVar23);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
      FUN_05b490d8(uVar23,0xfa,0);
      *(undefined8 *)(param_1 + 0x1e8) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1e8,uVar23);
      puVar9 = 
      Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
      ;
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                                 );
      FUN_05b9c03c(uVar23,0x3ea,uVar17,0,0,0,0,0);
      *(undefined8 *)(param_1 + 0x1f0) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1f0,uVar23);
      if (*(int *)(*(long *)PTR_DAT_06769e90 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar23 = FUN_060a291c(0);
      uVar14 = *(undefined4 *)(param_2 + 0x5c);
      uVar21 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
      FUN_05b9fbe0(uVar21,0x96,uVar23,uVar14,0);
      *(undefined8 *)(param_1 + 0x148) = uVar21;
      thunk_FUN_02dd37b4(param_1 + 0x148,uVar21);
      uVar23 = FUN_060a291c(0);
      uVar14 = *(undefined4 *)(param_2 + 0x5c);
      uVar21 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
                                 );
      FUN_05b9e354(uVar21,0x96,uVar23,uVar14,0);
      *(undefined8 *)(param_1 + 0x150) = uVar21;
      thunk_FUN_02dd37b4(param_1 + 0x150,uVar21);
      uVar15 = *(uint *)(param_1 + 0x2a0);
      if ((uVar15 | 2) == 2) {
        uVar23 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
        FUN_05b9c03c(uVar23,200,uVar17,1,1,0,0,0);
        *(undefined8 *)(param_1 + 0x158) = uVar23;
        thunk_FUN_02dd37b4(param_1 + 0x158,uVar23);
        uVar15 = *(uint *)(param_1 + 0x2a0);
      }
      if (uVar15 == 1) {
        local_a8 = 0;
        local_b0 = *(undefined8 *)(param_1 + 0x2f0);
        thunk_FUN_02dd37b4(&local_b0);
        local_a8 = *(undefined8 *)(param_1 + 0x2c8);
        thunk_FUN_02dd37b4(&local_a8);
        uVar21 = local_a8;
        uVar23 = local_b0;
        uVar4 = *(undefined1 *)(param_1 + 0x134);
        uVar20 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                                   );
        FUN_05b892cc(uVar20,uVar23,uVar21,uVar4,0);
        *(undefined8 *)(param_1 + 0x298) = uVar20;
        thunk_FUN_02dd37b4(param_1 + 0x298,uVar20);
        if (*(long *)(param_1 + 0x298) == 0) goto LAB_05b6a664;
        *(undefined1 *)(*(long *)(param_1 + 0x298) + 0x1a) = *(undefined1 *)(param_2 + 0x88);
        if (*(int *)(*(long *)PTR_DAT_06769e90 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar23 = FUN_060a291c(0);
        uVar16 = *(undefined4 *)(param_2 + 0x5c);
        uVar20 = *(undefined8 *)*pauVar1;
        uVar14 = *(undefined4 *)(param_1 + 0x2bd);
        uVar2 = *(undefined4 *)(lVar24 + 0x14);
        uVar25 = *(undefined8 *)(param_1 + 0x298);
        uVar21 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                   );
        FUN_05ba6030(uVar21,0xd2,uVar23,uVar16,uVar20,uVar14,uVar2,uVar25,0);
        *(undefined8 *)(param_1 + 0x178) = uVar21;
        thunk_FUN_02dd37b4(param_1 + 0x178,uVar21);
        uVar23 = *(undefined8 *)*pauVar1;
        uVar16 = *(undefined4 *)(param_1 + 0x2bd);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b8b2b4(uVar23,uVar16,0x60,0);
        lVar19 = FUN_02d60934(*(undefined8 *)
                               Method_Unity_Collections_NativeArray_Enumerator<XRLoadAnchorResult>_get_Current__
                              ,3);
        local_110 = (ulong)local_110._4_4_ << 0x20;
        FUN_060a659c(&local_110,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__,0);
        if (lVar19 == 0) goto LAB_05b6a664;
        if (*(int *)(lVar19 + 0x18) == 0) {
LAB_05b6a668:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined4 *)(lVar19 + 0x20) = (undefined4)local_110;
        local_c8[0] = 0;
        FUN_060a659c(local_c8,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<string>_get_Current__
                     ,0);
        if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_05b6a668;
        *(undefined4 *)(lVar19 + 0x24) = local_c8[0];
        local_d0[0] = 0;
        FUN_060a659c(local_d0,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_MoveNext__
                     ,0);
        if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_05b6a668;
        *(undefined4 *)(lVar19 + 0x28) = local_d0[0];
        uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                                   );
        FUN_05b9c03c(uVar23,0xd3,uVar17,1,0,0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<VisualEffectControlClip_ClipEvent>_get_Current__
                     ,0);
        *(undefined8 *)(param_1 + 0x180) = uVar23;
        thunk_FUN_02dd37b4(param_1 + 0x180,uVar23);
        uVar21 = *(undefined8 *)(param_1 + 0x298);
        uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
                                   );
        FUN_05b9d7bc(uVar23,0xe6,uVar21,0);
        *(undefined8 *)(param_1 + 0x188) = uVar23;
        thunk_FUN_02dd37b4(param_1 + 0x188,uVar23);
        uVar23 = FUN_060a291c(0);
        uVar14 = *(undefined4 *)(param_2 + 0x5c);
        uVar21 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                                   );
        uVar16 = extraout_var;
        FUN_05ba0cbc(uVar21,*(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_AssetEntry>_Dispose__
                     ,lVar19,1,0xfa,uVar23,uVar14);
        *(undefined8 *)(param_1 + 400) = uVar21;
        thunk_FUN_02dd37b4(param_1 + 400,uVar21);
      }
      puVar9 = 
      Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_get_Current__
      ;
      if (*(int *)(*(long *)PTR_DAT_06769e90 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar23 = FUN_060a291c(0);
      uVar14 = *(undefined4 *)(param_2 + 0x5c);
      uVar20 = *(undefined8 *)*pauVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x2bd);
      uVar27 = *(undefined4 *)(lVar24 + 0x14);
      uVar21 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                                 );
      uVar25 = CONCAT44(uVar16,uVar27);
      FUN_05ba1178(uVar21,10,1,0xfa,uVar23,uVar14,uVar20,uVar2,uVar25,0);
      uVar27 = (undefined4)((ulong)uVar25 >> 0x20);
      *(undefined8 *)(param_1 + 0x198) = uVar21;
      thunk_FUN_02dd37b4(param_1 + 0x198,uVar21);
      uVar23 = FUN_060a291c(0);
      uVar16 = *(undefined4 *)(param_2 + 0x5c);
      uVar20 = *(undefined8 *)*pauVar1;
      uVar14 = *(undefined4 *)(param_1 + 0x2bd);
      uVar2 = *(undefined4 *)(lVar24 + 0x14);
      uVar21 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
      uVar25 = CONCAT44(uVar27,uVar2);
      FUN_05ba2c10(uVar21,10,1,0xfa,uVar23,uVar16,uVar20,uVar14,uVar25,0);
      uVar16 = (undefined4)((ulong)uVar25 >> 0x20);
      *(undefined8 *)(param_1 + 0x1a0) = uVar21;
      thunk_FUN_02dd37b4(param_1 + 0x1a0,uVar21);
      iVar3 = *(int *)(param_1 + 0x2a8);
      uVar15 = 500;
      if (iVar3 != 1) {
        uVar15 = 400;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<Texture,_DynamicAtlas_TextureInfo>__ctor__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      puVar9 = Method_System_Collections_Generic_List_Enumerator<InstanceType>_MoveNext__;
      bVar13 = FUN_05b53484(0);
      puVar8 = 
      Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
      ;
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                                 );
      FUN_05b9c03c(uVar23,uVar15,uVar17,1,0,iVar3 == 1 & bVar13,0,0);
      *(undefined8 *)(param_1 + 0x1b0) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1b0,uVar23);
      uVar21 = *(undefined8 *)(param_1 + 0x2f8);
      uVar14 = *(undefined4 *)(param_2 + 0x5c);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<LocomotionVignetteProvider>_get_Current__
                                 );
      FUN_05b24254(uVar23,uVar15 | 1,uVar21,uVar14,0);
      *(undefined8 *)(param_1 + 0x160) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x160,uVar23);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__
                                 );
      FUN_05b20dd8(uVar23,0x15e,0);
      *(undefined8 *)(param_1 + 0x1a8) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1a8,uVar23);
      uVar21 = *(undefined8 *)(param_1 + 0x2e8);
      uVar20 = *(undefined8 *)(param_1 + 0x2d8);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_MoveNext__
                                 );
      FUN_05b9ad3c(uVar23,400,uVar21,uVar20,0,0);
      *(undefined8 *)(param_1 + 0x1b8) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1b8,uVar23);
      uVar4 = *(undefined1 *)(param_2 + 0x70);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_MoveNext__
                                 );
      FUN_05b47548(uVar23,0x1c2,uVar4,0);
      *(undefined8 *)(param_1 + 0x1c0) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1c0,uVar23);
      if (*(int *)(*(long *)PTR_DAT_06769e90 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar23 = FUN_060a2924(0);
      uVar14 = *(undefined4 *)(param_2 + 0x60);
      uVar20 = *(undefined8 *)*pauVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x2bd);
      uVar27 = *(undefined4 *)(lVar24 + 0x14);
      uVar21 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                                 );
      FUN_05ba1178(uVar21,0xb,0,0x1c2,uVar23,uVar14,uVar20,uVar2,CONCAT44(uVar16,uVar27),0);
      *(undefined8 *)(param_1 + 0x1c8) = uVar21;
      thunk_FUN_02dd37b4(param_1 + 0x1c8,uVar21);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__
                                 );
      FUN_05b23c3c(uVar23,0x226,0);
      *(undefined8 *)(param_1 + 0x1d0) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x1d0,uVar23);
      uVar21 = *(undefined8 *)(param_1 + 0x2e8);
      uVar20 = *(undefined8 *)(param_1 + 0x2d8);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_MoveNext__
                                 );
      FUN_05b9ad3c(uVar23,0x226,uVar21,uVar20,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_Dispose__
                   ,0);
      *(undefined8 *)(param_1 + 0x210) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x210,uVar23);
      uVar15 = FUN_05b53484(0);
      uVar23 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
      FUN_05b9c03c(uVar23,0x226,uVar17,0,uVar15 & 1,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_get_Current__
                   ,0);
      *(undefined8 *)(param_1 + 0x218) = uVar23;
      thunk_FUN_02dd37b4(param_1 + 0x218,uVar23);
      uVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
      FUN_05b1eb18(uVar17,0x226,1,0);
      *(undefined8 *)(param_1 + 0x200) = uVar17;
      thunk_FUN_02dd37b4(param_1 + 0x200,uVar17);
      uVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
      FUN_05b1eb18(uVar17,0x3ea,0,0);
      *(undefined8 *)(param_1 + 0x208) = uVar17;
      thunk_FUN_02dd37b4(param_1 + 0x208,uVar17);
      FUN_05b49a4c(0);
      local_c0 = *(undefined8 *)(param_1 + 0x2d8);
      local_b8 = extraout_x1;
      thunk_FUN_02dd37b4(&local_c0);
      puVar9 = PTR_DAT_06769158;
      local_b8 = CONCAT44(local_b8._4_4_,0x4a);
      if (*(int *)(*(long *)PTR_DAT_06769158 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar24 = FUN_05b6a66c();
      puVar8 = PTR_DAT_06761808;
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
      }
      uVar18 = FUN_0606f530(lVar24,0);
      if ((uVar18 & 1) != 0) {
        if (lVar24 == 0) goto LAB_05b6a664;
        cVar5 = *(char *)(lVar24 + 0x4d);
        uVar16 = *(undefined4 *)(lVar24 + 0x50);
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar16 = FUN_05b6a70c(cVar5 != '\0',uVar16,0);
        local_b8 = CONCAT44(local_b8._4_4_,uVar16);
      }
      puVar11 = 
      Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_MoveNext__
      ;
      puVar10 = 
      Method_System_Collections_Generic_List_Enumerator<UnitPreservation_UnitPortPreservation>_Dispose__
      ;
      puVar6 = 
      Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_MoveNext__;
      puVar7 = 
      Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_Dispose__
      ;
      puVar9 = Method_System_Collections_Generic_List_Enumerator<DebugUIHandlerValue>_MoveNext__;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      FUN_05b49b00(&local_110,*(undefined8 *)(param_2 + 0x50),&local_c0,0);
      *(undefined8 *)(param_1 + 0x328) = uStack_e8;
      *(undefined8 *)(param_1 + 800) = local_f0;
      *(undefined8 *)(param_1 + 0x338) = uStack_d8;
      *(undefined8 *)(param_1 + 0x330) = uStack_e0;
      *(undefined8 *)(param_1 + 0x308) = uStack_108;
      *(long *)(param_1 + 0x300) = local_110;
      *(undefined8 *)(param_1 + 0x318) = uStack_f8;
      *(undefined8 *)(param_1 + 0x310) = local_100;
      thunk_FUN_02dd37b4(param_1 + 0x300,0);
      uVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
      FUN_05b1dfc0(uVar17,1000,0);
      *(undefined8 *)(param_1 + 0x1e0) = uVar17;
      thunk_FUN_02dd37b4(param_1 + 0x1e0,uVar17);
      uVar23 = *(undefined8 *)(param_1 + 0x2d8);
      uVar21 = *(undefined8 *)(param_1 + 0x2e0);
      uVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
      FUN_05ba3f40(uVar17,0x3e9,uVar23,uVar21,0);
      *(undefined8 *)(param_1 + 0x1d8) = uVar17;
      thunk_FUN_02dd37b4(param_1 + 0x1d8,uVar17);
      uVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
      FUN_05baaca0(uVar17,*(undefined8 *)puVar11,0);
      *(undefined8 *)(param_1 + 0x220) = uVar17;
      thunk_FUN_02dd37b4(param_1 + 0x220,uVar17);
      lVar24 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
      FUN_05b0eea0(lVar24,0);
      puVar9 = Method_System_Collections_Generic_List_Enumerator<Controller>_get_Current__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<Controller>_get_Current__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar22 = (long *)(param_1 + 0xf0);
      *plVar22 = lVar24;
      thunk_FUN_02dd37b4(plVar22,lVar24);
      if (*(int *)(param_1 + 0x2a0) == 1) {
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (*plVar22 == 0) goto LAB_05b6a664;
        *(undefined1 *)(*plVar22 + 0x11) = 0;
      }
      puVar9 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__;
      lVar24 = *(long *)
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar24 = *(long *)puVar9;
      }
      *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x24) = DAT_01207928;
      FUN_05a3601c(0);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar13 = FUN_06089bac(0x1d,0);
      *(byte *)(param_1 + 0x2d4) = bVar13 & 1;
      return;
    }
  }
LAB_05b6a664:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


