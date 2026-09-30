/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdKatmaiDateTimeOffsetToDateTimeOffset
ENTRY_POINT: 055d66b8
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


undefined8 System_Xml_BinXmlDateTime__XsdKatmaiDateTimeOffsetToDateTimeOffset(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_x9;
  ulong in_x10;
  uint in_w11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int unaff_w26;
  long lVar18;
  long *unaff_x28;
  uint uVar19;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    if (in_w11 < (uint)in_x10) goto LAB_055d66d4;
    if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1) goto LAB_055d66d4;
    plVar4 = (long *)FUN_0557b300();
    if (plVar4 == (long *)0x0) {
      uVar7 = FUN_055da208();
      if ((uVar7 & 1) == 0) goto LAB_055d7b30;
    }
    else {
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar4);
      }
      uVar7 = FUN_055da208();
      if ((uVar7 & 1) == 0) {
        lVar9 = plVar4[7];
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
          uVar6 = FUN_05546520(unaff_x20,0);
          if (plVar5 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar6,
                     *(undefined8 *)(*plVar5 + 0x560));
        }
        else {
          lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          if (lVar10 == 0) goto LAB_055d7b30;
          iVar3 = FUN_0558c670(lVar10,*(undefined8 *)(unaff_x20 + 0x90),0);
          if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
        }
        uVar6 = FUN_0557af78(plVar4,0);
        if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
        }
        uVar6 = FUN_05819fc8(uVar6,0);
        if (plVar5 == (long *)0x0) {
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar5 + 0x518))
                  (plVar5,*(undefined8 *)PTR_DAT_067cd778,uVar6,*(undefined8 *)(*plVar5 + 0x520));
        uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        uVar14 = FUN_0557af78(plVar4,0);
        uVar7 = FUN_04f6dc3c(uVar6,uVar14,0);
        if ((uVar7 & 1) != 0) {
          uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar6,
                     *(undefined8 *)(*plVar5 + 0x560));
        }
        FUN_055ccff4(plVar4[6],plVar5,0);
        plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar6 = FUN_0554de78(unaff_x20,0);
        uVar6 = FUN_04f6f6b4(*(undefined8 *)
                              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                             ,in_stack_00000030,uVar6,0);
        if (plVar8 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar8 + 0x518))
                  (plVar8,*(undefined8 *)
                           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                   ,uVar6,*(undefined8 *)(*plVar8 + 0x520));
        (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2e0));
        uVar7 = FUN_055afea0(plVar4,0);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                     *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar5 + 0x560));
        }
        if (lVar9 == 0) goto LAB_055d7b30;
        if (*(long *)(lVar9 + 0x18) != 0) {
          plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar4,0);
          if (0 < *(int *)(lVar9 + 0x18)) {
            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
            lVar18 = 0;
            lVar10 = lVar9 + 0x20;
            do {
              FUN_04f78e50(plVar4,0,0);
              uVar19 = (uint)lVar18;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                plVar8 = (long *)FUN_04f79730(plVar4,in_stack_00000030,0);
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar15 = *(long *)(lVar10 + lVar18 * 8);
                if ((lVar15 == 0) || (uVar6 = FUN_0555e9b8(lVar15,0), plVar8 == (long *)0x0))
                goto LAB_055d7b30;
              }
              else {
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar15 = *(long *)(lVar10 + lVar18 * 8);
                if (lVar15 == 0) goto LAB_055d7b30;
                FUN_0556053c(lVar15,0);
                FUN_055d8110();
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar15 = *(long *)(lVar10 + lVar18 * 8);
                if (lVar15 == 0) goto LAB_055d7b30;
                uVar6 = FUN_0556053c(lVar15,0);
                uVar7 = FUN_04f6ebb4(uVar6,0);
                if ((uVar7 & 1) == 0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  lVar15 = *(long *)(lVar10 + lVar18 * 8);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  plVar8 = *(long **)(unaff_x22 + 0x28);
                  uVar6 = FUN_0556053c(lVar15,0);
                  if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                  uVar6 = (**(code **)(*plVar8 + 0x308))
                                    (plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x310));
                  lVar15 = FUN_04f7a6a0(plVar4,uVar6,0);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  FUN_04f7a548(lVar15,0x3a,0);
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                lVar15 = *(long *)(lVar10 + lVar18 * 8);
                if (lVar15 == 0) goto LAB_055d7b30;
                uVar6 = FUN_0555e9b8(lVar15,0);
                plVar8 = plVar4;
              }
              FUN_04f79730(plVar8,uVar6,0);
              if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
              plVar8 = *(long **)(lVar10 + lVar18 * 8);
              if (plVar8 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              if (iVar3 == 2) {
LAB_055d6c94:
                System_Collections_Queue___ctor(plVar4,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                plVar8 = *(long **)(lVar10 + lVar18 * 8);
                if (plVar8 == (long *)0x0) goto LAB_055d7b30;
                iVar3 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                if (iVar3 == 4) goto LAB_055d6c94;
              }
              plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              if (plVar8 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar6,*(undefined8 *)(*plVar8 + 0x520));
              (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2e0));
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < *(int *)(lVar9 + 0x18));
          }
        }
        plVar4 = *(long **)(unaff_x22 + 0x78);
        if (plVar4 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar4 + 0x298))
                  (plVar4,plVar5,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar4 + 0x2a0))
        ;
        unaff_x19 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
        ;
        unaff_x20 = in_stack_00000020;
        unaff_x28 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
        ;
      }
    }
LAB_055d7adc:
    unaff_w26 = unaff_w26 + 1;
    iVar3 = (**(code **)(*unaff_x24 + 0x1c8))();
    if (iVar3 <= unaff_w26) {
      FUN_055ccff4(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
      return in_stack_00000018;
    }
    plVar4 = (long *)FUN_0557b300();
    if (plVar4 == (long *)0x0) {
LAB_055d66d4:
      plVar4 = (long *)FUN_0557b300();
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x19 + 0x130);
        if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
            (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x19)) &&
           ((in_stack_00000028 & 0x100000000) != 0)) {
          plVar5 = (long *)FUN_0557b300();
          if (plVar5 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x19 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar5);
            }
          }
          plVar4 = *(long **)(unaff_x22 + 0x38);
          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
          iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
          if (iVar3 < 1) {
            uVar7 = FUN_055da208();
            if ((uVar7 & 1) != 0) goto LAB_055d7adc;
            if (plVar5 == (long *)0x0) goto LAB_055d7b30;
          }
          else {
            if (plVar5 == (long *)0x0) goto LAB_055d7b30;
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
            uVar7 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x350));
            unaff_x19 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if ((uVar7 & 1) == 0) goto LAB_055d7adc;
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            if (plVar4 == (long *)0x0) goto LAB_055d7b30;
            uVar7 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x350));
            unaff_x19 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if (((uVar7 & 1) == 0) || (uVar7 = FUN_055da208(), (uVar7 & 1) != 0)) goto LAB_055d7adc;
          }
          plVar8 = (long *)FUN_055a5390(plVar5,0);
          lVar9 = FUN_055a4c24(plVar5,0);
          lVar10 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
          if (lVar10 == 0) goto LAB_055d7b30;
          lVar10 = *(long *)(lVar10 + 0x48);
          uVar6 = thunk_FUN_02f45270(*unaff_x28);
          FUN_055aee44(uVar6,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                       ,lVar9,0);
          if (lVar10 == 0) goto LAB_055d7b30;
          plVar4 = (long *)FUN_0557ba08(lVar10,uVar6,0);
          if (plVar4 == (long *)0x0) {
            plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar6 = FUN_0557af78(plVar5,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar6 = FUN_05819fc8(uVar6,0);
            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar13 + 0x518))
                      (plVar13,*(undefined8 *)PTR_DAT_067cd778,uVar6,
                       *(undefined8 *)(*plVar13 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
              uVar6 = FUN_05546520(in_stack_00000020,0);
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar6,*(undefined8 *)(*plVar13 + 0x560));
            }
            else {
              lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar10 == 0) goto LAB_055d7b30;
              iVar3 = FUN_0558c670(lVar10,*(undefined8 *)(in_stack_00000020 + 0x90),0);
              if (iVar3 == -3) goto LAB_055d6f20;
            }
            plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar10 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
            if (lVar10 == 0) goto LAB_055d7b30;
            uVar6 = FUN_0554de78(lVar10,0);
            uVar6 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,in_stack_00000030,uVar6,0);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar6,*(undefined8 *)(*plVar11 + 0x520));
            (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar11,*(undefined8 *)(*plVar13 + 0x2e0));
            if (lVar9 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar9 + 0x18) != 0) {
              plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar11,0);
              if (0 < *(int *)(lVar9 + 0x18)) {
                if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                lVar18 = 0;
                lVar10 = lVar9 + 0x20;
                do {
                  FUN_04f78e50(plVar11,0,0);
                  uVar19 = (uint)lVar18;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar12 = (long *)FUN_04f79730(plVar11,in_stack_00000030,0);
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar10 + lVar18 * 8);
                    if ((lVar15 == 0) || (uVar6 = FUN_0555e9b8(lVar15,0), plVar12 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar10 + lVar18 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar15,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar10 + lVar18 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar6 = FUN_0556053c(lVar15,0);
                    uVar7 = FUN_04f6ebb4(uVar6,0);
                    if ((uVar7 & 1) == 0) {
                      if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                      lVar15 = *(long *)(lVar10 + lVar18 * 8);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      plVar12 = *(long **)(unaff_x22 + 0x28);
                      uVar6 = FUN_0556053c(lVar15,0);
                      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                      uVar6 = (**(code **)(*plVar12 + 0x308))
                                        (plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x310));
                      lVar15 = FUN_04f7a6a0(plVar11,uVar6,0);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar15,0x3a,0);
                    }
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar10 + lVar18 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar6 = FUN_0555e9b8(lVar15,0);
                    plVar12 = plVar11;
                  }
                  FUN_04f79730(plVar12,uVar6,0);
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  plVar12 = *(long **)(lVar10 + lVar18 * 8);
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0))
                  ;
                  if (iVar3 == 2) {
LAB_055d71d4:
                    System_Collections_Queue___ctor(plVar11,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    plVar12 = *(long **)(lVar10 + lVar18 * 8);
                    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    if (iVar3 == 4) goto LAB_055d71d4;
                  }
                  plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170))
                  ;
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar12 + 0x518))
                            (plVar12,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar6,*(undefined8 *)(*plVar12 + 0x520));
                  (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar12,*(undefined8 *)(*plVar13 + 0x2e0))
                  ;
                  lVar18 = lVar18 + 1;
                } while ((int)lVar18 < *(int *)(lVar9 + 0x18));
              }
            }
            plVar11 = *(long **)(unaff_x22 + 0x78);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x298))
                      (plVar11,plVar13,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar11 + 0x2a0));
            unaff_x28 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
          else {
            bVar1 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28))
            goto LAB_055d7b38;
          }
          plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar6 = FUN_0557af78(plVar5,0);
          if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          }
          uVar6 = FUN_05819fc8(uVar6,0);
          if (plVar13 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar13 + 0x518))
                    (plVar13,*(undefined8 *)PTR_DAT_067cd778,uVar6,*(undefined8 *)(*plVar13 + 0x520)
                    );
          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
            lVar9 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            if (lVar9 == 0) goto LAB_055d7b30;
            uVar6 = FUN_05546520(lVar9,0);
            (**(code **)(*plVar13 + 0x558))
                      (plVar13,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                       *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar6
                       ,*(undefined8 *)(*plVar13 + 0x560));
          }
          else {
            lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
            lVar9 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
            if ((lVar9 == 0) || (lVar10 == 0)) goto LAB_055d7b30;
            iVar3 = FUN_0558c670(lVar10,*(undefined8 *)(lVar9 + 0x90),0);
            if (iVar3 == -3) goto LAB_055d738c;
          }
          plVar11 = plVar5;
          if (plVar4 != (long *)0x0) {
            plVar11 = plVar4;
          }
          uVar6 = FUN_0557af78(plVar11,0);
          if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          }
          uVar6 = FUN_05819fc8(uVar6,0);
          (**(code **)(*plVar13 + 0x518))
                    (plVar13,*(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                     ,uVar6,*(undefined8 *)(*plVar13 + 0x520));
          lVar9 = plVar5[6];
          uVar6 = *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
          ;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar6 = FUN_050e4454(uVar6,0);
          FUN_055ccff4(lVar9,plVar13,uVar6);
          uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          uVar14 = FUN_0557af78(plVar5,0);
          uVar7 = FUN_04f6dc3c(uVar6,uVar14,0);
          if ((uVar7 & 1) != 0) {
            uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            (**(code **)(*plVar13 + 0x558))
                      (plVar13,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                       *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar6
                       ,*(undefined8 *)(*plVar13 + 0x560));
          }
          if (plVar8 == (long *)0x0) {
            lVar9 = *plVar13;
            uVar14 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
            uVar16 = *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
            uVar17 = *(undefined8 *)(lVar9 + 0x560);
            uVar6 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
            (**(code **)(lVar9 + 0x558))(plVar13,uVar14,uVar16,uVar6,uVar17);
          }
          else {
            uVar7 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
            if ((uVar7 & 1) != 0) {
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                         ,*(undefined8 *)
                           UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar13 + 0x560));
            }
            lVar9 = plVar8[3];
            uVar6 = *(undefined8 *)
                     Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar6 = FUN_050e4454(uVar6,0);
            FUN_055ccff4(lVar9,plVar13,uVar6);
            uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            uVar14 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
            uVar7 = FUN_04f6dc3c(uVar6,uVar14,0);
            if ((uVar7 & 1) != 0) {
              uVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
              }
              uVar6 = FUN_05819fc8(uVar6,0);
              lVar9 = *plVar13;
              uVar14 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
              uVar17 = *(undefined8 *)(lVar9 + 0x560);
              uVar16 = *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
              goto LAB_055d7658;
            }
          }
          plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar6 = FUN_0554de78(in_stack_00000020,0);
          uVar6 = FUN_04f6f6b4(*(undefined8 *)
                                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                               ,in_stack_00000030,uVar6,0);
          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar4 + 0x518))
                    (plVar4,*(undefined8 *)
                             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                     ,uVar6,*(undefined8 *)(*plVar4 + 0x520));
          (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar4,*(undefined8 *)(*plVar13 + 0x2e0));
          iVar3 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          if (iVar3 != 0) {
            (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
            uVar6 = FUN_055d9b50();
            (**(code **)(*plVar13 + 0x558))
                      (plVar13,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                       *(undefined8 *)puVar2,uVar6,*(undefined8 *)(*plVar13 + 0x560));
          }
          iVar3 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
          if (iVar3 != 1) {
            (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
            uVar6 = FUN_055d9bc0();
            (**(code **)(*plVar13 + 0x558))
                      (plVar13,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                       *(undefined8 *)puVar2,uVar6,*(undefined8 *)(*plVar13 + 0x560));
          }
          iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          if (iVar3 != 1) {
            (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
            uVar6 = FUN_055d9bc0();
            (**(code **)(*plVar13 + 0x558))
                      (plVar13,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                       *(undefined8 *)puVar2,uVar6,*(undefined8 *)(*plVar13 + 0x560));
          }
          lVar9 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          if (lVar9 == 0) goto LAB_055d7b30;
          if (*(long *)(lVar9 + 0x18) != 0) {
            plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
            FUN_04f77e78(plVar4,0);
            if (0 < *(int *)(lVar9 + 0x18)) {
              if (plVar4 == (long *)0x0) goto LAB_055d7b30;
              lVar18 = 0;
              lVar10 = lVar9 + 0x20;
              do {
                FUN_04f78e50(plVar4,0,0);
                uVar19 = (uint)lVar18;
                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                  plVar5 = (long *)FUN_04f79730(plVar4,in_stack_00000030,0);
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  lVar15 = *(long *)(lVar10 + lVar18 * 8);
                  if ((lVar15 == 0) || (uVar6 = FUN_0555e9b8(lVar15,0), plVar5 == (long *)0x0))
                  goto LAB_055d7b30;
                }
                else {
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  lVar15 = *(long *)(lVar10 + lVar18 * 8);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  FUN_0556053c(lVar15,0);
                  FUN_055d8110();
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  lVar15 = *(long *)(lVar10 + lVar18 * 8);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  uVar6 = FUN_0556053c(lVar15,0);
                  uVar7 = FUN_04f6ebb4(uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar10 + lVar18 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    plVar5 = *(long **)(unaff_x22 + 0x28);
                    uVar6 = FUN_0556053c(lVar15,0);
                    if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                    uVar6 = (**(code **)(*plVar5 + 0x308))
                                      (plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x310));
                    lVar15 = FUN_04f7a6a0(plVar4,uVar6,0);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    FUN_04f7a548(lVar15,0x3a,0);
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  lVar15 = *(long *)(lVar10 + lVar18 * 8);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  uVar6 = FUN_0555e9b8(lVar15,0);
                  plVar5 = plVar4;
                }
                FUN_04f79730(plVar5,uVar6,0);
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                plVar5 = *(long **)(lVar10 + lVar18 * 8);
                if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                iVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                if (iVar3 == 2) {
LAB_055d79f8:
                  System_Collections_Queue___ctor(plVar4,0,0x40,0);
                }
                else {
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_055d7b34;
                  plVar5 = *(long **)(lVar10 + lVar18 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                  if (iVar3 == 4) goto LAB_055d79f8;
                }
                plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                if (plVar5 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar5 + 0x518))
                          (plVar5,*(undefined8 *)
                                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                           ,uVar6,*(undefined8 *)(*plVar5 + 0x520));
                (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar5,*(undefined8 *)(*plVar13 + 0x2e0));
                lVar18 = lVar18 + 1;
              } while ((int)lVar18 < *(int *)(lVar9 + 0x18));
            }
          }
          plVar4 = *(long **)(unaff_x22 + 0x78);
          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar4 + 0x2a8))
                    (plVar4,plVar13,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar4 + 0x2b0));
          unaff_x19 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          unaff_x20 = in_stack_00000020;
        }
      }
      goto LAB_055d7adc;
    }
    param_1 = *unaff_x28;
    in_x9 = *plVar4;
    in_w11 = (uint)*(byte *)(in_x9 + 0x130);
    in_x10 = (ulong)*(byte *)(param_1 + 0x130);
  } while( true );
}


