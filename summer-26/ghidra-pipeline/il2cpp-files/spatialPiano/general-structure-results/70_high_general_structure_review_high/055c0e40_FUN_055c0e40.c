/*
FUNCTION_NAME: FUN_055c0e40
ENTRY_POINT: 055c0e40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_19;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_055c0e40(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  
  if ((DAT_06bbfb55 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__);
    FUN_02f08768(System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    DAT_06bbfb55 = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
  ;
  puVar1 = Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x78) == 0)) goto LAB_055c1564;
  uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x10);
  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__;
  lVar7 = FUN_0581a024(uVar16,0);
  uVar16 = FUN_0581a024(*(undefined8 *)(param_2 + 0x50),0);
  lVar8 = FUN_055bb368(uVar16,param_2,*(undefined8 *)puVar3,uVar16);
  uVar16 = FUN_055c15a8(lVar8,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  uVar9 = FUN_055b68ec(param_2,*(undefined8 *)puVar4);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar10 == 0)) goto LAB_055c1564;
  lVar10 = FUN_0558cae0(lVar10,uVar16,uVar9,0);
  if (lVar10 == 0) {
    return;
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
    uVar16 = FUN_05567e84(lVar8,0);
LAB_055c1588:
    uVar9 = thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_BaseSlider<int>_set_inverted__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar16,uVar9);
  }
  plVar11 = *(long **)(param_1 + 0x38);
  if (plVar11 == (long *)0x0) goto LAB_055c1564;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x308))(plVar11,lVar7,*(undefined8 *)(*plVar11 + 0x310))
  ;
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
  if (plVar11 == (long *)0x0) {
    uVar16 = FUN_05567cb8(lVar8,0);
    goto LAB_055c1588;
  }
  if (*plVar11 != *(long *)Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  lVar7 = FUN_055c0a28(plVar11,plVar11[3],plVar11[2]);
  lVar10 = FUN_055c0a28(lVar7,param_2,lVar10);
  uVar12 = FUN_055b8f80(lVar10,param_2,*(undefined8 *)puVar3,0);
  if ((uVar12 & 1) != 0) {
    if (lVar10 == 0) goto LAB_055c1564;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
    if (((*(long *)(lVar10 + 0x20) == 0) ||
        (lVar14 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x48), lVar14 == 0)) goto LAB_055c1564;
    iVar5 = FUN_0557b4f0(lVar14,lVar8,0);
    if (-1 < iVar5) {
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
      if ((*(long *)(lVar10 + 0x20) == 0) ||
         (lVar14 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar14 == 0)) goto LAB_055c1564;
      lVar14 = *(long *)(lVar14 + 0x48);
      if ((lVar14 == 0) || (plVar11 = (long *)FUN_0557b300(lVar14,iVar5,0), plVar11 == (long *)0x0))
      goto LAB_055c1564;
      uVar16 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      uVar12 = FUN_04f6dc3c(uVar16,lVar8,0);
      plVar17 = (long *)0x0;
      if ((uVar12 & 1) == 0) goto LAB_055c1420;
    }
    plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                                        );
    FUN_055a2550(plVar17,lVar8,lVar7,lVar10,0);
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
    if (((*(long *)(lVar10 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x48), lVar7 == 0)) goto LAB_055c1564;
    FUN_0557b64c(lVar7,plVar17,0);
    goto LAB_055c1420;
  }
  uVar16 = FUN_055bb368(uVar12,param_2,
                        *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__
                        ,*(undefined8 *)(param_2 + 0x50));
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar1);
  }
  lVar14 = FUN_0581a024(uVar16,0);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) == 0)) {
    lVar14 = lVar8;
  }
  if (lVar10 == 0) goto LAB_055c1564;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
  if ((((*(long *)(lVar10 + 0x20) == 0) ||
       (lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar15 == 0)) ||
      (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0)) ||
     (lVar15 = *(long *)(lVar15 + 0x30), lVar15 == 0)) goto LAB_055c1564;
  iVar5 = FUN_05585ec8(lVar15,lVar14,0);
  if (iVar5 < 0) {
LAB_055c123c:
    plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          System_Xml_Schema_XdrBuilder_XdrBeginChildFunction_TypeInfo
                                        );
    FUN_05582308(plVar11,lVar14,lVar7,lVar10,0);
    uVar16 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_055b6fb0(plVar11,uVar16);
    if (lVar7 == 0) goto LAB_055c1564;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_055c1568:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if ((((*(long *)(lVar7 + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x78), lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0)) goto LAB_055c1564;
    FUN_055854fc(lVar7,plVar11,0);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      if (plVar11 == (long *)0x0) goto LAB_055c1564;
    }
    else {
      if (plVar11 == (long *)0x0) goto LAB_055c1564;
      uVar12 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if ((uVar12 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x88);
        uVar16 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        if (lVar7 == 0) goto LAB_055c1564;
        uVar12 = FUN_0492cf2c(lVar7,uVar16,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__);
        if ((uVar12 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x88);
          uVar16 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          if (lVar7 == 0) goto LAB_055c1564;
          lVar7 = FUN_0492ccb8(lVar7,uVar16,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__
                              );
          uVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if (lVar7 == 0) goto LAB_055c1564;
          FUN_02e441a0(lVar7,uVar16,
                       *(undefined8 *)
                        UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_TypeInfo
                      );
        }
      }
    }
    plVar17 = (long *)(**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
    if (plVar17 == (long *)0x0) goto LAB_055c1564;
    plVar13 = (long *)(**(code **)(*plVar17 + 0x188))(plVar17,lVar8,*(undefined8 *)(*plVar17 + 400))
    ;
  }
  else {
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
    if (((*(long *)(lVar10 + 0x20) == 0) ||
        (lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0)) goto LAB_055c1564;
    plVar11 = *(long **)(lVar15 + 0x30);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x208))
                                    (plVar11,iVar5,*(undefined8 *)(*plVar11 + 0x210)),
       plVar11 == (long *)0x0)) goto LAB_055c1564;
    uVar16 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    uVar12 = FUN_04f6dc3c(uVar16,lVar14,0);
    if ((uVar12 & 1) != 0) goto LAB_055c123c;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_055c1568;
    if (((*(long *)(lVar10 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(lVar10 + 0x20) + 0x78), lVar7 == 0)) ||
       ((lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0 ||
        (plVar11 = *(long **)(lVar7 + 0x30), plVar11 == (long *)0x0)))) goto LAB_055c1564;
    plVar13 = (long *)(**(code **)(*plVar11 + 0x208))
                                (plVar11,iVar5,*(undefined8 *)(*plVar11 + 0x210));
    plVar17 = (long *)0x0;
    plVar11 = plVar13;
  }
  uVar12 = FUN_055b8f80(plVar13,param_2,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,0);
  if ((uVar12 & 1) != 0) {
    if (plVar11 == (long *)0x0) {
LAB_055c1564:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar11 + 0x1e8))(plVar11,1,*(undefined8 *)(*plVar11 + 0x1f0));
  }
LAB_055c1420:
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__;
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar7 = FUN_055b68ec(param_2,*(undefined8 *)puVar4);
  lVar8 = FUN_055b68ec(param_2,*(undefined8 *)puVar1);
  lVar10 = FUN_055b68ec(param_2,*(undefined8 *)puVar3);
  if (plVar17 == (long *)0x0) {
    return;
  }
  if (lVar7 != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_055c0cd0(lVar7);
    (**(code **)(*plVar17 + 0x288))(plVar17,uVar6,*(undefined8 *)(*plVar17 + 0x290));
  }
  if (lVar8 != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_055c0d54(lVar8);
    (**(code **)(*plVar17 + 0x2e8))(plVar17,uVar6,*(undefined8 *)(*plVar17 + 0x2f0));
  }
  if (lVar10 != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_055c0d54(lVar10);
    (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar6,*(undefined8 *)(*plVar17 + 0x2b0));
  }
  uVar16 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_055b6fb0(plVar17,uVar16);
  return;
}


