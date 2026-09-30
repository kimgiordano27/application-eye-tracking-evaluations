/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$GetKatmaiTimeZoneTicks
ENTRY_POINT: 055d6870
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


undefined8 System_Xml_BinXmlDateTime__GetKatmaiTimeZoneTicks(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w26;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    lVar16 = unaff_x23[7];
    plVar5 = (long *)(**(code **)(param_1 + 0x5f8))();
    if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
      uVar7 = FUN_05546520(unaff_x20,0);
      if (plVar5 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar5 + 0x558))
                (plVar5,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar7,
                 *(undefined8 *)(*plVar5 + 0x560));
    }
    else {
      lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
      if (lVar6 == 0) goto LAB_055d7b30;
      iVar3 = FUN_0558c670(lVar6,*(undefined8 *)(unaff_x20 + 0x90),0);
      if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
    }
    uVar7 = FUN_0557af78(unaff_x23,0);
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    }
    uVar7 = FUN_05819fc8(uVar7,0);
    if (plVar5 == (long *)0x0) {
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar5 + 0x518))
              (plVar5,*(undefined8 *)PTR_DAT_067cd778,uVar7,*(undefined8 *)(*plVar5 + 0x520));
    uVar7 = (**(code **)(*unaff_x23 + 0x178))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
    uVar8 = FUN_0557af78(unaff_x23,0);
    uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
    if ((uVar9 & 1) != 0) {
      uVar7 = (**(code **)(*unaff_x23 + 0x178))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
      (**(code **)(*plVar5 + 0x558))
                (plVar5,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar7,
                 *(undefined8 *)(*plVar5 + 0x560));
    }
    FUN_055ccff4(unaff_x23[6],plVar5,0);
    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar7 = FUN_0554de78(unaff_x20,0);
    uVar7 = FUN_04f6f6b4(*(undefined8 *)
                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                         ,in_stack_00000030,uVar7,0);
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
               ,uVar7,*(undefined8 *)(*plVar10 + 0x520));
    (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar10,*(undefined8 *)(*plVar5 + 0x2e0));
    uVar9 = FUN_055afea0(unaff_x23,0);
    if ((uVar9 & 1) != 0) {
      (**(code **)(*plVar5 + 0x558))
                (plVar5,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar5 + 0x560));
    }
    if (lVar16 == 0) goto LAB_055d7b30;
    if (*(long *)(lVar16 + 0x18) != 0) {
      plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
      FUN_04f77e78(plVar10,0);
      if (0 < *(int *)(lVar16 + 0x18)) {
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        lVar18 = 0;
        lVar6 = lVar16 + 0x20;
        do {
          FUN_04f78e50(plVar10,0,0);
          uVar17 = (uint)lVar18;
          if (*(int *)(unaff_x22 + 0x5c) == 2) {
            plVar11 = (long *)FUN_04f79730(plVar10,in_stack_00000030,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
            lVar12 = *(long *)(lVar6 + lVar18 * 8);
            if ((lVar12 == 0) || (uVar7 = FUN_0555e9b8(lVar12,0), plVar11 == (long *)0x0))
            goto LAB_055d7b30;
          }
          else {
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
            lVar12 = *(long *)(lVar6 + lVar18 * 8);
            if (lVar12 == 0) goto LAB_055d7b30;
            FUN_0556053c(lVar12,0);
            FUN_055d8110();
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
            lVar12 = *(long *)(lVar6 + lVar18 * 8);
            if (lVar12 == 0) goto LAB_055d7b30;
            uVar7 = FUN_0556053c(lVar12,0);
            uVar9 = FUN_04f6ebb4(uVar7,0);
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar17) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar12 = *(long *)(lVar6 + lVar18 * 8);
              if (lVar12 == 0) goto LAB_055d7b30;
              plVar11 = *(long **)(unaff_x22 + 0x28);
              uVar7 = FUN_0556053c(lVar12,0);
              if (plVar11 == (long *)0x0) goto LAB_055d7b30;
              uVar7 = (**(code **)(*plVar11 + 0x308))
                                (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
              lVar12 = FUN_04f7a6a0(plVar10,uVar7,0);
              if (lVar12 == 0) goto LAB_055d7b30;
              FUN_04f7a548(lVar12,0x3a,0);
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
            lVar12 = *(long *)(lVar6 + lVar18 * 8);
            if (lVar12 == 0) goto LAB_055d7b30;
            uVar7 = FUN_0555e9b8(lVar12,0);
            plVar11 = plVar10;
          }
          FUN_04f79730(plVar11,uVar7,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
          plVar11 = *(long **)(lVar6 + lVar18 * 8);
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          iVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
          if (iVar3 == 2) {
LAB_055d6c94:
            System_Collections_Queue___ctor(plVar10,0,0x40,0);
          }
          else {
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
            plVar11 = *(long **)(lVar6 + lVar18 * 8);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            iVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
            if (iVar3 == 4) goto LAB_055d6c94;
          }
          plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar11 + 0x518))
                    (plVar11,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                     ,uVar7,*(undefined8 *)(*plVar11 + 0x520));
          (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2e0));
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < *(int *)(lVar16 + 0x18));
      }
    }
    plVar10 = *(long **)(unaff_x22 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x298))
              (plVar10,plVar5,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar10 + 0x2a0));
    plVar5 = (long *)
             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
    ;
    plVar10 = (long *)
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
LAB_055d7adc:
    do {
      unaff_w26 = unaff_w26 + 1;
      iVar3 = (**(code **)(*unaff_x24 + 0x1c8))();
      if (iVar3 <= unaff_w26) {
        FUN_055ccff4(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
        return in_stack_00000018;
      }
      plVar11 = (long *)FUN_0557b300();
      if (plVar11 == (long *)0x0) {
LAB_055d66d4:
        plVar11 = (long *)FUN_0557b300();
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar5 + 0x130);
          if (((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
              (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar5)) &&
             ((in_stack_00000028 & 0x100000000) != 0)) {
            plVar11 = (long *)FUN_0557b300();
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar5 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar11);
              }
            }
            plVar4 = *(long **)(unaff_x22 + 0x38);
            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
            iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
            if (iVar3 < 1) {
              uVar9 = FUN_055da208();
              if ((uVar9 & 1) != 0) goto LAB_055d7adc;
              if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            }
            else {
              if (plVar11 == (long *)0x0) goto LAB_055d7b30;
              plVar5 = *(long **)(unaff_x22 + 0x38);
              uVar7 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
              if (plVar5 == (long *)0x0) goto LAB_055d7b30;
              uVar9 = (**(code **)(*plVar5 + 0x348))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x350));
              plVar5 = (long *)
                       UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
              ;
              if ((uVar9 & 1) == 0) goto LAB_055d7adc;
              plVar5 = *(long **)(unaff_x22 + 0x38);
              uVar7 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (plVar5 == (long *)0x0) goto LAB_055d7b30;
              uVar9 = (**(code **)(*plVar5 + 0x348))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x350));
              plVar5 = (long *)
                       UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
              ;
              if (((uVar9 & 1) == 0) || (uVar9 = FUN_055da208(), (uVar9 & 1) != 0))
              goto LAB_055d7adc;
            }
            plVar5 = (long *)FUN_055a5390(plVar11,0);
            lVar16 = FUN_055a4c24(plVar11,0);
            lVar6 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
            if (lVar6 == 0) goto LAB_055d7b30;
            lVar6 = *(long *)(lVar6 + 0x48);
            uVar7 = thunk_FUN_02f45270(*plVar10);
            FUN_055aee44(uVar7,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                         ,lVar16,0);
            if (lVar6 == 0) goto LAB_055d7b30;
            unaff_x23 = (long *)FUN_0557ba08(lVar6,uVar7,0);
            if (unaff_x23 == (long *)0x0) {
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar7 = FUN_0557af78(plVar11,0);
              if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
              }
              uVar7 = FUN_05819fc8(uVar7,0);
              if (plVar10 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar10 + 0x518))
                        (plVar10,*(undefined8 *)PTR_DAT_067cd778,uVar7,
                         *(undefined8 *)(*plVar10 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                uVar7 = FUN_05546520(in_stack_00000020,0);
                (**(code **)(*plVar10 + 0x558))
                          (plVar10,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           uVar7,*(undefined8 *)(*plVar10 + 0x560));
              }
              else {
                lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar6 == 0) goto LAB_055d7b30;
                iVar3 = FUN_0558c670(lVar6,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar3 == -3) goto LAB_055d6f20;
              }
              plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar6 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
              if (lVar6 == 0) goto LAB_055d7b30;
              uVar7 = FUN_0554de78(lVar6,0);
              uVar7 = FUN_04f6f6b4(*(undefined8 *)
                                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                   ,in_stack_00000030,uVar7,0);
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar4 + 0x518))
                        (plVar4,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar7,*(undefined8 *)(*plVar4 + 0x520));
              (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2e0));
              if (lVar16 == 0) goto LAB_055d7b30;
              if (*(long *)(lVar16 + 0x18) != 0) {
                plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                FUN_04f77e78(plVar4,0);
                if (0 < *(int *)(lVar16 + 0x18)) {
                  if (plVar4 == (long *)0x0) goto LAB_055d7b30;
                  lVar18 = 0;
                  lVar6 = lVar16 + 0x20;
                  do {
                    FUN_04f78e50(plVar4,0,0);
                    uVar17 = (uint)lVar18;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar13 = (long *)FUN_04f79730(plVar4,in_stack_00000030,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      lVar12 = *(long *)(lVar6 + lVar18 * 8);
                      if ((lVar12 == 0) || (uVar7 = FUN_0555e9b8(lVar12,0), plVar13 == (long *)0x0))
                      goto LAB_055d7b30;
                    }
                    else {
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      lVar12 = *(long *)(lVar6 + lVar18 * 8);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      FUN_0556053c(lVar12,0);
                      FUN_055d8110();
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      lVar12 = *(long *)(lVar6 + lVar18 * 8);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      uVar7 = FUN_0556053c(lVar12,0);
                      uVar9 = FUN_04f6ebb4(uVar7,0);
                      if ((uVar9 & 1) == 0) {
                        if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                        lVar12 = *(long *)(lVar6 + lVar18 * 8);
                        if (lVar12 == 0) goto LAB_055d7b30;
                        plVar13 = *(long **)(unaff_x22 + 0x28);
                        uVar7 = FUN_0556053c(lVar12,0);
                        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                        uVar7 = (**(code **)(*plVar13 + 0x308))
                                          (plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x310));
                        lVar12 = FUN_04f7a6a0(plVar4,uVar7,0);
                        if (lVar12 == 0) goto LAB_055d7b30;
                        FUN_04f7a548(lVar12,0x3a,0);
                      }
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      lVar12 = *(long *)(lVar6 + lVar18 * 8);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      uVar7 = FUN_0555e9b8(lVar12,0);
                      plVar13 = plVar4;
                    }
                    FUN_04f79730(plVar13,uVar7,0);
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    plVar13 = *(long **)(lVar6 + lVar18 * 8);
                    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                    if (iVar3 == 2) {
LAB_055d71d4:
                      System_Collections_Queue___ctor(plVar4,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      plVar13 = *(long **)(lVar6 + lVar18 * 8);
                      if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                      iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                      if (iVar3 == 4) goto LAB_055d71d4;
                    }
                    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar13 + 0x518))
                              (plVar13,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar7,*(undefined8 *)(*plVar13 + 0x520));
                    (**(code **)(*plVar10 + 0x2d8))
                              (plVar10,plVar13,*(undefined8 *)(*plVar10 + 0x2e0));
                    lVar18 = lVar18 + 1;
                  } while ((int)lVar18 < *(int *)(lVar16 + 0x18));
                }
              }
              plVar4 = *(long **)(unaff_x22 + 0x78);
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar4 + 0x298))
                        (plVar4,plVar10,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar4 + 0x2a0));
              plVar10 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
              ;
            }
            else {
              bVar1 = *(byte *)(*plVar10 + 0x130);
              if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(unaff_x23);
              }
            }
            plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = FUN_0557af78(plVar11,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar7 = FUN_05819fc8(uVar7,0);
            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar4 + 0x518))
                      (plVar4,*(undefined8 *)PTR_DAT_067cd778,uVar7,*(undefined8 *)(*plVar4 + 0x520)
                      );
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
              lVar16 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (lVar16 == 0) goto LAB_055d7b30;
              uVar7 = FUN_05546520(lVar16,0);
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar7,*(undefined8 *)(*plVar4 + 0x560));
            }
            else {
              lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar16 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
              if ((lVar16 == 0) || (lVar6 == 0)) goto LAB_055d7b30;
              iVar3 = FUN_0558c670(lVar6,*(undefined8 *)(lVar16 + 0x90),0);
              if (iVar3 == -3) goto LAB_055d738c;
            }
            plVar13 = plVar11;
            if (unaff_x23 != (long *)0x0) {
              plVar13 = unaff_x23;
            }
            uVar7 = FUN_0557af78(plVar13,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar7 = FUN_05819fc8(uVar7,0);
            (**(code **)(*plVar4 + 0x518))
                      (plVar4,*(undefined8 *)
                               Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                       ,uVar7,*(undefined8 *)(*plVar4 + 0x520));
            lVar16 = plVar11[6];
            uVar7 = *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
            ;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar7 = FUN_050e4454(uVar7,0);
            FUN_055ccff4(lVar16,plVar4,uVar7);
            uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
            uVar8 = FUN_0557af78(plVar11,0);
            uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
            if ((uVar9 & 1) != 0) {
              uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar7,*(undefined8 *)(*plVar4 + 0x560));
            }
            if (plVar5 == (long *)0x0) {
              lVar16 = *plVar4;
              uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
              uVar14 = *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
              uVar15 = *(undefined8 *)(lVar16 + 0x560);
              uVar7 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
              (**(code **)(lVar16 + 0x558))(plVar4,uVar8,uVar14,uVar7,uVar15);
            }
            else {
              uVar9 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
              if ((uVar9 & 1) != 0) {
                (**(code **)(*plVar4 + 0x558))
                          (plVar4,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                           ,*(undefined8 *)
                             UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar4 + 0x560));
              }
              lVar16 = plVar5[3];
              uVar7 = *(undefined8 *)
                       Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar7 = FUN_050e4454(uVar7,0);
              FUN_055ccff4(lVar16,plVar4,uVar7);
              uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
              uVar8 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
              uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
              if ((uVar9 & 1) != 0) {
                uVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                }
                uVar7 = FUN_05819fc8(uVar7,0);
                lVar16 = *plVar4;
                uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__
                ;
                uVar15 = *(undefined8 *)(lVar16 + 0x560);
                uVar14 = *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                goto LAB_055d7658;
              }
            }
            plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = FUN_0554de78(in_stack_00000020,0);
            uVar7 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,in_stack_00000030,uVar7,0);
            if (plVar5 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar5 + 0x518))
                      (plVar5,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar7,*(undefined8 *)(*plVar5 + 0x520));
            (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x2e0));
            iVar3 = (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280));
            puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
            if (iVar3 != 0) {
              (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280));
              uVar7 = FUN_055d9b50();
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar4 + 0x560));
            }
            iVar3 = (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
            if (iVar3 != 1) {
              (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
              uVar7 = FUN_055d9bc0();
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar4 + 0x560));
            }
            iVar3 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
            if (iVar3 != 1) {
              (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
              uVar7 = FUN_055d9bc0();
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar4 + 0x560));
            }
            lVar16 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
            if (lVar16 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar16 + 0x18) != 0) {
              plVar5 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar5,0);
              if (0 < *(int *)(lVar16 + 0x18)) {
                if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                lVar18 = 0;
                lVar6 = lVar16 + 0x20;
                do {
                  FUN_04f78e50(plVar5,0,0);
                  uVar17 = (uint)lVar18;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar11 = (long *)FUN_04f79730(plVar5,in_stack_00000030,0);
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    lVar12 = *(long *)(lVar6 + lVar18 * 8);
                    if ((lVar12 == 0) || (uVar7 = FUN_0555e9b8(lVar12,0), plVar11 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    lVar12 = *(long *)(lVar6 + lVar18 * 8);
                    if (lVar12 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar12,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    lVar12 = *(long *)(lVar6 + lVar18 * 8);
                    if (lVar12 == 0) goto LAB_055d7b30;
                    uVar7 = FUN_0556053c(lVar12,0);
                    uVar9 = FUN_04f6ebb4(uVar7,0);
                    if ((uVar9 & 1) == 0) {
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                      lVar12 = *(long *)(lVar6 + lVar18 * 8);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      plVar11 = *(long **)(unaff_x22 + 0x28);
                      uVar7 = FUN_0556053c(lVar12,0);
                      if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                      uVar7 = (**(code **)(*plVar11 + 0x308))
                                        (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
                      lVar12 = FUN_04f7a6a0(plVar5,uVar7,0);
                      if (lVar12 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar12,0x3a,0);
                    }
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    lVar12 = *(long *)(lVar6 + lVar18 * 8);
                    if (lVar12 == 0) goto LAB_055d7b30;
                    uVar7 = FUN_0555e9b8(lVar12,0);
                    plVar11 = plVar5;
                  }
                  FUN_04f79730(plVar11,uVar7,0);
                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                  plVar11 = *(long **)(lVar6 + lVar18 * 8);
                  if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0))
                  ;
                  if (iVar3 == 2) {
LAB_055d79f8:
                    System_Collections_Queue___ctor(plVar5,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_055d7b34;
                    plVar11 = *(long **)(lVar6 + lVar18 * 8);
                    if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    if (iVar3 == 4) goto LAB_055d79f8;
                  }
                  plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                  if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar11 + 0x518))
                            (plVar11,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar7,*(undefined8 *)(*plVar11 + 0x520));
                  (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar11,*(undefined8 *)(*plVar4 + 0x2e0));
                  lVar18 = lVar18 + 1;
                } while ((int)lVar18 < *(int *)(lVar16 + 0x18));
              }
            }
            plVar5 = *(long **)(unaff_x22 + 0x78);
            if (plVar5 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar5 + 0x2a8))
                      (plVar5,plVar4,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar5 + 0x2b0));
            plVar5 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
          }
        }
        goto LAB_055d7adc;
      }
      bVar1 = *(byte *)(*plVar10 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
      goto LAB_055d66d4;
      unaff_x23 = (long *)FUN_0557b300();
      if (unaff_x23 == (long *)0x0) {
        uVar9 = FUN_055da208();
        if ((uVar9 & 1) == 0) goto LAB_055d7b30;
        goto LAB_055d7adc;
      }
      bVar1 = *(byte *)(*plVar10 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
      goto LAB_055d7b38;
      uVar9 = FUN_055da208();
    } while ((uVar9 & 1) != 0);
    param_1 = *unaff_x21;
    unaff_x20 = in_stack_00000020;
  } while( true );
}


