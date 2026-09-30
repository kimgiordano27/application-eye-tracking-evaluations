/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$BreakDownXsdDate
ENTRY_POINT: 055d5588
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 220
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_5
*/


long * System_Xml_BinXmlDateTime__BreakDownXsdDate(void)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  code *in_x9;
  long lVar26;
  long *unaff_x21;
  long unaff_x22;
  long lVar27;
  uint uVar28;
  long unaff_x29;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  plVar10 = (long *)(*in_x9)();
  puVar25 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
  if (unaff_x29 == 0) goto LAB_055d7b30;
  if (*(long *)(unaff_x29 + 0x20) == 0) {
LAB_055d55d0:
    if (*(int *)(unaff_x22 + 0x5c) != 2) goto LAB_055d5624;
    uVar11 = FUN_05546520();
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
               ,*puVar25,uVar11,*(undefined8 *)(*plVar10 + 0x560));
    uVar11 = FUN_0554de78();
  }
  else {
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      uVar11 = FUN_05546520();
      if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_055d7b30;
      uVar12 = FUN_04f6dc3c(uVar11,*(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x50),0);
      if ((uVar12 & 1) != 0) goto LAB_055d55d0;
    }
LAB_055d5624:
    uVar11 = FUN_0554de78();
    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
  }
  (**(code **)(*plVar10 + 0x518))
            (plVar10,*(undefined8 *)PTR_DAT_067cd778,uVar11,*(undefined8 *)(*plVar10 + 0x520));
  lVar13 = FUN_05546520();
  if (lVar13 == 0) goto LAB_055d7b30;
  if (*(int *)(lVar13 + 0x10) == 0) {
    uVar11 = FUN_05546520();
    uVar12 = FUN_04f6ebb4(uVar11,0);
    lVar13 = unaff_x29;
    while ((uVar12 & 1) != 0) {
      lVar26 = *(long *)(lVar13 + 0x188);
      if (lVar26 == 0) goto LAB_055d7b30;
      uVar12 = *(ulong *)(lVar26 + 0x18);
      puVar25 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
      ;
      if (uVar12 == 0) {
        puVar1 = (undefined8 *)PTR_DAT_067cbf00;
        if (*(long *)(unaff_x22 + 0x30) != 0) {
          puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x50);
        }
        uVar11 = *puVar1;
        break;
      }
      if ((int)uVar12 < 1) break;
      lVar27 = 0;
      while( true ) {
        if ((uint)uVar12 <= (uint)lVar27) goto LAB_055d7b34;
        plVar14 = *(long **)(lVar26 + 0x20 + lVar27 * 8);
        if (plVar14 == (long *)0x0) goto LAB_055d7b30;
        lVar15 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
        if (lVar15 != lVar13) break;
        uVar12 = (ulong)*(uint *)(lVar26 + 0x18);
        lVar27 = lVar27 + 1;
        puVar25 = (undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        if ((int)*(uint *)(lVar26 + 0x18) <= (int)lVar27) goto LAB_055d5760;
      }
      if (*(uint *)(lVar26 + 0x18) <= (uint)lVar27) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar14 = *(long **)(lVar26 + 0x20 + lVar27 * 8);
      if ((plVar14 == (long *)0x0) ||
         (lVar13 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0)),
         puVar25 = (undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
         lVar13 == 0)) goto LAB_055d7b30;
      uVar11 = FUN_05546520(lVar13,0);
      uVar12 = FUN_04f6ebb4(uVar11,0);
    }
LAB_055d5760:
    uVar16 = FUN_05546520();
    uVar12 = FUN_04f6dc3c(uVar16,uVar11,0);
    if ((uVar12 & 1) == 0) goto LAB_055d57b8;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
               ,*(undefined8 *)
                 Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
               ,*(undefined8 *)(*plVar10 + 0x520));
    bVar3 = true;
  }
  else {
LAB_055d57b8:
    bVar3 = false;
  }
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__;
  if (*(char *)(unaff_x29 + 0xe9) != '\0') {
    uStack000000000000003c = *(undefined1 *)(unaff_x29 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_050582b4((long)&stack0x00000038 + 4,0);
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar4,*puVar25,uVar11,*(undefined8 *)(*plVar10 + 0x560));
  }
  puVar4 = Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__;
  if (*(char *)(unaff_x29 + 0xc0) != '\0') {
    plVar14 = *(long **)(unaff_x29 + 0xb8);
    if (plVar14 == (long *)0x0) goto LAB_055d7b30;
    uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar4,*puVar25,uVar11,*(undefined8 *)(*plVar10 + 0x560));
  }
  FUN_055cd6cc();
  plVar14 = *(long **)(unaff_x29 + 0x40);
  if (plVar14 == (long *)0x0) goto LAB_055d7b30;
  iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
  if (iVar5 - 1U < 2) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      plVar17 = (long *)FUN_0557e298(plVar14,iVar9,0);
      if (plVar17 == (long *)0x0) goto LAB_055d7b30;
      iVar6 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
      if (iVar6 == 4) {
        plVar18 = (long *)FUN_0554c018();
        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
        iVar6 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            plVar19 = (long *)(**(code **)(*plVar18 + 0x208))
                                        (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            uVar12 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
            if ((uVar12 & 1) != 0) {
              lVar13 = (**(code **)(*plVar18 + 0x208))
                                 (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
              if ((lVar13 == 0) || (lVar13 = FUN_05580068(lVar13,0), lVar13 == 0))
              goto LAB_055d7b30;
              if (*(int *)(lVar13 + 0x18) == 1) {
                lVar13 = (**(code **)(*plVar18 + 0x208))
                                   (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
                if ((lVar13 == 0) || (lVar13 = FUN_05580068(lVar13,0), lVar13 == 0))
                goto LAB_055d7b30;
                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_055d7b34;
                if (*(long **)(lVar13 + 0x20) == plVar17) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
          } while (iVar6 < iVar7);
        }
      }
      iVar6 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
      iVar9 = iVar9 + 1;
      if (iVar6 == 1) {
        iVar8 = iVar8 + 1;
      }
    } while (iVar9 != iVar5);
    if ((*(char *)(unaff_x29 + 0x128) != '\0') && (iVar8 == 1)) {
      if ((*(long *)(unaff_x29 + 0x40) != 0) &&
         (lVar13 = FUN_0557e298(*(long *)(unaff_x29 + 0x40),0,0), lVar13 != 0)) {
        lVar13 = FUN_055ce110(*(undefined8 *)(lVar13 + 0x38));
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) == 0)) {
          lVar13 = *(long *)Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
        }
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_055b6a08(lVar13,0);
        (**(code **)(*plVar10 + 0x518))
                  (plVar10,*(undefined8 *)PTR_DAT_067ca7d0,uVar11,*(undefined8 *)(*plVar10 + 0x520))
        ;
        return plVar10;
      }
      goto LAB_055d7b30;
    }
  }
  plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  lVar13 = FUN_05548bd0();
  if (lVar13 == 0) goto LAB_055d7b30;
  uVar12 = FUN_05825608(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    plVar18 = (long *)FUN_055d8110();
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    uVar12 = FUN_04f6ebb4(*(undefined8 *)(lVar13 + 0x18),0);
    if ((uVar12 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (!bVar3)) {
        FUN_05546520();
      }
      plVar18 = (long *)FUN_055d8110();
    }
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    lVar13 = FUN_055d9988(lVar13,plVar18,*(undefined8 *)(lVar13 + 0x10));
    if (lVar13 == 0) {
      if (plVar18 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2e0));
    }
    lVar13 = FUN_05548bd0();
    if ((lVar13 == 0) || (plVar17 == (long *)0x0)) goto LAB_055d7b30;
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)PTR_DAT_067cd778,*(undefined8 *)(lVar13 + 0x10),
               *(undefined8 *)(*plVar17 + 0x520));
  }
  else {
    (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar17,*(undefined8 *)(*plVar10 + 0x2e0));
  }
  lVar13 = FUN_05548bd0();
  if (lVar13 == 0) goto LAB_055d7b30;
  uVar12 = FUN_05825608(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar18 = *(long **)(unaff_x22 + 0x28);
    lVar13 = FUN_05548bd0();
    if ((lVar13 == 0) || (plVar18 == (long *)0x0)) goto LAB_055d7b30;
    plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,*(undefined8 *)(lVar13 + 0x18),
                                 *(undefined8 *)(*plVar18 + 0x310));
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar18,*(long *)(PTR_DAT_067c9338 + 0x90));
    }
    uVar11 = FUN_055da24c(plVar18,*(undefined8 *)(lVar13 + 0x10));
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)PTR_DAT_067ca7d0,uVar11,*(undefined8 *)(*plVar10 + 0x520));
  }
  lVar13 = *(long *)(unaff_x29 + 0xf8);
  if (lVar13 != 0) {
    plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar11 = thunk_FUN_02f1863c(lVar13,0);
    uVar16 = *(undefined8 *)
              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar16 = FUN_050e4454(uVar16,0);
    uVar12 = FUN_050edfb8(uVar11,uVar16,0);
    puVar4 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    if ((uVar12 & 1) == 0) {
      FUN_055d87f4();
    }
    else {
      FUN_055cd6cc();
    }
    FUN_055ccff4(*(undefined8 *)(lVar13 + 0xa0),plVar18,0);
    if (*(char *)(lVar13 + 0x20) != '\0') {
      (**(code **)(*plVar10 + 0x558))
                (plVar10,*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__
                 ,**(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar10 + 0x560));
    }
    if (*(char *)(lVar13 + 0x95) == '\0') {
      FUN_055cfb48(*(undefined8 *)(lVar13 + 0x38));
      uVar11 = FUN_0555ef20(lVar13,0);
      uVar11 = FUN_0555ecb4(lVar13,uVar11,0);
      if (plVar18 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar18 + 0x558))
                (plVar18,*(undefined8 *)
                          Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo,
                 *(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar18 + 0x560));
    }
    else if (plVar18 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar18 + 0x558))
              (plVar18,*(undefined8 *)
                        UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
               ,*(undefined8 *)puVar4,*(undefined8 *)(lVar13 + 0x30),
               *(undefined8 *)(*plVar18 + 0x560));
    uStack0000000000000038 = *(undefined4 *)(lVar13 + 100);
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_050656a0(0);
    uVar11 = FUN_050d2d8c(&stack0x00000038,uVar11,0);
    (**(code **)(*plVar18 + 0x558))
              (plVar18,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
               *(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar18 + 0x560));
    if (plVar17 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
    plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2e0));
    FUN_055d83a4();
  }
  plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (plVar17 == (long *)0x0) goto LAB_055d7b30;
  uVar11 = (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
  FUN_055d9c74(uVar11,unaff_x29);
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      plVar19 = (long *)FUN_0557e298(plVar14,iVar9,0);
      if (plVar19 == (long *)0x0) goto LAB_055d7b30;
      iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
      if ((iVar8 != 3) &&
         ((((iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
            iVar8 == 2 ||
            (iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
            iVar8 == 1)) ||
           (iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
           iVar8 == 4)) && (uVar12 = FUN_055da208(), (uVar12 & 1) == 0)))) {
        iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        uVar11 = FUN_055d8ef0();
        plVar19 = plVar18;
        if (iVar8 != 1) {
          plVar19 = plVar17;
        }
        if (plVar19 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar19 + 0x2d8))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x2e0));
      }
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  puVar25 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar14 = (long *)FUN_0554c018(unaff_x29,0);
    if (plVar14 == (long *)0x0) goto LAB_055d7b30;
    iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar19 = (long *)(**(code **)(*plVar14 + 0x208))
                                    (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
        if (plVar19 == (long *)0x0) goto LAB_055d7b30;
        uVar12 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        if ((uVar12 & 1) != 0) {
          plVar19 = (long *)(**(code **)(*plVar14 + 0x208))
                                      (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          lVar13 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
          if (lVar13 == unaff_x29) {
            plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar26 = unaff_x29;
LAB_055d61bc:
            uVar11 = FUN_0554de78(lVar26,0);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)PTR_DAT_067d7c28,uVar11,
                       *(undefined8 *)(*plVar19 + 0x520));
          }
          else {
            if (lVar13 == 0) goto LAB_055d7b30;
            iVar9 = FUN_0554d1c8(lVar13,0);
            if (1 < iVar9) {
              plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar26 = lVar13;
              goto LAB_055d61bc;
            }
            plVar19 = (long *)FUN_055d524c();
          }
          uVar11 = FUN_05546520(lVar13,0);
          uVar16 = FUN_05546520(unaff_x29,0);
          uVar12 = thunk_FUN_04f6d944(uVar11,uVar16,0);
          if ((uVar12 & 1) != 0) {
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                       ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar19 + 0x520));
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                       ,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                       ,*(undefined8 *)(*plVar19 + 0x520));
          }
          uVar11 = FUN_05546520(lVar13,0);
          uVar16 = FUN_05546520(unaff_x29,0);
          uVar12 = thunk_FUN_04f6d944(uVar11,uVar16,0);
          if ((uVar12 & 1) == 0) {
            lVar26 = FUN_05546520(lVar13,0);
            if (lVar26 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar26 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar9 = FUN_0554d1c8(lVar13,0);
              if (iVar9 < 2) {
                FUN_05546520(lVar13,0);
                plVar20 = (long *)FUN_055d8110();
                if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar20 + 0x2d8))(plVar20,plVar19,*(undefined8 *)(*plVar20 + 0x2e0));
              }
              plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar20 = *(long **)(unaff_x22 + 0x28);
              uVar11 = FUN_05546520(lVar13,0);
              if (plVar20 == (long *)0x0) goto LAB_055d7b30;
              plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                                          (plVar20,uVar11,*(undefined8 *)(*plVar20 + 0x310));
              uVar11 = FUN_0554de78(lVar13,0);
              if ((plVar20 != (long *)0x0) && (*plVar20 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar11 = FUN_04f6f6b4(plVar20,*(undefined8 *)PTR_DAT_067ce970,uVar11,0);
              if (plVar19 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar19 + 0x518))
                        (plVar19,*(undefined8 *)PTR_DAT_067d7c28,uVar11,
                         *(undefined8 *)(*plVar19 + 0x520));
              puVar25 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar18 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar19,*(undefined8 *)(*plVar18 + 0x2e0));
          plVar20 = (long *)(**(code **)(*plVar14 + 0x208))
                                      (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
          if (plVar20 == (long *)0x0) goto LAB_055d7b30;
          lVar13 = (**(code **)(*plVar20 + 0x208))(plVar20,*(undefined8 *)(*plVar20 + 0x210));
          if (lVar13 == 0) {
            plVar20 = *(long **)(unaff_x22 + 0x48);
            if ((plVar20 == (long *)0x0) ||
               (plVar20 = (long *)(**(code **)(*plVar20 + 0x5f8))
                                            (plVar20,*puVar25,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar20 + 0x600)),
               plVar19 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2c8))(plVar19,plVar20,*(undefined8 *)(*plVar19 + 0x2d0));
            plVar19 = *(long **)(unaff_x22 + 0x48);
            if ((plVar19 == (long *)0x0) ||
               (plVar19 = (long *)(**(code **)(*plVar19 + 0x5f8))
                                            (plVar19,*puVar25,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar19 + 0x600)),
               plVar20 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar20 + 0x2d8))(plVar20,plVar19,*(undefined8 *)(*plVar20 + 0x2e0));
            (**(code **)(*plVar14 + 0x208))(plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
            uVar11 = FUN_055d4838();
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2d8))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x2e0));
          }
        }
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
      } while (iVar5 < iVar9);
    }
  }
  if ((plVar18 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar18 + 0x328))(plVar18,*(undefined8 *)(*plVar18 + 0x330)),
     (uVar12 & 1) == 0)) {
    (**(code **)(*plVar17 + 0x2b8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2c0));
  }
  plVar14 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
    puVar25 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar13 == 0) goto LAB_055d7b30;
    puVar25 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar13 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
    uStack0000000000000030 = *puVar25;
  }
  else {
    FUN_05546520(unaff_x29,0);
    FUN_055d8110();
    lVar13 = FUN_05546520(unaff_x29,0);
    if (lVar13 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar13 + 0x10) == 0) {
      puVar25 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar17 = *(long **)(unaff_x22 + 0x28);
    uVar11 = FUN_05546520(unaff_x29,0);
    if (plVar17 == (long *)0x0) goto LAB_055d7b30;
    plVar20 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x310));
    if ((plVar20 != (long *)0x0) && (*plVar20 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar20);
    }
    uStack0000000000000030 = FUN_04f65260(plVar20,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar14 != (long *)0x0) {
    iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      plVar17 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar18 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar19 = (long *)FUN_0557b300(plVar14,iVar5,0);
        if (plVar19 == (long *)0x0) {
LAB_055d66d4:
          plVar19 = (long *)FUN_0557b300(plVar14,iVar5,0);
          if (plVar19 != (long *)0x0) {
            bVar2 = *(byte *)(*plVar17 + 0x130);
            if (((bVar2 <= *(byte *)(*plVar19 + 0x130)) &&
                (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) == *plVar17)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar19 = (long *)FUN_0557b300(plVar14,iVar5,0);
              if (plVar19 != (long *)0x0) {
                bVar2 = *(byte *)(*plVar17 + 0x130);
                if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != *plVar17)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar19);
                }
              }
              plVar20 = *(long **)(unaff_x22 + 0x38);
              if (plVar20 == (long *)0x0) goto LAB_055d7b30;
              iVar9 = (**(code **)(*plVar20 + 0x298))(plVar20,*(undefined8 *)(*plVar20 + 0x2a0));
              if (iVar9 < 1) {
                uVar12 = FUN_055da208();
                if ((uVar12 & 1) == 0) {
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar17 = (long *)FUN_055a5390(plVar19,0);
                  lVar13 = FUN_055a4c24(plVar19,0);
                  lVar26 = (**(code **)(*plVar19 + 0x2c8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                  if (lVar26 == 0) goto LAB_055d7b30;
                  lVar26 = *(long *)(lVar26 + 0x48);
                  uVar11 = thunk_FUN_02f45270(*plVar18);
                  FUN_055aee44(uVar11,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar13,0);
                  if (lVar26 == 0) goto LAB_055d7b30;
                  plVar20 = (long *)FUN_0557ba08(lVar26,uVar11,0);
                  if (plVar20 == (long *)0x0) {
                    plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar11 = FUN_0557af78(plVar19,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar11 = FUN_05819fc8(uVar11,0);
                    if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar18 + 0x518))
                              (plVar18,*(undefined8 *)PTR_DAT_067cd778,uVar11,
                               *(undefined8 *)(*plVar18 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar11 = FUN_05546520(unaff_x29,0);
                      (**(code **)(*plVar18 + 0x558))
                                (plVar18,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar11,*(undefined8 *)(*plVar18 + 0x560));
                    }
                    else {
                      lVar26 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar26 == 0) goto LAB_055d7b30;
                      iVar9 = FUN_0558c670(lVar26,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar9 == -3) goto LAB_055d6f20;
                    }
                    plVar22 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar26 = (**(code **)(*plVar19 + 0x2c8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                    if (lVar26 == 0) goto LAB_055d7b30;
                    uVar11 = FUN_0554de78(lVar26,0);
                    uVar11 = FUN_04f6f6b4(*(undefined8 *)
                                           Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                          ,uStack0000000000000030,uVar11,0);
                    if (plVar22 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar22 + 0x518))
                              (plVar22,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar11,*(undefined8 *)(*plVar22 + 0x520));
                    (**(code **)(*plVar18 + 0x2d8))
                              (plVar18,plVar22,*(undefined8 *)(*plVar18 + 0x2e0));
                    if (lVar13 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar13 + 0x18) != 0) {
                      plVar22 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar22,0);
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        if (plVar22 == (long *)0x0) goto LAB_055d7b30;
                        lVar27 = 0;
                        lVar26 = lVar13 + 0x20;
                        do {
                          FUN_04f78e50(plVar22,0,0);
                          uVar28 = (uint)lVar27;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar21 = (long *)FUN_04f79730(plVar22,uStack0000000000000030,0);
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar26 + lVar27 * 8);
                            if ((lVar15 == 0) ||
                               (uVar11 = FUN_0555e9b8(lVar15,0), plVar21 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar26 + lVar27 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar15,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar26 + lVar27 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            uVar11 = FUN_0556053c(lVar15,0);
                            uVar12 = FUN_04f6ebb4(uVar11,0);
                            if ((uVar12 & 1) == 0) {
                              if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                              lVar15 = *(long *)(lVar26 + lVar27 * 8);
                              if (lVar15 == 0) goto LAB_055d7b30;
                              plVar21 = *(long **)(unaff_x22 + 0x28);
                              uVar11 = FUN_0556053c(lVar15,0);
                              if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                              uVar11 = (**(code **)(*plVar21 + 0x308))
                                                 (plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x310));
                              lVar15 = FUN_04f7a6a0(plVar22,uVar11,0);
                              if (lVar15 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar15,0x3a,0);
                            }
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar26 + lVar27 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            uVar11 = FUN_0555e9b8(lVar15,0);
                            plVar21 = plVar22;
                          }
                          FUN_04f79730(plVar21,uVar11,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          plVar21 = *(long **)(lVar26 + lVar27 * 8);
                          if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                          iVar9 = (**(code **)(*plVar21 + 0x1d8))
                                            (plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
                          if (iVar9 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar22,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            plVar21 = *(long **)(lVar26 + lVar27 * 8);
                            if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                            iVar9 = (**(code **)(*plVar21 + 0x1d8))
                                              (plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
                            if (iVar9 == 4) goto LAB_055d71d4;
                          }
                          plVar21 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar11 = (**(code **)(*plVar22 + 0x168))
                                             (plVar22,*(undefined8 *)(*plVar22 + 0x170));
                          if (plVar21 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar21 + 0x518))
                                    (plVar21,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar11,*(undefined8 *)(*plVar21 + 0x520));
                          (**(code **)(*plVar18 + 0x2d8))
                                    (plVar18,plVar21,*(undefined8 *)(*plVar18 + 0x2e0));
                          lVar27 = lVar27 + 1;
                        } while ((int)lVar27 < *(int *)(lVar13 + 0x18));
                      }
                    }
                    plVar22 = *(long **)(unaff_x22 + 0x78);
                    if (plVar22 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar22 + 0x298))
                              (plVar22,plVar18,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar22 + 0x2a0));
                    plVar18 = (long *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar2 = *(byte *)(*plVar18 + 0x130);
                    if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *plVar18)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar20);
                    }
                  }
                  plVar22 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar11 = FUN_0557af78(plVar19,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar11 = FUN_05819fc8(uVar11,0);
                  if (plVar22 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar22 + 0x518))
                            (plVar22,*(undefined8 *)PTR_DAT_067cd778,uVar11,
                             *(undefined8 *)(*plVar22 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar13 = (**(code **)(*plVar19 + 0x1b8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                    if (lVar13 == 0) goto LAB_055d7b30;
                    uVar11 = FUN_05546520(lVar13,0);
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar11,*(undefined8 *)(*plVar22 + 0x560));
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar13 = (**(code **)(*plVar19 + 0x2c8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                    if ((lVar13 == 0) || (lVar26 == 0)) goto LAB_055d7b30;
                    iVar9 = FUN_0558c670(lVar26,*(undefined8 *)(lVar13 + 0x90),0);
                    if (iVar9 == -3) goto LAB_055d738c;
                  }
                  plVar21 = plVar19;
                  if (plVar20 != (long *)0x0) {
                    plVar21 = plVar20;
                  }
                  uVar11 = FUN_0557af78(plVar21,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar11 = FUN_05819fc8(uVar11,0);
                  (**(code **)(*plVar22 + 0x518))
                            (plVar22,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar11,*(undefined8 *)(*plVar22 + 0x520));
                  lVar13 = plVar19[6];
                  uVar11 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar11 = FUN_050e4454(uVar11,0);
                  FUN_055ccff4(lVar13,plVar22,uVar11);
                  uVar11 = (**(code **)(*plVar19 + 0x178))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                  uVar16 = FUN_0557af78(plVar19,0);
                  uVar12 = FUN_04f6dc3c(uVar11,uVar16,0);
                  if ((uVar12 & 1) != 0) {
                    uVar11 = (**(code **)(*plVar19 + 0x178))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar11,*(undefined8 *)(*plVar22 + 0x560));
                  }
                  if (plVar17 == (long *)0x0) {
                    lVar13 = *plVar22;
                    uVar16 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar23 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar24 = *(undefined8 *)(lVar13 + 0x560);
                    uVar11 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar13 + 0x558))(plVar22,uVar16,uVar23,uVar11,uVar24);
                  }
                  else {
                    uVar12 = (**(code **)(*plVar17 + 0x1d8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                    if ((uVar12 & 1) != 0) {
                      (**(code **)(*plVar22 + 0x558))
                                (plVar22,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar22 + 0x560))
                      ;
                    }
                    lVar13 = plVar17[3];
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar11 = FUN_050e4454(uVar11,0);
                    FUN_055ccff4(lVar13,plVar22,uVar11);
                    uVar11 = (**(code **)(*plVar19 + 0x178))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                    uVar16 = (**(code **)(*plVar17 + 0x1c8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    uVar12 = FUN_04f6dc3c(uVar11,uVar16,0);
                    if ((uVar12 & 1) != 0) {
                      uVar11 = (**(code **)(*plVar17 + 0x1c8))
                                         (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar11 = FUN_05819fc8(uVar11,0);
                      lVar13 = *plVar22;
                      uVar16 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar24 = *(undefined8 *)(lVar13 + 0x560);
                      uVar23 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar11 = FUN_0554de78(unaff_x29,0);
                  uVar11 = FUN_04f6f6b4(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                        ,uStack0000000000000030,uVar11,0);
                  if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar17 + 0x518))
                            (plVar17,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar11,*(undefined8 *)(*plVar17 + 0x520));
                  (**(code **)(*plVar22 + 0x2d8))(plVar22,plVar17,*(undefined8 *)(*plVar22 + 0x2e0))
                  ;
                  iVar9 = (**(code **)(*plVar19 + 0x278))(plVar19,*(undefined8 *)(*plVar19 + 0x280))
                  ;
                  puVar4 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar9 != 0) {
                    (**(code **)(*plVar19 + 0x278))(plVar19,*(undefined8 *)(*plVar19 + 0x280));
                    uVar11 = FUN_055d9b50();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar22 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar19 + 0x2d8))(plVar19,*(undefined8 *)(*plVar19 + 0x2e0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar19 + 0x2d8))(plVar19,*(undefined8 *)(*plVar19 + 0x2e0));
                    uVar11 = FUN_055d9bc0();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar22 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
                    uVar11 = FUN_055d9bc0();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar22 + 0x560));
                  }
                  lVar13 = (**(code **)(*plVar19 + 0x268))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x270));
                  if (lVar13 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar17,0);
                    if (0 < *(int *)(lVar13 + 0x18)) {
                      if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                      lVar27 = 0;
                      lVar26 = lVar13 + 0x20;
                      do {
                        FUN_04f78e50(plVar17,0,0);
                        uVar28 = (uint)lVar27;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar19 = (long *)FUN_04f79730(plVar17,uStack0000000000000030,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar26 + lVar27 * 8);
                          if ((lVar15 == 0) ||
                             (uVar11 = FUN_0555e9b8(lVar15,0), plVar19 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar26 + lVar27 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar15,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar26 + lVar27 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          uVar11 = FUN_0556053c(lVar15,0);
                          uVar12 = FUN_04f6ebb4(uVar11,0);
                          if ((uVar12 & 1) == 0) {
                            if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar26 + lVar27 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            plVar19 = *(long **)(unaff_x22 + 0x28);
                            uVar11 = FUN_0556053c(lVar15,0);
                            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                            uVar11 = (**(code **)(*plVar19 + 0x308))
                                               (plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x310));
                            lVar15 = FUN_04f7a6a0(plVar17,uVar11,0);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar15,0x3a,0);
                          }
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar26 + lVar27 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          uVar11 = FUN_0555e9b8(lVar15,0);
                          plVar19 = plVar17;
                        }
                        FUN_04f79730(plVar19,uVar11,0);
                        if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                        plVar19 = *(long **)(lVar26 + lVar27 * 8);
                        if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                        iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                        if (iVar9 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar17,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                          plVar19 = *(long **)(lVar26 + lVar27 * 8);
                          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                          iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                            (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                          if (iVar9 == 4) goto LAB_055d79f8;
                        }
                        plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar11 = (**(code **)(*plVar17 + 0x168))
                                           (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                        if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar19 + 0x518))
                                  (plVar19,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar11,*(undefined8 *)(*plVar19 + 0x520));
                        (**(code **)(*plVar22 + 0x2d8))
                                  (plVar22,plVar19,*(undefined8 *)(*plVar22 + 0x2e0));
                        lVar27 = lVar27 + 1;
                      } while ((int)lVar27 < *(int *)(lVar13 + 0x18));
                    }
                  }
                  plVar17 = *(long **)(unaff_x22 + 0x78);
                  if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,plVar22,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar17 + 0x2b0));
                  plVar17 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                }
              }
              else {
                if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                plVar17 = *(long **)(unaff_x22 + 0x38);
                uVar11 = (**(code **)(*plVar19 + 0x2c8))(plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                uVar12 = (**(code **)(*plVar17 + 0x348))
                                   (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x350));
                plVar17 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar12 & 1) != 0) {
                  plVar17 = *(long **)(unaff_x22 + 0x38);
                  uVar11 = (**(code **)(*plVar19 + 0x1b8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                  if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                  uVar12 = (**(code **)(*plVar17 + 0x348))
                                     (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x350));
                  plVar17 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar12 & 1) != 0) && (uVar12 = FUN_055da208(), (uVar12 & 1) == 0))
                  goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar2 = *(byte *)(*plVar18 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != *plVar18))
          goto LAB_055d66d4;
          plVar20 = (long *)FUN_0557b300(plVar14,iVar5,0);
          if (plVar20 == (long *)0x0) {
            uVar12 = FUN_055da208();
            if ((uVar12 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar2 = *(byte *)(*plVar18 + 0x130);
            if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *plVar18))
            goto LAB_055d7b38;
            uVar12 = FUN_055da208();
            if ((uVar12 & 1) != 0) goto LAB_055d7adc;
            lVar13 = plVar20[7];
            plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar11 = FUN_05546520(unaff_x29,0);
              if (plVar17 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar11,*(undefined8 *)(*plVar17 + 0x560));
            }
            else {
              lVar26 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar26 == 0) goto LAB_055d7b30;
              iVar9 = FUN_0558c670(lVar26,*(undefined8 *)(unaff_x29 + 0x90),0);
              if (iVar9 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar11 = FUN_0557af78(plVar20,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar11 = FUN_05819fc8(uVar11,0);
            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)PTR_DAT_067cd778,uVar11,
                       *(undefined8 *)(*plVar17 + 0x520));
            uVar11 = (**(code **)(*plVar20 + 0x178))(plVar20,*(undefined8 *)(*plVar20 + 0x180));
            uVar16 = FUN_0557af78(plVar20,0);
            uVar12 = FUN_04f6dc3c(uVar11,uVar16,0);
            if ((uVar12 & 1) != 0) {
              uVar11 = (**(code **)(*plVar20 + 0x178))(plVar20,*(undefined8 *)(*plVar20 + 0x180));
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar11,*(undefined8 *)(*plVar17 + 0x560));
            }
            FUN_055ccff4(plVar20[6],plVar17,0);
            plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar11 = FUN_0554de78(unaff_x29,0);
            uVar11 = FUN_04f6f6b4(*(undefined8 *)
                                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                  ,uStack0000000000000030,uVar11,0);
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x518))
                      (plVar18,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar11,*(undefined8 *)(*plVar18 + 0x520));
            (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
            uVar12 = FUN_055afea0(plVar20,0);
            if ((uVar12 & 1) != 0) {
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar17 + 0x560));
            }
            if (lVar13 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar18 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar18,0);
              if (0 < *(int *)(lVar13 + 0x18)) {
                if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                lVar27 = 0;
                lVar26 = lVar13 + 0x20;
                do {
                  FUN_04f78e50(plVar18,0,0);
                  uVar28 = (uint)lVar27;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar19 = (long *)FUN_04f79730(plVar18,uStack0000000000000030,0);
                    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar26 + lVar27 * 8);
                    if ((lVar15 == 0) || (uVar11 = FUN_0555e9b8(lVar15,0), plVar19 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar26 + lVar27 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar15,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar26 + lVar27 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar11 = FUN_0556053c(lVar15,0);
                    uVar12 = FUN_04f6ebb4(uVar11,0);
                    if ((uVar12 & 1) == 0) {
                      if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                      lVar15 = *(long *)(lVar26 + lVar27 * 8);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      plVar19 = *(long **)(unaff_x22 + 0x28);
                      uVar11 = FUN_0556053c(lVar15,0);
                      if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                      uVar11 = (**(code **)(*plVar19 + 0x308))
                                         (plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x310));
                      lVar15 = FUN_04f7a6a0(plVar18,uVar11,0);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar15,0x3a,0);
                    }
                    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar26 + lVar27 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar11 = FUN_0555e9b8(lVar15,0);
                    plVar19 = plVar18;
                  }
                  FUN_04f79730(plVar19,uVar11,0);
                  if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                  plVar19 = *(long **)(lVar26 + lVar27 * 8);
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                  iVar9 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0))
                  ;
                  if (iVar9 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar18,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar13 + 0x18) <= uVar28) goto LAB_055d7b34;
                    plVar19 = *(long **)(lVar26 + lVar27 * 8);
                    if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                    iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                    if (iVar9 == 4) goto LAB_055d6c94;
                  }
                  plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar11 = (**(code **)(*plVar18 + 0x168))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x170));
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar19 + 0x518))
                            (plVar19,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar11,*(undefined8 *)(*plVar19 + 0x520));
                  (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar19,*(undefined8 *)(*plVar17 + 0x2e0))
                  ;
                  lVar27 = lVar27 + 1;
                } while ((int)lVar27 < *(int *)(lVar13 + 0x18));
              }
            }
            plVar18 = *(long **)(unaff_x22 + 0x78);
            if (plVar18 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x298))
                      (plVar18,plVar17,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar18 + 0x2a0));
            plVar17 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar18 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
      } while (iVar5 < iVar9);
    }
    FUN_055ccff4(*(undefined8 *)(unaff_x29 + 0x88),plVar10,0);
    return plVar10;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


