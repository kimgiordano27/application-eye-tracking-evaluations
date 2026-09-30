/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$.cctor
ENTRY_POINT: 055d7310
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 210
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 System_Xml_BinXmlDateTime___cctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  long lVar14;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  long lVar15;
  long *unaff_x28;
  uint uVar16;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    thunk_FUN_02f6670c(param_1);
    do {
      uVar5 = FUN_05819fc8(unaff_x19,0);
      if (unaff_x29 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*unaff_x29 + 0x518))
                (unaff_x29,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*unaff_x29 + 0x520)
                );
      if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
        lVar6 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
        if (lVar6 == 0) goto LAB_055d7b30;
        uVar5 = FUN_05546520(lVar6,0);
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                   *(undefined8 *)(*unaff_x29 + 0x560));
      }
      else {
        lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        lVar6 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
        if ((lVar6 == 0) || (lVar14 == 0)) goto LAB_055d7b30;
        iVar3 = FUN_0558c670(lVar14,*(undefined8 *)(lVar6 + 0x90),0);
        if (iVar3 == -3) goto LAB_055d738c;
      }
      plVar9 = unaff_x27;
      if (unaff_x23 != (long *)0x0) {
        plVar9 = unaff_x23;
      }
      uVar5 = FUN_0557af78(plVar9,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar5 = FUN_05819fc8(uVar5,0);
      (**(code **)(*unaff_x29 + 0x518))
                (unaff_x29,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                 ,uVar5,*(undefined8 *)(*unaff_x29 + 0x520));
      lVar6 = unaff_x27[6];
      uVar5 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_050e4454(uVar5,0);
      FUN_055ccff4(lVar6,unaff_x29,uVar5);
      uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
      uVar7 = FUN_0557af78(unaff_x27,0);
      uVar8 = FUN_04f6dc3c(uVar5,uVar7,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                   *(undefined8 *)(*unaff_x29 + 0x560));
      }
      if (in_stack_00000010 == (long *)0x0) {
        lVar6 = *unaff_x29;
        uVar7 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
        uVar12 = *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        uVar13 = *(undefined8 *)(lVar6 + 0x560);
        uVar5 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
        (**(code **)(lVar6 + 0x558))(unaff_x29,uVar7,uVar12,uVar5,uVar13);
      }
      else {
        uVar8 = (**(code **)(*in_stack_00000010 + 0x1d8))
                          (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1e0));
        if ((uVar8 & 1) != 0) {
          (**(code **)(*unaff_x29 + 0x558))
                    (unaff_x29,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                     *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*unaff_x29 + 0x560));
        }
        lVar6 = in_stack_00000010[3];
        uVar5 = *(undefined8 *)
                 Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar5 = FUN_050e4454(uVar5,0);
        FUN_055ccff4(lVar6,unaff_x29,uVar5);
        uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
        uVar7 = (**(code **)(*in_stack_00000010 + 0x1c8))
                          (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1d0));
        uVar8 = FUN_04f6dc3c(uVar5,uVar7,0);
        if ((uVar8 & 1) != 0) {
          uVar5 = (**(code **)(*in_stack_00000010 + 0x1c8))
                            (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1d0));
          if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          }
          uVar5 = FUN_05819fc8(uVar5,0);
          lVar6 = *unaff_x29;
          uVar7 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
          uVar13 = *(undefined8 *)(lVar6 + 0x560);
          uVar12 = *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          goto LAB_055d7658;
        }
      }
      plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar5 = FUN_0554de78(in_stack_00000020,0);
      uVar5 = FUN_04f6f6b4(*(undefined8 *)
                            Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                           ,in_stack_00000030,uVar5,0);
      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar9 + 0x518))
                (plVar9,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                 ,uVar5,*(undefined8 *)(*plVar9 + 0x520));
      (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar9,*(undefined8 *)(*unaff_x29 + 0x2e0));
      iVar3 = (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
      puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
      if (iVar3 != 0) {
        (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
        uVar5 = FUN_055d9b50();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                   *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      iVar3 = (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
      if (iVar3 != 1) {
        (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
        uVar5 = FUN_055d9bc0();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                   *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      iVar3 = (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
      if (iVar3 != 1) {
        (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
        uVar5 = FUN_055d9bc0();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                   *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      lVar6 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
      if (lVar6 == 0) goto LAB_055d7b30;
      if (*(long *)(lVar6 + 0x18) != 0) {
        plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
        FUN_04f77e78(plVar9,0);
        if (0 < *(int *)(lVar6 + 0x18)) {
          if (plVar9 == (long *)0x0) goto LAB_055d7b30;
          lVar15 = 0;
          lVar14 = lVar6 + 0x20;
          do {
            FUN_04f78e50(plVar9,0,0);
            uVar16 = (uint)lVar15;
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
              plVar10 = (long *)FUN_04f79730(plVar9,in_stack_00000030,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              lVar11 = *(long *)(lVar14 + lVar15 * 8);
              if ((lVar11 == 0) || (uVar5 = FUN_0555e9b8(lVar11,0), plVar10 == (long *)0x0))
              goto LAB_055d7b30;
            }
            else {
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              lVar11 = *(long *)(lVar14 + lVar15 * 8);
              if (lVar11 == 0) goto LAB_055d7b30;
              FUN_0556053c(lVar11,0);
              FUN_055d8110();
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              lVar11 = *(long *)(lVar14 + lVar15 * 8);
              if (lVar11 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0556053c(lVar11,0);
              uVar8 = FUN_04f6ebb4(uVar5,0);
              if ((uVar8 & 1) == 0) {
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                lVar11 = *(long *)(lVar14 + lVar15 * 8);
                if (lVar11 == 0) goto LAB_055d7b30;
                plVar10 = *(long **)(unaff_x22 + 0x28);
                uVar5 = FUN_0556053c(lVar11,0);
                if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                uVar5 = (**(code **)(*plVar10 + 0x308))
                                  (plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x310));
                lVar11 = FUN_04f7a6a0(plVar9,uVar5,0);
                if (lVar11 == 0) goto LAB_055d7b30;
                FUN_04f7a548(lVar11,0x3a,0);
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              lVar11 = *(long *)(lVar14 + lVar15 * 8);
              if (lVar11 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0555e9b8(lVar11,0);
              plVar10 = plVar9;
            }
            FUN_04f79730(plVar10,uVar5,0);
            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
            plVar10 = *(long **)(lVar14 + lVar15 * 8);
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            iVar3 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            if (iVar3 == 2) {
LAB_055d79f8:
              System_Collections_Queue___ctor(plVar9,0,0x40,0);
            }
            else {
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              plVar10 = *(long **)(lVar14 + lVar15 * 8);
              if (plVar10 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
              if (iVar3 == 4) goto LAB_055d79f8;
            }
            plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar5,*(undefined8 *)(*plVar10 + 0x520));
            (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar10,*(undefined8 *)(*unaff_x29 + 0x2e0))
            ;
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < *(int *)(lVar6 + 0x18));
        }
      }
      plVar9 = *(long **)(unaff_x22 + 0x78);
      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar9 + 0x2a8))
                (plVar9,unaff_x29,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar9 + 0x2b0)
                );
      plVar9 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
LAB_055d7adc:
      do {
        do {
          do {
            unaff_w26 = unaff_w26 + 1;
            iVar3 = (**(code **)(*unaff_x24 + 0x1c8))();
            if (iVar3 <= unaff_w26) {
              FUN_055ccff4(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
              return in_stack_00000018;
            }
            plVar10 = (long *)FUN_0557b300();
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x28 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
                unaff_x23 = (long *)FUN_0557b300();
                if (unaff_x23 == (long *)0x0) {
                  uVar8 = FUN_055da208();
                  if ((uVar8 & 1) == 0) goto LAB_055d7b30;
                }
                else {
                  bVar1 = *(byte *)(*unaff_x28 + 0x130);
                  if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28))
                  goto LAB_055d7b38;
                  uVar8 = FUN_055da208();
                  if ((uVar8 & 1) == 0) {
                    lVar6 = unaff_x23[7];
                    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
                      uVar5 = FUN_05546520(in_stack_00000020,0);
                      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                      (**(code **)(*plVar9 + 0x558))
                                (plVar9,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar5,*(undefined8 *)(*plVar9 + 0x560));
                    }
                    else {
                      lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      iVar3 = FUN_0558c670(lVar14,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
                    }
                    uVar5 = FUN_0557af78(unaff_x23,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar5 = FUN_05819fc8(uVar5,0);
                    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar9 + 0x518))
                              (plVar9,*(undefined8 *)PTR_DAT_067cd778,uVar5,
                               *(undefined8 *)(*plVar9 + 0x520));
                    uVar5 = (**(code **)(*unaff_x23 + 0x178))
                                      (unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
                    uVar7 = FUN_0557af78(unaff_x23,0);
                    uVar8 = FUN_04f6dc3c(uVar5,uVar7,0);
                    if ((uVar8 & 1) != 0) {
                      uVar5 = (**(code **)(*unaff_x23 + 0x178))
                                        (unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
                      (**(code **)(*plVar9 + 0x558))
                                (plVar9,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar5,*(undefined8 *)(*plVar9 + 0x560));
                    }
                    FUN_055ccff4(unaff_x23[6],plVar9,0);
                    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar5 = FUN_0554de78(in_stack_00000020,0);
                    uVar5 = FUN_04f6f6b4(*(undefined8 *)
                                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                         ,in_stack_00000030,uVar5,0);
                    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar10 + 0x518))
                              (plVar10,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar5,*(undefined8 *)(*plVar10 + 0x520));
                    (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
                    uVar8 = FUN_055afea0(unaff_x23,0);
                    if ((uVar8 & 1) != 0) {
                      (**(code **)(*plVar9 + 0x558))
                                (plVar9,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar9 + 0x560));
                    }
                    if (lVar6 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar6 + 0x18) != 0) {
                      plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar10,0);
                      if (0 < *(int *)(lVar6 + 0x18)) {
                        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                        lVar15 = 0;
                        lVar14 = lVar6 + 0x20;
                        do {
                          FUN_04f78e50(plVar10,0,0);
                          uVar16 = (uint)lVar15;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar4 = (long *)FUN_04f79730(plVar10,in_stack_00000030,0);
                            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                            lVar11 = *(long *)(lVar14 + lVar15 * 8);
                            if ((lVar11 == 0) ||
                               (uVar5 = FUN_0555e9b8(lVar11,0), plVar4 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                            lVar11 = *(long *)(lVar14 + lVar15 * 8);
                            if (lVar11 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar11,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                            lVar11 = *(long *)(lVar14 + lVar15 * 8);
                            if (lVar11 == 0) goto LAB_055d7b30;
                            uVar5 = FUN_0556053c(lVar11,0);
                            uVar8 = FUN_04f6ebb4(uVar5,0);
                            if ((uVar8 & 1) == 0) {
                              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                              lVar11 = *(long *)(lVar14 + lVar15 * 8);
                              if (lVar11 == 0) goto LAB_055d7b30;
                              plVar4 = *(long **)(unaff_x22 + 0x28);
                              uVar5 = FUN_0556053c(lVar11,0);
                              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                              uVar5 = (**(code **)(*plVar4 + 0x308))
                                                (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
                              lVar11 = FUN_04f7a6a0(plVar10,uVar5,0);
                              if (lVar11 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar11,0x3a,0);
                            }
                            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                            lVar11 = *(long *)(lVar14 + lVar15 * 8);
                            if (lVar11 == 0) goto LAB_055d7b30;
                            uVar5 = FUN_0555e9b8(lVar11,0);
                            plVar4 = plVar10;
                          }
                          FUN_04f79730(plVar4,uVar5,0);
                          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                          plVar4 = *(long **)(lVar14 + lVar15 * 8);
                          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                            (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                          if (iVar3 == 2) {
LAB_055d6c94:
                            System_Collections_Queue___ctor(plVar10,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                            plVar4 = *(long **)(lVar14 + lVar15 * 8);
                            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                            iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                              (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                            if (iVar3 == 4) goto LAB_055d6c94;
                          }
                          plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar5 = (**(code **)(*plVar10 + 0x168))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar4 + 0x518))
                                    (plVar4,*(undefined8 *)
                                             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar5,*(undefined8 *)(*plVar4 + 0x520));
                          (**(code **)(*plVar9 + 0x2d8))
                                    (plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2e0));
                          lVar15 = lVar15 + 1;
                        } while ((int)lVar15 < *(int *)(lVar6 + 0x18));
                      }
                    }
                    plVar10 = *(long **)(unaff_x22 + 0x78);
                    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar10 + 0x298))
                              (plVar10,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar10 + 0x2a0));
                    plVar9 = (long *)
                             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                    ;
                    unaff_x28 = (long *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                }
                goto LAB_055d7adc;
              }
            }
            plVar10 = (long *)FUN_0557b300();
          } while (plVar10 == (long *)0x0);
          bVar1 = *(byte *)(*plVar9 + 0x130);
        } while (((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) ||
                ((in_stack_00000028 & 0x100000000) == 0));
        unaff_x27 = (long *)FUN_0557b300();
        if (unaff_x27 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar9 + 0x130);
          if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(unaff_x27);
          }
        }
        plVar10 = *(long **)(unaff_x22 + 0x38);
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        iVar3 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if (0 < iVar3) {
          if (unaff_x27 == (long *)0x0) goto LAB_055d7b30;
          plVar9 = *(long **)(unaff_x22 + 0x38);
          uVar5 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
          if (plVar9 == (long *)0x0) goto LAB_055d7b30;
          uVar8 = (**(code **)(*plVar9 + 0x348))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x350));
          plVar9 = (long *)
                   UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          if ((uVar8 & 1) != 0) {
            plVar9 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0))
            ;
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            uVar8 = (**(code **)(*plVar9 + 0x348))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x350));
            plVar9 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if (((uVar8 & 1) != 0) && (uVar8 = FUN_055da208(), (uVar8 & 1) == 0)) goto LAB_055d6d90;
          }
          goto LAB_055d7adc;
        }
        uVar8 = FUN_055da208();
      } while ((uVar8 & 1) != 0);
      if (unaff_x27 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
      in_stack_00000010 = (long *)FUN_055a5390(unaff_x27,0);
      lVar6 = FUN_055a4c24(unaff_x27,0);
      lVar14 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
      if (lVar14 == 0) goto LAB_055d7b30;
      lVar14 = *(long *)(lVar14 + 0x48);
      uVar5 = thunk_FUN_02f45270(*unaff_x28);
      FUN_055aee44(uVar5,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                   ,lVar6,0);
      if (lVar14 == 0) goto LAB_055d7b30;
      unaff_x23 = (long *)FUN_0557ba08(lVar14,uVar5,0);
      if (unaff_x23 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar5 = FUN_0557af78(unaff_x27,0);
        if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
        }
        uVar5 = FUN_05819fc8(uVar5,0);
        if (plVar9 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*plVar9 + 0x520));
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
          uVar5 = FUN_05546520(in_stack_00000020,0);
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                     *(undefined8 *)(*plVar9 + 0x560));
        }
        else {
          lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          if (lVar14 == 0) goto LAB_055d7b30;
          iVar3 = FUN_0558c670(lVar14,*(undefined8 *)(in_stack_00000020 + 0x90),0);
          if (iVar3 == -3) goto LAB_055d6f20;
        }
        plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        lVar14 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
        if (lVar14 == 0) {
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar5 = FUN_0554de78(lVar14,0);
        uVar5 = FUN_04f6f6b4(*(undefined8 *)
                              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                             ,in_stack_00000030,uVar5,0);
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar10 + 0x518))
                  (plVar10,*(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                   ,uVar5,*(undefined8 *)(*plVar10 + 0x520));
        (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
        if (lVar6 == 0) goto LAB_055d7b30;
        if (*(long *)(lVar6 + 0x18) != 0) {
          plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar10,0);
          if (0 < *(int *)(lVar6 + 0x18)) {
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            lVar15 = 0;
            lVar14 = lVar6 + 0x20;
            do {
              FUN_04f78e50(plVar10,0,0);
              uVar16 = (uint)lVar15;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                plVar4 = (long *)FUN_04f79730(plVar10,in_stack_00000030,0);
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                lVar11 = *(long *)(lVar14 + lVar15 * 8);
                if ((lVar11 == 0) || (uVar5 = FUN_0555e9b8(lVar11,0), plVar4 == (long *)0x0))
                goto LAB_055d7b30;
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                lVar11 = *(long *)(lVar14 + lVar15 * 8);
                if (lVar11 == 0) goto LAB_055d7b30;
                FUN_0556053c(lVar11,0);
                FUN_055d8110();
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                lVar11 = *(long *)(lVar14 + lVar15 * 8);
                if (lVar11 == 0) goto LAB_055d7b30;
                uVar5 = FUN_0556053c(lVar11,0);
                uVar8 = FUN_04f6ebb4(uVar5,0);
                if ((uVar8 & 1) == 0) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar16) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar11 = *(long *)(lVar14 + lVar15 * 8);
                  if (lVar11 == 0) goto LAB_055d7b30;
                  plVar4 = *(long **)(unaff_x22 + 0x28);
                  uVar5 = FUN_0556053c(lVar11,0);
                  if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                  uVar5 = (**(code **)(*plVar4 + 0x308))
                                    (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
                  lVar11 = FUN_04f7a6a0(plVar10,uVar5,0);
                  if (lVar11 == 0) goto LAB_055d7b30;
                  FUN_04f7a548(lVar11,0x3a,0);
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                lVar11 = *(long *)(lVar14 + lVar15 * 8);
                if (lVar11 == 0) goto LAB_055d7b30;
                uVar5 = FUN_0555e9b8(lVar11,0);
                plVar4 = plVar10;
              }
              FUN_04f79730(plVar4,uVar5,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
              plVar4 = *(long **)(lVar14 + lVar15 * 8);
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
              if (iVar3 == 2) {
LAB_055d71d4:
                System_Collections_Queue___ctor(plVar10,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_055d7b34;
                plVar4 = *(long **)(lVar14 + lVar15 * 8);
                if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                iVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                if (iVar3 == 4) goto LAB_055d71d4;
              }
              plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar4 + 0x518))
                        (plVar4,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar5,*(undefined8 *)(*plVar4 + 0x520));
              (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2e0));
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < *(int *)(lVar6 + 0x18));
          }
        }
        plVar10 = *(long **)(unaff_x22 + 0x78);
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar10 + 0x298))
                  (plVar10,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                   *(undefined8 *)(*plVar10 + 0x2a0));
        unaff_x28 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
        ;
      }
      else {
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x23);
        }
      }
      unaff_x29 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      unaff_x19 = FUN_0557af78(unaff_x27,0);
      param_1 = *(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


