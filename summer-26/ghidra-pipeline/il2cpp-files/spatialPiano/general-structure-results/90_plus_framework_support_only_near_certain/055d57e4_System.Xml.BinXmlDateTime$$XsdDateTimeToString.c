/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdDateTimeToString
ENTRY_POINT: 055d57e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 220
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_5
*/


long * System_Xml_BinXmlDateTime__XsdDateTimeToString(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  int in_w9;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar23;
  uint uVar24;
  long unaff_x29;
  undefined8 uVar25;
  long *in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 in_stack_00000038;
  
  if (in_w9 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050582b4(&stack0x0000003c,0);
  (**(code **)(*unaff_x23 + 0x558))();
  if (*(char *)(unaff_x29 + 0xc0) != '\0') {
    plVar8 = *(long **)(unaff_x29 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    (**(code **)(*unaff_x23 + 0x558))();
  }
  FUN_055cd6cc();
  plVar8 = *(long **)(unaff_x29 + 0x40);
  if (plVar8 == (long *)0x0) goto LAB_055d7b30;
  iVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
  if (iVar3 - 1U < 2) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      plVar9 = (long *)FUN_0557e298(plVar8,iVar7,0);
      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
      iVar4 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (iVar4 == 4) {
        plVar10 = (long *)FUN_0554c018();
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        iVar4 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x208))
                                        (plVar10,iVar4,*(undefined8 *)(*plVar10 + 0x210));
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            uVar12 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
            if ((uVar12 & 1) != 0) {
              lVar13 = (**(code **)(*plVar10 + 0x208))
                                 (plVar10,iVar4,*(undefined8 *)(*plVar10 + 0x210));
              if ((lVar13 == 0) || (lVar13 = FUN_05580068(lVar13,0), lVar13 == 0))
              goto LAB_055d7b30;
              if (*(int *)(lVar13 + 0x18) == 1) {
                lVar13 = (**(code **)(*plVar10 + 0x208))
                                   (plVar10,iVar4,*(undefined8 *)(*plVar10 + 0x210));
                if ((lVar13 == 0) || (lVar13 = FUN_05580068(lVar13,0), lVar13 == 0))
                goto LAB_055d7b30;
                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_055d7b34;
                if (*(long **)(lVar13 + 0x20) == plVar9) {
                  iVar6 = iVar6 + 1;
                }
              }
            }
            iVar4 = iVar4 + 1;
            iVar5 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
          } while (iVar4 < iVar5);
        }
      }
      iVar4 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      iVar7 = iVar7 + 1;
      if (iVar4 == 1) {
        iVar6 = iVar6 + 1;
      }
    } while (iVar7 != iVar3);
    unaff_x23 = in_stack_00000018;
    if ((*(char *)(unaff_x29 + 0x128) != '\0') && (iVar6 == 1)) {
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
        uVar14 = FUN_055b6a08(lVar13,0);
        (**(code **)(*in_stack_00000018 + 0x518))
                  (in_stack_00000018,*(undefined8 *)PTR_DAT_067ca7d0,uVar14,
                   *(undefined8 *)(*in_stack_00000018 + 0x520));
        return in_stack_00000018;
      }
      goto LAB_055d7b30;
    }
  }
  plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  lVar13 = FUN_05548bd0();
  if (lVar13 == 0) goto LAB_055d7b30;
  uVar12 = FUN_05825608(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    plVar10 = (long *)FUN_055d8110();
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    uVar12 = FUN_04f6ebb4(*(undefined8 *)(lVar13 + 0x18),0);
    if ((uVar12 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || ((unaff_x24 & 1) == 0)) {
        FUN_05546520();
      }
      plVar10 = (long *)FUN_055d8110();
    }
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    lVar13 = FUN_055d9988(lVar13,plVar10,*(undefined8 *)(lVar13 + 0x10));
    if (lVar13 == 0) {
      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2e0));
    }
    lVar13 = FUN_05548bd0();
    if ((lVar13 == 0) || (plVar9 == (long *)0x0)) goto LAB_055d7b30;
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)PTR_DAT_067cd778,*(undefined8 *)(lVar13 + 0x10),
               *(undefined8 *)(*plVar9 + 0x520));
  }
  else {
    (**(code **)(*unaff_x23 + 0x2d8))(unaff_x23,plVar9,*(undefined8 *)(*unaff_x23 + 0x2e0));
  }
  lVar13 = FUN_05548bd0();
  if (lVar13 == 0) goto LAB_055d7b30;
  uVar12 = FUN_05825608(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar10 = *(long **)(unaff_x22 + 0x28);
    lVar13 = FUN_05548bd0();
    if ((lVar13 == 0) || (plVar10 == (long *)0x0)) goto LAB_055d7b30;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                (plVar10,*(undefined8 *)(lVar13 + 0x18),
                                 *(undefined8 *)(*plVar10 + 0x310));
    lVar13 = FUN_05548bd0();
    if (lVar13 == 0) goto LAB_055d7b30;
    if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar10,*(long *)(PTR_DAT_067c9338 + 0x90));
    }
    uVar14 = FUN_055da24c(plVar10,*(undefined8 *)(lVar13 + 0x10));
    (**(code **)(*unaff_x23 + 0x518))
              (unaff_x23,*(undefined8 *)PTR_DAT_067ca7d0,uVar14,*(undefined8 *)(*unaff_x23 + 0x520))
    ;
  }
  lVar13 = *(long *)(unaff_x29 + 0xf8);
  if (lVar13 != 0) {
    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar14 = thunk_FUN_02f1863c(lVar13,0);
    uVar25 = *(undefined8 *)
              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar25 = FUN_050e4454(uVar25,0);
    uVar12 = FUN_050edfb8(uVar14,uVar25,0);
    puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    if ((uVar12 & 1) == 0) {
      FUN_055d87f4();
    }
    else {
      FUN_055cd6cc();
    }
    FUN_055ccff4(*(undefined8 *)(lVar13 + 0xa0),plVar10,0);
    if (*(char *)(lVar13 + 0x20) != '\0') {
      (**(code **)(*in_stack_00000018 + 0x558))
                (in_stack_00000018,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__,
                 **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*in_stack_00000018 + 0x560));
    }
    if (*(char *)(lVar13 + 0x95) == '\0') {
      FUN_055cfb48(*(undefined8 *)(lVar13 + 0x38));
      uVar14 = FUN_0555ef20(lVar13,0);
      uVar14 = FUN_0555ecb4(lVar13,uVar14,0);
      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar10 + 0x558))
                (plVar10,*(undefined8 *)
                          Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo,
                 *(undefined8 *)puVar2,uVar14,*(undefined8 *)(*plVar10 + 0x560));
    }
    else if (plVar10 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)
                        UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
               ,*(undefined8 *)puVar2,*(undefined8 *)(lVar13 + 0x30),
               *(undefined8 *)(*plVar10 + 0x560));
    in_stack_00000038 = *(undefined4 *)(lVar13 + 100);
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_050656a0(0);
    uVar14 = FUN_050d2d8c(&stack0x00000038,uVar14,0);
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
               *(undefined8 *)puVar2,uVar14,*(undefined8 *)(*plVar10 + 0x560));
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
    (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2e0));
    FUN_055d83a4();
  }
  plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (plVar9 == (long *)0x0) goto LAB_055d7b30;
  uVar14 = (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
  FUN_055d9c74(uVar14,unaff_x29);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      plVar11 = (long *)FUN_0557e298(plVar8,iVar7,0);
      if (plVar11 == (long *)0x0) goto LAB_055d7b30;
      iVar6 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if ((iVar6 != 3) &&
         ((((iVar6 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0)),
            iVar6 == 2 ||
            (iVar6 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0)),
            iVar6 == 1)) ||
           (iVar6 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0)),
           iVar6 == 4)) && (uVar12 = FUN_055da208(), (uVar12 & 1) == 0)))) {
        iVar6 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
        uVar14 = FUN_055d8ef0();
        plVar11 = plVar10;
        if (iVar6 != 1) {
          plVar11 = plVar9;
        }
        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
        (**(code **)(*plVar11 + 0x2d8))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x2e0));
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  puVar22 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar8 = (long *)FUN_0554c018(unaff_x29,0);
    if (plVar8 == (long *)0x0) goto LAB_055d7b30;
    iVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        plVar11 = (long *)(**(code **)(*plVar8 + 0x208))
                                    (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
        uVar12 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
        if ((uVar12 & 1) != 0) {
          plVar11 = (long *)(**(code **)(*plVar8 + 0x208))
                                      (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
          lVar13 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if (lVar13 == unaff_x29) {
            plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar15 = unaff_x29;
LAB_055d61bc:
            uVar14 = FUN_0554de78(lVar15,0);
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)PTR_DAT_067d7c28,uVar14,
                       *(undefined8 *)(*plVar11 + 0x520));
          }
          else {
            if (lVar13 == 0) goto LAB_055d7b30;
            iVar7 = FUN_0554d1c8(lVar13,0);
            if (1 < iVar7) {
              plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar15 = lVar13;
              goto LAB_055d61bc;
            }
            plVar11 = (long *)FUN_055d524c();
          }
          uVar14 = FUN_05546520(lVar13,0);
          uVar25 = FUN_05546520(unaff_x29,0);
          uVar12 = thunk_FUN_04f6d944(uVar14,uVar25,0);
          if ((uVar12 & 1) != 0) {
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                       ,*(undefined8 *)PTR_DAT_067d52c8,*(undefined8 *)(*plVar11 + 0x520));
            (**(code **)(*plVar11 + 0x518))
                      (plVar11,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                       ,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                       ,*(undefined8 *)(*plVar11 + 0x520));
          }
          uVar14 = FUN_05546520(lVar13,0);
          uVar25 = FUN_05546520(unaff_x29,0);
          uVar12 = thunk_FUN_04f6d944(uVar14,uVar25,0);
          if ((uVar12 & 1) == 0) {
            lVar15 = FUN_05546520(lVar13,0);
            if (lVar15 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar15 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar7 = FUN_0554d1c8(lVar13,0);
              if (iVar7 < 2) {
                FUN_05546520(lVar13,0);
                plVar16 = (long *)FUN_055d8110();
                if (plVar16 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar11,*(undefined8 *)(*plVar16 + 0x2e0));
              }
              plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar16 = *(long **)(unaff_x22 + 0x28);
              uVar14 = FUN_05546520(lVar13,0);
              if (plVar16 == (long *)0x0) goto LAB_055d7b30;
              plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                          (plVar16,uVar14,*(undefined8 *)(*plVar16 + 0x310));
              uVar14 = FUN_0554de78(lVar13,0);
              if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar14 = FUN_04f6f6b4(plVar16,*(undefined8 *)PTR_DAT_067ce970,uVar14,0);
              if (plVar11 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar11 + 0x518))
                        (plVar11,*(undefined8 *)PTR_DAT_067d7c28,uVar14,
                         *(undefined8 *)(*plVar11 + 0x520));
              puVar22 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x2e0));
          plVar16 = (long *)(**(code **)(*plVar8 + 0x208))
                                      (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
          if (plVar16 == (long *)0x0) goto LAB_055d7b30;
          lVar13 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
          if (lVar13 == 0) {
            plVar16 = *(long **)(unaff_x22 + 0x48);
            if ((plVar16 == (long *)0x0) ||
               (plVar16 = (long *)(**(code **)(*plVar16 + 0x5f8))
                                            (plVar16,*puVar22,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar16 + 0x600)),
               plVar11 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x2c8))(plVar11,plVar16,*(undefined8 *)(*plVar11 + 0x2d0));
            plVar11 = *(long **)(unaff_x22 + 0x48);
            if ((plVar11 == (long *)0x0) ||
               (plVar11 = (long *)(**(code **)(*plVar11 + 0x5f8))
                                            (plVar11,*puVar22,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar11 + 0x600)),
               plVar16 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar11,*(undefined8 *)(*plVar16 + 0x2e0));
            (**(code **)(*plVar8 + 0x208))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
            uVar14 = FUN_055d4838();
            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar11 + 0x2d8))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x2e0));
          }
        }
        iVar3 = iVar3 + 1;
        iVar7 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      } while (iVar3 < iVar7);
    }
  }
  if ((plVar10 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar10 + 0x328))(plVar10,*(undefined8 *)(*plVar10 + 0x330)),
     (uVar12 & 1) == 0)) {
    (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2c0));
  }
  plVar8 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
    puVar22 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar13 == 0) goto LAB_055d7b30;
    puVar22 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar13 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
    uStack0000000000000030 = *puVar22;
  }
  else {
    FUN_05546520(unaff_x29,0);
    FUN_055d8110();
    lVar13 = FUN_05546520(unaff_x29,0);
    if (lVar13 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar13 + 0x10) == 0) {
      puVar22 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar9 = *(long **)(unaff_x22 + 0x28);
    uVar14 = FUN_05546520(unaff_x29,0);
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
    plVar16 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x310))
    ;
    if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar16);
    }
    uStack0000000000000030 = FUN_04f65260(plVar16,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar8 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      plVar9 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar10 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar11 = (long *)FUN_0557b300(plVar8,iVar3,0);
        if (plVar11 == (long *)0x0) {
LAB_055d66d4:
          plVar11 = (long *)FUN_0557b300(plVar8,iVar3,0);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar9 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar9)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar11 = (long *)FUN_0557b300(plVar8,iVar3,0);
              if (plVar11 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar9 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar11);
                }
              }
              plVar16 = *(long **)(unaff_x22 + 0x38);
              if (plVar16 == (long *)0x0) goto LAB_055d7b30;
              iVar7 = (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0));
              if (iVar7 < 1) {
                uVar12 = FUN_055da208();
                if ((uVar12 & 1) == 0) {
                  if (plVar11 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar9 = (long *)FUN_055a5390(plVar11,0);
                  lVar13 = FUN_055a4c24(plVar11,0);
                  lVar15 = (**(code **)(*plVar11 + 0x2c8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                  if (lVar15 == 0) goto LAB_055d7b30;
                  lVar15 = *(long *)(lVar15 + 0x48);
                  uVar14 = thunk_FUN_02f45270(*plVar10);
                  FUN_055aee44(uVar14,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar13,0);
                  if (lVar15 == 0) goto LAB_055d7b30;
                  plVar16 = (long *)FUN_0557ba08(lVar15,uVar14,0);
                  if (plVar16 == (long *)0x0) {
                    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar14 = FUN_0557af78(plVar11,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar14 = FUN_05819fc8(uVar14,0);
                    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar10 + 0x518))
                              (plVar10,*(undefined8 *)PTR_DAT_067cd778,uVar14,
                               *(undefined8 *)(*plVar10 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar14 = FUN_05546520(unaff_x29,0);
                      (**(code **)(*plVar10 + 0x558))
                                (plVar10,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar14,*(undefined8 *)(*plVar10 + 0x560));
                    }
                    else {
                      lVar15 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      iVar7 = FUN_0558c670(lVar15,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar7 == -3) goto LAB_055d6f20;
                    }
                    plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar15 = (**(code **)(*plVar11 + 0x2c8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar14 = FUN_0554de78(lVar15,0);
                    uVar14 = FUN_04f6f6b4(*(undefined8 *)
                                           Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                          ,uStack0000000000000030,uVar14,0);
                    if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar18 + 0x518))
                              (plVar18,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar14,*(undefined8 *)(*plVar18 + 0x520));
                    (**(code **)(*plVar10 + 0x2d8))
                              (plVar10,plVar18,*(undefined8 *)(*plVar10 + 0x2e0));
                    if (lVar13 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar13 + 0x18) != 0) {
                      plVar18 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar18,0);
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                        lVar23 = 0;
                        lVar15 = lVar13 + 0x20;
                        do {
                          FUN_04f78e50(plVar18,0,0);
                          uVar24 = (uint)lVar23;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar17 = (long *)FUN_04f79730(plVar18,uStack0000000000000030,0);
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            lVar19 = *(long *)(lVar15 + lVar23 * 8);
                            if ((lVar19 == 0) ||
                               (uVar14 = FUN_0555e9b8(lVar19,0), plVar17 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            lVar19 = *(long *)(lVar15 + lVar23 * 8);
                            if (lVar19 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar19,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            lVar19 = *(long *)(lVar15 + lVar23 * 8);
                            if (lVar19 == 0) goto LAB_055d7b30;
                            uVar14 = FUN_0556053c(lVar19,0);
                            uVar12 = FUN_04f6ebb4(uVar14,0);
                            if ((uVar12 & 1) == 0) {
                              if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                              lVar19 = *(long *)(lVar15 + lVar23 * 8);
                              if (lVar19 == 0) goto LAB_055d7b30;
                              plVar17 = *(long **)(unaff_x22 + 0x28);
                              uVar14 = FUN_0556053c(lVar19,0);
                              if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                              uVar14 = (**(code **)(*plVar17 + 0x308))
                                                 (plVar17,uVar14,*(undefined8 *)(*plVar17 + 0x310));
                              lVar19 = FUN_04f7a6a0(plVar18,uVar14,0);
                              if (lVar19 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar19,0x3a,0);
                            }
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            lVar19 = *(long *)(lVar15 + lVar23 * 8);
                            if (lVar19 == 0) goto LAB_055d7b30;
                            uVar14 = FUN_0555e9b8(lVar19,0);
                            plVar17 = plVar18;
                          }
                          FUN_04f79730(plVar17,uVar14,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          plVar17 = *(long **)(lVar15 + lVar23 * 8);
                          if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                          iVar7 = (**(code **)(*plVar17 + 0x1d8))
                                            (plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                          if (iVar7 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar18,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            plVar17 = *(long **)(lVar15 + lVar23 * 8);
                            if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                            iVar7 = (**(code **)(*plVar17 + 0x1d8))
                                              (plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                            if (iVar7 == 4) goto LAB_055d71d4;
                          }
                          plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar14 = (**(code **)(*plVar18 + 0x168))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x170));
                          if (plVar17 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar17 + 0x518))
                                    (plVar17,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar14,*(undefined8 *)(*plVar17 + 0x520));
                          (**(code **)(*plVar10 + 0x2d8))
                                    (plVar10,plVar17,*(undefined8 *)(*plVar10 + 0x2e0));
                          lVar23 = lVar23 + 1;
                        } while ((int)lVar23 < *(int *)(lVar13 + 0x18));
                      }
                    }
                    plVar18 = *(long **)(unaff_x22 + 0x78);
                    if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar18 + 0x298))
                              (plVar18,plVar10,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar18 + 0x2a0));
                    plVar10 = (long *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar10 + 0x130);
                    if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar16);
                    }
                  }
                  plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar14 = FUN_0557af78(plVar11,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar14 = FUN_05819fc8(uVar14,0);
                  if (plVar18 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar18 + 0x518))
                            (plVar18,*(undefined8 *)PTR_DAT_067cd778,uVar14,
                             *(undefined8 *)(*plVar18 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar13 = (**(code **)(*plVar11 + 0x1b8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                    if (lVar13 == 0) goto LAB_055d7b30;
                    uVar14 = FUN_05546520(lVar13,0);
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar14,*(undefined8 *)(*plVar18 + 0x560));
                  }
                  else {
                    lVar15 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar13 = (**(code **)(*plVar11 + 0x2c8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                    if ((lVar13 == 0) || (lVar15 == 0)) goto LAB_055d7b30;
                    iVar7 = FUN_0558c670(lVar15,*(undefined8 *)(lVar13 + 0x90),0);
                    if (iVar7 == -3) goto LAB_055d738c;
                  }
                  plVar17 = plVar11;
                  if (plVar16 != (long *)0x0) {
                    plVar17 = plVar16;
                  }
                  uVar14 = FUN_0557af78(plVar17,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar14 = FUN_05819fc8(uVar14,0);
                  (**(code **)(*plVar18 + 0x518))
                            (plVar18,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar14,*(undefined8 *)(*plVar18 + 0x520));
                  lVar13 = plVar11[6];
                  uVar14 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar14 = FUN_050e4454(uVar14,0);
                  FUN_055ccff4(lVar13,plVar18,uVar14);
                  uVar14 = (**(code **)(*plVar11 + 0x178))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x180));
                  uVar25 = FUN_0557af78(plVar11,0);
                  uVar12 = FUN_04f6dc3c(uVar14,uVar25,0);
                  if ((uVar12 & 1) != 0) {
                    uVar14 = (**(code **)(*plVar11 + 0x178))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x180));
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar14,*(undefined8 *)(*plVar18 + 0x560));
                  }
                  if (plVar9 == (long *)0x0) {
                    lVar13 = *plVar18;
                    uVar25 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar20 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar21 = *(undefined8 *)(lVar13 + 0x560);
                    uVar14 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar13 + 0x558))(plVar18,uVar25,uVar20,uVar14,uVar21);
                  }
                  else {
                    uVar12 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0))
                    ;
                    if ((uVar12 & 1) != 0) {
                      (**(code **)(*plVar18 + 0x558))
                                (plVar18,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar18 + 0x560))
                      ;
                    }
                    lVar13 = plVar9[3];
                    uVar14 = *(undefined8 *)
                              Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar14 = FUN_050e4454(uVar14,0);
                    FUN_055ccff4(lVar13,plVar18,uVar14);
                    uVar14 = (**(code **)(*plVar11 + 0x178))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x180));
                    uVar25 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0))
                    ;
                    uVar12 = FUN_04f6dc3c(uVar14,uVar25,0);
                    if ((uVar12 & 1) != 0) {
                      uVar14 = (**(code **)(*plVar9 + 0x1c8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar14 = FUN_05819fc8(uVar14,0);
                      lVar13 = *plVar18;
                      uVar25 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar21 = *(undefined8 *)(lVar13 + 0x560);
                      uVar20 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar14 = FUN_0554de78(unaff_x29,0);
                  uVar14 = FUN_04f6f6b4(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                        ,uStack0000000000000030,uVar14,0);
                  if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar9 + 0x518))
                            (plVar9,*(undefined8 *)
                                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar14,*(undefined8 *)(*plVar9 + 0x520));
                  (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar9,*(undefined8 *)(*plVar18 + 0x2e0));
                  iVar7 = (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280))
                  ;
                  puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar7 != 0) {
                    (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280));
                    uVar14 = FUN_055d9b50();
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar2,uVar14,*(undefined8 *)(*plVar18 + 0x560));
                  }
                  iVar7 = (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0))
                  ;
                  if (iVar7 != 1) {
                    (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
                    uVar14 = FUN_055d9bc0();
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar2,uVar14,*(undefined8 *)(*plVar18 + 0x560));
                  }
                  iVar7 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0))
                  ;
                  if (iVar7 != 1) {
                    (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
                    uVar14 = FUN_055d9bc0();
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar2,uVar14,*(undefined8 *)(*plVar18 + 0x560));
                  }
                  lVar13 = (**(code **)(*plVar11 + 0x268))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x270));
                  if (lVar13 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar9,0);
                    if (0 < *(int *)(lVar13 + 0x18)) {
                      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                      lVar23 = 0;
                      lVar15 = lVar13 + 0x20;
                      do {
                        FUN_04f78e50(plVar9,0,0);
                        uVar24 = (uint)lVar23;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar11 = (long *)FUN_04f79730(plVar9,uStack0000000000000030,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          lVar19 = *(long *)(lVar15 + lVar23 * 8);
                          if ((lVar19 == 0) ||
                             (uVar14 = FUN_0555e9b8(lVar19,0), plVar11 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          lVar19 = *(long *)(lVar15 + lVar23 * 8);
                          if (lVar19 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar19,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          lVar19 = *(long *)(lVar15 + lVar23 * 8);
                          if (lVar19 == 0) goto LAB_055d7b30;
                          uVar14 = FUN_0556053c(lVar19,0);
                          uVar12 = FUN_04f6ebb4(uVar14,0);
                          if ((uVar12 & 1) == 0) {
                            if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                            lVar19 = *(long *)(lVar15 + lVar23 * 8);
                            if (lVar19 == 0) goto LAB_055d7b30;
                            plVar11 = *(long **)(unaff_x22 + 0x28);
                            uVar14 = FUN_0556053c(lVar19,0);
                            if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                            uVar14 = (**(code **)(*plVar11 + 0x308))
                                               (plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x310));
                            lVar19 = FUN_04f7a6a0(plVar9,uVar14,0);
                            if (lVar19 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar19,0x3a,0);
                          }
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          lVar19 = *(long *)(lVar15 + lVar23 * 8);
                          if (lVar19 == 0) goto LAB_055d7b30;
                          uVar14 = FUN_0555e9b8(lVar19,0);
                          plVar11 = plVar9;
                        }
                        FUN_04f79730(plVar11,uVar14,0);
                        if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                        plVar11 = *(long **)(lVar15 + lVar23 * 8);
                        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                        iVar7 = (**(code **)(*plVar11 + 0x1d8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                        if (iVar7 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar9,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                          plVar11 = *(long **)(lVar15 + lVar23 * 8);
                          if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                          iVar7 = (**(code **)(*plVar11 + 0x1d8))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                          if (iVar7 == 4) goto LAB_055d79f8;
                        }
                        plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar14 = (**(code **)(*plVar9 + 0x168))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x170));
                        if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar11 + 0x518))
                                  (plVar11,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar14,*(undefined8 *)(*plVar11 + 0x520));
                        (**(code **)(*plVar18 + 0x2d8))
                                  (plVar18,plVar11,*(undefined8 *)(*plVar18 + 0x2e0));
                        lVar23 = lVar23 + 1;
                      } while ((int)lVar23 < *(int *)(lVar13 + 0x18));
                    }
                  }
                  plVar9 = *(long **)(unaff_x22 + 0x78);
                  if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar9 + 0x2a8))
                            (plVar9,plVar18,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar9 + 0x2b0));
                  plVar9 = (long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                }
              }
              else {
                if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                plVar9 = *(long **)(unaff_x22 + 0x38);
                uVar14 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                uVar12 = (**(code **)(*plVar9 + 0x348))
                                   (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x350));
                plVar9 = (long *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar12 & 1) != 0) {
                  plVar9 = *(long **)(unaff_x22 + 0x38);
                  uVar14 = (**(code **)(*plVar11 + 0x1b8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                  if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                  uVar12 = (**(code **)(*plVar9 + 0x348))
                                     (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x350));
                  plVar9 = (long *)
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
          bVar1 = *(byte *)(*plVar10 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
          goto LAB_055d66d4;
          plVar16 = (long *)FUN_0557b300(plVar8,iVar3,0);
          if (plVar16 == (long *)0x0) {
            uVar12 = FUN_055da208();
            if ((uVar12 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar1 = *(byte *)(*plVar10 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
            goto LAB_055d7b38;
            uVar12 = FUN_055da208();
            if ((uVar12 & 1) != 0) goto LAB_055d7adc;
            lVar13 = plVar16[7];
            plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar14 = FUN_05546520(unaff_x29,0);
              if (plVar9 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar9 + 0x558))
                        (plVar9,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar14,*(undefined8 *)(*plVar9 + 0x560));
            }
            else {
              lVar15 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar15 == 0) goto LAB_055d7b30;
              iVar7 = FUN_0558c670(lVar15,*(undefined8 *)(unaff_x29 + 0x90),0);
              if (iVar7 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar14 = FUN_0557af78(plVar16,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar14 = FUN_05819fc8(uVar14,0);
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar9 + 0x518))
                      (plVar9,*(undefined8 *)PTR_DAT_067cd778,uVar14,
                       *(undefined8 *)(*plVar9 + 0x520));
            uVar14 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
            uVar25 = FUN_0557af78(plVar16,0);
            uVar12 = FUN_04f6dc3c(uVar14,uVar25,0);
            if ((uVar12 & 1) != 0) {
              uVar14 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
              (**(code **)(*plVar9 + 0x558))
                        (plVar9,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar14,*(undefined8 *)(*plVar9 + 0x560));
            }
            FUN_055ccff4(plVar16[6],plVar9,0);
            plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar14 = FUN_0554de78(unaff_x29,0);
            uVar14 = FUN_04f6f6b4(*(undefined8 *)
                                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                  ,uStack0000000000000030,uVar14,0);
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar14,*(undefined8 *)(*plVar10 + 0x520));
            (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
            uVar12 = FUN_055afea0(plVar16,0);
            if ((uVar12 & 1) != 0) {
              (**(code **)(*plVar9 + 0x558))
                        (plVar9,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar9 + 0x560));
            }
            if (lVar13 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar10,0);
              if (0 < *(int *)(lVar13 + 0x18)) {
                if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                lVar23 = 0;
                lVar15 = lVar13 + 0x20;
                do {
                  FUN_04f78e50(plVar10,0,0);
                  uVar24 = (uint)lVar23;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar11 = (long *)FUN_04f79730(plVar10,uStack0000000000000030,0);
                    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                    lVar19 = *(long *)(lVar15 + lVar23 * 8);
                    if ((lVar19 == 0) || (uVar14 = FUN_0555e9b8(lVar19,0), plVar11 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                    lVar19 = *(long *)(lVar15 + lVar23 * 8);
                    if (lVar19 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar19,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                    lVar19 = *(long *)(lVar15 + lVar23 * 8);
                    if (lVar19 == 0) goto LAB_055d7b30;
                    uVar14 = FUN_0556053c(lVar19,0);
                    uVar12 = FUN_04f6ebb4(uVar14,0);
                    if ((uVar12 & 1) == 0) {
                      if (*(uint *)(lVar13 + 0x18) <= uVar24) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar19 = *(long *)(lVar15 + lVar23 * 8);
                      if (lVar19 == 0) goto LAB_055d7b30;
                      plVar11 = *(long **)(unaff_x22 + 0x28);
                      uVar14 = FUN_0556053c(lVar19,0);
                      if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                      uVar14 = (**(code **)(*plVar11 + 0x308))
                                         (plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x310));
                      lVar19 = FUN_04f7a6a0(plVar10,uVar14,0);
                      if (lVar19 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar19,0x3a,0);
                    }
                    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                    lVar19 = *(long *)(lVar15 + lVar23 * 8);
                    if (lVar19 == 0) goto LAB_055d7b30;
                    uVar14 = FUN_0555e9b8(lVar19,0);
                    plVar11 = plVar10;
                  }
                  FUN_04f79730(plVar11,uVar14,0);
                  if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                  plVar11 = *(long **)(lVar15 + lVar23 * 8);
                  if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                  iVar7 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0))
                  ;
                  if (iVar7 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar10,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar13 + 0x18) <= uVar24) goto LAB_055d7b34;
                    plVar11 = *(long **)(lVar15 + lVar23 * 8);
                    if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                    iVar7 = (**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    if (iVar7 == 4) goto LAB_055d6c94;
                  }
                  plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar14 = (**(code **)(*plVar10 + 0x168))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                  if (plVar11 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar11 + 0x518))
                            (plVar11,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar14,*(undefined8 *)(*plVar11 + 0x520));
                  (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2e0));
                  lVar23 = lVar23 + 1;
                } while ((int)lVar23 < *(int *)(lVar13 + 0x18));
              }
            }
            plVar10 = *(long **)(unaff_x22 + 0x78);
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x298))
                      (plVar10,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar10 + 0x2a0));
            plVar9 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar10 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar3 = iVar3 + 1;
        iVar7 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      } while (iVar3 < iVar7);
    }
    FUN_055ccff4(*(undefined8 *)(unaff_x29 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


