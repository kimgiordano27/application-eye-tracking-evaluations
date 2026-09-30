/*
FUNCTION_NAME: System.Xml.XmlSqlBinaryReader$$GenerateTokenTypeMap
ENTRY_POINT: 055d7914
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


undefined8 System_Xml_XmlSqlBinaryReader__GenerateTokenTypeMap(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar17;
  int unaff_w26;
  long unaff_x27;
  long lVar18;
  long *unaff_x28;
  uint uVar19;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x055d7914:
  uVar11 = FUN_04f6ebb4(param_1,0);
  if ((uVar11 & 1) == 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x27) goto LAB_055d7b34;
    lVar12 = *(long *)(unaff_x20 + unaff_x27 * 8);
    if (lVar12 == 0) {
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar17 = *(long **)(unaff_x22 + 0x28);
    uVar13 = FUN_0556053c(lVar12,0);
    if (plVar17 == (long *)0x0) goto LAB_055d7b30;
    uVar13 = (**(code **)(*plVar17 + 0x308))(plVar17,uVar13,*(undefined8 *)(*plVar17 + 0x310));
    lVar12 = FUN_04f7a6a0(unaff_x23,uVar13,0);
    if (lVar12 == 0) goto LAB_055d7b30;
    FUN_04f7a548(lVar12,0x3a,0);
  }
  if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x27) goto LAB_055d7b34;
  lVar12 = *(long *)(unaff_x20 + unaff_x27 * 8);
  if (lVar12 != 0) {
    uVar13 = FUN_0555e9b8(lVar12,0);
    plVar17 = unaff_x23;
    do {
      FUN_04f79730(unaff_x23,uVar13,0);
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x27) goto LAB_055d7b34;
      plVar14 = *(long **)(unaff_x20 + unaff_x27 * 8);
      if (plVar14 == (long *)0x0) break;
      iVar3 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (iVar3 == 2) {
LAB_055d79f8:
        System_Collections_Queue___ctor(plVar17,0,0x40,0);
      }
      else {
        if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x27) goto LAB_055d7b34;
        plVar14 = *(long **)(unaff_x20 + unaff_x27 * 8);
        if (plVar14 == (long *)0x0) break;
        iVar3 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
        if (iVar3 == 4) goto LAB_055d79f8;
      }
      plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar13 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
      if (plVar14 == (long *)0x0) break;
      (**(code **)(*plVar14 + 0x518))
                (plVar14,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                 ,uVar13,*(undefined8 *)(*plVar14 + 0x520));
      (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar14,*(undefined8 *)(*unaff_x29 + 0x2e0));
      unaff_x27 = unaff_x27 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)unaff_x27) {
        do {
          do {
            plVar17 = *(long **)(unaff_x22 + 0x78);
            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar17 + 0x2a8))
                      (plVar17,unaff_x29,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar17 + 0x2b0));
            plVar17 = (long *)
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
                  plVar14 = (long *)FUN_0557b300();
                  if (plVar14 != (long *)0x0) {
                    bVar1 = *(byte *)(*unaff_x28 + 0x130);
                    if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
                       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28))
                    {
                      plVar4 = (long *)FUN_0557b300();
                      if (plVar4 == (long *)0x0) {
                        uVar11 = FUN_055da208();
                        if ((uVar11 & 1) == 0) goto LAB_055d7b30;
                      }
                      else {
                        bVar1 = *(byte *)(*unaff_x28 + 0x130);
                        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *unaff_x28)) goto LAB_055d7b38;
                        uVar11 = FUN_055da208();
                        if ((uVar11 & 1) == 0) {
                          lVar12 = plVar4[7];
                          plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
                            uVar13 = FUN_05546520(in_stack_00000020,0);
                            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                            (**(code **)(*plVar17 + 0x558))
                                      (plVar17,*(undefined8 *)
                                                Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                       ,*(undefined8 *)
                                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                       ,uVar13,*(undefined8 *)(*plVar17 + 0x560));
                          }
                          else {
                            lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                            if (lVar5 == 0) goto LAB_055d7b30;
                            iVar3 = FUN_0558c670(lVar5,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                            if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
                          }
                          uVar13 = FUN_0557af78(plVar4,0);
                          if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo
                                      + 0xe4) == 0) {
                            thunk_FUN_02f6670c(*(long *)
                                                Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                            ;
                          }
                          uVar13 = FUN_05819fc8(uVar13,0);
                          if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar17 + 0x518))
                                    (plVar17,*(undefined8 *)PTR_DAT_067cd778,uVar13,
                                     *(undefined8 *)(*plVar17 + 0x520));
                          uVar13 = (**(code **)(*plVar4 + 0x178))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x180));
                          uVar10 = FUN_0557af78(plVar4,0);
                          uVar11 = FUN_04f6dc3c(uVar13,uVar10,0);
                          if ((uVar11 & 1) != 0) {
                            uVar13 = (**(code **)(*plVar4 + 0x178))
                                               (plVar4,*(undefined8 *)(*plVar4 + 0x180));
                            (**(code **)(*plVar17 + 0x558))
                                      (plVar17,*(undefined8 *)
                                                Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                                       ,*(undefined8 *)
                                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                       ,uVar13,*(undefined8 *)(*plVar17 + 0x560));
                          }
                          FUN_055ccff4(plVar4[6],plVar17,0);
                          plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar13 = FUN_0554de78(in_stack_00000020,0);
                          uVar13 = FUN_04f6f6b4(*(undefined8 *)
                                                 Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                                ,in_stack_00000030,uVar13,0);
                          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar14 + 0x518))
                                    (plVar14,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar13,*(undefined8 *)(*plVar14 + 0x520));
                          (**(code **)(*plVar17 + 0x2d8))
                                    (plVar17,plVar14,*(undefined8 *)(*plVar17 + 0x2e0));
                          uVar11 = FUN_055afea0(plVar4,0);
                          if ((uVar11 & 1) != 0) {
                            (**(code **)(*plVar17 + 0x558))
                                      (plVar17,*(undefined8 *)
                                                Method_UnityEngine_UIElements_BaseSlider<float>__ctor__
                                       ,*(undefined8 *)
                                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                       ,*(undefined8 *)PTR_DAT_067cab38,
                                       *(undefined8 *)(*plVar17 + 0x560));
                          }
                          if (lVar12 == 0) goto LAB_055d7b30;
                          if (*(long *)(lVar12 + 0x18) != 0) {
                            plVar14 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                            FUN_04f77e78(plVar14,0);
                            if (0 < *(int *)(lVar12 + 0x18)) {
                              if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                              lVar18 = 0;
                              lVar5 = lVar12 + 0x20;
                              do {
                                FUN_04f78e50(plVar14,0,0);
                                uVar19 = (uint)lVar18;
                                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                                  plVar4 = (long *)FUN_04f79730(plVar14,in_stack_00000030,0);
                                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                  lVar9 = *(long *)(lVar5 + lVar18 * 8);
                                  if ((lVar9 == 0) ||
                                     (uVar13 = FUN_0555e9b8(lVar9,0), plVar4 == (long *)0x0))
                                  goto LAB_055d7b30;
                                }
                                else {
                                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                  lVar9 = *(long *)(lVar5 + lVar18 * 8);
                                  if (lVar9 == 0) goto LAB_055d7b30;
                                  FUN_0556053c(lVar9,0);
                                  FUN_055d8110();
                                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                  lVar9 = *(long *)(lVar5 + lVar18 * 8);
                                  if (lVar9 == 0) goto LAB_055d7b30;
                                  uVar13 = FUN_0556053c(lVar9,0);
                                  uVar11 = FUN_04f6ebb4(uVar13,0);
                                  if ((uVar11 & 1) == 0) {
                                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                    lVar9 = *(long *)(lVar5 + lVar18 * 8);
                                    if (lVar9 == 0) goto LAB_055d7b30;
                                    plVar4 = *(long **)(unaff_x22 + 0x28);
                                    uVar13 = FUN_0556053c(lVar9,0);
                                    if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                                    uVar13 = (**(code **)(*plVar4 + 0x308))
                                                       (plVar4,uVar13,
                                                        *(undefined8 *)(*plVar4 + 0x310));
                                    lVar9 = FUN_04f7a6a0(plVar14,uVar13,0);
                                    if (lVar9 == 0) goto LAB_055d7b30;
                                    FUN_04f7a548(lVar9,0x3a,0);
                                  }
                                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                  lVar9 = *(long *)(lVar5 + lVar18 * 8);
                                  if (lVar9 == 0) goto LAB_055d7b30;
                                  uVar13 = FUN_0555e9b8(lVar9,0);
                                  plVar4 = plVar14;
                                }
                                FUN_04f79730(plVar4,uVar13,0);
                                if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                plVar4 = *(long **)(lVar5 + lVar18 * 8);
                                if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                                iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                                if (iVar3 == 2) {
LAB_055d6c94:
                                  System_Collections_Queue___ctor(plVar14,0,0x40,0);
                                }
                                else {
                                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                                  plVar4 = *(long **)(lVar5 + lVar18 * 8);
                                  if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                                  iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                                    (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                                  if (iVar3 == 4) goto LAB_055d6c94;
                                }
                                plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                                uVar13 = (**(code **)(*plVar14 + 0x168))
                                                   (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                                if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                                (**(code **)(*plVar4 + 0x518))
                                          (plVar4,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                           ,uVar13,*(undefined8 *)(*plVar4 + 0x520));
                                (**(code **)(*plVar17 + 0x2d8))
                                          (plVar17,plVar4,*(undefined8 *)(*plVar17 + 0x2e0));
                                lVar18 = lVar18 + 1;
                              } while ((int)lVar18 < *(int *)(lVar12 + 0x18));
                            }
                          }
                          plVar14 = *(long **)(unaff_x22 + 0x78);
                          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar14 + 0x298))
                                    (plVar14,plVar17,*(undefined8 *)(unaff_x22 + 0x80),
                                     *(undefined8 *)(*plVar14 + 0x2a0));
                          plVar17 = (long *)
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
                  plVar14 = (long *)FUN_0557b300();
                } while (plVar14 == (long *)0x0);
                bVar1 = *(byte *)(*plVar17 + 0x130);
              } while (((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
                      || ((in_stack_00000028 & 0x100000000) == 0));
              plVar14 = (long *)FUN_0557b300();
              if (plVar14 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar17 + 0x130);
                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar14);
                }
              }
              plVar4 = *(long **)(unaff_x22 + 0x38);
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
              if (0 < iVar3) {
                if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                plVar17 = *(long **)(unaff_x22 + 0x38);
                uVar13 = (**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
                if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                uVar11 = (**(code **)(*plVar17 + 0x348))
                                   (plVar17,uVar13,*(undefined8 *)(*plVar17 + 0x350));
                plVar17 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar11 & 1) != 0) {
                  plVar17 = *(long **)(unaff_x22 + 0x38);
                  uVar13 = (**(code **)(*plVar14 + 0x1b8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                  if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                  uVar11 = (**(code **)(*plVar17 + 0x348))
                                     (plVar17,uVar13,*(undefined8 *)(*plVar17 + 0x350));
                  plVar17 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar11 & 1) != 0) && (uVar11 = FUN_055da208(), (uVar11 & 1) == 0))
                  goto LAB_055d6d90;
                }
                goto LAB_055d7adc;
              }
              uVar11 = FUN_055da208();
            } while ((uVar11 & 1) != 0);
            if (plVar14 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
            plVar17 = (long *)FUN_055a5390(plVar14,0);
            lVar12 = FUN_055a4c24(plVar14,0);
            lVar5 = (**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
            if (lVar5 == 0) goto LAB_055d7b30;
            lVar5 = *(long *)(lVar5 + 0x48);
            uVar13 = thunk_FUN_02f45270(*unaff_x28);
            FUN_055aee44(uVar13,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                         ,lVar12,0);
            if (lVar5 == 0) goto LAB_055d7b30;
            plVar4 = (long *)FUN_0557ba08(lVar5,uVar13,0);
            if (plVar4 == (long *)0x0) {
              plVar6 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar13 = FUN_0557af78(plVar14,0);
              if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
              }
              uVar13 = FUN_05819fc8(uVar13,0);
              if (plVar6 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar6 + 0x518))
                        (plVar6,*(undefined8 *)PTR_DAT_067cd778,uVar13,
                         *(undefined8 *)(*plVar6 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                uVar13 = FUN_05546520(in_stack_00000020,0);
                (**(code **)(*plVar6 + 0x558))
                          (plVar6,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           uVar13,*(undefined8 *)(*plVar6 + 0x560));
              }
              else {
                lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar5 == 0) goto LAB_055d7b30;
                iVar3 = FUN_0558c670(lVar5,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar3 == -3) goto LAB_055d6f20;
              }
              plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar5 = (**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
              if (lVar5 == 0) goto LAB_055d7b30;
              uVar13 = FUN_0554de78(lVar5,0);
              uVar13 = FUN_04f6f6b4(*(undefined8 *)
                                     Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                    ,in_stack_00000030,uVar13,0);
              if (plVar7 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar7 + 0x518))
                        (plVar7,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar13,*(undefined8 *)(*plVar7 + 0x520));
              (**(code **)(*plVar6 + 0x2d8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x2e0));
              if (lVar12 == 0) goto LAB_055d7b30;
              if (*(long *)(lVar12 + 0x18) != 0) {
                plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                FUN_04f77e78(plVar7,0);
                if (0 < *(int *)(lVar12 + 0x18)) {
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                  lVar18 = 0;
                  lVar5 = lVar12 + 0x20;
                  do {
                    FUN_04f78e50(plVar7,0,0);
                    uVar19 = (uint)lVar18;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar8 = (long *)FUN_04f79730(plVar7,in_stack_00000030,0);
                      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                      lVar9 = *(long *)(lVar5 + lVar18 * 8);
                      if ((lVar9 == 0) || (uVar13 = FUN_0555e9b8(lVar9,0), plVar8 == (long *)0x0))
                      goto LAB_055d7b30;
                    }
                    else {
                      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                      lVar9 = *(long *)(lVar5 + lVar18 * 8);
                      if (lVar9 == 0) goto LAB_055d7b30;
                      FUN_0556053c(lVar9,0);
                      FUN_055d8110();
                      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                      lVar9 = *(long *)(lVar5 + lVar18 * 8);
                      if (lVar9 == 0) goto LAB_055d7b30;
                      uVar13 = FUN_0556053c(lVar9,0);
                      uVar11 = FUN_04f6ebb4(uVar13,0);
                      if ((uVar11 & 1) == 0) {
                        if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                        lVar9 = *(long *)(lVar5 + lVar18 * 8);
                        if (lVar9 == 0) goto LAB_055d7b30;
                        plVar8 = *(long **)(unaff_x22 + 0x28);
                        uVar13 = FUN_0556053c(lVar9,0);
                        if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                        uVar13 = (**(code **)(*plVar8 + 0x308))
                                           (plVar8,uVar13,*(undefined8 *)(*plVar8 + 0x310));
                        lVar9 = FUN_04f7a6a0(plVar7,uVar13,0);
                        if (lVar9 == 0) goto LAB_055d7b30;
                        FUN_04f7a548(lVar9,0x3a,0);
                      }
                      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                      lVar9 = *(long *)(lVar5 + lVar18 * 8);
                      if (lVar9 == 0) goto LAB_055d7b30;
                      uVar13 = FUN_0555e9b8(lVar9,0);
                      plVar8 = plVar7;
                    }
                    FUN_04f79730(plVar8,uVar13,0);
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                    plVar8 = *(long **)(lVar5 + lVar18 * 8);
                    if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                    if (iVar3 == 2) {
LAB_055d71d4:
                      System_Collections_Queue___ctor(plVar7,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_055d7b34;
                      plVar8 = *(long **)(lVar5 + lVar18 * 8);
                      if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                      iVar3 = (**(code **)(*plVar8 + 0x1d8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                      if (iVar3 == 4) goto LAB_055d71d4;
                    }
                    plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar13 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170))
                    ;
                    if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar8 + 0x518))
                              (plVar8,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar13,*(undefined8 *)(*plVar8 + 0x520));
                    (**(code **)(*plVar6 + 0x2d8))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x2e0));
                    lVar18 = lVar18 + 1;
                  } while ((int)lVar18 < *(int *)(lVar12 + 0x18));
                }
              }
              plVar7 = *(long **)(unaff_x22 + 0x78);
              if (plVar7 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar7 + 0x298))
                        (plVar7,plVar6,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar7 + 0x2a0));
              unaff_x28 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
              ;
            }
            else {
              bVar1 = *(byte *)(*unaff_x28 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar4);
              }
            }
            unaff_x29 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar13 = FUN_0557af78(plVar14,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar13 = FUN_05819fc8(uVar13,0);
            if (unaff_x29 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*unaff_x29 + 0x518))
                      (unaff_x29,*(undefined8 *)PTR_DAT_067cd778,uVar13,
                       *(undefined8 *)(*unaff_x29 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
              lVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
              if (lVar12 == 0) goto LAB_055d7b30;
              uVar13 = FUN_05546520(lVar12,0);
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                         ,*(undefined8 *)
                           UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar13,*(undefined8 *)(*unaff_x29 + 0x560));
            }
            else {
              lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar12 = (**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
              if ((lVar12 == 0) || (lVar5 == 0)) goto LAB_055d7b30;
              iVar3 = FUN_0558c670(lVar5,*(undefined8 *)(lVar12 + 0x90),0);
              if (iVar3 == -3) goto LAB_055d738c;
            }
            plVar6 = plVar14;
            if (plVar4 != (long *)0x0) {
              plVar6 = plVar4;
            }
            uVar13 = FUN_0557af78(plVar6,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar13 = FUN_05819fc8(uVar13,0);
            (**(code **)(*unaff_x29 + 0x518))
                      (unaff_x29,
                       *(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                       ,uVar13,*(undefined8 *)(*unaff_x29 + 0x520));
            lVar12 = plVar14[6];
            uVar13 = *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
            ;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar13 = FUN_050e4454(uVar13,0);
            FUN_055ccff4(lVar12,unaff_x29,uVar13);
            uVar13 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
            uVar10 = FUN_0557af78(plVar14,0);
            uVar11 = FUN_04f6dc3c(uVar13,uVar10,0);
            if ((uVar11 & 1) != 0) {
              uVar13 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar13,*(undefined8 *)(*unaff_x29 + 0x560));
            }
            if (plVar17 == (long *)0x0) {
              lVar12 = *unaff_x29;
              uVar10 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
              uVar15 = *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
              uVar16 = *(undefined8 *)(lVar12 + 0x560);
              uVar13 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
              (**(code **)(lVar12 + 0x558))(unaff_x29,uVar10,uVar15,uVar13,uVar16);
            }
            else {
              uVar11 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
              if ((uVar11 & 1) != 0) {
                (**(code **)(*unaff_x29 + 0x558))
                          (unaff_x29,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*unaff_x29 + 0x560));
              }
              lVar12 = plVar17[3];
              uVar13 = *(undefined8 *)
                        Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar13 = FUN_050e4454(uVar13,0);
              FUN_055ccff4(lVar12,unaff_x29,uVar13);
              uVar13 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
              uVar10 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
              uVar11 = FUN_04f6dc3c(uVar13,uVar10,0);
              if ((uVar11 & 1) != 0) {
                uVar13 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                }
                uVar13 = FUN_05819fc8(uVar13,0);
                lVar12 = *unaff_x29;
                uVar10 = *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                uVar16 = *(undefined8 *)(lVar12 + 0x560);
                uVar15 = *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                goto LAB_055d7658;
              }
            }
            plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar13 = FUN_0554de78(in_stack_00000020,0);
            uVar13 = FUN_04f6f6b4(*(undefined8 *)
                                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                  ,in_stack_00000030,uVar13,0);
            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar13,*(undefined8 *)(*plVar17 + 0x520));
            (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar17,*(undefined8 *)(*unaff_x29 + 0x2e0))
            ;
            iVar3 = (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280));
            puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
            if (iVar3 != 0) {
              (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280));
              uVar13 = FUN_055d9b50();
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                         *(undefined8 *)puVar2,uVar13,*(undefined8 *)(*unaff_x29 + 0x560));
            }
            iVar3 = (**(code **)(*plVar14 + 0x2d8))(plVar14,*(undefined8 *)(*plVar14 + 0x2e0));
            if (iVar3 != 1) {
              (**(code **)(*plVar14 + 0x2d8))(plVar14,*(undefined8 *)(*plVar14 + 0x2e0));
              uVar13 = FUN_055d9bc0();
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                         ,*(undefined8 *)puVar2,uVar13,*(undefined8 *)(*unaff_x29 + 0x560));
            }
            iVar3 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
            if (iVar3 != 1) {
              (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
              uVar13 = FUN_055d9bc0();
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                         *(undefined8 *)puVar2,uVar13,*(undefined8 *)(*unaff_x29 + 0x560));
            }
            unaff_x19 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
            if (unaff_x19 == 0) goto LAB_055d7b30;
          } while (*(long *)(unaff_x19 + 0x18) == 0);
          plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar17,0);
        } while (*(int *)(unaff_x19 + 0x18) < 1);
        if (plVar17 == (long *)0x0) break;
        unaff_x27 = 0;
        unaff_x20 = unaff_x19 + 0x20;
      }
      FUN_04f78e50(plVar17,0,0);
      uVar19 = (uint)unaff_x27;
      if (*(int *)(unaff_x22 + 0x5c) != 2) goto LAB_055d78d0;
      unaff_x23 = (long *)FUN_04f79730(plVar17,in_stack_00000030,0);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
      lVar12 = *(long *)(unaff_x20 + unaff_x27 * 8);
      if ((lVar12 == 0) || (uVar13 = FUN_0555e9b8(lVar12,0), unaff_x23 == (long *)0x0)) break;
    } while( true );
  }
  goto LAB_055d7b30;
LAB_055d78d0:
  if (uVar19 < *(uint *)(unaff_x19 + 0x18)) {
    lVar12 = *(long *)(unaff_x20 + unaff_x27 * 8);
    if (lVar12 == 0) goto LAB_055d7b30;
    FUN_0556053c(lVar12,0);
    FUN_055d8110();
    if (uVar19 < *(uint *)(unaff_x19 + 0x18)) {
      lVar12 = *(long *)(unaff_x20 + unaff_x27 * 8);
      if (lVar12 == 0) goto LAB_055d7b30;
      param_1 = FUN_0556053c(lVar12,0);
      unaff_x23 = plVar17;
      goto code_r0x055d7914;
    }
  }
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


