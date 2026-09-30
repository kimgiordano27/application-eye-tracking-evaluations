/*
FUNCTION_NAME: FUN_060193a0
ENTRY_POINT: 060193a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_060193a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_076dd1d5 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_CultureInfo>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_DynamicResUpscaleFilter>_TypeInfo)
    ;
    thunk_FUN_032e1da0(PTR_DAT_072804e0);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IInteractorView,_List<IInteractorView>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<object,_object>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_07285338);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IUnitValuePort,_object>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRGroupMember,_HashSet<IXRGroupMember>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRHoverInteractor,_XRPushButton_PressInfo>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRInteractable,_ValueTuple<MeshFilter,_Renderer>[]>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRInteractable,_float3>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRInteractor,_GameObject>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRInteractor,_float>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<IXRSelectInteractor,_Transform>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<InputControl,_float>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_Action<Texture>>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_Dictionary<string,_string>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<GraphReference>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<HandJointId>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<int>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo)
    ;
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<Volume>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_Task<IDownload>>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_TypeInfo
                      );
    DAT_076dd1d5 = 1;
  }
  puVar8 = System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TypeInfo;
  puVar7 = System_Collections_Generic_Dictionary<int,_List<int>>_TypeInfo;
  puVar6 = System_Collections_Generic_Dictionary<int,_List<HandJointId>>_TypeInfo;
  puVar5 = System_Collections_Generic_Dictionary<int,_Action<Texture>>_TypeInfo;
  puVar4 = System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TypeInfo;
  puVar3 = PTR_DAT_072804e0;
  puVar1 = PTR_DAT_07280380;
  puVar2 = PTR_DAT_07279510;
  if (param_2 != 0) {
    uVar14 = FUN_0583161c(param_2,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_TypeInfo
                          ,0);
    *(undefined8 *)(param_1 + 0x90) = uVar14;
    thunk_FUN_0333a630();
    uVar14 = FUN_0583161c(param_2,*(undefined8 *)puVar8,0);
    *(undefined8 *)(param_1 + 0x98) = uVar14;
    thunk_FUN_0333a630();
    uVar14 = FUN_0583161c(param_2,*(undefined8 *)puVar5,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar14;
    thunk_FUN_0333a630();
    uVar10 = FUN_05831040(param_2,*(undefined8 *)puVar7,0);
    System_Xml_XmlSqlBinaryReader_QName__CheckPrefixNS(param_1,uVar10 & 1,1,0);
    bVar9 = FUN_05831040(param_2,*(undefined8 *)puVar6,0);
    *(byte *)(param_1 + 0xe9) = ~bVar9 & 1;
    uVar14 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar14 = FUN_059324dc(uVar14,0);
    plVar15 = (long *)FUN_0582f318(param_2,*(undefined8 *)puVar4,uVar14,0);
    uVar14 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    puVar7 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar6 = System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo;
    puVar5 = 
    System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_TypeInfo;
    puVar4 = System_Collections_Generic_Dictionary<int,_List<GraphReference>>_TypeInfo;
    puVar3 = System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_TypeInfo;
    puVar1 = System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_TypeInfo;
    puVar2 = PTR_DAT_07279558;
    if (plVar15 != (long *)0x0) {
      if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)PTR_DAT_07279558 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar15);
      }
      puVar16 = (undefined4 *)thunk_FUN_032a57f4(plVar15);
      FUN_058e7634(uVar14,*puVar16,0);
      FUN_0601cccc(param_1,uVar14,1,0);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      uVar11 = FUN_058311c0(param_2,*(undefined8 *)puVar4,0);
      FUN_0601d2c4(param_1,uVar11);
      bVar9 = FUN_05831040(param_2,*(undefined8 *)puVar3,0);
      *(byte *)(param_1 + 0xb0) = bVar9 & 1;
      uVar14 = FUN_0583161c(param_2,*(undefined8 *)puVar5,0);
      uVar17 = thunk_FUN_032a56a0(*(undefined8 *)puVar7);
      FUN_0624b850(uVar17,uVar14,0);
      *(undefined8 *)(param_1 + 0x130) = uVar17;
      thunk_FUN_0333a630(param_1 + 0x130,uVar17);
      bVar9 = FUN_05831040(param_2,*(undefined8 *)puVar1,0);
      *(byte *)(param_1 + 0x128) = bVar9 & 1;
      uVar14 = FUN_059324dc(*(undefined8 *)puVar6,0);
      plVar18 = (long *)FUN_0582f318(param_2,*(undefined8 *)
                                              System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_TypeInfo
                                     ,uVar14,0);
      plVar15 = (long *)PTR_DAT_07280380;
      if (plVar18 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        plVar15 = (long *)PTR_DAT_07280380;
      }
      else {
        lVar20 = *(long *)System_Action<object,_object>_TypeInfo;
        bVar9 = *(byte *)(lVar20 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar9) ||
           (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar9 - 1) * 8) != lVar20)) {
LAB_06019920:
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar18);
        }
        *(long **)(param_1 + 0x88) = plVar18;
        if ((*(byte *)(*plVar18 + 0x130) < bVar9) ||
           (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar9 - 1) * 8) != lVar20))
        goto LAB_06019920;
      }
      puVar3 = System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo;
      puVar1 = PTR_DAT_072794b0;
      thunk_FUN_0333a630(param_1 + 0x88,plVar18);
      uVar10 = FUN_058311c0(param_2,*(undefined8 *)puVar3,0);
      lVar20 = FUN_032d5d3c(*(undefined8 *)puVar1,uVar10);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*plVar15);
      }
      uVar14 = FUN_058e6bb4(0);
      if ((int)uVar10 < 1) {
        if ((param_5 & 1) == 0) {
          return;
        }
      }
      else {
        uVar23 = 0;
        puVar21 = (undefined8 *)(lVar20 + 0x20);
        do {
          plVar15 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14c0);
          FUN_0600334c(plVar15,0);
          uVar11 = (undefined4)uVar23;
          local_64 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_64);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRInteractable,_float3>_TypeInfo
                                ,uVar17,0);
          uVar17 = FUN_0583161c(param_2,uVar17,0);
          if (plVar15 == (long *)0x0) goto LAB_0601a2c4;
          FUN_06005b7c(plVar15,uVar17,0);
          local_68 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_68);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRInteractable,_ValueTuple<MeshFilter,_Renderer>[]>_TypeInfo
                                ,uVar17,0);
          lVar19 = FUN_0583161c(param_2,uVar17,0);
          plVar15[0x17] = lVar19;
          thunk_FUN_0333a630();
          local_6c = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_6c);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_List<Volume>>_TypeInfo
                                ,uVar17,0);
          uVar17 = FUN_0583161c(param_2,uVar17,0);
          FUN_0600631c(plVar15,uVar17,0);
          local_70 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_70);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TypeInfo
                                ,uVar17,0);
          uVar22 = *(undefined8 *)PTR_DAT_072813d0;
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
          }
          uVar22 = FUN_059324dc(uVar22,0);
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)PTR_DAT_072794f8))
          goto LAB_06019920;
          uVar17 = FUN_032d6068(plVar18,1,*(undefined8 *)PTR_DAT_07285338,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_DynamicResUpscaleFilter>_TypeInfo
                               );
          FUN_06004c34(plVar15,uVar17,0);
          local_74 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_74);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRSelectInteractor,_Transform>_TypeInfo
                                ,uVar17,0);
          uVar22 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813d0,0);
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)PTR_DAT_072794f8))
          goto LAB_06019920;
          plVar15[0x1c] = (long)plVar18;
          thunk_FUN_0333a630(plVar15 + 0x1c,plVar18);
          local_78 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_78);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_Task<IDownload>>_TypeInfo
                                ,uVar17,0);
          uVar22 = FUN_059324dc(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_FontAsset>_TypeInfo,0);
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if ((plVar18 != (long *)0x0) &&
             (*plVar18 !=
              *(long *)
               System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo))
          goto LAB_06019920;
          FUN_06003770(plVar15,plVar18,0);
          local_7c = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_7c);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IUnitValuePort,_object>_TypeInfo
                                ,uVar17,0);
          uVar22 = FUN_059324dc(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_TypeInfo
                                ,0);
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if (plVar18 == (long *)0x0) goto LAB_0601a2c4;
          if (*(long *)(*plVar18 + 0x40) !=
              *(long *)(*(long *)
                         System_Collections_Generic_Dictionary<IInteractorView,_List<IInteractorView>>_TypeInfo
                       + 0x40)) goto LAB_06019920;
          puVar16 = (undefined4 *)thunk_FUN_032a57f4();
          (**(code **)(*plVar15 + 0x1e8))(plVar15,*puVar16,*(undefined8 *)(*plVar15 + 0x1f0));
          local_80 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_80);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRHoverInteractor,_XRPushButton_PressInfo>_TypeInfo
                                ,uVar17,0);
          uVar22 = FUN_059324dc(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_CultureInfo>_TypeInfo,0)
          ;
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if (plVar18 == (long *)0x0) goto LAB_0601a2c4;
          if (*(long *)(*plVar18 + 0x40) !=
              *(long *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_TypeInfo
                       + 0x40)) goto LAB_06019920;
          puVar16 = (undefined4 *)thunk_FUN_032a57f4();
          FUN_06006db0(plVar15,*puVar16,0);
          local_84 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_84);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo
                                ,uVar17,0);
          uVar12 = FUN_05831040(param_2,uVar17,0);
          FUN_060040cc(plVar15,uVar12 & 1,0);
          local_88 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_88);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TypeInfo
                                ,uVar17,0);
          uVar12 = FUN_05831040(param_2,uVar17,0);
          FUN_060046cc(plVar15,uVar12 & 1,0);
          local_8c = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_8c);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_Dictionary<string,_string>>_TypeInfo
                                ,uVar17,0);
          uVar17 = FUN_05831334(param_2,uVar17,0);
          FUN_0600594c(plVar15,uVar17,0);
          local_90 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_90);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TypeInfo
                                ,uVar17,0);
          uVar17 = FUN_05831334(param_2,uVar17,0);
          FUN_06005840(plVar15,uVar17,0);
          local_94 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_94);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                                ,uVar17,0);
          uVar17 = FUN_0583161c(param_2,uVar17,0);
          FUN_06005a60(plVar15,uVar17,0);
          local_98 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_98);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<InputControl,_float>_TypeInfo
                                ,uVar17,0);
          puVar1 = PTR_DAT_07282378;
          uVar22 = FUN_059324dc(*(undefined8 *)PTR_DAT_07282378,0);
          uVar17 = FUN_0582f318(param_2,uVar17,uVar22,0);
          FUN_0600695c(plVar15,uVar17,0);
          local_9c = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_9c);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_TypeInfo
                                ,uVar17,0);
          uVar12 = FUN_05831040(param_2,uVar17,0);
          FUN_06007220(plVar15,uVar12 & 1,0);
          local_a0 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_a0);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRInteractor,_GameObject>_TypeInfo
                                ,uVar17,0);
          uVar13 = FUN_058311c0(param_2,uVar17,0);
          FUN_060076f8(plVar15,uVar13,0);
          local_a4 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_a4);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRInteractor,_float>_TypeInfo
                                ,uVar17,0);
          uVar22 = FUN_059324dc(*(undefined8 *)puVar1,0);
          uVar17 = FUN_0582f318(param_2,uVar17,uVar22,0);
          FUN_06005648(plVar15,uVar17,0);
          if ((param_5 & 1) != 0) {
            local_64 = uVar11;
            uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_64);
            uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                          System_Collections_Generic_Dictionary<InputAction,_InputSystemUIInputModule_InputActionReferenceState>_TypeInfo
                                  ,uVar17,0);
            uVar17 = FUN_0583161c(param_2,uVar17,0);
            if (lVar20 == 0) goto LAB_0601a2c4;
            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_0601a2c8;
            *puVar21 = uVar17;
            thunk_FUN_0333a630(puVar21,uVar17);
          }
          local_64 = uVar11;
          uVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_64);
          uVar17 = FUN_057ab74c(uVar14,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<IXRGroupMember,_HashSet<IXRGroupMember>>_TypeInfo
                                ,uVar17,0);
          uVar22 = *(undefined8 *)System_Collections_Generic_Dictionary<int,_Encoding>_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
          }
          uVar22 = FUN_059324dc(uVar22,0);
          plVar18 = (long *)FUN_0582f318(param_2,uVar17,uVar22,0);
          if (plVar18 == (long *)0x0) {
            plVar15[0x14] = 0;
          }
          else {
            lVar19 = *(long *)System_Action<object,_object>_TypeInfo;
            bVar9 = *(byte *)(lVar19 + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar9) ||
               (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar9 - 1) * 8) != lVar19))
            goto LAB_06019920;
            plVar15[0x14] = (long)plVar18;
            if ((*(byte *)(*plVar18 + 0x130) < bVar9) ||
               (*(long *)(*(long *)(*plVar18 + 200) + ((ulong)bVar9 - 1) * 8) != lVar19))
            goto LAB_06019920;
          }
          thunk_FUN_0333a630(plVar15 + 0x14,plVar18);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_0601a2c4;
          FUN_0600c024(*(long *)(param_1 + 0x40),plVar15,0);
          uVar23 = uVar23 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar10 != uVar23);
        if ((param_5 & 1) == 0) {
          return;
        }
        if (0 < (int)uVar10) {
          if (lVar20 == 0) goto LAB_0601a2c4;
          uVar23 = 0;
          do {
            if (*(uint *)(lVar20 + 0x18) <= uVar23) {
LAB_0601a2c8:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            if (*(long *)(lVar20 + 0x20 + uVar23 * 8) != 0) {
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_0601a2c4;
              lVar19 = FUN_0600bb38(*(long *)(param_1 + 0x40),uVar23 & 0xffffffff,0);
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_0601a2c8;
              if (lVar19 == 0) goto LAB_0601a2c4;
              FUN_060038dc(lVar19,*(undefined8 *)(lVar20 + 0x20 + uVar23 * 8),0);
            }
            uVar23 = uVar23 + 1;
          } while (uVar10 != uVar23);
        }
      }
      FUN_0601d2f4(param_1,param_2);
      return;
    }
  }
LAB_0601a2c4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


