/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdKatmaiDateOffsetToDateTime
ENTRY_POINT: 055d64fc
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


undefined8 System_Xml_BinXmlDateTime__XsdKatmaiDateOffsetToDateTime(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *unaff_x19;
  long *plVar19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar20;
  long *unaff_x25;
  int unaff_w26;
  long lVar21;
  long *unaff_x28;
  uint uVar22;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  while (uVar5 = FUN_055d4838(), unaff_x23 != (long *)0x0) {
    (**(code **)(*unaff_x23 + 0x2d8))(unaff_x23,uVar5,*(undefined8 *)(*unaff_x23 + 0x2e0));
    do {
      do {
        unaff_w26 = unaff_w26 + 1;
        iVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (iVar3 <= unaff_w26) {
          if ((unaff_x28 != (long *)0x0) &&
             (uVar6 = (**(code **)(*unaff_x28 + 0x328))(), (uVar6 & 1) == 0)) {
            (**(code **)(*unaff_x25 + 0x2b8))();
          }
          plVar20 = *(long **)(unaff_x20 + 0x48);
          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
            puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
          }
          else {
            lVar17 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
            if (lVar17 == 0) goto LAB_055d7b30;
            puVar18 = (undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
            ;
            if (*(int *)(lVar17 + 0x10) == 0) goto LAB_055d659c;
          }
          if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
            uStack0000000000000030 = *puVar18;
          }
          else {
            FUN_05546520(unaff_x20,0);
            FUN_055d8110();
            lVar17 = FUN_05546520(unaff_x20,0);
            if (lVar17 == 0) goto LAB_055d7b30;
            if (*(int *)(lVar17 + 0x10) == 0) {
              puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
              goto LAB_055d665c;
            }
            plVar19 = *(long **)(unaff_x22 + 0x28);
            uVar5 = FUN_05546520(unaff_x20,0);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                        (plVar19,uVar5,*(undefined8 *)(*plVar19 + 0x310));
            if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_067c9338 + 0x90)))
            goto LAB_055d7b4c;
            uStack0000000000000030 = FUN_04f65260(plVar19,*(undefined8 *)PTR_DAT_067ce970,0);
          }
          if (plVar20 == (long *)0x0) goto LAB_055d7b30;
          iVar3 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
          if (iVar3 < 1) goto LAB_055d7af8;
          iVar3 = 0;
          plVar19 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          plVar10 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
          ;
          goto LAB_055d6694;
        }
        plVar20 = (long *)(**(code **)(*unaff_x19 + 0x208))();
        if (plVar20 == (long *)0x0) goto LAB_055d7b30;
        uVar6 = (**(code **)(*plVar20 + 0x1d8))(plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
      } while ((uVar6 & 1) == 0);
      plVar20 = (long *)(**(code **)(*unaff_x19 + 0x208))();
      if (plVar20 == (long *)0x0) goto LAB_055d7b30;
      lVar17 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (lVar17 == unaff_x20) {
        plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        lVar9 = unaff_x20;
LAB_055d61bc:
        uVar5 = FUN_0554de78(lVar9,0);
        if (plVar20 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar20 + 0x518))
                  (plVar20,*(undefined8 *)PTR_DAT_067d7c28,uVar5,*(undefined8 *)(*plVar20 + 0x520));
      }
      else {
        if (lVar17 == 0) goto LAB_055d7b30;
        iVar3 = FUN_0554d1c8(lVar17,0);
        if (1 < iVar3) {
          plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          lVar9 = lVar17;
          goto LAB_055d61bc;
        }
        plVar20 = (long *)FUN_055d524c();
      }
      uVar5 = FUN_05546520(lVar17,0);
      uVar13 = FUN_05546520(unaff_x20,0);
      uVar6 = thunk_FUN_04f6d944(uVar5,uVar13,0);
      if ((uVar6 & 1) != 0) {
        if (plVar20 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar20 + 0x518))
                  (plVar20,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                   ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar20 + 0x520));
        (**(code **)(*plVar20 + 0x518))
                  (plVar20,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                   ,*(undefined8 *)
                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                   ,*(undefined8 *)(*plVar20 + 0x520));
      }
      uVar5 = FUN_05546520(lVar17,0);
      uVar13 = FUN_05546520(unaff_x20,0);
      uVar6 = thunk_FUN_04f6d944(uVar5,uVar13,0);
      if ((uVar6 & 1) == 0) {
        lVar9 = FUN_05546520(lVar17,0);
        if (lVar9 == 0) goto LAB_055d7b30;
        if ((*(int *)(lVar9 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
          iVar3 = FUN_0554d1c8(lVar17,0);
          if (iVar3 < 2) {
            FUN_05546520(lVar17,0);
            plVar19 = (long *)FUN_055d8110();
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar20,*(undefined8 *)(*plVar19 + 0x2e0));
          }
          plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          plVar19 = *(long **)(unaff_x22 + 0x28);
          uVar5 = FUN_05546520(lVar17,0);
          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                      (plVar19,uVar5,*(undefined8 *)(*plVar19 + 0x310));
          uVar5 = FUN_0554de78(lVar17,0);
          if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar19);
          }
          uVar5 = FUN_04f6f6b4(plVar19,*(undefined8 *)PTR_DAT_067ce970,uVar5,0);
          if (plVar20 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar20 + 0x518))
                    (plVar20,*(undefined8 *)PTR_DAT_067d7c28,uVar5,*(undefined8 *)(*plVar20 + 0x520)
                    );
          unaff_x20 = in_stack_00000020;
          unaff_x29 = (undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
          ;
        }
      }
      if (unaff_x28 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*unaff_x28 + 0x2d8))();
      plVar19 = (long *)(**(code **)(*unaff_x19 + 0x208))();
      if (plVar19 == (long *)0x0) goto LAB_055d7b30;
      lVar17 = (**(code **)(*plVar19 + 0x208))(plVar19,*(undefined8 *)(*plVar19 + 0x210));
    } while (lVar17 != 0);
    plVar19 = *(long **)(unaff_x22 + 0x48);
    if ((plVar19 == (long *)0x0) ||
       (plVar19 = (long *)(**(code **)(*plVar19 + 0x5f8))
                                    (plVar19,*unaff_x29,
                                     *(undefined8 *)
                                      System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                     ,*(undefined8 *)PTR_DAT_067cd6c0,
                                     *(undefined8 *)(*plVar19 + 0x600)), plVar20 == (long *)0x0))
    break;
    (**(code **)(*plVar20 + 0x2c8))(plVar20,plVar19,*(undefined8 *)(*plVar20 + 0x2d0));
    plVar20 = *(long **)(unaff_x22 + 0x48);
    if ((plVar20 == (long *)0x0) ||
       (unaff_x23 = (long *)(**(code **)(*plVar20 + 0x5f8))
                                      (plVar20,*unaff_x29,
                                       *(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                       ,*(undefined8 *)PTR_DAT_067cd6c0,
                                       *(undefined8 *)(*plVar20 + 0x600)), plVar19 == (long *)0x0))
    break;
    (**(code **)(*plVar19 + 0x2d8))(plVar19,unaff_x23,*(undefined8 *)(*plVar19 + 0x2e0));
    (**(code **)(*unaff_x19 + 0x208))();
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_055d6694:
  plVar7 = (long *)FUN_0557b300(plVar20,iVar3,0);
  if (plVar7 == (long *)0x0) {
LAB_055d66d4:
    plVar7 = (long *)FUN_0557b300(plVar20,iVar3,0);
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar19 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
          (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *plVar19)) &&
         ((in_stack_00000028 & 0x100000000) != 0)) {
        plVar7 = (long *)FUN_0557b300(plVar20,iVar3,0);
        if (plVar7 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar19 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *plVar19)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar7);
          }
        }
        plVar8 = *(long **)(unaff_x22 + 0x38);
        if (plVar8 == (long *)0x0) goto LAB_055d7b30;
        iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
        if (iVar4 < 1) {
          uVar6 = FUN_055da208();
          if ((uVar6 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
            plVar19 = (long *)FUN_055a5390(plVar7,0);
            lVar17 = FUN_055a4c24(plVar7,0);
            lVar9 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
            if (lVar9 == 0) goto LAB_055d7b30;
            lVar9 = *(long *)(lVar9 + 0x48);
            uVar5 = thunk_FUN_02f45270(*plVar10);
            FUN_055aee44(uVar5,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                         ,lVar17,0);
            if (lVar9 == 0) goto LAB_055d7b30;
            plVar8 = (long *)FUN_0557ba08(lVar9,uVar5,0);
            if (plVar8 == (long *)0x0) {
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = FUN_0557af78(plVar7,0);
              if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
              }
              uVar5 = FUN_05819fc8(uVar5,0);
              if (plVar10 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar10 + 0x518))
                        (plVar10,*(undefined8 *)PTR_DAT_067cd778,uVar5,
                         *(undefined8 *)(*plVar10 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                uVar5 = FUN_05546520(in_stack_00000020,0);
                (**(code **)(*plVar10 + 0x558))
                          (plVar10,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           uVar5,*(undefined8 *)(*plVar10 + 0x560));
              }
              else {
                lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar9 == 0) goto LAB_055d7b30;
                iVar4 = FUN_0558c670(lVar9,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar4 == -3) goto LAB_055d6f20;
              }
              plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar9 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
              if (lVar9 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0554de78(lVar9,0);
              uVar5 = FUN_04f6f6b4(*(undefined8 *)
                                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                   ,uStack0000000000000030,uVar5,0);
              if (plVar12 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar12 + 0x518))
                        (plVar12,*(undefined8 *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar5,*(undefined8 *)(*plVar12 + 0x520));
              (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar12,*(undefined8 *)(*plVar10 + 0x2e0));
              if (lVar17 == 0) goto LAB_055d7b30;
              if (*(long *)(lVar17 + 0x18) != 0) {
                plVar12 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                FUN_04f77e78(plVar12,0);
                if (0 < *(int *)(lVar17 + 0x18)) {
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  lVar21 = 0;
                  lVar9 = lVar17 + 0x20;
                  do {
                    FUN_04f78e50(plVar12,0,0);
                    uVar22 = (uint)lVar21;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar11 = (long *)FUN_04f79730(plVar12,uStack0000000000000030,0);
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar9 + lVar21 * 8);
                      if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar11 == (long *)0x0))
                      goto LAB_055d7b30;
                    }
                    else {
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar9 + lVar21 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      FUN_0556053c(lVar14,0);
                      FUN_055d8110();
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar9 + lVar21 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      uVar5 = FUN_0556053c(lVar14,0);
                      uVar6 = FUN_04f6ebb4(uVar5,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                        lVar14 = *(long *)(lVar9 + lVar21 * 8);
                        if (lVar14 == 0) goto LAB_055d7b30;
                        plVar11 = *(long **)(unaff_x22 + 0x28);
                        uVar5 = FUN_0556053c(lVar14,0);
                        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                        uVar5 = (**(code **)(*plVar11 + 0x308))
                                          (plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x310));
                        lVar14 = FUN_04f7a6a0(plVar12,uVar5,0);
                        if (lVar14 == 0) goto LAB_055d7b30;
                        FUN_04f7a548(lVar14,0x3a,0);
                      }
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar9 + lVar21 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      uVar5 = FUN_0555e9b8(lVar14,0);
                      plVar11 = plVar12;
                    }
                    FUN_04f79730(plVar11,uVar5,0);
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    plVar11 = *(long **)(lVar9 + lVar21 * 8);
                    if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                    iVar4 = (**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    if (iVar4 == 2) {
LAB_055d71d4:
                      System_Collections_Queue___ctor(plVar12,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      plVar11 = *(long **)(lVar9 + lVar21 * 8);
                      if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                      iVar4 = (**(code **)(*plVar11 + 0x1d8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                      if (iVar4 == 4) goto LAB_055d71d4;
                    }
                    plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar5 = (**(code **)(*plVar12 + 0x168))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar11 + 0x518))
                              (plVar11,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar5,*(undefined8 *)(*plVar11 + 0x520));
                    (**(code **)(*plVar10 + 0x2d8))
                              (plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x2e0));
                    lVar21 = lVar21 + 1;
                  } while ((int)lVar21 < *(int *)(lVar17 + 0x18));
                }
              }
              plVar12 = *(long **)(unaff_x22 + 0x78);
              if (plVar12 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar12 + 0x298))
                        (plVar12,plVar10,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar12 + 0x2a0));
              plVar10 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
              ;
            }
            else {
              bVar1 = *(byte *)(*plVar10 + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar8);
              }
            }
            plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = FUN_0557af78(plVar7,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar5 = FUN_05819fc8(uVar5,0);
            if (plVar12 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar12 + 0x518))
                      (plVar12,*(undefined8 *)PTR_DAT_067cd778,uVar5,
                       *(undefined8 *)(*plVar12 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
              lVar17 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
              if (lVar17 == 0) goto LAB_055d7b30;
              uVar5 = FUN_05546520(lVar17,0);
              (**(code **)(*plVar12 + 0x558))
                        (plVar12,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar5,*(undefined8 *)(*plVar12 + 0x560));
            }
            else {
              lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar17 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
              if ((lVar17 == 0) || (lVar9 == 0)) goto LAB_055d7b30;
              iVar4 = FUN_0558c670(lVar9,*(undefined8 *)(lVar17 + 0x90),0);
              if (iVar4 == -3) goto LAB_055d738c;
            }
            plVar11 = plVar7;
            if (plVar8 != (long *)0x0) {
              plVar11 = plVar8;
            }
            uVar5 = FUN_0557af78(plVar11,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar5 = FUN_05819fc8(uVar5,0);
            (**(code **)(*plVar12 + 0x518))
                      (plVar12,*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                       ,uVar5,*(undefined8 *)(*plVar12 + 0x520));
            lVar17 = plVar7[6];
            uVar5 = *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
            ;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar5 = FUN_050e4454(uVar5,0);
            FUN_055ccff4(lVar17,plVar12,uVar5);
            uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            uVar13 = FUN_0557af78(plVar7,0);
            uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
            if ((uVar6 & 1) != 0) {
              uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
              (**(code **)(*plVar12 + 0x558))
                        (plVar12,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar5,*(undefined8 *)(*plVar12 + 0x560));
            }
            if (plVar19 == (long *)0x0) {
              lVar17 = *plVar12;
              uVar13 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
              uVar15 = *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
              uVar16 = *(undefined8 *)(lVar17 + 0x560);
              uVar5 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
              (**(code **)(lVar17 + 0x558))(plVar12,uVar13,uVar15,uVar5,uVar16);
            }
            else {
              uVar6 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
              if ((uVar6 & 1) != 0) {
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                           ,*(undefined8 *)
                             UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar12 + 0x560));
              }
              lVar17 = plVar19[3];
              uVar5 = *(undefined8 *)
                       Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar5 = FUN_050e4454(uVar5,0);
              FUN_055ccff4(lVar17,plVar12,uVar5);
              uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
              uVar13 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
              uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
              if ((uVar6 & 1) != 0) {
                uVar5 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
                if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                }
                uVar5 = FUN_05819fc8(uVar5,0);
                lVar17 = *plVar12;
                uVar13 = *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                uVar16 = *(undefined8 *)(lVar17 + 0x560);
                uVar15 = *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                goto LAB_055d7658;
              }
            }
            plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = FUN_0554de78(in_stack_00000020,0);
            uVar5 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,uStack0000000000000030,uVar5,0);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar5,*(undefined8 *)(*plVar19 + 0x520));
            (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar19,*(undefined8 *)(*plVar12 + 0x2e0));
            iVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
            puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
            if (iVar4 != 0) {
              (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
              uVar5 = FUN_055d9b50();
              (**(code **)(*plVar12 + 0x558))
                        (plVar12,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                         *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
            }
            iVar4 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
            if (iVar4 != 1) {
              (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
              uVar5 = FUN_055d9bc0();
              (**(code **)(*plVar12 + 0x558))
                        (plVar12,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                         *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
            }
            iVar4 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
            if (iVar4 != 1) {
              (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
              uVar5 = FUN_055d9bc0();
              (**(code **)(*plVar12 + 0x558))
                        (plVar12,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                         *(undefined8 *)puVar2,uVar5,*(undefined8 *)(*plVar12 + 0x560));
            }
            lVar17 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
            if (lVar17 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar17 + 0x18) != 0) {
              plVar19 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar19,0);
              if (0 < *(int *)(lVar17 + 0x18)) {
                if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                lVar21 = 0;
                lVar9 = lVar17 + 0x20;
                do {
                  FUN_04f78e50(plVar19,0,0);
                  uVar22 = (uint)lVar21;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar7 = (long *)FUN_04f79730(plVar19,uStack0000000000000030,0);
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar9 + lVar21 * 8);
                    if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar7 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar9 + lVar21 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar14,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar9 + lVar21 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar5 = FUN_0556053c(lVar14,0);
                    uVar6 = FUN_04f6ebb4(uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar14 = *(long *)(lVar9 + lVar21 * 8);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      plVar7 = *(long **)(unaff_x22 + 0x28);
                      uVar5 = FUN_0556053c(lVar14,0);
                      if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                      uVar5 = (**(code **)(*plVar7 + 0x308))
                                        (plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x310));
                      lVar14 = FUN_04f7a6a0(plVar19,uVar5,0);
                      if (lVar14 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar14,0x3a,0);
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar14 = *(long *)(lVar9 + lVar21 * 8);
                    if (lVar14 == 0) goto LAB_055d7b30;
                    uVar5 = FUN_0555e9b8(lVar14,0);
                    plVar7 = plVar19;
                  }
                  FUN_04f79730(plVar7,uVar5,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                  plVar7 = *(long **)(lVar9 + lVar21 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                  iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                  if (iVar4 == 2) {
LAB_055d79f8:
                    System_Collections_Queue___ctor(plVar19,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
                    plVar7 = *(long **)(lVar9 + lVar21 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                    iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    if (iVar4 == 4) goto LAB_055d79f8;
                  }
                  plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar5 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170))
                  ;
                  if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar7 + 0x518))
                            (plVar7,*(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar5,*(undefined8 *)(*plVar7 + 0x520));
                  (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar7,*(undefined8 *)(*plVar12 + 0x2e0));
                  lVar21 = lVar21 + 1;
                } while ((int)lVar21 < *(int *)(lVar17 + 0x18));
              }
            }
            plVar19 = *(long **)(unaff_x22 + 0x78);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2a8))
                      (plVar19,plVar12,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar19 + 0x2b0));
            plVar19 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            unaff_x20 = in_stack_00000020;
          }
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_055d7b30;
          plVar19 = *(long **)(unaff_x22 + 0x38);
          uVar5 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          uVar6 = (**(code **)(*plVar19 + 0x348))(plVar19,uVar5,*(undefined8 *)(*plVar19 + 0x350));
          plVar19 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          if ((uVar6 & 1) != 0) {
            plVar19 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            uVar6 = (**(code **)(*plVar19 + 0x348))(plVar19,uVar5,*(undefined8 *)(*plVar19 + 0x350))
            ;
            plVar19 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if (((uVar6 & 1) != 0) && (uVar6 = FUN_055da208(), (uVar6 & 1) == 0)) goto LAB_055d6d90;
          }
        }
      }
    }
  }
  else {
    bVar1 = *(byte *)(*plVar10 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) goto LAB_055d66d4;
    plVar8 = (long *)FUN_0557b300(plVar20,iVar3,0);
    if (plVar8 == (long *)0x0) {
      uVar6 = FUN_055da208();
      if ((uVar6 & 1) == 0) goto LAB_055d7b30;
    }
    else {
      bVar1 = *(byte *)(*plVar10 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
      goto LAB_055d7b38;
      uVar6 = FUN_055da208();
      if ((uVar6 & 1) != 0) goto LAB_055d7adc;
      lVar17 = plVar8[7];
      plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
        uVar5 = FUN_05546520(unaff_x20,0);
        if (plVar19 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar19 + 0x558))
                  (plVar19,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                   *(undefined8 *)(*plVar19 + 0x560));
      }
      else {
        lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        if (lVar9 == 0) goto LAB_055d7b30;
        iVar4 = FUN_0558c670(lVar9,*(undefined8 *)(unaff_x20 + 0x90),0);
        if (iVar4 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
      }
      uVar5 = FUN_0557af78(plVar8,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar5 = FUN_05819fc8(uVar5,0);
      if (plVar19 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar19 + 0x518))
                (plVar19,*(undefined8 *)PTR_DAT_067cd778,uVar5,*(undefined8 *)(*plVar19 + 0x520));
      uVar5 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
      uVar13 = FUN_0557af78(plVar8,0);
      uVar6 = FUN_04f6dc3c(uVar5,uVar13,0);
      if ((uVar6 & 1) != 0) {
        uVar5 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        (**(code **)(*plVar19 + 0x558))
                  (plVar19,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar5,
                   *(undefined8 *)(*plVar19 + 0x560));
      }
      FUN_055ccff4(plVar8[6],plVar19,0);
      plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar5 = FUN_0554de78(unaff_x20,0);
      uVar5 = FUN_04f6f6b4(*(undefined8 *)
                            Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                           ,uStack0000000000000030,uVar5,0);
      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                 ,uVar5,*(undefined8 *)(*plVar10 + 0x520));
      (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar10,*(undefined8 *)(*plVar19 + 0x2e0));
      uVar6 = FUN_055afea0(plVar8,0);
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar19 + 0x558))
                  (plVar19,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                   *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar19 + 0x560));
      }
      if (lVar17 == 0) goto LAB_055d7b30;
      if (*(long *)(lVar17 + 0x18) != 0) {
        plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
        FUN_04f77e78(plVar10,0);
        if (0 < *(int *)(lVar17 + 0x18)) {
          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
          lVar21 = 0;
          lVar9 = lVar17 + 0x20;
          do {
            FUN_04f78e50(plVar10,0,0);
            uVar22 = (uint)lVar21;
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
              plVar7 = (long *)FUN_04f79730(plVar10,uStack0000000000000030,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar9 + lVar21 * 8);
              if ((lVar14 == 0) || (uVar5 = FUN_0555e9b8(lVar14,0), plVar7 == (long *)0x0))
              goto LAB_055d7b30;
            }
            else {
              if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar9 + lVar21 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              FUN_0556053c(lVar14,0);
              FUN_055d8110();
              if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar9 + lVar21 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0556053c(lVar14,0);
              uVar6 = FUN_04f6ebb4(uVar5,0);
              if ((uVar6 & 1) == 0) {
                if (*(uint *)(lVar17 + 0x18) <= uVar22) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                lVar14 = *(long *)(lVar9 + lVar21 * 8);
                if (lVar14 == 0) goto LAB_055d7b30;
                plVar7 = *(long **)(unaff_x22 + 0x28);
                uVar5 = FUN_0556053c(lVar14,0);
                if (plVar7 == (long *)0x0) goto LAB_055d7b30;
                uVar5 = (**(code **)(*plVar7 + 0x308))
                                  (plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x310));
                lVar14 = FUN_04f7a6a0(plVar10,uVar5,0);
                if (lVar14 == 0) goto LAB_055d7b30;
                FUN_04f7a548(lVar14,0x3a,0);
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar14 = *(long *)(lVar9 + lVar21 * 8);
              if (lVar14 == 0) goto LAB_055d7b30;
              uVar5 = FUN_0555e9b8(lVar14,0);
              plVar7 = plVar10;
            }
            FUN_04f79730(plVar7,uVar5,0);
            if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
            plVar7 = *(long **)(lVar9 + lVar21 * 8);
            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
            iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
            if (iVar4 == 2) {
LAB_055d6c94:
              System_Collections_Queue___ctor(plVar10,0,0x40,0);
            }
            else {
              if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_055d7b34;
              plVar7 = *(long **)(lVar9 + lVar21 * 8);
              if (plVar7 == (long *)0x0) goto LAB_055d7b30;
              iVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
              if (iVar4 == 4) goto LAB_055d6c94;
            }
            plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            if (plVar7 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar7 + 0x518))
                      (plVar7,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar5,*(undefined8 *)(*plVar7 + 0x520));
            (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar7,*(undefined8 *)(*plVar19 + 0x2e0));
            lVar21 = lVar21 + 1;
          } while ((int)lVar21 < *(int *)(lVar17 + 0x18));
        }
      }
      plVar10 = *(long **)(unaff_x22 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar10 + 0x298))
                (plVar10,plVar19,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar10 + 0x2a0)
                );
      plVar19 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      unaff_x20 = in_stack_00000020;
      plVar10 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
    }
  }
LAB_055d7adc:
  iVar3 = iVar3 + 1;
  iVar4 = (**(code **)(*plVar20 + 0x1c8))(plVar20,*(undefined8 *)(*plVar20 + 0x1d0));
  if (iVar4 <= iVar3) {
LAB_055d7af8:
    FUN_055ccff4(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
  goto LAB_055d6694;
}


