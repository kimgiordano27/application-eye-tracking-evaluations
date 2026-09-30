/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$SqlDateTimeToDateTime
ENTRY_POINT: 055d5e8c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 220
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_5
*/


undefined8
System_Xml_BinXmlDateTime__SqlDateTimeToDateTime
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  int unaff_w27;
  long lVar21;
  uint uVar22;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  (**(code **)(*unaff_x23 + 0x558))
            (param_2,**(undefined8 **)(param_1 + 0x540),*unaff_x20,param_5,
             *(undefined8 *)(*unaff_x23 + 0x560));
  if (unaff_x25 == (long *)0x0) goto LAB_055d7b30;
  (**(code **)(*unaff_x25 + 0x2d8))();
  plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  (**(code **)(*unaff_x23 + 0x2d8))();
  FUN_055d83a4();
  plVar6 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (plVar5 == (long *)0x0) goto LAB_055d7b30;
  (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x2e0));
  FUN_055d9c74();
  if (0 < unaff_w27) {
    iVar4 = 0;
    do {
      plVar7 = (long *)FUN_0557e298();
      if (plVar7 == (long *)0x0) goto LAB_055d7b30;
      iVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
      if ((iVar3 != 3) &&
         ((((iVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
            iVar3 == 2 ||
            (iVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
            iVar3 == 1)) ||
           (iVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
           iVar3 == 4)) && (uVar8 = FUN_055da208(), (uVar8 & 1) == 0)))) {
        iVar3 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        uVar9 = FUN_055d8ef0();
        plVar7 = plVar6;
        if (iVar3 != 1) {
          plVar7 = plVar5;
        }
        if (plVar7 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar7 + 0x2d8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x2e0));
      }
      iVar4 = iVar4 + 1;
    } while (unaff_w27 != iVar4);
  }
  puVar20 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(in_stack_00000020 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar7 = (long *)FUN_0554c018(in_stack_00000020,0);
    if (plVar7 == (long *)0x0) goto LAB_055d7b30;
    iVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar7 + 0x208))
                                    (plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x210));
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        uVar8 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
        if ((uVar8 & 1) != 0) {
          plVar10 = (long *)(**(code **)(*plVar7 + 0x208))
                                      (plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x210));
          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
          lVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          if (lVar11 == in_stack_00000020) {
            plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar13 = in_stack_00000020;
LAB_055d61bc:
            uVar9 = FUN_0554de78(lVar13,0);
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)PTR_DAT_067d7c28,uVar9,
                       *(undefined8 *)(*plVar10 + 0x520));
          }
          else {
            if (lVar11 == 0) goto LAB_055d7b30;
            iVar3 = FUN_0554d1c8(lVar11,0);
            if (1 < iVar3) {
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar13 = lVar11;
              goto LAB_055d61bc;
            }
            plVar10 = (long *)FUN_055d524c();
          }
          uVar9 = FUN_05546520(lVar11,0);
          uVar12 = FUN_05546520(in_stack_00000020,0);
          uVar8 = thunk_FUN_04f6d944(uVar9,uVar12,0);
          if ((uVar8 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                       ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar10 + 0x520));
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                       ,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                       ,*(undefined8 *)(*plVar10 + 0x520));
          }
          uVar9 = FUN_05546520(lVar11,0);
          uVar12 = FUN_05546520(in_stack_00000020,0);
          uVar8 = thunk_FUN_04f6d944(uVar9,uVar12,0);
          if ((uVar8 & 1) == 0) {
            lVar13 = FUN_05546520(lVar11,0);
            if (lVar13 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar13 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar3 = FUN_0554d1c8(lVar11,0);
              if (iVar3 < 2) {
                FUN_05546520(lVar11,0);
                plVar14 = (long *)FUN_055d8110();
                if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x2e0));
              }
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar14 = *(long **)(unaff_x22 + 0x28);
              uVar9 = FUN_05546520(lVar11,0);
              if (plVar14 == (long *)0x0) goto LAB_055d7b30;
              plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                          (plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x310));
              uVar9 = FUN_0554de78(lVar11,0);
              if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar9 = FUN_04f6f6b4(plVar14,*(undefined8 *)PTR_DAT_067ce970,uVar9,0);
              if (plVar10 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar10 + 0x518))
                        (plVar10,*(undefined8 *)PTR_DAT_067d7c28,uVar9,
                         *(undefined8 *)(*plVar10 + 0x520));
              puVar20 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar6 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar6 + 0x2d8))(plVar6,plVar10,*(undefined8 *)(*plVar6 + 0x2e0));
          plVar14 = (long *)(**(code **)(*plVar7 + 0x208))
                                      (plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x210));
          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
          lVar11 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
          if (lVar11 == 0) {
            plVar14 = *(long **)(unaff_x22 + 0x48);
            if ((plVar14 == (long *)0x0) ||
               (plVar14 = (long *)(**(code **)(*plVar14 + 0x5f8))
                                            (plVar14,*puVar20,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar14 + 0x600)),
               plVar10 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar14,*(undefined8 *)(*plVar10 + 0x2d0));
            plVar10 = *(long **)(unaff_x22 + 0x48);
            if ((plVar10 == (long *)0x0) ||
               (plVar10 = (long *)(**(code **)(*plVar10 + 0x5f8))
                                            (plVar10,*puVar20,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar10 + 0x600)),
               plVar14 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x2e0));
            (**(code **)(*plVar7 + 0x208))(plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x210));
            uVar9 = FUN_055d4838();
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x2d8))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x2e0));
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      } while (iVar4 < iVar3);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330)),
     (uVar8 & 1) == 0)) {
    (**(code **)(*plVar5 + 0x2b8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x2c0));
  }
  plVar5 = *(long **)(in_stack_00000020 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
    puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar11 == 0) goto LAB_055d7b30;
    puVar20 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar11 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
    uStack0000000000000030 = *puVar20;
  }
  else {
    FUN_05546520(in_stack_00000020,0);
    FUN_055d8110();
    lVar11 = FUN_05546520(in_stack_00000020,0);
    if (lVar11 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar11 + 0x10) == 0) {
      puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar6 = *(long **)(unaff_x22 + 0x28);
    uVar9 = FUN_05546520(in_stack_00000020,0);
    if (plVar6 == (long *)0x0) goto LAB_055d7b30;
    plVar14 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x310));
    if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar14);
    }
    uStack0000000000000030 = FUN_04f65260(plVar14,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar5 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar6 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar7 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
        if (plVar10 == (long *)0x0) {
LAB_055d66d4:
          plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar6 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar6)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
              if (plVar10 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar6 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar10);
                }
              }
              plVar14 = *(long **)(unaff_x22 + 0x38);
              if (plVar14 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
              if (iVar3 < 1) {
                uVar8 = FUN_055da208();
                if ((uVar8 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar6 = (long *)FUN_055a5390(plVar10,0);
                  lVar11 = FUN_055a4c24(plVar10,0);
                  lVar13 = (**(code **)(*plVar10 + 0x2c8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                  if (lVar13 == 0) goto LAB_055d7b30;
                  lVar13 = *(long *)(lVar13 + 0x48);
                  uVar9 = thunk_FUN_02f45270(*plVar7);
                  FUN_055aee44(uVar9,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar11,0);
                  if (lVar13 == 0) goto LAB_055d7b30;
                  plVar14 = (long *)FUN_0557ba08(lVar13,uVar9,0);
                  if (plVar14 == (long *)0x0) {
                    plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar9 = FUN_0557af78(plVar10,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar9 = FUN_05819fc8(uVar9,0);
                    if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar7 + 0x518))
                              (plVar7,*(undefined8 *)PTR_DAT_067cd778,uVar9,
                               *(undefined8 *)(*plVar7 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar9 = FUN_05546520(in_stack_00000020,0);
                      (**(code **)(*plVar7 + 0x558))
                                (plVar7,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar9,*(undefined8 *)(*plVar7 + 0x560));
                    }
                    else {
                      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar13 == 0) goto LAB_055d7b30;
                      iVar3 = FUN_0558c670(lVar13,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar3 == -3) goto LAB_055d6f20;
                    }
                    plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar13 = (**(code **)(*plVar10 + 0x2c8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if (lVar13 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0554de78(lVar13,0);
                    uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                         ,uStack0000000000000030,uVar9,0);
                    if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar16 + 0x518))
                              (plVar16,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar9,*(undefined8 *)(*plVar16 + 0x520));
                    (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar16,*(undefined8 *)(*plVar7 + 0x2e0));
                    if (lVar11 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar11 + 0x18) != 0) {
                      plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar16,0);
                      if (0 < *(int *)(lVar11 + 0x18)) {
                        if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                        lVar21 = 0;
                        lVar13 = lVar11 + 0x20;
                        do {
                          FUN_04f78e50(plVar16,0,0);
                          uVar22 = (uint)lVar21;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar15 = (long *)FUN_04f79730(plVar16,uStack0000000000000030,0);
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar13 + lVar21 * 8);
                            if ((lVar17 == 0) ||
                               (uVar9 = FUN_0555e9b8(lVar17,0), plVar15 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar13 + lVar21 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar17,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar13 + lVar21 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            uVar9 = FUN_0556053c(lVar17,0);
                            uVar8 = FUN_04f6ebb4(uVar9,0);
                            if ((uVar8 & 1) == 0) {
                              if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                              lVar17 = *(long *)(lVar13 + lVar21 * 8);
                              if (lVar17 == 0) goto LAB_055d7b30;
                              plVar15 = *(long **)(unaff_x22 + 0x28);
                              uVar9 = FUN_0556053c(lVar17,0);
                              if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                              uVar9 = (**(code **)(*plVar15 + 0x308))
                                                (plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x310));
                              lVar17 = FUN_04f7a6a0(plVar16,uVar9,0);
                              if (lVar17 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar17,0x3a,0);
                            }
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar13 + lVar21 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            uVar9 = FUN_0555e9b8(lVar17,0);
                            plVar15 = plVar16;
                          }
                          FUN_04f79730(plVar15,uVar9,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          plVar15 = *(long **)(lVar13 + lVar21 * 8);
                          if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar15 + 0x1d8))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                          if (iVar3 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar16,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            plVar15 = *(long **)(lVar13 + lVar21 * 8);
                            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                            iVar3 = (**(code **)(*plVar15 + 0x1d8))
                                              (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                            if (iVar3 == 4) goto LAB_055d71d4;
                          }
                          plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar9 = (**(code **)(*plVar16 + 0x168))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                          if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar15 + 0x518))
                                    (plVar15,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar9,*(undefined8 *)(*plVar15 + 0x520));
                          (**(code **)(*plVar7 + 0x2d8))
                                    (plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x2e0));
                          lVar21 = lVar21 + 1;
                        } while ((int)lVar21 < *(int *)(lVar11 + 0x18));
                      }
                    }
                    plVar16 = *(long **)(unaff_x22 + 0x78);
                    if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar16 + 0x298))
                              (plVar16,plVar7,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar16 + 0x2a0));
                    plVar7 = (long *)
                             UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar7 + 0x130);
                    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar14);
                    }
                  }
                  plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = FUN_0557af78(plVar10,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar9 = FUN_05819fc8(uVar9,0);
                  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar16 + 0x518))
                            (plVar16,*(undefined8 *)PTR_DAT_067cd778,uVar9,
                             *(undefined8 *)(*plVar16 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar11 = (**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                    if (lVar11 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_05546520(lVar11,0);
                    (**(code **)(*plVar16 + 0x558))
                              (plVar16,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar9,*(undefined8 *)(*plVar16 + 0x560));
                  }
                  else {
                    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar11 = (**(code **)(*plVar10 + 0x2c8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if ((lVar11 == 0) || (lVar13 == 0)) goto LAB_055d7b30;
                    iVar3 = FUN_0558c670(lVar13,*(undefined8 *)(lVar11 + 0x90),0);
                    if (iVar3 == -3) goto LAB_055d738c;
                  }
                  plVar15 = plVar10;
                  if (plVar14 != (long *)0x0) {
                    plVar15 = plVar14;
                  }
                  uVar9 = FUN_0557af78(plVar15,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar9 = FUN_05819fc8(uVar9,0);
                  (**(code **)(*plVar16 + 0x518))
                            (plVar16,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar9,*(undefined8 *)(*plVar16 + 0x520));
                  lVar11 = plVar10[6];
                  uVar9 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar9 = FUN_050e4454(uVar9,0);
                  FUN_055ccff4(lVar11,plVar16,uVar9);
                  uVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
                  ;
                  uVar12 = FUN_0557af78(plVar10,0);
                  uVar8 = FUN_04f6dc3c(uVar9,uVar12,0);
                  if ((uVar8 & 1) != 0) {
                    uVar9 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    (**(code **)(*plVar16 + 0x558))
                              (plVar16,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar9,*(undefined8 *)(*plVar16 + 0x560));
                  }
                  if (plVar6 == (long *)0x0) {
                    lVar11 = *plVar16;
                    uVar12 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar18 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar19 = *(undefined8 *)(lVar11 + 0x560);
                    uVar9 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar11 + 0x558))(plVar16,uVar12,uVar18,uVar9,uVar19);
                  }
                  else {
                    uVar8 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                    if ((uVar8 & 1) != 0) {
                      (**(code **)(*plVar16 + 0x558))
                                (plVar16,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar16 + 0x560))
                      ;
                    }
                    lVar11 = plVar6[3];
                    uVar9 = *(undefined8 *)
                             Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar9 = FUN_050e4454(uVar9,0);
                    FUN_055ccff4(lVar11,plVar16,uVar9);
                    uVar9 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    uVar12 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0))
                    ;
                    uVar8 = FUN_04f6dc3c(uVar9,uVar12,0);
                    if ((uVar8 & 1) != 0) {
                      uVar9 = (**(code **)(*plVar6 + 0x1c8))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar9 = FUN_05819fc8(uVar9,0);
                      lVar11 = *plVar16;
                      uVar12 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar19 = *(undefined8 *)(lVar11 + 0x560);
                      uVar18 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar6 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = FUN_0554de78(in_stack_00000020,0);
                  uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                       ,uStack0000000000000030,uVar9,0);
                  if (plVar6 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar6 + 0x518))
                            (plVar6,*(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar9,*(undefined8 *)(*plVar6 + 0x520));
                  (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar6,*(undefined8 *)(*plVar16 + 0x2e0));
                  iVar3 = (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280))
                  ;
                  puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar3 != 0) {
                    (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
                    uVar9 = FUN_055d9b50();
                    (**(code **)(*plVar16 + 0x558))
                              (plVar16,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar16 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
                    uVar9 = FUN_055d9bc0();
                    (**(code **)(*plVar16 + 0x558))
                              (plVar16,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar16 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                    uVar9 = FUN_055d9bc0();
                    (**(code **)(*plVar16 + 0x558))
                              (plVar16,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar16 + 0x560));
                  }
                  lVar11 = (**(code **)(*plVar10 + 0x268))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x270));
                  if (lVar11 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar11 + 0x18) != 0) {
                    plVar6 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar6,0);
                    if (0 < *(int *)(lVar11 + 0x18)) {
                      if (plVar6 == (long *)0x0) goto LAB_055d7b30;
                      lVar21 = 0;
                      lVar13 = lVar11 + 0x20;
                      do {
                        FUN_04f78e50(plVar6,0,0);
                        uVar22 = (uint)lVar21;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar10 = (long *)FUN_04f79730(plVar6,uStack0000000000000030,0);
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar13 + lVar21 * 8);
                          if ((lVar17 == 0) ||
                             (uVar9 = FUN_0555e9b8(lVar17,0), plVar10 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar13 + lVar21 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar17,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar13 + lVar21 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          uVar9 = FUN_0556053c(lVar17,0);
                          uVar8 = FUN_04f6ebb4(uVar9,0);
                          if ((uVar8 & 1) == 0) {
                            if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                            lVar17 = *(long *)(lVar13 + lVar21 * 8);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            plVar10 = *(long **)(unaff_x22 + 0x28);
                            uVar9 = FUN_0556053c(lVar17,0);
                            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                            uVar9 = (**(code **)(*plVar10 + 0x308))
                                              (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
                            lVar17 = FUN_04f7a6a0(plVar6,uVar9,0);
                            if (lVar17 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar17,0x3a,0);
                          }
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          lVar17 = *(long *)(lVar13 + lVar21 * 8);
                          if (lVar17 == 0) goto LAB_055d7b30;
                          uVar9 = FUN_0555e9b8(lVar17,0);
                          plVar10 = plVar6;
                        }
                        FUN_04f79730(plVar10,uVar9,0);
                        if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                        plVar10 = *(long **)(lVar13 + lVar21 * 8);
                        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                        iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                        if (iVar3 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar6,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                          plVar10 = *(long **)(lVar13 + lVar21 * 8);
                          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                          if (iVar3 == 4) goto LAB_055d79f8;
                        }
                        plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar9 = (**(code **)(*plVar6 + 0x168))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar10 + 0x518))
                                  (plVar10,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar9,*(undefined8 *)(*plVar10 + 0x520));
                        (**(code **)(*plVar16 + 0x2d8))
                                  (plVar16,plVar10,*(undefined8 *)(*plVar16 + 0x2e0));
                        lVar21 = lVar21 + 1;
                      } while ((int)lVar21 < *(int *)(lVar11 + 0x18));
                    }
                  }
                  plVar6 = *(long **)(unaff_x22 + 0x78);
                  if (plVar6 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar6 + 0x2a8))
                            (plVar6,plVar16,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar6 + 0x2b0));
                  plVar6 = (long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                }
              }
              else {
                if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                plVar6 = *(long **)(unaff_x22 + 0x38);
                uVar9 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                if (plVar6 == (long *)0x0) goto LAB_055d7b30;
                uVar8 = (**(code **)(*plVar6 + 0x348))
                                  (plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x350));
                plVar6 = (long *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar8 & 1) != 0) {
                  plVar6 = *(long **)(unaff_x22 + 0x38);
                  uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
                  ;
                  if (plVar6 == (long *)0x0) goto LAB_055d7b30;
                  uVar8 = (**(code **)(*plVar6 + 0x348))
                                    (plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x350));
                  plVar6 = (long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar8 & 1) != 0) && (uVar8 = FUN_055da208(), (uVar8 & 1) == 0))
                  goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar7 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7))
          goto LAB_055d66d4;
          plVar14 = (long *)FUN_0557b300(plVar5,iVar4,0);
          if (plVar14 == (long *)0x0) {
            uVar8 = FUN_055da208();
            if ((uVar8 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar1 = *(byte *)(*plVar7 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7))
            goto LAB_055d7b38;
            uVar8 = FUN_055da208();
            if ((uVar8 & 1) != 0) goto LAB_055d7adc;
            lVar11 = plVar14[7];
            plVar6 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar9 = FUN_05546520(in_stack_00000020,0);
              if (plVar6 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar6 + 0x558))
                        (plVar6,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar9,*(undefined8 *)(*plVar6 + 0x560));
            }
            else {
              lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar13 == 0) goto LAB_055d7b30;
              iVar3 = FUN_0558c670(lVar13,*(undefined8 *)(in_stack_00000020 + 0x90),0);
              if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar9 = FUN_0557af78(plVar14,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar9 = FUN_05819fc8(uVar9,0);
            if (plVar6 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar6 + 0x518))
                      (plVar6,*(undefined8 *)PTR_DAT_067cd778,uVar9,*(undefined8 *)(*plVar6 + 0x520)
                      );
            uVar9 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
            uVar12 = FUN_0557af78(plVar14,0);
            uVar8 = FUN_04f6dc3c(uVar9,uVar12,0);
            if ((uVar8 & 1) != 0) {
              uVar9 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
              (**(code **)(*plVar6 + 0x558))
                        (plVar6,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar9,*(undefined8 *)(*plVar6 + 0x560));
            }
            FUN_055ccff4(plVar14[6],plVar6,0);
            plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar9 = FUN_0554de78(in_stack_00000020,0);
            uVar9 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,uStack0000000000000030,uVar9,0);
            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar7 + 0x518))
                      (plVar7,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar9,*(undefined8 *)(*plVar7 + 0x520));
            (**(code **)(*plVar6 + 0x2d8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x2e0));
            uVar8 = FUN_055afea0(plVar14,0);
            if ((uVar8 & 1) != 0) {
              (**(code **)(*plVar6 + 0x558))
                        (plVar6,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar6 + 0x560));
            }
            if (lVar11 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar7,0);
              if (0 < *(int *)(lVar11 + 0x18)) {
                if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                lVar21 = 0;
                lVar13 = lVar11 + 0x20;
                do {
                  FUN_04f78e50(plVar7,0,0);
                  uVar22 = (uint)lVar21;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar10 = (long *)FUN_04f79730(plVar7,uStack0000000000000030,0);
                    if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar13 + lVar21 * 8);
                    if ((lVar17 == 0) || (uVar9 = FUN_0555e9b8(lVar17,0), plVar10 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar13 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar17,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar13 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0556053c(lVar17,0);
                    uVar8 = FUN_04f6ebb4(uVar9,0);
                    if ((uVar8 & 1) == 0) {
                      if (*(uint *)(lVar11 + 0x18) <= uVar22) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar17 = *(long *)(lVar13 + lVar21 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      plVar10 = *(long **)(unaff_x22 + 0x28);
                      uVar9 = FUN_0556053c(lVar17,0);
                      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                      uVar9 = (**(code **)(*plVar10 + 0x308))
                                        (plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x310));
                      lVar17 = FUN_04f7a6a0(plVar7,uVar9,0);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar17,0x3a,0);
                    }
                    if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar13 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar9 = FUN_0555e9b8(lVar17,0);
                    plVar10 = plVar7;
                  }
                  FUN_04f79730(plVar10,uVar9,0);
                  if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                  plVar10 = *(long **)(lVar13 + lVar21 * 8);
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0))
                  ;
                  if (iVar3 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar7,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_055d7b34;
                    plVar10 = *(long **)(lVar13 + lVar21 * 8);
                    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    if (iVar3 == 4) goto LAB_055d6c94;
                  }
                  plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar10 + 0x518))
                            (plVar10,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar9,*(undefined8 *)(*plVar10 + 0x520));
                  (**(code **)(*plVar6 + 0x2d8))(plVar6,plVar10,*(undefined8 *)(*plVar6 + 0x2e0));
                  lVar21 = lVar21 + 1;
                } while ((int)lVar21 < *(int *)(lVar11 + 0x18));
              }
            }
            plVar7 = *(long **)(unaff_x22 + 0x78);
            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar7 + 0x298))
                      (plVar7,plVar6,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar7 + 0x2a0));
            plVar6 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar7 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      } while (iVar4 < iVar3);
    }
    FUN_055ccff4(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


