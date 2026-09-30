/*
FUNCTION_NAME: FUN_055d524c
ENTRY_POINT: 055d524c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 244
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


long * FUN_055d524c(long param_1,long param_2,long *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  
  if ((DAT_06bbfbb9 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__);
    FUN_02f08768(Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                );
    FUN_02f08768(PTR_DAT_067cb360);
    FUN_02f08768(
                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_updated__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__);
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                );
    FUN_02f08768(PTR_DAT_067ca020);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float2>__ctor__);
    FUN_02f08768(PTR_DAT_067d7c28);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                );
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float4>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__);
    FUN_02f08768(OVR_OpenVR_IVRRenderModels__GetComponentState_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
    FUN_02f08768(Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__)
    ;
    FUN_02f08768(PTR_DAT_067ce970);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>__ctor__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__);
    FUN_02f08768(PTR_DAT_067d4de8);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<bool>__ctor__);
    FUN_02f08768(PTR_DAT_067cd778);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                );
    FUN_02f08768(Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    FUN_02f08768(PTR_DAT_067cbc28);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                );
    FUN_02f08768(PTR_DAT_067ca7d0);
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067d52c8);
    DAT_06bbfbb9 = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  if ((param_3 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*param_3 + 0x5f8))
                                 (param_3,*(undefined8 *)
                                           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                  ,*(undefined8 *)PTR_DAT_067cb360,*(undefined8 *)PTR_DAT_067cd6c0,
                                  *(undefined8 *)(*param_3 + 0x600)),
     puVar26 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
     param_2 == 0)) goto LAB_055d7b30;
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_055d55d0:
    if (*(int *)(param_1 + 0x5c) != 2) goto LAB_055d5624;
    uVar10 = FUN_05546520(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
               ,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x560));
    uVar10 = FUN_0554de78(param_2,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar10 = FUN_05546520(param_2,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_055d7b30;
      uVar11 = FUN_04f6dc3c(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
      if ((uVar11 & 1) != 0) goto LAB_055d55d0;
    }
LAB_055d5624:
    uVar10 = FUN_0554de78(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
  }
  (**(code **)(*plVar9 + 0x518))
            (plVar9,*(undefined8 *)PTR_DAT_067cd778,uVar10,*(undefined8 *)(*plVar9 + 0x520));
  lVar12 = FUN_05546520(param_2,0);
  if (lVar12 == 0) goto LAB_055d7b30;
  if (*(int *)(lVar12 + 0x10) == 0) {
    uVar10 = FUN_05546520(param_2,0);
    uVar11 = FUN_04f6ebb4(uVar10,0);
    lVar12 = param_2;
    while ((uVar11 & 1) != 0) {
      lVar25 = *(long *)(lVar12 + 0x188);
      if (lVar25 == 0) goto LAB_055d7b30;
      uVar11 = *(ulong *)(lVar25 + 0x18);
      puVar26 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
      ;
      if (uVar11 == 0) {
        puVar24 = (undefined8 *)PTR_DAT_067cbf00;
        if (*(long *)(param_1 + 0x30) != 0) {
          puVar24 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        }
        uVar10 = *puVar24;
        break;
      }
      if ((int)uVar11 < 1) break;
      lVar27 = 0;
      while( true ) {
        if ((uint)uVar11 <= (uint)lVar27) goto LAB_055d7b34;
        plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
        lVar14 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
        if (lVar14 != lVar12) break;
        uVar11 = (ulong)*(uint *)(lVar25 + 0x18);
        lVar27 = lVar27 + 1;
        puVar26 = (undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)lVar27) goto LAB_055d5760;
      }
      if (*(uint *)(lVar25 + 0x18) <= (uint)lVar27) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
      if ((plVar13 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0)),
         puVar26 = (undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
         lVar12 == 0)) goto LAB_055d7b30;
      uVar10 = FUN_05546520(lVar12,0);
      uVar11 = FUN_04f6ebb4(uVar10,0);
    }
LAB_055d5760:
    uVar15 = FUN_05546520(param_2,0);
    uVar11 = FUN_04f6dc3c(uVar15,uVar10,0);
    if ((uVar11 & 1) == 0) goto LAB_055d57b8;
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)
                       Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
               ,*(undefined8 *)
                 Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
               ,*(undefined8 *)(*plVar9 + 0x520));
    bVar2 = true;
  }
  else {
LAB_055d57b8:
    bVar2 = false;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__;
  if (*(char *)(param_2 + 0xe9) != '\0') {
    local_64[0] = *(undefined1 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050582b4(local_64,0);
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x560));
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    plVar13 = *(long **)(param_2 + 0xb8);
    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
    uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x560));
  }
  FUN_055cd6cc(param_1,param_2,plVar9,param_3);
  plVar13 = *(long **)(param_2 + 0x40);
  if (plVar13 == (long *)0x0) goto LAB_055d7b30;
  iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
  if (iVar4 - 1U < 2) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      plVar16 = (long *)FUN_0557e298(plVar13,iVar8,0);
      if (plVar16 == (long *)0x0) goto LAB_055d7b30;
      iVar5 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
      if (iVar5 == 4) {
        plVar17 = (long *)FUN_0554c018(param_2,0);
        if (plVar17 == (long *)0x0) goto LAB_055d7b30;
        iVar5 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            plVar18 = (long *)(**(code **)(*plVar17 + 0x208))
                                        (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
            if ((uVar11 & 1) != 0) {
              lVar12 = (**(code **)(*plVar17 + 0x208))
                                 (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
              if ((lVar12 == 0) || (lVar12 = FUN_05580068(lVar12,0), lVar12 == 0))
              goto LAB_055d7b30;
              if (*(int *)(lVar12 + 0x18) == 1) {
                lVar12 = (**(code **)(*plVar17 + 0x208))
                                   (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
                if ((lVar12 == 0) || (lVar12 = FUN_05580068(lVar12,0), lVar12 == 0))
                goto LAB_055d7b30;
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_055d7b34;
                if (*(long **)(lVar12 + 0x20) == plVar16) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
          } while (iVar5 < iVar6);
        }
      }
      iVar5 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
      iVar8 = iVar8 + 1;
      if (iVar5 == 1) {
        iVar7 = iVar7 + 1;
      }
    } while (iVar8 != iVar4);
    if ((*(char *)(param_2 + 0x128) != '\0') && (iVar7 == 1)) {
      if ((*(long *)(param_2 + 0x40) != 0) &&
         (lVar12 = FUN_0557e298(*(long *)(param_2 + 0x40),0,0), lVar12 != 0)) {
        lVar12 = FUN_055ce110(*(undefined8 *)(lVar12 + 0x38));
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) == 0)) {
          lVar12 = *(long *)Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
        }
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_055b6a08(lVar12,0);
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)PTR_DAT_067ca7d0,uVar10,*(undefined8 *)(*plVar9 + 0x520));
        return plVar9;
      }
      goto LAB_055d7b30;
    }
  }
  puVar26 = (undefined8 *)PTR_DAT_067cd6c0;
  plVar16 = (long *)(**(code **)(*param_3 + 0x5f8))
                              (param_3,*(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                               ,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<bool>__ctor__
                               ,*(undefined8 *)PTR_DAT_067cd6c0,*(undefined8 *)(*param_3 + 0x600));
  lVar12 = FUN_05548bd0(param_2,0);
  if (lVar12 == 0) goto LAB_055d7b30;
  uVar11 = FUN_05825608(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    lVar12 = FUN_05548bd0(param_2,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    plVar17 = (long *)FUN_055d8110(param_1,*(undefined8 *)(lVar12 + 0x18));
    lVar12 = FUN_05548bd0(param_2,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    uVar11 = FUN_04f6ebb4(*(undefined8 *)(lVar12 + 0x18),0);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (!bVar2)) {
        uVar10 = FUN_05546520(param_2,0);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
      }
      plVar17 = (long *)FUN_055d8110(param_1,uVar10);
    }
    lVar12 = FUN_05548bd0(param_2,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    lVar12 = FUN_055d9988(lVar12,plVar17,*(undefined8 *)(lVar12 + 0x10));
    if (lVar12 == 0) {
      if (plVar17 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x2e0));
    }
    lVar12 = FUN_05548bd0(param_2,0);
    if ((lVar12 == 0) || (plVar16 == (long *)0x0)) goto LAB_055d7b30;
    (**(code **)(*plVar16 + 0x518))
              (plVar16,*(undefined8 *)PTR_DAT_067cd778,*(undefined8 *)(lVar12 + 0x10),
               *(undefined8 *)(*plVar16 + 0x520));
  }
  else {
    (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar16,*(undefined8 *)(*plVar9 + 0x2e0));
  }
  lVar12 = FUN_05548bd0(param_2,0);
  if (lVar12 == 0) goto LAB_055d7b30;
  uVar11 = FUN_05825608(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    plVar17 = *(long **)(param_1 + 0x28);
    lVar12 = FUN_05548bd0(param_2,0);
    if ((lVar12 == 0) || (plVar17 == (long *)0x0)) goto LAB_055d7b30;
    plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,*(undefined8 *)(lVar12 + 0x18),
                                 *(undefined8 *)(*plVar17 + 0x310));
    lVar12 = FUN_05548bd0(param_2,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    if ((plVar17 != (long *)0x0) && (*plVar17 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar17,*(long *)(PTR_DAT_067c9338 + 0x90));
    }
    uVar10 = FUN_055da24c(plVar17,*(undefined8 *)(lVar12 + 0x10));
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)PTR_DAT_067ca7d0,uVar10,*(undefined8 *)(*plVar9 + 0x520));
  }
  lVar12 = *(long *)(param_2 + 0xf8);
  puVar24 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if (lVar12 != 0) {
    plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                (param_3,*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                 ,*(undefined8 *)
                                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float>__ctor__
                                 ,*puVar26,*(undefined8 *)(*param_3 + 0x600));
    uVar10 = thunk_FUN_02f1863c(lVar12,0);
    uVar15 = *(undefined8 *)
              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar15 = FUN_050e4454(uVar15,0);
    uVar11 = FUN_050edfb8(uVar10,uVar15,0);
    puVar3 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    if ((uVar11 & 1) == 0) {
      FUN_055d87f4(param_1,lVar12,plVar17);
    }
    else {
      FUN_055cd6cc(param_1,lVar12,plVar17,param_3);
    }
    FUN_055ccff4(*(undefined8 *)(lVar12 + 0xa0),plVar17,0);
    if (*(char *)(lVar12 + 0x20) != '\0') {
      (**(code **)(*plVar9 + 0x558))
                (plVar9,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__
                 ,**(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar9 + 0x560));
    }
    if (*(char *)(lVar12 + 0x95) == '\0') {
      FUN_055cfb48(*(undefined8 *)(lVar12 + 0x38));
      uVar10 = FUN_0555ef20(lVar12,0);
      uVar10 = FUN_0555ecb4(lVar12,uVar10,0);
      if (plVar17 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar17 + 0x558))
                (plVar17,*(undefined8 *)
                          Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo,
                 *(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar17 + 0x560));
    }
    else if (plVar17 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar17 + 0x558))
              (plVar17,*(undefined8 *)
                        UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
               ,*(undefined8 *)puVar3,*(undefined8 *)(lVar12 + 0x30),
               *(undefined8 *)(*plVar17 + 0x560));
    local_68 = *(undefined4 *)(lVar12 + 100);
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050656a0(0);
    uVar10 = FUN_050d2d8c(&local_68,uVar10,0);
    (**(code **)(*plVar17 + 0x558))
              (plVar17,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
               *(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar17 + 0x560));
    if (plVar16 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2e0));
    puVar24 = (undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
    ;
    puVar26 = (undefined8 *)PTR_DAT_067cd6c0;
    plVar16 = (long *)(**(code **)(*param_3 + 0x5f8))
                                (param_3,*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                 ,*(undefined8 *)PTR_DAT_067d4de8,*(undefined8 *)PTR_DAT_067cd6c0,
                                 *(undefined8 *)(*param_3 + 0x600));
    (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x2e0));
    FUN_055d83a4(param_1,lVar12,param_3,plVar16);
  }
  plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                              (param_3,*puVar24,
                               *(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float2>__ctor__
                               ,*puVar26,*(undefined8 *)(*param_3 + 0x600));
  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
  uVar10 = (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2e0));
  FUN_055d9c74(uVar10,param_2);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      plVar18 = (long *)FUN_0557e298(plVar13,iVar8,0);
      if (plVar18 == (long *)0x0) goto LAB_055d7b30;
      iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
      if ((iVar7 != 3) &&
         ((((iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
            iVar7 == 2 ||
            (iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
            iVar7 == 1)) ||
           (iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
           iVar7 == 4)) && (uVar11 = FUN_055da208(param_1,plVar18), (uVar11 & 1) == 0)))) {
        iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        uVar10 = FUN_055d8ef0(param_1,plVar18,param_3);
        plVar18 = plVar17;
        if (iVar7 != 1) {
          plVar18 = plVar16;
        }
        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar18 + 0x2d8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x2e0));
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  puVar26 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(param_2 + 0xf8) == 0) && ((param_5 & 1) != 0)) {
    plVar13 = (long *)FUN_0554c018(param_2,0);
    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                    (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
        uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        if ((uVar11 & 1) != 0) {
          plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar18 == (long *)0x0) goto LAB_055d7b30;
          lVar12 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          if (lVar12 == param_2) {
            plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_067cb360,
                                         *(undefined8 *)PTR_DAT_067cd6c0,
                                         *(undefined8 *)(*param_3 + 0x600));
            lVar25 = param_2;
LAB_055d61bc:
            uVar10 = FUN_0554de78(lVar25,0);
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x518))
                      (plVar18,*(undefined8 *)PTR_DAT_067d7c28,uVar10,
                       *(undefined8 *)(*plVar18 + 0x520));
          }
          else {
            if (lVar12 == 0) goto LAB_055d7b30;
            iVar8 = FUN_0554d1c8(lVar12,0);
            if (1 < iVar8) {
              plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_067cb360,
                                           *(undefined8 *)PTR_DAT_067cd6c0,
                                           *(undefined8 *)(*param_3 + 0x600));
              lVar25 = lVar12;
              goto LAB_055d61bc;
            }
            plVar18 = (long *)FUN_055d524c(param_1,lVar12,param_3,param_4,1);
          }
          uVar10 = FUN_05546520(lVar12,0);
          uVar15 = FUN_05546520(param_2,0);
          uVar11 = thunk_FUN_04f6d944(uVar10,uVar15,0);
          if ((uVar11 & 1) != 0) {
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x518))
                      (plVar18,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                       ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar18 + 0x520));
            (**(code **)(*plVar18 + 0x518))
                      (plVar18,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                       ,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                       ,*(undefined8 *)(*plVar18 + 0x520));
          }
          uVar10 = FUN_05546520(lVar12,0);
          uVar15 = FUN_05546520(param_2,0);
          uVar11 = thunk_FUN_04f6d944(uVar10,uVar15,0);
          if ((uVar11 & 1) == 0) {
            lVar25 = FUN_05546520(lVar12,0);
            if (lVar25 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar25 + 0x10) != 0) && (*(int *)(param_1 + 0x5c) != 2)) {
              iVar8 = FUN_0554d1c8(lVar12,0);
              puVar3 = PTR_DAT_067cd6c0;
              if (iVar8 < 2) {
                uVar10 = FUN_05546520(lVar12,0);
                plVar19 = (long *)FUN_055d8110(param_1,uVar10);
                if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x2e0));
              }
              plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_067cb360,
                                           *(undefined8 *)puVar3,*(undefined8 *)(*param_3 + 0x600));
              plVar19 = *(long **)(param_1 + 0x28);
              uVar10 = FUN_05546520(lVar12,0);
              if (plVar19 == (long *)0x0) goto LAB_055d7b30;
              plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                          (plVar19,uVar10,*(undefined8 *)(*plVar19 + 0x310));
              uVar10 = FUN_0554de78(lVar12,0);
              if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar10 = FUN_04f6f6b4(plVar19,*(undefined8 *)PTR_DAT_067ce970,uVar10,0);
              if (plVar18 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar18 + 0x518))
                        (plVar18,*(undefined8 *)PTR_DAT_067d7c28,uVar10,
                         *(undefined8 *)(*plVar18 + 0x520));
              puVar26 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar17 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
          plVar19 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          lVar12 = (**(code **)(*plVar19 + 0x208))(plVar19,*(undefined8 *)(*plVar19 + 0x210));
          if (lVar12 == 0) {
            plVar19 = *(long **)(param_1 + 0x48);
            if ((plVar19 == (long *)0x0) ||
               (plVar19 = (long *)(**(code **)(*plVar19 + 0x5f8))
                                            (plVar19,*puVar26,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar19 + 0x600)),
               plVar18 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x2c8))(plVar18,plVar19,*(undefined8 *)(*plVar18 + 0x2d0));
            plVar18 = *(long **)(param_1 + 0x48);
            if ((plVar18 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar18 + 0x5f8))
                                            (plVar18,*puVar26,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar18 + 0x600)),
               plVar19 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x2e0));
            uVar10 = (**(code **)(*plVar13 + 0x208))
                               (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
            uVar10 = FUN_055d4838(param_1,uVar10,param_3);
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x2d8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x2e0));
          }
        }
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
  }
  if ((plVar17 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar17 + 0x328))(plVar17,*(undefined8 *)(*plVar17 + 0x330)),
     (uVar11 & 1) == 0)) {
    (**(code **)(*plVar16 + 0x2b8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2c0));
  }
  plVar13 = *(long **)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_055d659c:
    puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    if (lVar12 == 0) goto LAB_055d7b30;
    puVar24 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar12 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(param_1 + 0x5c) == 2) {
LAB_055d665c:
    local_70 = *puVar24;
  }
  else {
    uVar10 = FUN_05546520(param_2,0);
    FUN_055d8110(param_1,uVar10);
    lVar12 = FUN_05546520(param_2,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar12 + 0x10) == 0) {
      puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar16 = *(long **)(param_1 + 0x28);
    uVar10 = FUN_05546520(param_2,0);
    if (plVar16 == (long *)0x0) goto LAB_055d7b30;
    plVar19 = (long *)(**(code **)(*plVar16 + 0x308))
                                (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x310));
    if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar19);
    }
    local_70 = FUN_04f65260(plVar19,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar13 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar16 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar17 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar18 = (long *)FUN_0557b300(plVar13,iVar4,0);
        if (plVar18 == (long *)0x0) {
LAB_055d66d4:
          plVar18 = (long *)FUN_0557b300(plVar13,iVar4,0);
          if (plVar18 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar16 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
                (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) == *plVar16)) &&
               ((param_5 & 1) != 0)) {
              plVar18 = (long *)FUN_0557b300(plVar13,iVar4,0);
              if (plVar18 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar16 + 0x130);
                if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar16)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar18);
                }
              }
              plVar19 = *(long **)(param_1 + 0x38);
              if (plVar19 == (long *)0x0) goto LAB_055d7b30;
              iVar8 = (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
              if (iVar8 < 1) {
                uVar11 = FUN_055da208(param_1,plVar18);
                if ((uVar11 & 1) == 0) {
                  if (plVar18 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar16 = (long *)FUN_055a5390(plVar18,0);
                  lVar12 = FUN_055a4c24(plVar18,0);
                  lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                  if (lVar25 == 0) goto LAB_055d7b30;
                  lVar25 = *(long *)(lVar25 + 0x48);
                  uVar10 = thunk_FUN_02f45270(*plVar17);
                  FUN_055aee44(uVar10,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar12,0);
                  puVar26 = (undefined8 *)PTR_DAT_067cd6c0;
                  if (lVar25 == 0) goto LAB_055d7b30;
                  plVar19 = (long *)FUN_0557ba08(lVar25,uVar10,0);
                  if (plVar19 == (long *)0x0) {
                    plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                (param_3,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                 ,*(undefined8 *)PTR_DAT_067cbc28,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x600));
                    uVar10 = FUN_0557af78(plVar18,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar10 = FUN_05819fc8(uVar10,0);
                    if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar17 + 0x518))
                              (plVar17,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                               *(undefined8 *)(*plVar17 + 0x520));
                    if (*(long *)(param_1 + 0x30) == 0) {
LAB_055d6f20:
                      uVar10 = FUN_05546520(param_2,0);
                      (**(code **)(*plVar17 + 0x558))
                                (plVar17,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar10,*(undefined8 *)(*plVar17 + 0x560));
                    }
                    else {
                      lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                      if (lVar25 == 0) goto LAB_055d7b30;
                      iVar8 = FUN_0558c670(lVar25,*(undefined8 *)(param_2 + 0x90),0);
                      if (iVar8 == -3) goto LAB_055d6f20;
                    }
                    plVar21 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                (param_3,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                 ,*(undefined8 *)PTR_DAT_067ca020,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x600));
                    lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if (lVar25 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0554de78(lVar25,0);
                    uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                           Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                          ,local_70,uVar10,0);
                    if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar10,*(undefined8 *)(*plVar21 + 0x520));
                    (**(code **)(*plVar17 + 0x2d8))
                              (plVar17,plVar21,*(undefined8 *)(*plVar17 + 0x2e0));
                    if (lVar12 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar12 + 0x18) != 0) {
                      plVar21 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar21,0);
                      if (0 < *(int *)(lVar12 + 0x18)) {
                        if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                        lVar27 = 0;
                        lVar25 = lVar12 + 0x20;
                        do {
                          FUN_04f78e50(plVar21,0,0);
                          uVar28 = (uint)lVar27;
                          if (*(int *)(param_1 + 0x5c) == 2) {
                            plVar20 = (long *)FUN_04f79730(plVar21,local_70,0);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if ((lVar14 == 0) ||
                               (uVar10 = FUN_0555e9b8(lVar14,0), plVar20 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_055d7b30;
                            uVar10 = FUN_0556053c(lVar14,0);
                            FUN_055d8110(param_1,uVar10);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_055d7b30;
                            uVar10 = FUN_0556053c(lVar14,0);
                            uVar11 = FUN_04f6ebb4(uVar10,0);
                            if ((uVar11 & 1) == 0) {
                              if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                              lVar14 = *(long *)(lVar25 + lVar27 * 8);
                              if (lVar14 == 0) goto LAB_055d7b30;
                              plVar20 = *(long **)(param_1 + 0x28);
                              uVar10 = FUN_0556053c(lVar14,0);
                              if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                              uVar10 = (**(code **)(*plVar20 + 0x308))
                                                 (plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x310));
                              lVar14 = FUN_04f7a6a0(plVar21,uVar10,0);
                              if (lVar14 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar14,0x3a,0);
                            }
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_055d7b30;
                            uVar10 = FUN_0555e9b8(lVar14,0);
                            plVar20 = plVar21;
                          }
                          FUN_04f79730(plVar20,uVar10,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          plVar20 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                          iVar8 = (**(code **)(*plVar20 + 0x1d8))
                                            (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                          if (iVar8 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar21,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            plVar20 = *(long **)(lVar25 + lVar27 * 8);
                            if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                            iVar8 = (**(code **)(*plVar20 + 0x1d8))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                            if (iVar8 == 4) goto LAB_055d71d4;
                          }
                          plVar20 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                      (param_3,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  OVR_OpenVR_IVRRenderModels__GetComponentState_TypeInfo
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*param_3 + 0x600));
                          uVar10 = (**(code **)(*plVar21 + 0x168))
                                             (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                          if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar20 + 0x518))
                                    (plVar20,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar10,*(undefined8 *)(*plVar20 + 0x520));
                          (**(code **)(*plVar17 + 0x2d8))
                                    (plVar17,plVar20,*(undefined8 *)(*plVar17 + 0x2e0));
                          lVar27 = lVar27 + 1;
                        } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                      }
                    }
                    plVar21 = *(long **)(param_1 + 0x78);
                    if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar21 + 0x298))
                              (plVar21,plVar17,*(undefined8 *)(param_1 + 0x80),
                               *(undefined8 *)(*plVar21 + 0x2a0));
                    puVar26 = (undefined8 *)PTR_DAT_067cd6c0;
                    plVar17 = (long *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar17 + 0x130);
                    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar19);
                    }
                  }
                  plVar21 = (long *)(**(code **)(*param_3 + 0x5f8))
                                              (param_3,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                               ,*(undefined8 *)
                                                 Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_updated__
                                               ,*puVar26,*(undefined8 *)(*param_3 + 0x600));
                  uVar10 = FUN_0557af78(plVar18,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar10 = FUN_05819fc8(uVar10,0);
                  if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar21 + 0x518))
                            (plVar21,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                             *(undefined8 *)(*plVar21 + 0x520));
                  if (*(long *)(param_1 + 0x30) == 0) {
LAB_055d738c:
                    lVar12 = (**(code **)(*plVar18 + 0x1b8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if (lVar12 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_05546520(lVar12,0);
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar10,*(undefined8 *)(*plVar21 + 0x560));
                  }
                  else {
                    lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                    lVar12 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if ((lVar12 == 0) || (lVar25 == 0)) goto LAB_055d7b30;
                    iVar8 = FUN_0558c670(lVar25,*(undefined8 *)(lVar12 + 0x90),0);
                    if (iVar8 == -3) goto LAB_055d738c;
                  }
                  plVar20 = plVar18;
                  if (plVar19 != (long *)0x0) {
                    plVar20 = plVar19;
                  }
                  uVar10 = FUN_0557af78(plVar20,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar10 = FUN_05819fc8(uVar10,0);
                  (**(code **)(*plVar21 + 0x518))
                            (plVar21,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar10,*(undefined8 *)(*plVar21 + 0x520));
                  lVar12 = plVar18[6];
                  uVar10 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar10 = FUN_050e4454(uVar10,0);
                  FUN_055ccff4(lVar12,plVar21,uVar10);
                  uVar10 = (**(code **)(*plVar18 + 0x178))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                  uVar15 = FUN_0557af78(plVar18,0);
                  uVar11 = FUN_04f6dc3c(uVar10,uVar15,0);
                  if ((uVar11 & 1) != 0) {
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar10,*(undefined8 *)(*plVar21 + 0x560));
                  }
                  if (plVar16 == (long *)0x0) {
                    lVar12 = *plVar21;
                    uVar15 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar22 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar23 = *(undefined8 *)(lVar12 + 0x560);
                    uVar10 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar12 + 0x558))(plVar21,uVar15,uVar22,uVar10,uVar23);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar16 + 0x1d8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                    if ((uVar11 & 1) != 0) {
                      (**(code **)(*plVar21 + 0x558))
                                (plVar21,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar21 + 0x560))
                      ;
                    }
                    lVar12 = plVar16[3];
                    uVar10 = *(undefined8 *)
                              Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar10 = FUN_050e4454(uVar10,0);
                    FUN_055ccff4(lVar12,plVar21,uVar10);
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    uVar15 = (**(code **)(*plVar16 + 0x1c8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                    uVar11 = FUN_04f6dc3c(uVar10,uVar15,0);
                    if ((uVar11 & 1) != 0) {
                      uVar10 = (**(code **)(*plVar16 + 0x1c8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar10 = FUN_05819fc8(uVar10,0);
                      lVar12 = *plVar21;
                      uVar15 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar23 = *(undefined8 *)(lVar12 + 0x560);
                      uVar22 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar16 = (long *)(**(code **)(*param_3 + 0x5f8))
                                              (param_3,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                               ,*(undefined8 *)PTR_DAT_067ca020,*puVar26,
                                               *(undefined8 *)(*param_3 + 0x600));
                  uVar10 = FUN_0554de78(param_2,0);
                  uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                        ,local_70,uVar10,0);
                  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar16 + 0x518))
                            (plVar16,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar10,*(undefined8 *)(*plVar16 + 0x520));
                  (**(code **)(*plVar21 + 0x2d8))(plVar21,plVar16,*(undefined8 *)(*plVar21 + 0x2e0))
                  ;
                  iVar8 = (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280))
                  ;
                  puVar3 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar8 != 0) {
                    (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280));
                    uVar10 = FUN_055d9b50();
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x560));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0));
                    uVar10 = FUN_055d9bc0();
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x560));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
                    uVar10 = FUN_055d9bc0();
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x560));
                  }
                  lVar12 = (**(code **)(*plVar18 + 0x268))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x270));
                  if (lVar12 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar16,0);
                    if (0 < *(int *)(lVar12 + 0x18)) {
                      if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                      lVar27 = 0;
                      lVar25 = lVar12 + 0x20;
                      do {
                        FUN_04f78e50(plVar16,0,0);
                        uVar28 = (uint)lVar27;
                        if (*(int *)(param_1 + 0x5c) == 2) {
                          plVar18 = (long *)FUN_04f79730(plVar16,local_70,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if ((lVar14 == 0) ||
                             (uVar10 = FUN_0555e9b8(lVar14,0), plVar18 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_055d7b30;
                          uVar10 = FUN_0556053c(lVar14,0);
                          FUN_055d8110(param_1,uVar10);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_055d7b30;
                          uVar10 = FUN_0556053c(lVar14,0);
                          uVar11 = FUN_04f6ebb4(uVar10,0);
                          if ((uVar11 & 1) == 0) {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_055d7b30;
                            plVar18 = *(long **)(param_1 + 0x28);
                            uVar10 = FUN_0556053c(lVar14,0);
                            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                            uVar10 = (**(code **)(*plVar18 + 0x308))
                                               (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                            lVar14 = FUN_04f7a6a0(plVar16,uVar10,0);
                            if (lVar14 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar14,0x3a,0);
                          }
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_055d7b30;
                          uVar10 = FUN_0555e9b8(lVar14,0);
                          plVar18 = plVar16;
                        }
                        FUN_04f79730(plVar18,uVar10,0);
                        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                        plVar18 = *(long **)(lVar25 + lVar27 * 8);
                        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                        iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                        if (iVar8 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar16,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                          plVar18 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                          iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                          if (iVar8 == 4) goto LAB_055d79f8;
                        }
                        plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                    (param_3,*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  OVR_OpenVR_IVRRenderModels__GetComponentState_TypeInfo
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*param_3 + 0x600));
                        uVar10 = (**(code **)(*plVar16 + 0x168))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar18 + 0x518))
                                  (plVar18,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar10,*(undefined8 *)(*plVar18 + 0x520));
                        (**(code **)(*plVar21 + 0x2d8))
                                  (plVar21,plVar18,*(undefined8 *)(*plVar21 + 0x2e0));
                        lVar27 = lVar27 + 1;
                      } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                    }
                  }
                  plVar16 = *(long **)(param_1 + 0x78);
                  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,plVar21,*(undefined8 *)(param_1 + 0x80),
                             *(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  puVar26 = (undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                  ;
                }
              }
              else {
                if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                plVar16 = *(long **)(param_1 + 0x38);
                uVar10 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                uVar11 = (**(code **)(*plVar16 + 0x348))
                                   (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                plVar16 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar11 & 1) != 0) {
                  plVar16 = *(long **)(param_1 + 0x38);
                  uVar10 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                  uVar11 = (**(code **)(*plVar16 + 0x348))
                                     (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                  plVar16 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = FUN_055da208(param_1,plVar18), (uVar11 & 1) == 0)) goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar17 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
          goto LAB_055d66d4;
          plVar19 = (long *)FUN_0557b300(plVar13,iVar4,0);
          if (plVar19 == (long *)0x0) {
            uVar11 = FUN_055da208(param_1,0);
            if ((uVar11 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar1 = *(byte *)(*plVar17 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
            goto LAB_055d7b38;
            uVar11 = FUN_055da208(param_1,plVar19);
            if ((uVar11 & 1) != 0) goto LAB_055d7adc;
            lVar12 = plVar19[7];
            plVar16 = (long *)(**(code **)(*param_3 + 0x5f8))
                                        (param_3,*puVar26,
                                         *(undefined8 *)
                                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float4>__ctor__
                                         ,*(undefined8 *)PTR_DAT_067cd6c0,
                                         *(undefined8 *)(*param_3 + 0x600));
            if (*(long *)(param_1 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar10 = FUN_05546520(param_2,0);
              if (plVar16 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar10,*(undefined8 *)(*plVar16 + 0x560));
            }
            else {
              lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
              if (lVar25 == 0) goto LAB_055d7b30;
              iVar8 = FUN_0558c670(lVar25,*(undefined8 *)(param_2 + 0x90),0);
              if (iVar8 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar10 = FUN_0557af78(plVar19,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar10 = FUN_05819fc8(uVar10,0);
            if (plVar16 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar16 + 0x518))
                      (plVar16,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                       *(undefined8 *)(*plVar16 + 0x520));
            uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
            uVar15 = FUN_0557af78(plVar19,0);
            uVar11 = FUN_04f6dc3c(uVar10,uVar15,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar10,*(undefined8 *)(*plVar16 + 0x560));
            }
            FUN_055ccff4(plVar19[6],plVar16,0);
            plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_067ca020,
                                         *(undefined8 *)PTR_DAT_067cd6c0,
                                         *(undefined8 *)(*param_3 + 0x600));
            uVar10 = FUN_0554de78(param_2,0);
            uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                  ,local_70,uVar10,0);
            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar10,*(undefined8 *)(*plVar17 + 0x520));
            (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2e0));
            uVar11 = FUN_055afea0(plVar19,0);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar16 + 0x560));
            }
            if (lVar12 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar17,0);
              if (0 < *(int *)(lVar12 + 0x18)) {
                if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                lVar27 = 0;
                lVar25 = lVar12 + 0x20;
                do {
                  FUN_04f78e50(plVar17,0,0);
                  uVar28 = (uint)lVar27;
                  if (*(int *)(param_1 + 0x5c) == 2) {
                    plVar18 = (long *)FUN_04f79730(plVar17,local_70,0);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if ((lVar14 == 0) || (uVar10 = FUN_0555e9b8(lVar14,0), plVar18 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0556053c(lVar14,0);
                    FUN_055d8110(param_1,uVar10);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0556053c(lVar14,0);
                    uVar11 = FUN_04f6ebb4(uVar10,0);
                    if ((uVar11 & 1) == 0) {
                      if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar25 + lVar27 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      plVar18 = *(long **)(param_1 + 0x28);
                      uVar10 = FUN_0556053c(lVar14,0);
                      if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                      uVar10 = (**(code **)(*plVar18 + 0x308))
                                         (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                      lVar14 = FUN_04f7a6a0(plVar17,uVar10,0);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar14,0x3a,0);
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0555e9b8(lVar14,0);
                    plVar18 = plVar17;
                  }
                  FUN_04f79730(plVar18,uVar10,0);
                  if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                  plVar18 = *(long **)(lVar25 + lVar27 * 8);
                  if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                  iVar8 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0))
                  ;
                  if (iVar8 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar17,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_055d7b34;
                    plVar18 = *(long **)(lVar25 + lVar27 * 8);
                    if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                    iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                    if (iVar8 == 4) goto LAB_055d6c94;
                  }
                  plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                              (param_3,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                               ,*(undefined8 *)
                                                 OVR_OpenVR_IVRRenderModels__GetComponentState_TypeInfo
                                               ,*(undefined8 *)PTR_DAT_067cd6c0,
                                               *(undefined8 *)(*param_3 + 0x600));
                  uVar10 = (**(code **)(*plVar17 + 0x168))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                  if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar18 + 0x518))
                            (plVar18,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar10,*(undefined8 *)(*plVar18 + 0x520));
                  (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar18,*(undefined8 *)(*plVar16 + 0x2e0))
                  ;
                  lVar27 = lVar27 + 1;
                } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
              }
            }
            plVar17 = *(long **)(param_1 + 0x78);
            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar17 + 0x298))
                      (plVar17,plVar16,*(undefined8 *)(param_1 + 0x80),
                       *(undefined8 *)(*plVar17 + 0x2a0));
            plVar16 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar17 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
            puVar26 = (undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
            ;
          }
        }
LAB_055d7adc:
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
    FUN_055ccff4(*(undefined8 *)(param_2 + 0x88),plVar9,0);
    return plVar9;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


