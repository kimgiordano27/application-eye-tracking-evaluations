/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdKatmaiDateToDateTime
ENTRY_POINT: 055d60e8
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


undefined8 System_Xml_BinXmlDateTime__XsdKatmaiDateToDateTime(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
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
  
  while (plVar5 = (long *)(**(code **)(param_1 + 0x208))(), plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (lVar6 == unaff_x20) {
      plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      lVar10 = unaff_x20;
LAB_055d61bc:
      uVar7 = FUN_0554de78(lVar10,0);
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x518))
                (plVar5,*(undefined8 *)PTR_DAT_067d7c28,uVar7,*(undefined8 *)(*plVar5 + 0x520));
    }
    else {
      if (lVar6 == 0) break;
      iVar3 = FUN_0554d1c8(lVar6,0);
      if (1 < iVar3) {
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        lVar10 = lVar6;
        goto LAB_055d61bc;
      }
      plVar5 = (long *)FUN_055d524c();
    }
    uVar7 = FUN_05546520(lVar6,0);
    uVar8 = FUN_05546520(unaff_x20,0);
    uVar9 = thunk_FUN_04f6d944(uVar7,uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x518))
                (plVar5,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                 ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar5 + 0x520));
      (**(code **)(*plVar5 + 0x518))
                (plVar5,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                 ,*(undefined8 *)
                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                 ,*(undefined8 *)(*plVar5 + 0x520));
    }
    uVar7 = FUN_05546520(lVar6,0);
    uVar8 = FUN_05546520(unaff_x20,0);
    uVar9 = thunk_FUN_04f6d944(uVar7,uVar8,0);
    if ((uVar9 & 1) == 0) {
      lVar10 = FUN_05546520(lVar6,0);
      if (lVar10 == 0) break;
      if ((*(int *)(lVar10 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
        iVar3 = FUN_0554d1c8(lVar6,0);
        if (iVar3 < 2) {
          FUN_05546520(lVar6,0);
          plVar11 = (long *)FUN_055d8110();
          if (plVar11 == (long *)0x0) break;
          (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2e0));
        }
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        plVar11 = *(long **)(unaff_x22 + 0x28);
        uVar7 = FUN_05546520(lVar6,0);
        if (plVar11 == (long *)0x0) break;
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
        uVar7 = FUN_0554de78(lVar6,0);
        if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar11);
        }
        uVar7 = FUN_04f6f6b4(plVar11,*(undefined8 *)PTR_DAT_067ce970,uVar7,0);
        if (plVar5 == (long *)0x0) break;
        (**(code **)(*plVar5 + 0x518))
                  (plVar5,*(undefined8 *)PTR_DAT_067d7c28,uVar7,*(undefined8 *)(*plVar5 + 0x520));
        unaff_x20 = in_stack_00000020;
        unaff_x29 = (undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
        ;
      }
    }
    if (unaff_x28 == (long *)0x0) break;
    (**(code **)(*unaff_x28 + 0x2d8))();
    plVar11 = (long *)(**(code **)(*unaff_x19 + 0x208))();
    if (plVar11 == (long *)0x0) break;
    lVar6 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
    if (lVar6 == 0) {
      plVar11 = *(long **)(unaff_x22 + 0x48);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x5f8))
                                      (plVar11,*unaff_x29,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                       ,*(undefined8 *)PTR_DAT_067cd6c0,
                                       *(undefined8 *)(*plVar11 + 0x600)), plVar5 == (long *)0x0))
      break;
      (**(code **)(*plVar5 + 0x2c8))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2d0));
      plVar5 = *(long **)(unaff_x22 + 0x48);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x5f8))
                                     (plVar5,*unaff_x29,
                                      *(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                      ,*(undefined8 *)PTR_DAT_067cd6c0,
                                      *(undefined8 *)(*plVar5 + 0x600)), plVar11 == (long *)0x0))
      break;
      (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2e0));
      (**(code **)(*unaff_x19 + 0x208))();
      uVar7 = FUN_055d4838();
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x2e0));
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      iVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (iVar3 <= unaff_w26) {
        if ((unaff_x28 != (long *)0x0) &&
           (uVar9 = (**(code **)(*unaff_x28 + 0x328))(), (uVar9 & 1) == 0)) {
          (**(code **)(*unaff_x25 + 0x2b8))();
        }
        plVar5 = *(long **)(unaff_x20 + 0x48);
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
          puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        else {
          lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
          if (lVar6 == 0) goto LAB_055d7b30;
          puVar20 = (undefined8 *)
                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
          ;
          if (*(int *)(lVar6 + 0x10) == 0) goto LAB_055d659c;
        }
        if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
          uStack0000000000000030 = *puVar20;
        }
        else {
          FUN_05546520(unaff_x20,0);
          FUN_055d8110();
          lVar6 = FUN_05546520(unaff_x20,0);
          if (lVar6 == 0) goto LAB_055d7b30;
          if (*(int *)(lVar6 + 0x10) == 0) {
            puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
            goto LAB_055d665c;
          }
          plVar11 = *(long **)(unaff_x22 + 0x28);
          uVar7 = FUN_05546520(unaff_x20,0);
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
          if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_067c9338 + 0x90)))
          goto LAB_055d7b4c;
          uStack0000000000000030 = FUN_04f65260(plVar11,*(undefined8 *)PTR_DAT_067ce970,0);
        }
        if (plVar5 == (long *)0x0) goto LAB_055d7b30;
        iVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if (iVar3 < 1) goto LAB_055d7af8;
        iVar3 = 0;
        plVar11 = (long *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
        ;
        plVar14 = (long *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
        ;
        goto LAB_055d6694;
      }
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x208))();
      if (plVar5 == (long *)0x0) goto LAB_055d7b30;
      uVar9 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    } while ((uVar9 & 1) == 0);
    param_1 = *unaff_x19;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_055d6694:
  plVar12 = (long *)FUN_0557b300(plVar5,iVar3,0);
  if (plVar12 == (long *)0x0) {
LAB_055d66d4:
    plVar12 = (long *)FUN_0557b300(plVar5,iVar3,0);
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar11 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
          (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *plVar11)) &&
         ((in_stack_00000028 & 0x100000000) != 0)) {
        plVar12 = (long *)FUN_0557b300(plVar5,iVar3,0);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar11 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
        }
        plVar13 = *(long **)(unaff_x22 + 0x38);
        if (plVar13 == (long *)0x0) goto LAB_055d7b30;
        iVar4 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
        if (iVar4 < 1) {
          uVar9 = FUN_055da208();
          if ((uVar9 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
            plVar11 = (long *)FUN_055a5390(plVar12,0);
            lVar6 = FUN_055a4c24(plVar12,0);
            lVar10 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
            if (lVar10 == 0) goto LAB_055d7b30;
            lVar10 = *(long *)(lVar10 + 0x48);
            uVar7 = thunk_FUN_02f45270(*plVar14);
            FUN_055aee44(uVar7,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                         ,lVar6,0);
            if (lVar10 == 0) goto LAB_055d7b30;
            plVar13 = (long *)FUN_0557ba08(lVar10,uVar7,0);
            if (plVar13 == (long *)0x0) {
              plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar7 = FUN_0557af78(plVar12,0);
              if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
              }
              uVar7 = FUN_05819fc8(uVar7,0);
              if (plVar14 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar14 + 0x518))
                        (plVar14,*(undefined8 *)PTR_DAT_067cd778,uVar7,
                         *(undefined8 *)(*plVar14 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                uVar7 = FUN_05546520(in_stack_00000020,0);
                (**(code **)(*plVar14 + 0x558))
                          (plVar14,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           uVar7,*(undefined8 *)(*plVar14 + 0x560));
              }
              else {
                lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar10 == 0) goto LAB_055d7b30;
                iVar4 = FUN_0558c670(lVar10,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar4 == -3) goto LAB_055d6f20;
              }
              plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar10 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
              if (lVar10 == 0) goto LAB_055d7b30;
              uVar7 = FUN_0554de78(lVar10,0);
              uVar7 = FUN_04f6f6b4(*(undefined8 *)
                                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                   ,uStack0000000000000030,uVar7,0);
              if (plVar16 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar16 + 0x518))
                        (plVar16,*(undefined8 *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                         ,uVar7,*(undefined8 *)(*plVar16 + 0x520));
              (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar16,*(undefined8 *)(*plVar14 + 0x2e0));
              if (lVar6 == 0) goto LAB_055d7b30;
              if (*(long *)(lVar6 + 0x18) != 0) {
                plVar16 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                FUN_04f77e78(plVar16,0);
                if (0 < *(int *)(lVar6 + 0x18)) {
                  if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                  lVar21 = 0;
                  lVar10 = lVar6 + 0x20;
                  do {
                    FUN_04f78e50(plVar16,0,0);
                    uVar22 = (uint)lVar21;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar15 = (long *)FUN_04f79730(plVar16,uStack0000000000000030,0);
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar17 = *(long *)(lVar10 + lVar21 * 8);
                      if ((lVar17 == 0) || (uVar7 = FUN_0555e9b8(lVar17,0), plVar15 == (long *)0x0))
                      goto LAB_055d7b30;
                    }
                    else {
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar17 = *(long *)(lVar10 + lVar21 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      FUN_0556053c(lVar17,0);
                      FUN_055d8110();
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar17 = *(long *)(lVar10 + lVar21 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      uVar7 = FUN_0556053c(lVar17,0);
                      uVar9 = FUN_04f6ebb4(uVar7,0);
                      if ((uVar9 & 1) == 0) {
                        if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                        lVar17 = *(long *)(lVar10 + lVar21 * 8);
                        if (lVar17 == 0) goto LAB_055d7b30;
                        plVar15 = *(long **)(unaff_x22 + 0x28);
                        uVar7 = FUN_0556053c(lVar17,0);
                        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                        uVar7 = (**(code **)(*plVar15 + 0x308))
                                          (plVar15,uVar7,*(undefined8 *)(*plVar15 + 0x310));
                        lVar17 = FUN_04f7a6a0(plVar16,uVar7,0);
                        if (lVar17 == 0) goto LAB_055d7b30;
                        FUN_04f7a548(lVar17,0x3a,0);
                      }
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar17 = *(long *)(lVar10 + lVar21 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      uVar7 = FUN_0555e9b8(lVar17,0);
                      plVar15 = plVar16;
                    }
                    FUN_04f79730(plVar15,uVar7,0);
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    plVar15 = *(long **)(lVar10 + lVar21 * 8);
                    if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                    iVar4 = (**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                    if (iVar4 == 2) {
LAB_055d71d4:
                      System_Collections_Queue___ctor(plVar16,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      plVar15 = *(long **)(lVar10 + lVar21 * 8);
                      if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                      iVar4 = (**(code **)(*plVar15 + 0x1d8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                      if (iVar4 == 4) goto LAB_055d71d4;
                    }
                    plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar7 = (**(code **)(*plVar16 + 0x168))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                    if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar15 + 0x518))
                              (plVar15,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar7,*(undefined8 *)(*plVar15 + 0x520));
                    (**(code **)(*plVar14 + 0x2d8))
                              (plVar14,plVar15,*(undefined8 *)(*plVar14 + 0x2e0));
                    lVar21 = lVar21 + 1;
                  } while ((int)lVar21 < *(int *)(lVar6 + 0x18));
                }
              }
              plVar16 = *(long **)(unaff_x22 + 0x78);
              if (plVar16 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar16 + 0x298))
                        (plVar16,plVar14,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar16 + 0x2a0));
              plVar14 = (long *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
              ;
            }
            else {
              bVar1 = *(byte *)(*plVar14 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar13);
              }
            }
            plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = FUN_0557af78(plVar12,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar7 = FUN_05819fc8(uVar7,0);
            if (plVar16 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar16 + 0x518))
                      (plVar16,*(undefined8 *)PTR_DAT_067cd778,uVar7,
                       *(undefined8 *)(*plVar16 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
              lVar6 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              if (lVar6 == 0) goto LAB_055d7b30;
              uVar7 = FUN_05546520(lVar6,0);
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar7,*(undefined8 *)(*plVar16 + 0x560));
            }
            else {
              lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar6 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
              if ((lVar6 == 0) || (lVar10 == 0)) goto LAB_055d7b30;
              iVar4 = FUN_0558c670(lVar10,*(undefined8 *)(lVar6 + 0x90),0);
              if (iVar4 == -3) goto LAB_055d738c;
            }
            plVar15 = plVar12;
            if (plVar13 != (long *)0x0) {
              plVar15 = plVar13;
            }
            uVar7 = FUN_0557af78(plVar15,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar7 = FUN_05819fc8(uVar7,0);
            (**(code **)(*plVar16 + 0x518))
                      (plVar16,*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                       ,uVar7,*(undefined8 *)(*plVar16 + 0x520));
            lVar6 = plVar12[6];
            uVar7 = *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
            ;
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar7 = FUN_050e4454(uVar7,0);
            FUN_055ccff4(lVar6,plVar16,uVar7);
            uVar7 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
            uVar8 = FUN_0557af78(plVar12,0);
            uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
            if ((uVar9 & 1) != 0) {
              uVar7 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar7,*(undefined8 *)(*plVar16 + 0x560));
            }
            if (plVar11 == (long *)0x0) {
              lVar6 = *plVar16;
              uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
              uVar18 = *(undefined8 *)
                        UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
              uVar19 = *(undefined8 *)(lVar6 + 0x560);
              uVar7 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
              (**(code **)(lVar6 + 0x558))(plVar16,uVar8,uVar18,uVar7,uVar19);
            }
            else {
              uVar9 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
              if ((uVar9 & 1) != 0) {
                (**(code **)(*plVar16 + 0x558))
                          (plVar16,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                           ,*(undefined8 *)
                             UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                           *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar16 + 0x560));
              }
              lVar6 = plVar11[3];
              uVar7 = *(undefined8 *)
                       Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar7 = FUN_050e4454(uVar7,0);
              FUN_055ccff4(lVar6,plVar16,uVar7);
              uVar7 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
              uVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
              uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
              if ((uVar9 & 1) != 0) {
                uVar7 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
                if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                }
                uVar7 = FUN_05819fc8(uVar7,0);
                lVar6 = *plVar16;
                uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__
                ;
                uVar19 = *(undefined8 *)(lVar6 + 0x560);
                uVar18 = *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                goto LAB_055d7658;
              }
            }
            plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = FUN_0554de78(in_stack_00000020,0);
            uVar7 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,uStack0000000000000030,uVar7,0);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar7,*(undefined8 *)(*plVar11 + 0x520));
            (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar11,*(undefined8 *)(*plVar16 + 0x2e0));
            iVar4 = (**(code **)(*plVar12 + 0x278))(plVar12,*(undefined8 *)(*plVar12 + 0x280));
            puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
            if (iVar4 != 0) {
              (**(code **)(*plVar12 + 0x278))(plVar12,*(undefined8 *)(*plVar12 + 0x280));
              uVar7 = FUN_055d9b50();
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar16 + 0x560));
            }
            iVar4 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
            if (iVar4 != 1) {
              (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
              uVar7 = FUN_055d9bc0();
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar16 + 0x560));
            }
            iVar4 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
            if (iVar4 != 1) {
              (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
              uVar7 = FUN_055d9bc0();
              (**(code **)(*plVar16 + 0x558))
                        (plVar16,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__,
                         *(undefined8 *)puVar2,uVar7,*(undefined8 *)(*plVar16 + 0x560));
            }
            lVar6 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
            if (lVar6 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar6 + 0x18) != 0) {
              plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar11,0);
              if (0 < *(int *)(lVar6 + 0x18)) {
                if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                lVar21 = 0;
                lVar10 = lVar6 + 0x20;
                do {
                  FUN_04f78e50(plVar11,0,0);
                  uVar22 = (uint)lVar21;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar12 = (long *)FUN_04f79730(plVar11,uStack0000000000000030,0);
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar10 + lVar21 * 8);
                    if ((lVar17 == 0) || (uVar7 = FUN_0555e9b8(lVar17,0), plVar12 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar10 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar17,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar10 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar7 = FUN_0556053c(lVar17,0);
                    uVar9 = FUN_04f6ebb4(uVar7,0);
                    if ((uVar9 & 1) == 0) {
                      if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                      lVar17 = *(long *)(lVar10 + lVar21 * 8);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      plVar12 = *(long **)(unaff_x22 + 0x28);
                      uVar7 = FUN_0556053c(lVar17,0);
                      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                      uVar7 = (**(code **)(*plVar12 + 0x308))
                                        (plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x310));
                      lVar17 = FUN_04f7a6a0(plVar11,uVar7,0);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar17,0x3a,0);
                    }
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    lVar17 = *(long *)(lVar10 + lVar21 * 8);
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar7 = FUN_0555e9b8(lVar17,0);
                    plVar12 = plVar11;
                  }
                  FUN_04f79730(plVar12,uVar7,0);
                  if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                  plVar12 = *(long **)(lVar10 + lVar21 * 8);
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  iVar4 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0))
                  ;
                  if (iVar4 == 2) {
LAB_055d79f8:
                    System_Collections_Queue___ctor(plVar11,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
                    plVar12 = *(long **)(lVar10 + lVar21 * 8);
                    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                    iVar4 = (**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    if (iVar4 == 4) goto LAB_055d79f8;
                  }
                  plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar7 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170))
                  ;
                  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar12 + 0x518))
                            (plVar12,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar7,*(undefined8 *)(*plVar12 + 0x520));
                  (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar12,*(undefined8 *)(*plVar16 + 0x2e0))
                  ;
                  lVar21 = lVar21 + 1;
                } while ((int)lVar21 < *(int *)(lVar6 + 0x18));
              }
            }
            plVar11 = *(long **)(unaff_x22 + 0x78);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x2a8))
                      (plVar11,plVar16,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar11 + 0x2b0));
            plVar11 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            unaff_x20 = in_stack_00000020;
          }
        }
        else {
          if (plVar12 == (long *)0x0) goto LAB_055d7b30;
          plVar11 = *(long **)(unaff_x22 + 0x38);
          uVar7 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          uVar9 = (**(code **)(*plVar11 + 0x348))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x350));
          plVar11 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
          ;
          if ((uVar9 & 1) != 0) {
            plVar11 = *(long **)(unaff_x22 + 0x38);
            uVar7 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            uVar9 = (**(code **)(*plVar11 + 0x348))(plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x350))
            ;
            plVar11 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            if (((uVar9 & 1) != 0) && (uVar9 = FUN_055da208(), (uVar9 & 1) == 0)) goto LAB_055d6d90;
          }
        }
      }
    }
  }
  else {
    bVar1 = *(byte *)(*plVar14 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
    goto LAB_055d66d4;
    plVar13 = (long *)FUN_0557b300(plVar5,iVar3,0);
    if (plVar13 == (long *)0x0) {
      uVar9 = FUN_055da208();
      if ((uVar9 & 1) == 0) goto LAB_055d7b30;
    }
    else {
      bVar1 = *(byte *)(*plVar14 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
      goto LAB_055d7b38;
      uVar9 = FUN_055da208();
      if ((uVar9 & 1) != 0) goto LAB_055d7adc;
      lVar6 = plVar13[7];
      plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
        uVar7 = FUN_05546520(unaff_x20,0);
        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar11 + 0x558))
                  (plVar11,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar7,
                   *(undefined8 *)(*plVar11 + 0x560));
      }
      else {
        lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        if (lVar10 == 0) goto LAB_055d7b30;
        iVar4 = FUN_0558c670(lVar10,*(undefined8 *)(unaff_x20 + 0x90),0);
        if (iVar4 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
      }
      uVar7 = FUN_0557af78(plVar13,0);
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
      }
      uVar7 = FUN_05819fc8(uVar7,0);
      if (plVar11 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar11 + 0x518))
                (plVar11,*(undefined8 *)PTR_DAT_067cd778,uVar7,*(undefined8 *)(*plVar11 + 0x520));
      uVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      uVar8 = FUN_0557af78(plVar13,0);
      uVar9 = FUN_04f6dc3c(uVar7,uVar8,0);
      if ((uVar9 & 1) != 0) {
        uVar7 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
        (**(code **)(*plVar11 + 0x558))
                  (plVar11,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar7,
                   *(undefined8 *)(*plVar11 + 0x560));
      }
      FUN_055ccff4(plVar13[6],plVar11,0);
      plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar7 = FUN_0554de78(unaff_x20,0);
      uVar7 = FUN_04f6f6b4(*(undefined8 *)
                            Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                           ,uStack0000000000000030,uVar7,0);
      if (plVar14 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar14 + 0x518))
                (plVar14,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                 ,uVar7,*(undefined8 *)(*plVar14 + 0x520));
      (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar14,*(undefined8 *)(*plVar11 + 0x2e0));
      uVar9 = FUN_055afea0(plVar13,0);
      if ((uVar9 & 1) != 0) {
        (**(code **)(*plVar11 + 0x558))
                  (plVar11,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                   *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                   *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar11 + 0x560));
      }
      if (lVar6 == 0) goto LAB_055d7b30;
      if (*(long *)(lVar6 + 0x18) != 0) {
        plVar14 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
        FUN_04f77e78(plVar14,0);
        if (0 < *(int *)(lVar6 + 0x18)) {
          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
          lVar21 = 0;
          lVar10 = lVar6 + 0x20;
          do {
            FUN_04f78e50(plVar14,0,0);
            uVar22 = (uint)lVar21;
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
              plVar12 = (long *)FUN_04f79730(plVar14,uStack0000000000000030,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar17 = *(long *)(lVar10 + lVar21 * 8);
              if ((lVar17 == 0) || (uVar7 = FUN_0555e9b8(lVar17,0), plVar12 == (long *)0x0))
              goto LAB_055d7b30;
            }
            else {
              if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar17 = *(long *)(lVar10 + lVar21 * 8);
              if (lVar17 == 0) goto LAB_055d7b30;
              FUN_0556053c(lVar17,0);
              FUN_055d8110();
              if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar17 = *(long *)(lVar10 + lVar21 * 8);
              if (lVar17 == 0) goto LAB_055d7b30;
              uVar7 = FUN_0556053c(lVar17,0);
              uVar9 = FUN_04f6ebb4(uVar7,0);
              if ((uVar9 & 1) == 0) {
                if (*(uint *)(lVar6 + 0x18) <= uVar22) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                lVar17 = *(long *)(lVar10 + lVar21 * 8);
                if (lVar17 == 0) goto LAB_055d7b30;
                plVar12 = *(long **)(unaff_x22 + 0x28);
                uVar7 = FUN_0556053c(lVar17,0);
                if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                uVar7 = (**(code **)(*plVar12 + 0x308))
                                  (plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x310));
                lVar17 = FUN_04f7a6a0(plVar14,uVar7,0);
                if (lVar17 == 0) goto LAB_055d7b30;
                FUN_04f7a548(lVar17,0x3a,0);
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
              lVar17 = *(long *)(lVar10 + lVar21 * 8);
              if (lVar17 == 0) goto LAB_055d7b30;
              uVar7 = FUN_0555e9b8(lVar17,0);
              plVar12 = plVar14;
            }
            FUN_04f79730(plVar12,uVar7,0);
            if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
            plVar12 = *(long **)(lVar10 + lVar21 * 8);
            if (plVar12 == (long *)0x0) goto LAB_055d7b30;
            iVar4 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
            if (iVar4 == 2) {
LAB_055d6c94:
              System_Collections_Queue___ctor(plVar14,0,0x40,0);
            }
            else {
              if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_055d7b34;
              plVar12 = *(long **)(lVar10 + lVar21 * 8);
              if (plVar12 == (long *)0x0) goto LAB_055d7b30;
              iVar4 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
              if (iVar4 == 4) goto LAB_055d6c94;
            }
            plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
            if (plVar12 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar12 + 0x518))
                      (plVar12,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar7,*(undefined8 *)(*plVar12 + 0x520));
            (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x2e0));
            lVar21 = lVar21 + 1;
          } while ((int)lVar21 < *(int *)(lVar6 + 0x18));
        }
      }
      plVar14 = *(long **)(unaff_x22 + 0x78);
      if (plVar14 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar14 + 0x298))
                (plVar14,plVar11,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar14 + 0x2a0)
                );
      plVar11 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      unaff_x20 = in_stack_00000020;
      plVar14 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
    }
  }
LAB_055d7adc:
  iVar3 = iVar3 + 1;
  iVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
  if (iVar4 <= iVar3) {
LAB_055d7af8:
    FUN_055ccff4(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
  goto LAB_055d6694;
}


