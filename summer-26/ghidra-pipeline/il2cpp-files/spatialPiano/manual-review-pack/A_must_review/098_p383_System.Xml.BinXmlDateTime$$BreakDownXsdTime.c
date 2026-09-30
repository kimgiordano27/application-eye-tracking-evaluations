/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$BreakDownXsdTime
ENTRY_POINT: 055d56e4
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


long * System_Xml_BinXmlDateTime__BreakDownXsdTime(ulong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  char in_NG;
  char in_OV;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar25;
  uint uVar26;
  long unaff_x29;
  undefined8 uVar27;
  long *in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  while (puVar24 = (undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
        in_NG != in_OV) {
    while( true ) {
      if ((uint)param_1 <= (uint)unaff_x24) goto LAB_055d7b34;
      plVar12 = *(long **)(unaff_x25 + unaff_x24 * 8);
      if (plVar12 == (long *)0x0) goto LAB_055d7b30;
      lVar16 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (lVar16 == unaff_x23) break;
      if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x24) goto LAB_055d7b34;
      plVar12 = *(long **)(unaff_x20 + 0x20 + unaff_x24 * 8);
      if ((plVar12 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0)),
         puVar24 = (undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
         unaff_x23 == 0)) goto LAB_055d7b30;
      unaff_x19 = FUN_05546520(unaff_x23,0);
      uVar11 = FUN_04f6ebb4(unaff_x19,0);
      if ((uVar11 & 1) == 0) goto LAB_055d5760;
      unaff_x20 = *(long *)(unaff_x23 + 0x188);
      if (unaff_x20 == 0) goto LAB_055d7b30;
      param_1 = *(ulong *)(unaff_x20 + 0x18);
      puVar24 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
      ;
      if (param_1 == 0) {
        puVar2 = (undefined8 *)PTR_DAT_067cbf00;
        if (*(long *)(unaff_x22 + 0x30) != 0) {
          puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x50);
        }
        unaff_x19 = *puVar2;
        goto LAB_055d5760;
      }
      if ((int)param_1 < 1) goto LAB_055d5760;
      unaff_x24 = 0;
      unaff_x25 = unaff_x20 + 0x20;
    }
    uVar26 = *(uint *)(unaff_x20 + 0x18);
    param_1 = (ulong)uVar26;
    unaff_x24 = unaff_x24 + 1;
    in_OV = SBORROW4((int)unaff_x24,uVar26);
    in_NG = (int)((int)unaff_x24 - uVar26) < 0;
  }
LAB_055d5760:
  uVar10 = FUN_05546520();
  uVar11 = FUN_04f6dc3c(uVar10,unaff_x19,0);
  bVar1 = (uVar11 & 1) == 0;
  if (!bVar1) {
    (**(code **)(*in_stack_00000018 + 0x518))
              (in_stack_00000018,
               *(undefined8 *)
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
               ,*(undefined8 *)
                 Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
               ,*(undefined8 *)(*in_stack_00000018 + 0x520));
  }
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__;
  if (*(char *)(unaff_x29 + 0xe9) != '\0') {
    uStack000000000000003c = *(undefined1 *)(unaff_x29 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050582b4((long)&stack0x00000038 + 4,0);
    (**(code **)(*in_stack_00000018 + 0x558))
              (in_stack_00000018,*(undefined8 *)puVar4,*puVar24,uVar10,
               *(undefined8 *)(*in_stack_00000018 + 0x560));
  }
  puVar4 = Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__;
  if (*(char *)(unaff_x29 + 0xc0) != '\0') {
    plVar12 = *(long **)(unaff_x29 + 0xb8);
    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
    uVar10 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    (**(code **)(*in_stack_00000018 + 0x558))
              (in_stack_00000018,*(undefined8 *)puVar4,*puVar24,uVar10,
               *(undefined8 *)(*in_stack_00000018 + 0x560));
  }
  FUN_055cd6cc();
  plVar12 = *(long **)(unaff_x29 + 0x40);
  if (plVar12 == (long *)0x0) goto LAB_055d7b30;
  iVar5 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
  if (iVar5 - 1U < 2) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      plVar13 = (long *)FUN_0557e298(plVar12,iVar9,0);
      if (plVar13 == (long *)0x0) goto LAB_055d7b30;
      iVar6 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (iVar6 == 4) {
        plVar14 = (long *)FUN_0554c018();
        if (plVar14 == (long *)0x0) goto LAB_055d7b30;
        iVar6 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            plVar15 = (long *)(**(code **)(*plVar14 + 0x208))
                                        (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x210));
            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
            uVar11 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
            if ((uVar11 & 1) != 0) {
              lVar16 = (**(code **)(*plVar14 + 0x208))
                                 (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x210));
              if ((lVar16 == 0) || (lVar16 = FUN_05580068(lVar16,0), lVar16 == 0))
              goto LAB_055d7b30;
              if (*(int *)(lVar16 + 0x18) == 1) {
                lVar16 = (**(code **)(*plVar14 + 0x208))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x210));
                if ((lVar16 == 0) || (lVar16 = FUN_05580068(lVar16,0), lVar16 == 0))
                goto LAB_055d7b30;
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_055d7b34;
                if (*(long **)(lVar16 + 0x20) == plVar13) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          } while (iVar6 < iVar7);
        }
      }
      iVar6 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      iVar9 = iVar9 + 1;
      if (iVar6 == 1) {
        iVar8 = iVar8 + 1;
      }
    } while (iVar9 != iVar5);
    if ((*(char *)(unaff_x29 + 0x128) != '\0') && (iVar8 == 1)) {
      if ((*(long *)(unaff_x29 + 0x40) != 0) &&
         (lVar16 = FUN_0557e298(*(long *)(unaff_x29 + 0x40),0,0), lVar16 != 0)) {
        lVar16 = FUN_055ce110(*(undefined8 *)(lVar16 + 0x38));
        if ((lVar16 == 0) || (*(int *)(lVar16 + 0x10) == 0)) {
          lVar16 = *(long *)Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
        }
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_055b6a08(lVar16,0);
        (**(code **)(*in_stack_00000018 + 0x518))
                  (in_stack_00000018,*(undefined8 *)PTR_DAT_067ca7d0,uVar10,
                   *(undefined8 *)(*in_stack_00000018 + 0x520));
        return in_stack_00000018;
      }
      goto LAB_055d7b30;
    }
  }
  plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  lVar16 = FUN_05548bd0();
  if (lVar16 == 0) goto LAB_055d7b30;
  uVar11 = FUN_05825608(lVar16,0);
  if (((uVar11 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    lVar16 = FUN_05548bd0();
    if (lVar16 == 0) goto LAB_055d7b30;
    plVar14 = (long *)FUN_055d8110();
    lVar16 = FUN_05548bd0();
    if (lVar16 == 0) goto LAB_055d7b30;
    uVar11 = FUN_04f6ebb4(*(undefined8 *)(lVar16 + 0x18),0);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (bVar1)) {
        FUN_05546520();
      }
      plVar14 = (long *)FUN_055d8110();
    }
    lVar16 = FUN_05548bd0();
    if (lVar16 == 0) goto LAB_055d7b30;
    lVar16 = FUN_055d9988(lVar16,plVar14,*(undefined8 *)(lVar16 + 0x10));
    if (lVar16 == 0) {
      if (plVar14 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar13,*(undefined8 *)(*plVar14 + 0x2e0));
    }
    lVar16 = FUN_05548bd0();
    if ((lVar16 == 0) || (plVar13 == (long *)0x0)) goto LAB_055d7b30;
    (**(code **)(*plVar13 + 0x518))
              (plVar13,*(undefined8 *)PTR_DAT_067cd778,*(undefined8 *)(lVar16 + 0x10),
               *(undefined8 *)(*plVar13 + 0x520));
  }
  else {
    (**(code **)(*in_stack_00000018 + 0x2d8))
              (in_stack_00000018,plVar13,*(undefined8 *)(*in_stack_00000018 + 0x2e0));
  }
  lVar16 = FUN_05548bd0();
  if (lVar16 == 0) goto LAB_055d7b30;
  uVar11 = FUN_05825608(lVar16,0);
  if (((uVar11 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar14 = *(long **)(unaff_x22 + 0x28);
    lVar16 = FUN_05548bd0();
    if ((lVar16 == 0) || (plVar14 == (long *)0x0)) goto LAB_055d7b30;
    plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                (plVar14,*(undefined8 *)(lVar16 + 0x18),
                                 *(undefined8 *)(*plVar14 + 0x310));
    lVar16 = FUN_05548bd0();
    if (lVar16 == 0) goto LAB_055d7b30;
    if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar14,*(long *)(PTR_DAT_067c9338 + 0x90));
    }
    uVar10 = FUN_055da24c(plVar14,*(undefined8 *)(lVar16 + 0x10));
    (**(code **)(*in_stack_00000018 + 0x518))
              (in_stack_00000018,*(undefined8 *)PTR_DAT_067ca7d0,uVar10,
               *(undefined8 *)(*in_stack_00000018 + 0x520));
  }
  lVar16 = *(long *)(unaff_x29 + 0xf8);
  if (lVar16 != 0) {
    plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar10 = thunk_FUN_02f1863c(lVar16,0);
    uVar27 = *(undefined8 *)
              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar27 = FUN_050e4454(uVar27,0);
    uVar11 = FUN_050edfb8(uVar10,uVar27,0);
    puVar4 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    if ((uVar11 & 1) == 0) {
      FUN_055d87f4();
    }
    else {
      FUN_055cd6cc();
    }
    FUN_055ccff4(*(undefined8 *)(lVar16 + 0xa0),plVar14,0);
    if (*(char *)(lVar16 + 0x20) != '\0') {
      (**(code **)(*in_stack_00000018 + 0x558))
                (in_stack_00000018,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__,
                 **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*in_stack_00000018 + 0x560));
    }
    if (*(char *)(lVar16 + 0x95) == '\0') {
      FUN_055cfb48(*(undefined8 *)(lVar16 + 0x38));
      uVar10 = FUN_0555ef20(lVar16,0);
      uVar10 = FUN_0555ecb4(lVar16,uVar10,0);
      if (plVar14 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar14 + 0x558))
                (plVar14,*(undefined8 *)
                          Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo,
                 *(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar14 + 0x560));
    }
    else if (plVar14 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar14 + 0x558))
              (plVar14,*(undefined8 *)
                        UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
               ,*(undefined8 *)puVar4,*(undefined8 *)(lVar16 + 0x30),
               *(undefined8 *)(*plVar14 + 0x560));
    uStack0000000000000038 = *(undefined4 *)(lVar16 + 100);
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050656a0(0);
    uVar10 = FUN_050d2d8c(&stack0x00000038,uVar10,0);
    (**(code **)(*plVar14 + 0x558))
              (plVar14,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
               *(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar14 + 0x560));
    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar14,*(undefined8 *)(*plVar13 + 0x2e0));
    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar13,*(undefined8 *)(*plVar14 + 0x2e0));
    FUN_055d83a4();
  }
  plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (plVar13 == (long *)0x0) goto LAB_055d7b30;
  uVar10 = (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar14,*(undefined8 *)(*plVar13 + 0x2e0));
  FUN_055d9c74(uVar10,unaff_x29);
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      plVar15 = (long *)FUN_0557e298(plVar12,iVar9,0);
      if (plVar15 == (long *)0x0) goto LAB_055d7b30;
      iVar8 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
      if ((iVar8 != 3) &&
         ((((iVar8 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
            iVar8 == 2 ||
            (iVar8 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
            iVar8 == 1)) ||
           (iVar8 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
           iVar8 == 4)) && (uVar11 = FUN_055da208(), (uVar11 & 1) == 0)))) {
        iVar8 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
        uVar10 = FUN_055d8ef0();
        plVar15 = plVar14;
        if (iVar8 != 1) {
          plVar15 = plVar13;
        }
        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar15 + 0x2d8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x2e0));
      }
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  puVar24 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar12 = (long *)FUN_0554c018(unaff_x29,0);
    if (plVar12 == (long *)0x0) goto LAB_055d7b30;
    iVar5 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar15 = (long *)(**(code **)(*plVar12 + 0x208))
                                    (plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x210));
        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
        uVar11 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
        if ((uVar11 & 1) != 0) {
          plVar15 = (long *)(**(code **)(*plVar12 + 0x208))
                                      (plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x210));
          if (plVar15 == (long *)0x0) goto LAB_055d7b30;
          lVar16 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
          if (lVar16 == unaff_x29) {
            plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar17 = unaff_x29;
LAB_055d61bc:
            uVar10 = FUN_0554de78(lVar17,0);
            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar15 + 0x518))
                      (plVar15,*(undefined8 *)PTR_DAT_067d7c28,uVar10,
                       *(undefined8 *)(*plVar15 + 0x520));
          }
          else {
            if (lVar16 == 0) goto LAB_055d7b30;
            iVar9 = FUN_0554d1c8(lVar16,0);
            if (1 < iVar9) {
              plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar17 = lVar16;
              goto LAB_055d61bc;
            }
            plVar15 = (long *)FUN_055d524c();
          }
          uVar10 = FUN_05546520(lVar16,0);
          uVar27 = FUN_05546520(unaff_x29,0);
          uVar11 = thunk_FUN_04f6d944(uVar10,uVar27,0);
          if ((uVar11 & 1) != 0) {
            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar15 + 0x518))
                      (plVar15,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                       ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar15 + 0x520));
            (**(code **)(*plVar15 + 0x518))
                      (plVar15,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                       ,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                       ,*(undefined8 *)(*plVar15 + 0x520));
          }
          uVar10 = FUN_05546520(lVar16,0);
          uVar27 = FUN_05546520(unaff_x29,0);
          uVar11 = thunk_FUN_04f6d944(uVar10,uVar27,0);
          if ((uVar11 & 1) == 0) {
            lVar17 = FUN_05546520(lVar16,0);
            if (lVar17 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar17 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar9 = FUN_0554d1c8(lVar16,0);
              if (iVar9 < 2) {
                FUN_05546520(lVar16,0);
                plVar18 = (long *)FUN_055d8110();
                if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar15,*(undefined8 *)(*plVar18 + 0x2e0));
              }
              plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar18 = *(long **)(unaff_x22 + 0x28);
              uVar10 = FUN_05546520(lVar16,0);
              if (plVar18 == (long *)0x0) goto LAB_055d7b30;
              plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                          (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
              uVar10 = FUN_0554de78(lVar16,0);
              if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar10 = FUN_04f6f6b4(plVar18,*(undefined8 *)PTR_DAT_067ce970,uVar10,0);
              if (plVar15 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar15 + 0x518))
                        (plVar15,*(undefined8 *)PTR_DAT_067d7c28,uVar10,
                         *(undefined8 *)(*plVar15 + 0x520));
              puVar24 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar14 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar15,*(undefined8 *)(*plVar14 + 0x2e0));
          plVar18 = (long *)(**(code **)(*plVar12 + 0x208))
                                      (plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x210));
          if (plVar18 == (long *)0x0) goto LAB_055d7b30;
          lVar16 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
          if (lVar16 == 0) {
            plVar18 = *(long **)(unaff_x22 + 0x48);
            if ((plVar18 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar18 + 0x5f8))
                                            (plVar18,*puVar24,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar18 + 0x600)),
               plVar15 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar15 + 0x2c8))(plVar15,plVar18,*(undefined8 *)(*plVar15 + 0x2d0));
            plVar15 = *(long **)(unaff_x22 + 0x48);
            if ((plVar15 == (long *)0x0) ||
               (plVar15 = (long *)(**(code **)(*plVar15 + 0x5f8))
                                            (plVar15,*puVar24,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar15 + 0x600)),
               plVar18 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar15,*(undefined8 *)(*plVar18 + 0x2e0));
            (**(code **)(*plVar12 + 0x208))(plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x210));
            uVar10 = FUN_055d4838();
            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar15 + 0x2d8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x2e0));
          }
        }
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      } while (iVar5 < iVar9);
    }
  }
  if ((plVar14 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar14 + 0x328))(plVar14,*(undefined8 *)(*plVar14 + 0x330)),
     (uVar11 & 1) == 0)) {
    (**(code **)(*plVar13 + 0x2b8))(plVar13,plVar14,*(undefined8 *)(*plVar13 + 0x2c0));
  }
  plVar12 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
    puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar16 == 0) goto LAB_055d7b30;
    puVar24 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar16 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
    uStack0000000000000030 = *puVar24;
  }
  else {
    FUN_05546520(unaff_x29,0);
    FUN_055d8110();
    lVar16 = FUN_05546520(unaff_x29,0);
    if (lVar16 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar16 + 0x10) == 0) {
      puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar13 = *(long **)(unaff_x22 + 0x28);
    uVar10 = FUN_05546520(unaff_x29,0);
    if (plVar13 == (long *)0x0) goto LAB_055d7b30;
    plVar18 = (long *)(**(code **)(*plVar13 + 0x308))
                                (plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x310));
    if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar18);
    }
    uStack0000000000000030 = FUN_04f65260(plVar18,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar12 != (long *)0x0) {
    iVar5 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      plVar13 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar14 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar15 = (long *)FUN_0557b300(plVar12,iVar5,0);
        if (plVar15 == (long *)0x0) {
LAB_055d66d4:
          plVar15 = (long *)FUN_0557b300(plVar12,iVar5,0);
          if (plVar15 != (long *)0x0) {
            bVar3 = *(byte *)(*plVar13 + 0x130);
            if (((bVar3 <= *(byte *)(*plVar15 + 0x130)) &&
                (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) == *plVar13)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar15 = (long *)FUN_0557b300(plVar12,iVar5,0);
              if (plVar15 != (long *)0x0) {
                bVar3 = *(byte *)(*plVar13 + 0x130);
                if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != *plVar13)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar15);
                }
              }
              plVar18 = *(long **)(unaff_x22 + 0x38);
              if (plVar18 == (long *)0x0) goto LAB_055d7b30;
              iVar9 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
              if (iVar9 < 1) {
                uVar11 = FUN_055da208();
                if ((uVar11 & 1) == 0) {
                  if (plVar15 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar13 = (long *)FUN_055a5390(plVar15,0);
                  lVar16 = FUN_055a4c24(plVar15,0);
                  lVar17 = (**(code **)(*plVar15 + 0x2c8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                  if (lVar17 == 0) goto LAB_055d7b30;
                  lVar17 = *(long *)(lVar17 + 0x48);
                  uVar10 = thunk_FUN_02f45270(*plVar14);
                  FUN_055aee44(uVar10,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar16,0);
                  if (lVar17 == 0) goto LAB_055d7b30;
                  plVar18 = (long *)FUN_0557ba08(lVar17,uVar10,0);
                  if (plVar18 == (long *)0x0) {
                    plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar10 = FUN_0557af78(plVar15,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar10 = FUN_05819fc8(uVar10,0);
                    if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar14 + 0x518))
                              (plVar14,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                               *(undefined8 *)(*plVar14 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar10 = FUN_05546520(unaff_x29,0);
                      (**(code **)(*plVar14 + 0x558))
                                (plVar14,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar10,*(undefined8 *)(*plVar14 + 0x560));
                    }
                    else {
                      lVar17 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar17 == 0) goto LAB_055d7b30;
                      iVar9 = FUN_0558c670(lVar17,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar9 == -3) goto LAB_055d6f20;
                    }
                    plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar17 = (**(code **)(*plVar15 + 0x2c8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                    if (lVar17 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0554de78(lVar17,0);
                    uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                           Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                          ,uStack0000000000000030,uVar10,0);
                    if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar20 + 0x518))
                              (plVar20,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar10,*(undefined8 *)(*plVar20 + 0x520));
                    (**(code **)(*plVar14 + 0x2d8))
                              (plVar14,plVar20,*(undefined8 *)(*plVar14 + 0x2e0));
                    if (lVar16 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar16 + 0x18) != 0) {
                      plVar20 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar20,0);
                      if (0 < *(int *)(lVar16 + 0x18)) {
                        if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                        lVar25 = 0;
                        lVar17 = lVar16 + 0x20;
                        do {
                          FUN_04f78e50(plVar20,0,0);
                          uVar26 = (uint)lVar25;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar19 = (long *)FUN_04f79730(plVar20,uStack0000000000000030,0);
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            lVar21 = *(long *)(lVar17 + lVar25 * 8);
                            if ((lVar21 == 0) ||
                               (uVar10 = FUN_0555e9b8(lVar21,0), plVar19 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            lVar21 = *(long *)(lVar17 + lVar25 * 8);
                            if (lVar21 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar21,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            lVar21 = *(long *)(lVar17 + lVar25 * 8);
                            if (lVar21 == 0) goto LAB_055d7b30;
                            uVar10 = FUN_0556053c(lVar21,0);
                            uVar11 = FUN_04f6ebb4(uVar10,0);
                            if ((uVar11 & 1) == 0) {
                              if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                              lVar21 = *(long *)(lVar17 + lVar25 * 8);
                              if (lVar21 == 0) goto LAB_055d7b30;
                              plVar19 = *(long **)(unaff_x22 + 0x28);
                              uVar10 = FUN_0556053c(lVar21,0);
                              if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                              uVar10 = (**(code **)(*plVar19 + 0x308))
                                                 (plVar19,uVar10,*(undefined8 *)(*plVar19 + 0x310));
                              lVar21 = FUN_04f7a6a0(plVar20,uVar10,0);
                              if (lVar21 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar21,0x3a,0);
                            }
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            lVar21 = *(long *)(lVar17 + lVar25 * 8);
                            if (lVar21 == 0) goto LAB_055d7b30;
                            uVar10 = FUN_0555e9b8(lVar21,0);
                            plVar19 = plVar20;
                          }
                          FUN_04f79730(plVar19,uVar10,0);
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          plVar19 = *(long **)(lVar17 + lVar25 * 8);
                          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                          iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                            (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                          if (iVar9 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar20,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            plVar19 = *(long **)(lVar17 + lVar25 * 8);
                            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                            iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                              (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                            if (iVar9 == 4) goto LAB_055d71d4;
                          }
                          plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar10 = (**(code **)(*plVar20 + 0x168))
                                             (plVar20,*(undefined8 *)(*plVar20 + 0x170));
                          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar19 + 0x518))
                                    (plVar19,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar10,*(undefined8 *)(*plVar19 + 0x520));
                          (**(code **)(*plVar14 + 0x2d8))
                                    (plVar14,plVar19,*(undefined8 *)(*plVar14 + 0x2e0));
                          lVar25 = lVar25 + 1;
                        } while ((int)lVar25 < *(int *)(lVar16 + 0x18));
                      }
                    }
                    plVar20 = *(long **)(unaff_x22 + 0x78);
                    if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar20 + 0x298))
                              (plVar20,plVar14,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar20 + 0x2a0));
                    plVar14 = (long *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar3 = *(byte *)(*plVar14 + 0x130);
                    if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != *plVar14)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar18);
                    }
                  }
                  plVar20 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar10 = FUN_0557af78(plVar15,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar10 = FUN_05819fc8(uVar10,0);
                  if (plVar20 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar20 + 0x518))
                            (plVar20,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                             *(undefined8 *)(*plVar20 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar16 = (**(code **)(*plVar15 + 0x1b8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    if (lVar16 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_05546520(lVar16,0);
                    (**(code **)(*plVar20 + 0x558))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar10,*(undefined8 *)(*plVar20 + 0x560));
                  }
                  else {
                    lVar17 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar16 = (**(code **)(*plVar15 + 0x2c8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                    if ((lVar16 == 0) || (lVar17 == 0)) goto LAB_055d7b30;
                    iVar9 = FUN_0558c670(lVar17,*(undefined8 *)(lVar16 + 0x90),0);
                    if (iVar9 == -3) goto LAB_055d738c;
                  }
                  plVar19 = plVar15;
                  if (plVar18 != (long *)0x0) {
                    plVar19 = plVar18;
                  }
                  uVar10 = FUN_0557af78(plVar19,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar10 = FUN_05819fc8(uVar10,0);
                  (**(code **)(*plVar20 + 0x518))
                            (plVar20,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar10,*(undefined8 *)(*plVar20 + 0x520));
                  lVar16 = plVar15[6];
                  uVar10 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar10 = FUN_050e4454(uVar10,0);
                  FUN_055ccff4(lVar16,plVar20,uVar10);
                  uVar10 = (**(code **)(*plVar15 + 0x178))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x180));
                  uVar27 = FUN_0557af78(plVar15,0);
                  uVar11 = FUN_04f6dc3c(uVar10,uVar27,0);
                  if ((uVar11 & 1) != 0) {
                    uVar10 = (**(code **)(*plVar15 + 0x178))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x180));
                    (**(code **)(*plVar20 + 0x558))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar10,*(undefined8 *)(*plVar20 + 0x560));
                  }
                  if (plVar13 == (long *)0x0) {
                    lVar16 = *plVar20;
                    uVar27 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar22 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar23 = *(undefined8 *)(lVar16 + 0x560);
                    uVar10 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar16 + 0x558))(plVar20,uVar27,uVar22,uVar10,uVar23);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar13 + 0x1d8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                    if ((uVar11 & 1) != 0) {
                      (**(code **)(*plVar20 + 0x558))
                                (plVar20,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar20 + 0x560))
                      ;
                    }
                    lVar16 = plVar13[3];
                    uVar10 = *(undefined8 *)
                              Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar10 = FUN_050e4454(uVar10,0);
                    FUN_055ccff4(lVar16,plVar20,uVar10);
                    uVar10 = (**(code **)(*plVar15 + 0x178))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x180));
                    uVar27 = (**(code **)(*plVar13 + 0x1c8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
                    uVar11 = FUN_04f6dc3c(uVar10,uVar27,0);
                    if ((uVar11 & 1) != 0) {
                      uVar10 = (**(code **)(*plVar13 + 0x1c8))
                                         (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar10 = FUN_05819fc8(uVar10,0);
                      lVar16 = *plVar20;
                      uVar27 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar23 = *(undefined8 *)(lVar16 + 0x560);
                      uVar22 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar10 = FUN_0554de78(unaff_x29,0);
                  uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                        ,uStack0000000000000030,uVar10,0);
                  if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar13 + 0x518))
                            (plVar13,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar10,*(undefined8 *)(*plVar13 + 0x520));
                  (**(code **)(*plVar20 + 0x2d8))(plVar20,plVar13,*(undefined8 *)(*plVar20 + 0x2e0))
                  ;
                  iVar9 = (**(code **)(*plVar15 + 0x278))(plVar15,*(undefined8 *)(*plVar15 + 0x280))
                  ;
                  puVar4 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar9 != 0) {
                    (**(code **)(*plVar15 + 0x278))(plVar15,*(undefined8 *)(*plVar15 + 0x280));
                    uVar10 = FUN_055d9b50();
                    (**(code **)(*plVar20 + 0x558))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar20 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar15 + 0x2d8))(plVar15,*(undefined8 *)(*plVar15 + 0x2e0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar15 + 0x2d8))(plVar15,*(undefined8 *)(*plVar15 + 0x2e0));
                    uVar10 = FUN_055d9bc0();
                    (**(code **)(*plVar20 + 0x558))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar20 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
                    uVar10 = FUN_055d9bc0();
                    (**(code **)(*plVar20 + 0x558))
                              (plVar20,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar4,uVar10,*(undefined8 *)(*plVar20 + 0x560));
                  }
                  lVar16 = (**(code **)(*plVar15 + 0x268))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x270));
                  if (lVar16 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar16 + 0x18) != 0) {
                    plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar13,0);
                    if (0 < *(int *)(lVar16 + 0x18)) {
                      if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                      lVar25 = 0;
                      lVar17 = lVar16 + 0x20;
                      do {
                        FUN_04f78e50(plVar13,0,0);
                        uVar26 = (uint)lVar25;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar15 = (long *)FUN_04f79730(plVar13,uStack0000000000000030,0);
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          lVar21 = *(long *)(lVar17 + lVar25 * 8);
                          if ((lVar21 == 0) ||
                             (uVar10 = FUN_0555e9b8(lVar21,0), plVar15 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          lVar21 = *(long *)(lVar17 + lVar25 * 8);
                          if (lVar21 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar21,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          lVar21 = *(long *)(lVar17 + lVar25 * 8);
                          if (lVar21 == 0) goto LAB_055d7b30;
                          uVar10 = FUN_0556053c(lVar21,0);
                          uVar11 = FUN_04f6ebb4(uVar10,0);
                          if ((uVar11 & 1) == 0) {
                            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                            lVar21 = *(long *)(lVar17 + lVar25 * 8);
                            if (lVar21 == 0) goto LAB_055d7b30;
                            plVar15 = *(long **)(unaff_x22 + 0x28);
                            uVar10 = FUN_0556053c(lVar21,0);
                            if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                            uVar10 = (**(code **)(*plVar15 + 0x308))
                                               (plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x310));
                            lVar21 = FUN_04f7a6a0(plVar13,uVar10,0);
                            if (lVar21 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar21,0x3a,0);
                          }
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          lVar21 = *(long *)(lVar17 + lVar25 * 8);
                          if (lVar21 == 0) goto LAB_055d7b30;
                          uVar10 = FUN_0555e9b8(lVar21,0);
                          plVar15 = plVar13;
                        }
                        FUN_04f79730(plVar15,uVar10,0);
                        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                        plVar15 = *(long **)(lVar17 + lVar25 * 8);
                        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                        iVar9 = (**(code **)(*plVar15 + 0x1d8))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                        if (iVar9 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar13,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                          plVar15 = *(long **)(lVar17 + lVar25 * 8);
                          if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                          iVar9 = (**(code **)(*plVar15 + 0x1d8))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                          if (iVar9 == 4) goto LAB_055d79f8;
                        }
                        plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar10 = (**(code **)(*plVar13 + 0x168))
                                           (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                        if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar15 + 0x518))
                                  (plVar15,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar10,*(undefined8 *)(*plVar15 + 0x520));
                        (**(code **)(*plVar20 + 0x2d8))
                                  (plVar20,plVar15,*(undefined8 *)(*plVar20 + 0x2e0));
                        lVar25 = lVar25 + 1;
                      } while ((int)lVar25 < *(int *)(lVar16 + 0x18));
                    }
                  }
                  plVar13 = *(long **)(unaff_x22 + 0x78);
                  if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar13 + 0x2a8))
                            (plVar13,plVar20,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar13 + 0x2b0));
                  plVar13 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                }
              }
              else {
                if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                plVar13 = *(long **)(unaff_x22 + 0x38);
                uVar10 = (**(code **)(*plVar15 + 0x2c8))(plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                uVar11 = (**(code **)(*plVar13 + 0x348))
                                   (plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x350));
                plVar13 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar11 & 1) != 0) {
                  plVar13 = *(long **)(unaff_x22 + 0x38);
                  uVar10 = (**(code **)(*plVar15 + 0x1b8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                  if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                  uVar11 = (**(code **)(*plVar13 + 0x348))
                                     (plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x350));
                  plVar13 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar11 & 1) != 0) && (uVar11 = FUN_055da208(), (uVar11 & 1) == 0))
                  goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar3 = *(byte *)(*plVar14 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != *plVar14))
          goto LAB_055d66d4;
          plVar18 = (long *)FUN_0557b300(plVar12,iVar5,0);
          if (plVar18 == (long *)0x0) {
            uVar11 = FUN_055da208();
            if ((uVar11 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar3 = *(byte *)(*plVar14 + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != *plVar14))
            goto LAB_055d7b38;
            uVar11 = FUN_055da208();
            if ((uVar11 & 1) != 0) goto LAB_055d7adc;
            lVar16 = plVar18[7];
            plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar10 = FUN_05546520(unaff_x29,0);
              if (plVar13 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar10,*(undefined8 *)(*plVar13 + 0x560));
            }
            else {
              lVar17 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar17 == 0) goto LAB_055d7b30;
              iVar9 = FUN_0558c670(lVar17,*(undefined8 *)(unaff_x29 + 0x90),0);
              if (iVar9 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar10 = FUN_0557af78(plVar18,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar10 = FUN_05819fc8(uVar10,0);
            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar13 + 0x518))
                      (plVar13,*(undefined8 *)PTR_DAT_067cd778,uVar10,
                       *(undefined8 *)(*plVar13 + 0x520));
            uVar10 = (**(code **)(*plVar18 + 0x178))(plVar18,*(undefined8 *)(*plVar18 + 0x180));
            uVar27 = FUN_0557af78(plVar18,0);
            uVar11 = FUN_04f6dc3c(uVar10,uVar27,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*plVar18 + 0x178))(plVar18,*(undefined8 *)(*plVar18 + 0x180));
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar10,*(undefined8 *)(*plVar13 + 0x560));
            }
            FUN_055ccff4(plVar18[6],plVar13,0);
            plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar10 = FUN_0554de78(unaff_x29,0);
            uVar10 = FUN_04f6f6b4(*(undefined8 *)
                                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                  ,uStack0000000000000030,uVar10,0);
            if (plVar14 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar14 + 0x518))
                      (plVar14,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar10,*(undefined8 *)(*plVar14 + 0x520));
            (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar14,*(undefined8 *)(*plVar13 + 0x2e0));
            uVar11 = FUN_055afea0(plVar18,0);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar13 + 0x560));
            }
            if (lVar16 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar16 + 0x18) != 0) {
              plVar14 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar14,0);
              if (0 < *(int *)(lVar16 + 0x18)) {
                if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                lVar25 = 0;
                lVar17 = lVar16 + 0x20;
                do {
                  FUN_04f78e50(plVar14,0,0);
                  uVar26 = (uint)lVar25;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar15 = (long *)FUN_04f79730(plVar14,uStack0000000000000030,0);
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                    lVar21 = *(long *)(lVar17 + lVar25 * 8);
                    if ((lVar21 == 0) || (uVar10 = FUN_0555e9b8(lVar21,0), plVar15 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                    lVar21 = *(long *)(lVar17 + lVar25 * 8);
                    if (lVar21 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar21,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                    lVar21 = *(long *)(lVar17 + lVar25 * 8);
                    if (lVar21 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0556053c(lVar21,0);
                    uVar11 = FUN_04f6ebb4(uVar10,0);
                    if ((uVar11 & 1) == 0) {
                      if (*(uint *)(lVar16 + 0x18) <= uVar26) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar21 = *(long *)(lVar17 + lVar25 * 8);
                      if (lVar21 == 0) goto LAB_055d7b30;
                      plVar15 = *(long **)(unaff_x22 + 0x28);
                      uVar10 = FUN_0556053c(lVar21,0);
                      if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                      uVar10 = (**(code **)(*plVar15 + 0x308))
                                         (plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x310));
                      lVar21 = FUN_04f7a6a0(plVar14,uVar10,0);
                      if (lVar21 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar21,0x3a,0);
                    }
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                    lVar21 = *(long *)(lVar17 + lVar25 * 8);
                    if (lVar21 == 0) goto LAB_055d7b30;
                    uVar10 = FUN_0555e9b8(lVar21,0);
                    plVar15 = plVar14;
                  }
                  FUN_04f79730(plVar15,uVar10,0);
                  if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                  plVar15 = *(long **)(lVar17 + lVar25 * 8);
                  if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                  iVar9 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0))
                  ;
                  if (iVar9 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar14,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_055d7b34;
                    plVar15 = *(long **)(lVar17 + lVar25 * 8);
                    if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                    iVar9 = (**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                    if (iVar9 == 4) goto LAB_055d6c94;
                  }
                  plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar10 = (**(code **)(*plVar14 + 0x168))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                  if (plVar15 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar15 + 0x518))
                            (plVar15,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar10,*(undefined8 *)(*plVar15 + 0x520));
                  (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar15,*(undefined8 *)(*plVar13 + 0x2e0))
                  ;
                  lVar25 = lVar25 + 1;
                } while ((int)lVar25 < *(int *)(lVar16 + 0x18));
              }
            }
            plVar14 = *(long **)(unaff_x22 + 0x78);
            if (plVar14 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar14 + 0x298))
                      (plVar14,plVar13,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar14 + 0x2a0));
            plVar13 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar14 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      } while (iVar5 < iVar9);
    }
    FUN_055ccff4(*(undefined8 *)(unaff_x29 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


