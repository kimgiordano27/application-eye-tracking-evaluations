/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdKatmaiDateTimeOffsetToDateTime
ENTRY_POINT: 055d660c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 214
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_5
*/


undefined8
System_Xml_BinXmlDateTime__XsdKatmaiDateTimeOffsetToDateTime
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *in_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long lVar20;
  uint uVar21;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  
  plVar5 = (long *)(*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x310));
  if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  uVar6 = FUN_04f65260(plVar5,*(undefined8 *)PTR_DAT_067ce970,0);
  if (unaff_x24 != (long *)0x0) {
    iVar3 = (**(code **)(*unaff_x24 + 0x1c8))();
    if (0 < iVar3) {
      iVar3 = 0;
      plVar5 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar13 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar7 = (long *)FUN_0557b300();
        if (plVar7 == (long *)0x0) {
LAB_055d66d4:
          plVar7 = (long *)FUN_0557b300();
          if (plVar7 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar5 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
                (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *plVar5)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar7 = (long *)FUN_0557b300();
              if (plVar7 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar5 + 0x130);
                if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar7);
                }
              }
              plVar8 = *(long **)(unaff_x22 + 0x38);
              if (plVar8 == (long *)0x0) goto LAB_055d7b30;
              iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
              if (iVar4 < 1) {
                uVar10 = FUN_055da208();
                if ((uVar10 & 1) == 0) {
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar5 = (long *)FUN_055a5390(plVar7,0);
                  lVar11 = FUN_055a4c24(plVar7,0);
                  lVar12 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
                  if (lVar12 == 0) goto LAB_055d7b30;
                  lVar12 = *(long *)(lVar12 + 0x48);
                  uVar9 = thunk_FUN_02f45270(*plVar13);
                  FUN_055aee44(uVar9,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar11,0);
                  if (lVar12 == 0) goto LAB_055d7b30;
                  plVar8 = (long *)FUN_0557ba08(lVar12,uVar9,0);
                  if (plVar8 == (long *)0x0) {
                    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar9 = FUN_0557af78(plVar7,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar9 = FUN_05819fc8(uVar9,0);
                    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar13 + 0x518))
                              (plVar13,*(undefined8 *)PTR_DAT_067cd778,uVar9,
                               *(undefined8 *)(*plVar13 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar9 = FUN_05546520(in_stack_00000020,0);
                      (**(code **)(*plVar13 + 0x558))
                                (plVar13,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar9,*(undefined8 *)(*plVar13 + 0x560));
                    }
                    else {
                      lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      iVar4 = FUN_0558c670(lVar12,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar4 == -3) goto LAB_055d6f20;
                    }
                    plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar12 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0))
                    ;
                    if (lVar12 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0554de78(lVar12,0);
                    uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                         ,uVar6,uVar9,0);
                    if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar15 + 0x518))
                              (plVar15,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar9,*(undefined8 *)(*plVar15 + 0x520));
                    (**(code **)(*plVar13 + 0x2d8))
                              (plVar13,plVar15,*(undefined8 *)(*plVar13 + 0x2e0));
                    if (lVar11 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar11 + 0x18) != 0) {
                      plVar15 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar15,0);
                      if (0 < *(int *)(lVar11 + 0x18)) {
                        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                        lVar20 = 0;
                        lVar12 = lVar11 + 0x20;
                        do {
                          FUN_04f78e50(plVar15,0,0);
                          uVar21 = (uint)lVar20;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar14 = (long *)FUN_04f79730(plVar15,uVar6,0);
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar12 + lVar20 * 8);
                            if ((lVar17 == 0) ||
                               (uVar9 = FUN_0555e9b8(lVar17,0), plVar14 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar12 + lVar20 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar17,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar12 + lVar20 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            uVar9 = FUN_0556053c(lVar17,0);
                            uVar10 = FUN_04f6ebb4(uVar9,0);
                            if ((uVar10 & 1) == 0) {
                              if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                              lVar17 = *(long *)(lVar12 + lVar20 * 8);
                              if (lVar17 == 0) goto LAB_055d7b30;
                              plVar14 = *(long **)(unaff_x22 + 0x28);
                              uVar9 = FUN_0556053c(lVar17,0);
                              if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                              uVar9 = (**(code **)(*plVar14 + 0x308))
                                                (plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x310));
                              lVar17 = FUN_04f7a6a0(plVar15,uVar9,0);
                              if (lVar17 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar17,0x3a,0);
                            }
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar12 + lVar20 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            uVar9 = FUN_0555e9b8(lVar17,0);
                            plVar14 = plVar15;
                          }
                          FUN_04f79730(plVar14,uVar9,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          plVar14 = *(long **)(lVar12 + lVar20 * 8);
                          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                          iVar4 = (**(code **)(*plVar14 + 0x1d8))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                          if (iVar4 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar15,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            plVar14 = *(long **)(lVar12 + lVar20 * 8);
                            if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                            iVar4 = (**(code **)(*plVar14 + 0x1d8))
                                              (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                            if (iVar4 == 4) goto LAB_055d71d4;
                          }
                          plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar9 = (**(code **)(*plVar15 + 0x168))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar14 + 0x518))
                                    (plVar14,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar9,*(undefined8 *)(*plVar14 + 0x520));
                          (**(code **)(*plVar13 + 0x2d8))
                                    (plVar13,plVar14,*(undefined8 *)(*plVar13 + 0x2e0));
                          lVar20 = lVar20 + 1;
                        } while ((int)lVar20 < *(int *)(lVar11 + 0x18));
                      }
                    }
                    plVar15 = *(long **)(unaff_x22 + 0x78);
                    if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar15 + 0x298))
                              (plVar15,plVar13,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar15 + 0x2a0));
                    plVar13 = (long *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar13 + 0x130);
                    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar8);
                    }
                  }
                  plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = FUN_0557af78(plVar7,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar9 = FUN_05819fc8(uVar9,0);
                  if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar15 + 0x518))
                            (plVar15,*(undefined8 *)PTR_DAT_067cd778,uVar9,
                             *(undefined8 *)(*plVar15 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0))
                    ;
                    if (lVar11 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_05546520(lVar11,0);
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar9,*(undefined8 *)(*plVar15 + 0x560));
                  }
                  else {
                    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar11 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0))
                    ;
                    if ((lVar11 == 0) || (lVar12 == 0)) goto LAB_055d7b30;
                    iVar4 = FUN_0558c670(lVar12,*(undefined8 *)(lVar11 + 0x90),0);
                    if (iVar4 == -3) goto LAB_055d738c;
                  }
                  plVar14 = plVar7;
                  if (plVar8 != (long *)0x0) {
                    plVar14 = plVar8;
                  }
                  uVar9 = FUN_0557af78(plVar14,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar9 = FUN_05819fc8(uVar9,0);
                  (**(code **)(*plVar15 + 0x518))
                            (plVar15,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar9,*(undefined8 *)(*plVar15 + 0x520));
                  lVar11 = plVar7[6];
                  uVar9 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar9 = FUN_050e4454(uVar9,0);
                  FUN_055ccff4(lVar11,plVar15,uVar9);
                  uVar9 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
                  uVar16 = FUN_0557af78(plVar7,0);
                  uVar10 = FUN_04f6dc3c(uVar9,uVar16,0);
                  if ((uVar10 & 1) != 0) {
                    uVar9 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar9,*(undefined8 *)(*plVar15 + 0x560));
                  }
                  if (plVar5 == (long *)0x0) {
                    lVar11 = *plVar15;
                    uVar16 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar18 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar19 = *(undefined8 *)(lVar11 + 0x560);
                    uVar9 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar11 + 0x558))(plVar15,uVar16,uVar18,uVar9,uVar19);
                  }
                  else {
                    uVar10 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0))
                    ;
                    if ((uVar10 & 1) != 0) {
                      (**(code **)(*plVar15 + 0x558))
                                (plVar15,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar15 + 0x560))
                      ;
                    }
                    lVar11 = plVar5[3];
                    uVar9 = *(undefined8 *)
                             Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar9 = FUN_050e4454(uVar9,0);
                    FUN_055ccff4(lVar11,plVar15,uVar9);
                    uVar9 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
                    uVar16 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0))
                    ;
                    uVar10 = FUN_04f6dc3c(uVar9,uVar16,0);
                    if ((uVar10 & 1) != 0) {
                      uVar9 = (**(code **)(*plVar5 + 0x1c8))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar9 = FUN_05819fc8(uVar9,0);
                      lVar11 = *plVar15;
                      uVar16 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar19 = *(undefined8 *)(lVar11 + 0x560);
                      uVar18 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = FUN_0554de78(in_stack_00000020,0);
                  uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                       ,uVar6,uVar9,0);
                  if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar5 + 0x518))
                            (plVar5,*(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar9,*(undefined8 *)(*plVar5 + 0x520));
                  (**(code **)(*plVar15 + 0x2d8))(plVar15,plVar5,*(undefined8 *)(*plVar15 + 0x2e0));
                  iVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
                  puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar4 != 0) {
                    (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
                    uVar9 = FUN_055d9b50();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar15 + 0x560));
                  }
                  iVar4 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
                  if (iVar4 != 1) {
                    (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
                    uVar9 = FUN_055d9bc0();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar15 + 0x560));
                  }
                  iVar4 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
                  if (iVar4 != 1) {
                    (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
                    uVar9 = FUN_055d9bc0();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar15 + 0x560));
                  }
                  lVar11 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
                  if (lVar11 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar11 + 0x18) != 0) {
                    plVar5 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar5,0);
                    if (0 < *(int *)(lVar11 + 0x18)) {
                      if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                      lVar20 = 0;
                      lVar12 = lVar11 + 0x20;
                      do {
                        FUN_04f78e50(plVar5,0,0);
                        uVar21 = (uint)lVar20;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar7 = (long *)FUN_04f79730(plVar5,uVar6,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar12 + lVar20 * 8);
                          if ((lVar17 == 0) ||
                             (uVar9 = FUN_0555e9b8(lVar17,0), plVar7 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar12 + lVar20 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar17,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar12 + lVar20 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          uVar9 = FUN_0556053c(lVar17,0);
                          uVar10 = FUN_04f6ebb4(uVar9,0);
                          if ((uVar10 & 1) == 0) {
                            if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar12 + lVar20 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            plVar7 = *(long **)(unaff_x22 + 0x28);
                            uVar9 = FUN_0556053c(lVar17,0);
                            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                            uVar9 = (**(code **)(*plVar7 + 0x308))
                                              (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x310));
                            lVar17 = FUN_04f7a6a0(plVar5,uVar9,0);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar17,0x3a,0);
                          }
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar12 + lVar20 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          uVar9 = FUN_0555e9b8(lVar17,0);
                          plVar7 = plVar5;
                        }
                        FUN_04f79730(plVar7,uVar9,0);
                        if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                        plVar7 = *(long **)(lVar12 + lVar20 * 8);
                        if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                        iVar4 = (**(code **)(*plVar7 + 0x1d8))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                        if (iVar4 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar5,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                          plVar7 = *(long **)(lVar12 + lVar20 * 8);
                          if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                          iVar4 = (**(code **)(*plVar7 + 0x1d8))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                          if (iVar4 == 4) goto LAB_055d79f8;
                        }
                        plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar9 = (**(code **)(*plVar5 + 0x168))
                                          (plVar5,*(undefined8 *)(*plVar5 + 0x170));
                        if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar7 + 0x518))
                                  (plVar7,*(undefined8 *)
                                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar9,*(undefined8 *)(*plVar7 + 0x520));
                        (**(code **)(*plVar15 + 0x2d8))
                                  (plVar15,plVar7,*(undefined8 *)(*plVar15 + 0x2e0));
                        lVar20 = lVar20 + 1;
                      } while ((int)lVar20 < *(int *)(lVar11 + 0x18));
                    }
                  }
                  plVar5 = *(long **)(unaff_x22 + 0x78);
                  if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar5 + 0x2a8))
                            (plVar5,plVar15,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar5 + 0x2b0));
                  plVar5 = (long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  unaff_x20 = in_stack_00000020;
                }
              }
              else {
                if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                plVar5 = *(long **)(unaff_x22 + 0x38);
                uVar9 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
                if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                uVar10 = (**(code **)(*plVar5 + 0x348))
                                   (plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x350));
                plVar5 = (long *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar10 & 1) != 0) {
                  plVar5 = *(long **)(unaff_x22 + 0x38);
                  uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                  if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                  uVar10 = (**(code **)(*plVar5 + 0x348))
                                     (plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x350));
                  plVar5 = (long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar10 & 1) != 0) && (uVar10 = FUN_055da208(), (uVar10 & 1) == 0))
                  goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar13 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13))
          goto LAB_055d66d4;
          plVar8 = (long *)FUN_0557b300();
          if (plVar8 == (long *)0x0) {
            uVar10 = FUN_055da208();
            if ((uVar10 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar1 = *(byte *)(*plVar13 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13))
            goto LAB_055d7b38;
            uVar10 = FUN_055da208();
            if ((uVar10 & 1) != 0) goto LAB_055d7adc;
            lVar11 = plVar8[7];
            plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar9 = FUN_05546520(unaff_x20,0);
              if (plVar5 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar5 + 0x558))
                        (plVar5,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar9,*(undefined8 *)(*plVar5 + 0x560));
            }
            else {
              lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar12 == 0) goto LAB_055d7b30;
              iVar4 = FUN_0558c670(lVar12,*(undefined8 *)(unaff_x20 + 0x90),0);
              if (iVar4 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar9 = FUN_0557af78(plVar8,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar9 = FUN_05819fc8(uVar9,0);
            if (plVar5 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar5 + 0x518))
                      (plVar5,*(undefined8 *)PTR_DAT_067cd778,uVar9,*(undefined8 *)(*plVar5 + 0x520)
                      );
            uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            uVar16 = FUN_0557af78(plVar8,0);
            uVar10 = FUN_04f6dc3c(uVar9,uVar16,0);
            if ((uVar10 & 1) != 0) {
              uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              (**(code **)(*plVar5 + 0x558))
                        (plVar5,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar9,*(undefined8 *)(*plVar5 + 0x560));
            }
            FUN_055ccff4(plVar8[6],plVar5,0);
            plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar9 = FUN_0554de78(unaff_x20,0);
            uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,uVar6,uVar9,0);
            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar13 + 0x518))
                      (plVar13,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar9,*(undefined8 *)(*plVar13 + 0x520));
            (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar13,*(undefined8 *)(*plVar5 + 0x2e0));
            uVar10 = FUN_055afea0(plVar8,0);
            if ((uVar10 & 1) != 0) {
              (**(code **)(*plVar5 + 0x558))
                        (plVar5,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar5 + 0x560));
            }
            if (lVar11 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar13,0);
              if (0 < *(int *)(lVar11 + 0x18)) {
                if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                lVar20 = 0;
                lVar12 = lVar11 + 0x20;
                do {
                  FUN_04f78e50(plVar13,0,0);
                  uVar21 = (uint)lVar20;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar7 = (long *)FUN_04f79730(plVar13,uVar6,0);
                    if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar12 + lVar20 * 8);
                    if ((lVar17 == 0) || (uVar9 = FUN_0555e9b8(lVar17,0), plVar7 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar12 + lVar20 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar17,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar12 + lVar20 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0556053c(lVar17,0);
                    uVar10 = FUN_04f6ebb4(uVar9,0);
                    if ((uVar10 & 1) == 0) {
                      if (*(uint *)(lVar11 + 0x18) <= uVar21) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar17 = *(long *)(lVar12 + lVar20 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      plVar7 = *(long **)(unaff_x22 + 0x28);
                      uVar9 = FUN_0556053c(lVar17,0);
                      if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                      uVar9 = (**(code **)(*plVar7 + 0x308))
                                        (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x310));
                      lVar17 = FUN_04f7a6a0(plVar13,uVar9,0);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar17,0x3a,0);
                    }
                    if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar12 + lVar20 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0555e9b8(lVar17,0);
                    plVar7 = plVar13;
                  }
                  FUN_04f79730(plVar7,uVar9,0);
                  if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                  plVar7 = *(long **)(lVar12 + lVar20 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                  iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                  if (iVar4 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar13,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_055d7b34;
                    plVar7 = *(long **)(lVar12 + lVar20 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                    iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    if (iVar4 == 4) goto LAB_055d6c94;
                  }
                  plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170))
                  ;
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar7 + 0x518))
                            (plVar7,*(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar9,*(undefined8 *)(*plVar7 + 0x520));
                  (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2e0));
                  lVar20 = lVar20 + 1;
                } while ((int)lVar20 < *(int *)(lVar11 + 0x18));
              }
            }
            plVar13 = *(long **)(unaff_x22 + 0x78);
            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar13 + 0x298))
                      (plVar13,plVar5,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar13 + 0x2a0));
            plVar5 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            unaff_x20 = in_stack_00000020;
            plVar13 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar3 = iVar3 + 1;
        iVar4 = (**(code **)(*unaff_x24 + 0x1c8))();
      } while (iVar3 < iVar4);
    }
    FUN_055ccff4(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


