/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdKatmaiTimeOffsetToDateTimeOffset
ENTRY_POINT: 055d680c
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


undefined8 System_Xml_BinXmlDateTime__XsdKatmaiTimeOffsetToDateTimeOffset(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  long lVar17;
  long *unaff_x28;
  uint uVar18;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x055d680c:
  if ((param_1 & 1) == 0) goto LAB_055d6d90;
LAB_055d7adc:
  unaff_w26 = unaff_w26 + 1;
  iVar3 = (**(code **)(*unaff_x24 + 0x1c8))();
  if (iVar3 <= unaff_w26) {
    FUN_055ccff4(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
  plVar4 = (long *)FUN_0557b300();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
      plVar9 = (long *)FUN_0557b300();
      if (plVar9 == (long *)0x0) {
        uVar6 = FUN_055da208();
        if ((uVar6 & 1) == 0) goto LAB_055d7b30;
        goto LAB_055d7adc;
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28))
      goto LAB_055d7b38;
      uVar6 = FUN_055da208();
      if ((uVar6 & 1) != 0) goto LAB_055d7adc;
      lVar7 = plVar9[7];
      plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
        uVar5 = FUN_05546520(unaff_x20,0);
        if (plVar4 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar4 + 0x558))
                  (plVar4,*(undefined8 *)
                           Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                   *(undefined8 *)(*plVar4 + 0x560));
      }
      else {
        lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        if (lVar8 == 0) goto LAB_055d7b30;
        iVar3 = FUN_0558c670(lVar8,*(undefined8 *)(unaff_x20 + 0x90),0);
        if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
      }
      uVar5 = FUN_0557af78(plVar9,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar5 = FUN_05819fc8(uVar5,0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x518))
                  (plVar4,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*plVar4 + 0x520));
        uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        uVar13 = FUN_0557af78(plVar9,0);
        uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)
                             Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                     *(undefined8 *)(*plVar4 + 0x560));
        }
        FUN_055ccff4(plVar9[6],plVar4,0);
        plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar5 = FUN_0554de78(unaff_x20,0);
        uVar5 = FUN_04f6f6b4(*(undefined8 *)
                              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                             ,in_stack_00000030,uVar5,0);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x518))
                    (plVar12,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                     ,uVar5,*(undefined8 *)(*plVar12 + 0x520));
          (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar12,*(undefined8 *)(*plVar4 + 0x2e0));
          uVar6 = FUN_055afea0(plVar9,0);
          if ((uVar6 & 1) != 0) {
            (**(code **)(*plVar4 + 0x558))
                      (plVar4,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__
                       ,*(undefined8 *)
                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                       *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar4 + 0x560));
          }
          if (lVar7 != 0) {
            if (*(long *)(lVar7 + 0x18) != 0) {
              plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar9,0);
              if (0 < *(int *)(lVar7 + 0x18)) {
                if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                lVar17 = 0;
                lVar8 = lVar7 + 0x20;
                do {
                  FUN_04f78e50(plVar9,0,0);
                  uVar18 = (uint)lVar17;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar12 = (long *)FUN_04f79730(plVar9,in_stack_00000030,0);
                    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar8 + lVar17 * 8);
                    if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar12 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar8 + lVar17 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar14,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar8 + lVar17 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar5 = FUN_0556053c(lVar14,0);
                    uVar6 = FUN_04f6ebb4(uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(uint *)(lVar7 + 0x18) <= uVar18) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar14 = *(long *)(lVar8 + lVar17 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      plVar12 = *(long **)(unaff_x22 + 0x28);
                      uVar5 = FUN_0556053c(lVar14,0);
                      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                      uVar5 = (**(code **)(*plVar12 + 0x308))
                                        (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x310));
                      lVar14 = FUN_04f7a6a0(plVar9,uVar5,0);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar14,0x3a,0);
                    }
                    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar8 + lVar17 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar5 = FUN_0555e9b8(lVar14,0);
                    plVar12 = plVar9;
                  }
                  FUN_04f79730(plVar12,uVar5,0);
                  if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                  plVar12 = *(long **)(lVar8 + lVar17 * 8);
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0))
                  ;
                  if (iVar3 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar9,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                    plVar12 = *(long **)(lVar8 + lVar17 * 8);
                    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    if (iVar3 == 4) goto LAB_055d6c94;
                  }
                  plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar12 + 0x518))
                            (plVar12,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar5,*(undefined8 *)(*plVar12 + 0x520));
                  (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar12,*(undefined8 *)(*plVar4 + 0x2e0));
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < *(int *)(lVar7 + 0x18));
              }
            }
            plVar9 = *(long **)(unaff_x22 + 0x78);
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar9 + 0x298))
                      (plVar9,plVar4,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar9 + 0x2a0));
            unaff_x19 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            unaff_x20 = in_stack_00000020;
            unaff_x28 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
            goto LAB_055d7adc;
          }
        }
      }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  plVar4 = (long *)FUN_0557b300();
  if (plVar4 == (long *)0x0) goto LAB_055d7adc;
  bVar1 = *(byte *)(*unaff_x19 + 0x130);
  if (((*(byte *)(*plVar4 + 0x130) < bVar1) ||
      (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) ||
     ((in_stack_00000028 & 0x100000000) == 0)) goto LAB_055d7adc;
  unaff_x27 = (long *)FUN_0557b300();
  if (unaff_x27 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x19 + 0x130);
    if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(unaff_x27);
    }
  }
  plVar4 = *(long **)(unaff_x22 + 0x38);
  if (plVar4 == (long *)0x0) goto LAB_055d7b30;
  iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
  if (0 < iVar3) {
    if (unaff_x27 == (long *)0x0) goto LAB_055d7b30;
    plVar4 = *(long **)(unaff_x22 + 0x38);
    uVar5 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
    if (plVar4 == (long *)0x0) goto LAB_055d7b30;
    uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
    unaff_x19 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
    ;
    if ((uVar6 & 1) == 0) goto LAB_055d7adc;
    plVar4 = *(long **)(unaff_x22 + 0x38);
    uVar5 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
    if (plVar4 == (long *)0x0) goto LAB_055d7b30;
    uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
    unaff_x19 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
    ;
    if ((uVar6 & 1) != 0) goto code_r0x055d6800;
    goto LAB_055d7adc;
  }
  uVar6 = FUN_055da208();
  if ((uVar6 & 1) != 0) goto LAB_055d7adc;
  if (unaff_x27 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
  plVar4 = (long *)FUN_055a5390(unaff_x27,0);
  lVar7 = FUN_055a4c24(unaff_x27,0);
  lVar8 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
  if (lVar8 == 0) goto LAB_055d7b30;
  lVar8 = *(long *)(lVar8 + 0x48);
  uVar5 = thunk_FUN_02f45270(*unaff_x28);
  FUN_055aee44(uVar5,*(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
               ,lVar7,0);
  if (lVar8 == 0) goto LAB_055d7b30;
  plVar9 = (long *)FUN_0557ba08(lVar8,uVar5,0);
  if (plVar9 == (long *)0x0) {
    plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar5 = FUN_0557af78(unaff_x27,0);
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    }
    uVar5 = FUN_05819fc8(uVar5,0);
    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar12 + 0x518))
              (plVar12,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*plVar12 + 0x520));
    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
      uVar5 = FUN_05546520(in_stack_00000020,0);
      (**(code **)(*plVar12 + 0x558))
                (plVar12,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                 *(undefined8 *)(*plVar12 + 0x560));
    }
    else {
      lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
      if (lVar8 == 0) goto LAB_055d7b30;
      iVar3 = FUN_0558c670(lVar8,*(undefined8 *)(in_stack_00000020 + 0x90),0);
      if (iVar3 == -3) goto LAB_055d6f20;
    }
    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    lVar8 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
    if (lVar8 == 0) goto LAB_055d7b30;
    uVar5 = FUN_0554de78(lVar8,0);
    uVar5 = FUN_04f6f6b4(*(undefined8 *)
                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                         ,in_stack_00000030,uVar5,0);
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
               ,uVar5,*(undefined8 *)(*plVar10 + 0x520));
    (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar10,*(undefined8 *)(*plVar12 + 0x2e0));
    if (lVar7 == 0) goto LAB_055d7b30;
    if (*(long *)(lVar7 + 0x18) != 0) {
      plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
      FUN_04f77e78(plVar10,0);
      if (0 < *(int *)(lVar7 + 0x18)) {
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        lVar17 = 0;
        lVar8 = lVar7 + 0x20;
        do {
          FUN_04f78e50(plVar10,0,0);
          uVar18 = (uint)lVar17;
          if (*(int *)(unaff_x22 + 0x5c) == 2) {
            plVar11 = (long *)FUN_04f79730(plVar10,in_stack_00000030,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            lVar14 = *(long *)(lVar8 + lVar17 * 8);
            if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar11 == (long *)0x0))
            goto LAB_055d7b30;
          }
          else {
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            lVar14 = *(long *)(lVar8 + lVar17 * 8);
            if (lVar14 == 0) goto LAB_055d7b30;
            FUN_0556053c(lVar14,0);
            FUN_055d8110();
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            lVar14 = *(long *)(lVar8 + lVar17 * 8);
            if (lVar14 == 0) goto LAB_055d7b30;
            uVar5 = FUN_0556053c(lVar14,0);
            uVar6 = FUN_04f6ebb4(uVar5,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar8 + lVar17 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              plVar11 = *(long **)(unaff_x22 + 0x28);
              uVar5 = FUN_0556053c(lVar14,0);
              if (plVar11 == (long *)0x0) goto LAB_055d7b30;
              uVar5 = (**(code **)(*plVar11 + 0x308))
                                (plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x310));
              lVar14 = FUN_04f7a6a0(plVar10,uVar5,0);
              if (lVar14 == 0) goto LAB_055d7b30;
              FUN_04f7a548(lVar14,0x3a,0);
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            lVar14 = *(long *)(lVar8 + lVar17 * 8);
            if (lVar14 == 0) goto LAB_055d7b30;
            uVar5 = FUN_0555e9b8(lVar14,0);
            plVar11 = plVar10;
          }
          FUN_04f79730(plVar11,uVar5,0);
          if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
          plVar11 = *(long **)(lVar8 + lVar17 * 8);
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          iVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
          if (iVar3 == 2) {
LAB_055d71d4:
            System_Collections_Queue___ctor(plVar10,0,0x40,0);
          }
          else {
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            plVar11 = *(long **)(lVar8 + lVar17 * 8);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            iVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
            if (iVar3 == 4) goto LAB_055d71d4;
          }
          plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar11 + 0x518))
                    (plVar11,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                     ,uVar5,*(undefined8 *)(*plVar11 + 0x520));
          (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x2e0));
          lVar17 = lVar17 + 1;
        } while ((int)lVar17 < *(int *)(lVar7 + 0x18));
      }
    }
    plVar10 = *(long **)(unaff_x22 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x298))
              (plVar10,plVar12,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar10 + 0x2a0));
    unaff_x28 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
  }
  else {
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar9);
    }
  }
  plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  uVar5 = FUN_0557af78(unaff_x27,0);
  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
  }
  uVar5 = FUN_05819fc8(uVar5,0);
  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
  (**(code **)(*plVar12 + 0x518))
            (plVar12,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*plVar12 + 0x520));
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
    lVar7 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
    if (lVar7 == 0) goto LAB_055d7b30;
    uVar5 = FUN_05546520(lVar7,0);
    (**(code **)(*plVar12 + 0x558))
              (plVar12,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar5,*(undefined8 *)(*plVar12 + 0x560));
  }
  else {
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
    lVar7 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
    if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_055d7b30;
    iVar3 = FUN_0558c670(lVar8,*(undefined8 *)(lVar7 + 0x90),0);
    if (iVar3 == -3) goto LAB_055d738c;
  }
  plVar10 = unaff_x27;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9;
  }
  uVar5 = FUN_0557af78(plVar10,0);
  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
  }
  uVar5 = FUN_05819fc8(uVar5,0);
  (**(code **)(*plVar12 + 0x518))
            (plVar12,*(undefined8 *)
                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
             ,uVar5,*(undefined8 *)(*plVar12 + 0x520));
  lVar7 = unaff_x27[6];
  uVar5 = *(undefined8 *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_050e4454(uVar5,0);
  FUN_055ccff4(lVar7,plVar12,uVar5);
  uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
  uVar13 = FUN_0557af78(unaff_x27,0);
  uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
  if ((uVar6 & 1) != 0) {
    uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
    (**(code **)(*plVar12 + 0x558))
              (plVar12,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar5,*(undefined8 *)(*plVar12 + 0x560));
  }
  if (plVar4 == (long *)0x0) {
    lVar7 = *plVar12;
    uVar13 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
    uVar15 = *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    uVar16 = *(undefined8 *)(lVar7 + 0x560);
    uVar5 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
    (**(code **)(lVar7 + 0x558))(plVar12,uVar13,uVar15,uVar5,uVar16);
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar12 + 0x558))
                (plVar12,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar12 + 0x560));
    }
    lVar7 = plVar4[3];
    uVar5 = *(undefined8 *)
             Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_050e4454(uVar5,0);
    FUN_055ccff4(lVar7,plVar12,uVar5);
    uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
    uVar13 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar5 = FUN_05819fc8(uVar5,0);
      lVar7 = *plVar12;
      uVar13 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
      uVar16 = *(undefined8 *)(lVar7 + 0x560);
      uVar15 = *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
      ;
      goto LAB_055d7658;
    }
  }
  plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  uVar5 = FUN_0554de78(in_stack_00000020,0);
  uVar5 = FUN_04f6f6b4(*(undefined8 *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                       ,in_stack_00000030,uVar5,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x518))
              (plVar4,*(undefined8 *)
                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
               ,uVar5,*(undefined8 *)(*plVar4 + 0x520));
    (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar4,*(undefined8 *)(*plVar12 + 0x2e0));
    iVar3 = (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
    puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    if (iVar3 != 0) {
      (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
      uVar5 = FUN_055d9b50();
      (**(code **)(*plVar12 + 0x558))
                (plVar12,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                 *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
    }
    iVar3 = (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
    if (iVar3 != 1) {
      (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
      uVar5 = FUN_055d9bc0();
      (**(code **)(*plVar12 + 0x558))
                (plVar12,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                 ,*(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
    }
    iVar3 = (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
    if (iVar3 != 1) {
      (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
      uVar5 = FUN_055d9bc0();
      (**(code **)(*plVar12 + 0x558))
                (plVar12,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                 *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
    }
    lVar7 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x18) != 0) {
        plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
        FUN_04f77e78(plVar4,0);
        if (0 < *(int *)(lVar7 + 0x18)) {
          if (plVar4 == (long *)0x0) goto LAB_055d7b30;
          lVar17 = 0;
          lVar8 = lVar7 + 0x20;
          do {
            FUN_04f78e50(plVar4,0,0);
            uVar18 = (uint)lVar17;
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
              plVar9 = (long *)FUN_04f79730(plVar4,in_stack_00000030,0);
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar8 + lVar17 * 8);
              if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar9 == (long *)0x0))
              goto LAB_055d7b30;
            }
            else {
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar8 + lVar17 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              FUN_0556053c(lVar14,0);
              FUN_055d8110();
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar8 + lVar17 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0556053c(lVar14,0);
              uVar6 = FUN_04f6ebb4(uVar5,0);
              if ((uVar6 & 1) == 0) {
                if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
                lVar14 = *(long *)(lVar8 + lVar17 * 8);
                if (lVar14 == 0) goto LAB_055d7b30;
                plVar9 = *(long **)(unaff_x22 + 0x28);
                uVar5 = FUN_0556053c(lVar14,0);
                if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                uVar5 = (**(code **)(*plVar9 + 0x308))
                                  (plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x310));
                lVar14 = FUN_04f7a6a0(plVar4,uVar5,0);
                if (lVar14 == 0) goto LAB_055d7b30;
                FUN_04f7a548(lVar14,0x3a,0);
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar8 + lVar17 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0555e9b8(lVar14,0);
              plVar9 = plVar4;
            }
            FUN_04f79730(plVar9,uVar5,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
            plVar9 = *(long **)(lVar8 + lVar17 * 8);
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
            if (iVar3 == 2) {
LAB_055d79f8:
              System_Collections_Queue___ctor(plVar4,0,0x40,0);
            }
            else {
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_055d7b34;
              plVar9 = *(long **)(lVar8 + lVar17 * 8);
              if (plVar9 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (iVar3 == 4) goto LAB_055d79f8;
            }
            plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar9 + 0x518))
                      (plVar9,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar5,*(undefined8 *)(*plVar9 + 0x520));
            (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar9,*(undefined8 *)(*plVar12 + 0x2e0));
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < *(int *)(lVar7 + 0x18));
        }
      }
      plVar4 = *(long **)(unaff_x22 + 0x78);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x2a8))
                  (plVar4,plVar12,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar4 + 0x2b0)
                  );
        unaff_x19 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
        ;
        unaff_x20 = in_stack_00000020;
        goto LAB_055d7adc;
      }
    }
  }
  goto LAB_055d7b30;
code_r0x055d6800:
  param_1 = FUN_055da208();
  goto code_r0x055d680c;
}


