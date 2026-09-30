/*
FUNCTION_NAME: System.Xml.XmlSqlBinaryReader$$AddInitNamespace
ENTRY_POINT: 055d7840
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 230
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 System_Xml_XmlSqlBinaryReader__AddInitNamespace(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int unaff_w26;
  long lVar18;
  long *unaff_x28;
  uint uVar19;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    plVar12 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
    FUN_04f77e78(plVar12,0);
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      if (plVar12 == (long *)0x0) {
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar18 = 0;
      lVar6 = unaff_x19 + 0x20;
      do {
        FUN_04f78e50(plVar12,0,0);
        uVar19 = (uint)lVar18;
        if (*(int *)(unaff_x22 + 0x5c) == 2) {
          plVar13 = (long *)FUN_04f79730(plVar12,in_stack_00000030,0);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
          lVar14 = *(long *)(lVar6 + lVar18 * 8);
          if ((lVar14 == 0) || (uVar15 = FUN_0555e9b8(lVar14,0), plVar13 == (long *)0x0))
          goto LAB_055d7b30;
        }
        else {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
          lVar14 = *(long *)(lVar6 + lVar18 * 8);
          if (lVar14 == 0) goto LAB_055d7b30;
          FUN_0556053c(lVar14,0);
          FUN_055d8110();
          if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
          lVar14 = *(long *)(lVar6 + lVar18 * 8);
          if (lVar14 == 0) goto LAB_055d7b30;
          uVar15 = FUN_0556053c(lVar14,0);
          uVar5 = FUN_04f6ebb4(uVar15,0);
          if ((uVar5 & 1) == 0) {
            if (*(uint *)(unaff_x19 + 0x18) <= uVar19) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            lVar14 = *(long *)(lVar6 + lVar18 * 8);
            if (lVar14 == 0) goto LAB_055d7b30;
            plVar13 = *(long **)(unaff_x22 + 0x28);
            uVar15 = FUN_0556053c(lVar14,0);
            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
            uVar15 = (**(code **)(*plVar13 + 0x308))
                               (plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
            lVar14 = FUN_04f7a6a0(plVar12,uVar15,0);
            if (lVar14 == 0) goto LAB_055d7b30;
            FUN_04f7a548(lVar14,0x3a,0);
          }
          if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
          lVar14 = *(long *)(lVar6 + lVar18 * 8);
          if (lVar14 == 0) goto LAB_055d7b30;
          uVar15 = FUN_0555e9b8(lVar14,0);
          plVar13 = plVar12;
        }
        FUN_04f79730(plVar13,uVar15,0);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
        plVar13 = *(long **)(lVar6 + lVar18 * 8);
        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
        iVar3 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
        if (iVar3 == 2) {
LAB_055d79f8:
          System_Collections_Queue___ctor(plVar12,0,0x40,0);
        }
        else {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_055d7b34;
          plVar13 = *(long **)(lVar6 + lVar18 * 8);
          if (plVar13 == (long *)0x0) goto LAB_055d7b30;
          iVar3 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
          if (iVar3 == 4) goto LAB_055d79f8;
        }
        plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar13 + 0x518))
                  (plVar13,*(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                   ,uVar15,*(undefined8 *)(*plVar13 + 0x520));
        (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar13,*(undefined8 *)(*unaff_x29 + 0x2e0));
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < *(int *)(unaff_x19 + 0x18));
    }
    do {
      plVar12 = *(long **)(unaff_x22 + 0x78);
      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar12 + 0x2a8))
                (plVar12,unaff_x29,*(undefined8 *)(unaff_x22 + 0x80),
                 *(undefined8 *)(*plVar12 + 0x2b0));
      plVar12 = (long *)
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
            plVar13 = (long *)FUN_0557b300();
            if (plVar13 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x28 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
                plVar4 = (long *)FUN_0557b300();
                if (plVar4 == (long *)0x0) {
                  uVar5 = FUN_055da208();
                  if ((uVar5 & 1) == 0) goto LAB_055d7b30;
                }
                else {
                  bVar1 = *(byte *)(*unaff_x28 + 0x130);
                  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28))
                  goto LAB_055d7b38;
                  uVar5 = FUN_055da208();
                  if ((uVar5 & 1) == 0) {
                    lVar6 = plVar4[7];
                    plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
                      uVar15 = FUN_05546520(in_stack_00000020,0);
                      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                      (**(code **)(*plVar12 + 0x558))
                                (plVar12,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar15,*(undefined8 *)(*plVar12 + 0x560));
                    }
                    else {
                      lVar18 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar18 == 0) goto LAB_055d7b30;
                      iVar3 = FUN_0558c670(lVar18,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
                    }
                    uVar15 = FUN_0557af78(plVar4,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar15 = FUN_05819fc8(uVar15,0);
                    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar12 + 0x518))
                              (plVar12,*(undefined8 *)PTR_DAT_067cd778,uVar15,
                               *(undefined8 *)(*plVar12 + 0x520));
                    uVar15 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180))
                    ;
                    uVar11 = FUN_0557af78(plVar4,0);
                    uVar5 = FUN_04f6dc3c(uVar15,uVar11,0);
                    if ((uVar5 & 1) != 0) {
                      uVar15 = (**(code **)(*plVar4 + 0x178))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x180));
                      (**(code **)(*plVar12 + 0x558))
                                (plVar12,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar15,*(undefined8 *)(*plVar12 + 0x560));
                    }
                    FUN_055ccff4(plVar4[6],plVar12,0);
                    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar15 = FUN_0554de78(in_stack_00000020,0);
                    uVar15 = FUN_04f6f6b4(*(undefined8 *)
                                           Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                          ,in_stack_00000030,uVar15,0);
                    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar13 + 0x518))
                              (plVar13,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar15,*(undefined8 *)(*plVar13 + 0x520));
                    (**(code **)(*plVar12 + 0x2d8))
                              (plVar12,plVar13,*(undefined8 *)(*plVar12 + 0x2e0));
                    uVar5 = FUN_055afea0(plVar4,0);
                    if ((uVar5 & 1) != 0) {
                      (**(code **)(*plVar12 + 0x558))
                                (plVar12,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar12 + 0x560))
                      ;
                    }
                    if (lVar6 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar6 + 0x18) != 0) {
                      plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar13,0);
                      if (0 < *(int *)(lVar6 + 0x18)) {
                        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                        lVar14 = 0;
                        lVar18 = lVar6 + 0x20;
                        do {
                          FUN_04f78e50(plVar13,0,0);
                          uVar19 = (uint)lVar14;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar4 = (long *)FUN_04f79730(plVar13,in_stack_00000030,0);
                            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                            lVar10 = *(long *)(lVar18 + lVar14 * 8);
                            if ((lVar10 == 0) ||
                               (uVar15 = FUN_0555e9b8(lVar10,0), plVar4 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                            lVar10 = *(long *)(lVar18 + lVar14 * 8);
                            if (lVar10 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar10,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                            lVar10 = *(long *)(lVar18 + lVar14 * 8);
                            if (lVar10 == 0) goto LAB_055d7b30;
                            uVar15 = FUN_0556053c(lVar10,0);
                            uVar5 = FUN_04f6ebb4(uVar15,0);
                            if ((uVar5 & 1) == 0) {
                              if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                              lVar10 = *(long *)(lVar18 + lVar14 * 8);
                              if (lVar10 == 0) goto LAB_055d7b30;
                              plVar4 = *(long **)(unaff_x22 + 0x28);
                              uVar15 = FUN_0556053c(lVar10,0);
                              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                              uVar15 = (**(code **)(*plVar4 + 0x308))
                                                 (plVar4,uVar15,*(undefined8 *)(*plVar4 + 0x310));
                              lVar10 = FUN_04f7a6a0(plVar13,uVar15,0);
                              if (lVar10 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar10,0x3a,0);
                            }
                            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                            lVar10 = *(long *)(lVar18 + lVar14 * 8);
                            if (lVar10 == 0) goto LAB_055d7b30;
                            uVar15 = FUN_0555e9b8(lVar10,0);
                            plVar4 = plVar13;
                          }
                          FUN_04f79730(plVar4,uVar15,0);
                          if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                          plVar4 = *(long **)(lVar18 + lVar14 * 8);
                          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                            (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                          if (iVar3 == 2) {
LAB_055d6c94:
                            System_Collections_Queue___ctor(plVar13,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                            plVar4 = *(long **)(lVar18 + lVar14 * 8);
                            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                            iVar3 = (**(code **)(*plVar4 + 0x1d8))
                                              (plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                            if (iVar3 == 4) goto LAB_055d6c94;
                          }
                          plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar15 = (**(code **)(*plVar13 + 0x168))
                                             (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar4 + 0x518))
                                    (plVar4,*(undefined8 *)
                                             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar15,*(undefined8 *)(*plVar4 + 0x520));
                          (**(code **)(*plVar12 + 0x2d8))
                                    (plVar12,plVar4,*(undefined8 *)(*plVar12 + 0x2e0));
                          lVar14 = lVar14 + 1;
                        } while ((int)lVar14 < *(int *)(lVar6 + 0x18));
                      }
                    }
                    plVar13 = *(long **)(unaff_x22 + 0x78);
                    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar13 + 0x298))
                              (plVar13,plVar12,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar13 + 0x2a0));
                    plVar12 = (long *)
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
            plVar13 = (long *)FUN_0557b300();
          } while (plVar13 == (long *)0x0);
          bVar1 = *(byte *)(*plVar12 + 0x130);
        } while (((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar12)) ||
                ((in_stack_00000028 & 0x100000000) == 0));
        plVar13 = (long *)FUN_0557b300();
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar12 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar12)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar13);
          }
        }
        plVar4 = *(long **)(unaff_x22 + 0x38);
        if (plVar4 == (long *)0x0) goto LAB_055d7b30;
        iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
        if (0 < iVar3) {
          if (plVar13 == (long *)0x0) goto LAB_055d7b30;
          plVar12 = *(long **)(unaff_x22 + 0x38);
          uVar15 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
          if (plVar12 == (long *)0x0) goto LAB_055d7b30;
          uVar5 = (**(code **)(*plVar12 + 0x348))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 0x350));
          plVar12 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          if ((uVar5 & 1) != 0) {
            plVar12 = *(long **)(unaff_x22 + 0x38);
            uVar15 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
            if (plVar12 == (long *)0x0) goto LAB_055d7b30;
            uVar5 = (**(code **)(*plVar12 + 0x348))
                              (plVar12,uVar15,*(undefined8 *)(*plVar12 + 0x350));
            plVar12 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if (((uVar5 & 1) != 0) && (uVar5 = FUN_055da208(), (uVar5 & 1) == 0)) goto LAB_055d6d90;
          }
          goto LAB_055d7adc;
        }
        uVar5 = FUN_055da208();
      } while ((uVar5 & 1) != 0);
      if (plVar13 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
      plVar12 = (long *)FUN_055a5390(plVar13,0);
      lVar6 = FUN_055a4c24(plVar13,0);
      lVar18 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
      if (lVar18 == 0) goto LAB_055d7b30;
      lVar18 = *(long *)(lVar18 + 0x48);
      uVar15 = thunk_FUN_02f45270(*unaff_x28);
      FUN_055aee44(uVar15,*(undefined8 *)
                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                   ,lVar6,0);
      if (lVar18 == 0) goto LAB_055d7b30;
      plVar4 = (long *)FUN_0557ba08(lVar18,uVar15,0);
      if (plVar4 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar15 = FUN_0557af78(plVar13,0);
        if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
        }
        uVar15 = FUN_05819fc8(uVar15,0);
        if (plVar7 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar7 + 0x518))
                  (plVar7,*(undefined8 *)PTR_DAT_067cd778,uVar15,*(undefined8 *)(*plVar7 + 0x520));
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
          uVar15 = FUN_05546520(in_stack_00000020,0);
          (**(code **)(*plVar7 + 0x558))
                    (plVar7,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar15,
                     *(undefined8 *)(*plVar7 + 0x560));
        }
        else {
          lVar18 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          if (lVar18 == 0) goto LAB_055d7b30;
          iVar3 = FUN_0558c670(lVar18,*(undefined8 *)(in_stack_00000020 + 0x90),0);
          if (iVar3 == -3) goto LAB_055d6f20;
        }
        plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        lVar18 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
        if (lVar18 == 0) goto LAB_055d7b30;
        uVar15 = FUN_0554de78(lVar18,0);
        uVar15 = FUN_04f6f6b4(*(undefined8 *)
                               Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                              ,in_stack_00000030,uVar15,0);
        if (plVar8 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar8 + 0x518))
                  (plVar8,*(undefined8 *)
                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                   ,uVar15,*(undefined8 *)(*plVar8 + 0x520));
        (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x2e0));
        if (lVar6 == 0) goto LAB_055d7b30;
        if (*(long *)(lVar6 + 0x18) != 0) {
          plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar8,0);
          if (0 < *(int *)(lVar6 + 0x18)) {
            if (plVar8 == (long *)0x0) goto LAB_055d7b30;
            lVar14 = 0;
            lVar18 = lVar6 + 0x20;
            do {
              FUN_04f78e50(plVar8,0,0);
              uVar19 = (uint)lVar14;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                plVar9 = (long *)FUN_04f79730(plVar8,in_stack_00000030,0);
                if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar10 = *(long *)(lVar18 + lVar14 * 8);
                if ((lVar10 == 0) || (uVar15 = FUN_0555e9b8(lVar10,0), plVar9 == (long *)0x0))
                goto LAB_055d7b30;
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar10 = *(long *)(lVar18 + lVar14 * 8);
                if (lVar10 == 0) goto LAB_055d7b30;
                FUN_0556053c(lVar10,0);
                FUN_055d8110();
                if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar10 = *(long *)(lVar18 + lVar14 * 8);
                if (lVar10 == 0) goto LAB_055d7b30;
                uVar15 = FUN_0556053c(lVar10,0);
                uVar5 = FUN_04f6ebb4(uVar15,0);
                if ((uVar5 & 1) == 0) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                  lVar10 = *(long *)(lVar18 + lVar14 * 8);
                  if (lVar10 == 0) goto LAB_055d7b30;
                  plVar9 = *(long **)(unaff_x22 + 0x28);
                  uVar15 = FUN_0556053c(lVar10,0);
                  if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                  uVar15 = (**(code **)(*plVar9 + 0x308))
                                     (plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x310));
                  lVar10 = FUN_04f7a6a0(plVar8,uVar15,0);
                  if (lVar10 == 0) goto LAB_055d7b30;
                  FUN_04f7a548(lVar10,0x3a,0);
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar10 = *(long *)(lVar18 + lVar14 * 8);
                if (lVar10 == 0) goto LAB_055d7b30;
                uVar15 = FUN_0555e9b8(lVar10,0);
                plVar9 = plVar8;
              }
              FUN_04f79730(plVar9,uVar15,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
              plVar9 = *(long **)(lVar18 + lVar14 * 8);
              if (plVar9 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (iVar3 == 2) {
LAB_055d71d4:
                System_Collections_Queue___ctor(plVar8,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_055d7b34;
                plVar9 = *(long **)(lVar18 + lVar14 * 8);
                if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                if (iVar3 == 4) goto LAB_055d71d4;
              }
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
              if (plVar9 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar9 + 0x518))
                        (plVar9,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar15,*(undefined8 *)(*plVar9 + 0x520));
              (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2e0));
              lVar14 = lVar14 + 1;
            } while ((int)lVar14 < *(int *)(lVar6 + 0x18));
          }
        }
        plVar8 = *(long **)(unaff_x22 + 0x78);
        if (plVar8 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar8 + 0x298))
                  (plVar8,plVar7,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar8 + 0x2a0))
        ;
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
      uVar15 = FUN_0557af78(plVar13,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar15 = FUN_05819fc8(uVar15,0);
      if (unaff_x29 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*unaff_x29 + 0x518))
                (unaff_x29,*(undefined8 *)PTR_DAT_067cd778,uVar15,
                 *(undefined8 *)(*unaff_x29 + 0x520));
      if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
        lVar6 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
        if (lVar6 == 0) goto LAB_055d7b30;
        uVar15 = FUN_05546520(lVar6,0);
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar15,
                   *(undefined8 *)(*unaff_x29 + 0x560));
      }
      else {
        lVar18 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        lVar6 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
        if ((lVar6 == 0) || (lVar18 == 0)) goto LAB_055d7b30;
        iVar3 = FUN_0558c670(lVar18,*(undefined8 *)(lVar6 + 0x90),0);
        if (iVar3 == -3) goto LAB_055d738c;
      }
      plVar7 = plVar13;
      if (plVar4 != (long *)0x0) {
        plVar7 = plVar4;
      }
      uVar15 = FUN_0557af78(plVar7,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar15 = FUN_05819fc8(uVar15,0);
      (**(code **)(*unaff_x29 + 0x518))
                (unaff_x29,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                 ,uVar15,*(undefined8 *)(*unaff_x29 + 0x520));
      lVar6 = plVar13[6];
      uVar15 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
      ;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_050e4454(uVar15,0);
      FUN_055ccff4(lVar6,unaff_x29,uVar15);
      uVar15 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      uVar11 = FUN_0557af78(plVar13,0);
      uVar5 = FUN_04f6dc3c(uVar15,uVar11,0);
      if ((uVar5 & 1) != 0) {
        uVar15 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar15,
                   *(undefined8 *)(*unaff_x29 + 0x560));
      }
      if (plVar12 == (long *)0x0) {
        lVar6 = *unaff_x29;
        uVar11 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
        uVar16 = *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        uVar17 = *(undefined8 *)(lVar6 + 0x560);
        uVar15 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
        (**(code **)(lVar6 + 0x558))(unaff_x29,uVar11,uVar16,uVar15,uVar17);
      }
      else {
        uVar5 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
        if ((uVar5 & 1) != 0) {
          (**(code **)(*unaff_x29 + 0x558))
                    (unaff_x29,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                     *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*unaff_x29 + 0x560));
        }
        lVar6 = plVar12[3];
        uVar15 = *(undefined8 *)
                  Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar15 = FUN_050e4454(uVar15,0);
        FUN_055ccff4(lVar6,unaff_x29,uVar15);
        uVar15 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
        uVar11 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
        uVar5 = FUN_04f6dc3c(uVar15,uVar11,0);
        if ((uVar5 & 1) != 0) {
          uVar15 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          }
          uVar15 = FUN_05819fc8(uVar15,0);
          lVar6 = *unaff_x29;
          uVar11 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
          uVar17 = *(undefined8 *)(lVar6 + 0x560);
          uVar16 = *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          goto LAB_055d7658;
        }
      }
      plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar15 = FUN_0554de78(in_stack_00000020,0);
      uVar15 = FUN_04f6f6b4(*(undefined8 *)
                             Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                            ,in_stack_00000030,uVar15,0);
      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar12 + 0x518))
                (plVar12,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                 ,uVar15,*(undefined8 *)(*plVar12 + 0x520));
      (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar12,*(undefined8 *)(*unaff_x29 + 0x2e0));
      iVar3 = (**(code **)(*plVar13 + 0x278))(plVar13,*(undefined8 *)(*plVar13 + 0x280));
      puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
      if (iVar3 != 0) {
        (**(code **)(*plVar13 + 0x278))(plVar13,*(undefined8 *)(*plVar13 + 0x280));
        uVar15 = FUN_055d9b50();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                   *(undefined8 *)puVar2,uVar15,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      iVar3 = (**(code **)(*plVar13 + 0x2d8))(plVar13,*(undefined8 *)(*plVar13 + 0x2e0));
      if (iVar3 != 1) {
        (**(code **)(*plVar13 + 0x2d8))(plVar13,*(undefined8 *)(*plVar13 + 0x2e0));
        uVar15 = FUN_055d9bc0();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                   *(undefined8 *)puVar2,uVar15,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      iVar3 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
      if (iVar3 != 1) {
        (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
        uVar15 = FUN_055d9bc0();
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                   *(undefined8 *)puVar2,uVar15,*(undefined8 *)(*unaff_x29 + 0x560));
      }
      unaff_x19 = (**(code **)(*plVar13 + 0x268))(plVar13,*(undefined8 *)(*plVar13 + 0x270));
      if (unaff_x19 == 0) goto LAB_055d7b30;
    } while (*(long *)(unaff_x19 + 0x18) == 0);
  } while( true );
}


