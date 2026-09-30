/*
FUNCTION_NAME: System.Xml.BinXmlDateTime$$XsdDateTimeToDateTime
ENTRY_POINT: 055d58ec
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


long * System_Xml_BinXmlDateTime__XsdDateTimeToDateTime(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  int unaff_w19;
  long *plVar19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w27;
  long lVar20;
  uint uVar21;
  long unaff_x29;
  undefined8 uVar22;
  long *in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 in_stack_00000038;
  
  while( true ) {
    if (0 < param_1) {
      iVar4 = 0;
      do {
        plVar5 = (long *)(**(code **)(*unaff_x25 + 0x208))
                                   (unaff_x25,iVar4,*(undefined8 *)(*unaff_x25 + 0x210));
        if (plVar5 == (long *)0x0) goto LAB_055d7b30;
        uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)(*unaff_x25 + 0x208))
                            (unaff_x25,iVar4,*(undefined8 *)(*unaff_x25 + 0x210));
          if ((lVar7 == 0) || (lVar7 = FUN_05580068(lVar7,0), lVar7 == 0)) goto LAB_055d7b30;
          if (*(int *)(lVar7 + 0x18) == 1) {
            lVar7 = (**(code **)(*unaff_x25 + 0x208))
                              (unaff_x25,iVar4,*(undefined8 *)(*unaff_x25 + 0x210));
            if ((lVar7 == 0) || (lVar7 = FUN_05580068(lVar7,0), lVar7 == 0)) goto LAB_055d7b30;
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_055d7b34;
            if (*(long **)(lVar7 + 0x20) == unaff_x23) {
              unaff_w20 = unaff_w20 + 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*unaff_x25 + 0x1c8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1d0));
      } while (iVar4 < iVar3);
    }
    do {
      iVar4 = (**(code **)(*unaff_x23 + 0x1d8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1e0));
      unaff_w19 = unaff_w19 + 1;
      if (iVar4 == 1) {
        unaff_w20 = unaff_w20 + 1;
      }
      if (unaff_w19 == unaff_w27) {
        if ((*(char *)(unaff_x29 + 0x128) != '\0') && (unaff_w20 == 1)) {
          if ((*(long *)(unaff_x29 + 0x40) != 0) &&
             (lVar7 = FUN_0557e298(*(long *)(unaff_x29 + 0x40),0,0), lVar7 != 0)) {
            lVar7 = FUN_055ce110(*(undefined8 *)(lVar7 + 0x38));
            if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
              lVar7 = *(long *)Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
            }
            if (*(int *)(*(long *)
                          UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar8 = FUN_055b6a08(lVar7,0);
            (**(code **)(*in_stack_00000018 + 0x518))
                      (in_stack_00000018,*(undefined8 *)PTR_DAT_067ca7d0,uVar8,
                       *(undefined8 *)(*in_stack_00000018 + 0x520));
            return in_stack_00000018;
          }
          goto LAB_055d7b30;
        }
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        lVar7 = FUN_05548bd0();
        if (lVar7 == 0) goto LAB_055d7b30;
        uVar6 = FUN_05825608(lVar7,0);
        if (((uVar6 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
          lVar7 = FUN_05548bd0();
          if (lVar7 == 0) goto LAB_055d7b30;
          plVar19 = (long *)FUN_055d8110();
          lVar7 = FUN_05548bd0();
          if (lVar7 == 0) goto LAB_055d7b30;
          uVar6 = FUN_04f6ebb4(*(undefined8 *)(lVar7 + 0x18),0);
          if ((uVar6 & 1) != 0) {
            if ((*(long *)(unaff_x22 + 0x30) == 0) || ((unaff_x24 & 1) == 0)) {
              FUN_05546520();
            }
            plVar19 = (long *)FUN_055d8110();
          }
          lVar7 = FUN_05548bd0();
          if (lVar7 == 0) goto LAB_055d7b30;
          lVar7 = FUN_055d9988(lVar7,plVar19,*(undefined8 *)(lVar7 + 0x10));
          if (lVar7 == 0) {
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar5,*(undefined8 *)(*plVar19 + 0x2e0));
          }
          lVar7 = FUN_05548bd0();
          if ((lVar7 == 0) || (plVar5 == (long *)0x0)) goto LAB_055d7b30;
          (**(code **)(*plVar5 + 0x518))
                    (plVar5,*(undefined8 *)PTR_DAT_067cd778,*(undefined8 *)(lVar7 + 0x10),
                     *(undefined8 *)(*plVar5 + 0x520));
        }
        else {
          (**(code **)(*in_stack_00000018 + 0x2d8))
                    (in_stack_00000018,plVar5,*(undefined8 *)(*in_stack_00000018 + 0x2e0));
        }
        lVar7 = FUN_05548bd0();
        if (lVar7 == 0) goto LAB_055d7b30;
        uVar6 = FUN_05825608(lVar7,0);
        if (((uVar6 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
          plVar19 = *(long **)(unaff_x22 + 0x28);
          lVar7 = FUN_05548bd0();
          if ((lVar7 == 0) || (plVar19 == (long *)0x0)) goto LAB_055d7b30;
          plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                      (plVar19,*(undefined8 *)(lVar7 + 0x18),
                                       *(undefined8 *)(*plVar19 + 0x310));
          lVar7 = FUN_05548bd0();
          if (lVar7 == 0) goto LAB_055d7b30;
          if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar19,*(long *)(PTR_DAT_067c9338 + 0x90));
          }
          uVar8 = FUN_055da24c(plVar19,*(undefined8 *)(lVar7 + 0x10));
          (**(code **)(*in_stack_00000018 + 0x518))
                    (in_stack_00000018,*(undefined8 *)PTR_DAT_067ca7d0,uVar8,
                     *(undefined8 *)(*in_stack_00000018 + 0x520));
        }
        lVar7 = *(long *)(unaff_x29 + 0xf8);
        if (lVar7 != 0) {
          plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar8 = thunk_FUN_02f1863c(lVar7,0);
          uVar22 = *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar22 = FUN_050e4454(uVar22,0);
          uVar6 = FUN_050edfb8(uVar8,uVar22,0);
          puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          if ((uVar6 & 1) == 0) {
            FUN_055d87f4();
          }
          else {
            FUN_055cd6cc();
          }
          FUN_055ccff4(*(undefined8 *)(lVar7 + 0xa0),plVar19,0);
          if (*(char *)(lVar7 + 0x20) != '\0') {
            (**(code **)(*in_stack_00000018 + 0x558))
                      (in_stack_00000018,
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<float3>__ctor__
                       ,**(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                       *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*in_stack_00000018 + 0x560));
          }
          if (*(char *)(lVar7 + 0x95) == '\0') {
            FUN_055cfb48(*(undefined8 *)(lVar7 + 0x38));
            uVar8 = FUN_0555ef20(lVar7,0);
            uVar8 = FUN_0555ecb4(lVar7,uVar8,0);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x558))
                      (plVar19,*(undefined8 *)
                                Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo
                       ,*(undefined8 *)puVar2,uVar8,*(undefined8 *)(*plVar19 + 0x560));
          }
          else if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar19 + 0x558))
                    (plVar19,*(undefined8 *)
                              UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                     ,*(undefined8 *)puVar2,*(undefined8 *)(lVar7 + 0x30),
                     *(undefined8 *)(*plVar19 + 0x560));
          in_stack_00000038 = *(undefined4 *)(lVar7 + 100);
          if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_050656a0(0);
          uVar8 = FUN_050d2d8c(&stack0x00000038,uVar8,0);
          (**(code **)(*plVar19 + 0x558))
                    (plVar19,*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
                     *(undefined8 *)puVar2,uVar8,*(undefined8 *)(*plVar19 + 0x560));
          if (plVar5 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar19,*(undefined8 *)(*plVar5 + 0x2e0));
          plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar5,*(undefined8 *)(*plVar19 + 0x2e0));
          FUN_055d83a4();
        }
        plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        if (plVar5 == (long *)0x0) goto LAB_055d7b30;
        uVar8 = (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar19,*(undefined8 *)(*plVar5 + 0x2e0));
        FUN_055d9c74(uVar8,unaff_x29);
        if (unaff_w27 < 1) goto LAB_055d6068;
        iVar4 = 0;
        goto LAB_055d5f8c;
      }
      unaff_x23 = (long *)FUN_0557e298();
      if (unaff_x23 == (long *)0x0) goto LAB_055d7b30;
      iVar4 = (**(code **)(*unaff_x23 + 0x1d8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1e0));
    } while (iVar4 != 4);
    unaff_x25 = (long *)FUN_0554c018();
    if (unaff_x25 == (long *)0x0) break;
    param_1 = (**(code **)(*unaff_x25 + 0x1c8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1d0));
  }
  goto LAB_055d7b30;
  while( true ) {
    iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
    if ((iVar3 != 3) &&
       ((((iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
          iVar3 == 2 ||
          (iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
          iVar3 == 1)) ||
         (iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
         iVar3 == 4)) && (uVar6 = FUN_055da208(), (uVar6 & 1) == 0)))) {
      iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      uVar8 = FUN_055d8ef0();
      plVar9 = plVar19;
      if (iVar3 != 1) {
        plVar9 = plVar5;
      }
      if (plVar9 == (long *)0x0) goto LAB_055d7b30;
      (**(code **)(*plVar9 + 0x2d8))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x2e0));
    }
    iVar4 = iVar4 + 1;
    if (unaff_w27 == iVar4) break;
LAB_055d5f8c:
    plVar9 = (long *)FUN_0557e298();
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
  }
LAB_055d6068:
  puVar18 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar9 = (long *)FUN_0554c018(unaff_x29,0);
    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
    iVar4 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar9 + 0x208))
                                    (plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x210));
        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
        uVar6 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
        if ((uVar6 & 1) != 0) {
          plVar10 = (long *)(**(code **)(*plVar9 + 0x208))
                                      (plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x210));
          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
          lVar7 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          if (lVar7 == unaff_x29) {
            plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar11 = unaff_x29;
LAB_055d61bc:
            uVar8 = FUN_0554de78(lVar11,0);
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)PTR_DAT_067d7c28,uVar8,
                       *(undefined8 *)(*plVar10 + 0x520));
          }
          else {
            if (lVar7 == 0) goto LAB_055d7b30;
            iVar3 = FUN_0554d1c8(lVar7,0);
            if (1 < iVar3) {
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar11 = lVar7;
              goto LAB_055d61bc;
            }
            plVar10 = (long *)FUN_055d524c();
          }
          uVar8 = FUN_05546520(lVar7,0);
          uVar22 = FUN_05546520(unaff_x29,0);
          uVar6 = thunk_FUN_04f6d944(uVar8,uVar22,0);
          if ((uVar6 & 1) != 0) {
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
          uVar8 = FUN_05546520(lVar7,0);
          uVar22 = FUN_05546520(unaff_x29,0);
          uVar6 = thunk_FUN_04f6d944(uVar8,uVar22,0);
          if ((uVar6 & 1) == 0) {
            lVar11 = FUN_05546520(lVar7,0);
            if (lVar11 == 0) goto LAB_055d7b30;
            if ((*(int *)(lVar11 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar3 = FUN_0554d1c8(lVar7,0);
              if (iVar3 < 2) {
                FUN_05546520(lVar7,0);
                plVar12 = (long *)FUN_055d8110();
                if (plVar12 == (long *)0x0) goto LAB_055d7b30;
                (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar10,*(undefined8 *)(*plVar12 + 0x2e0));
              }
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar12 = *(long **)(unaff_x22 + 0x28);
              uVar8 = FUN_05546520(lVar7,0);
              if (plVar12 == (long *)0x0) goto LAB_055d7b30;
              plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                          (plVar12,uVar8,*(undefined8 *)(*plVar12 + 0x310));
              uVar8 = FUN_0554de78(lVar7,0);
              if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)(PTR_DAT_067c9338 + 0x90)))
              goto LAB_055d7b4c;
              uVar8 = FUN_04f6f6b4(plVar12,*(undefined8 *)PTR_DAT_067ce970,uVar8,0);
              if (plVar10 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar10 + 0x518))
                        (plVar10,*(undefined8 *)PTR_DAT_067d7c28,uVar8,
                         *(undefined8 *)(*plVar10 + 0x520));
              puVar18 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
              ;
            }
          }
          if (plVar19 == (long *)0x0) goto LAB_055d7b30;
          (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar10,*(undefined8 *)(*plVar19 + 0x2e0));
          plVar12 = (long *)(**(code **)(*plVar9 + 0x208))
                                      (plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x210));
          if (plVar12 == (long *)0x0) goto LAB_055d7b30;
          lVar7 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
          if (lVar7 == 0) {
            plVar12 = *(long **)(unaff_x22 + 0x48);
            if ((plVar12 == (long *)0x0) ||
               (plVar12 = (long *)(**(code **)(*plVar12 + 0x5f8))
                                            (plVar12,*puVar18,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar12 + 0x600)),
               plVar10 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar12,*(undefined8 *)(*plVar10 + 0x2d0));
            plVar10 = *(long **)(unaff_x22 + 0x48);
            if ((plVar10 == (long *)0x0) ||
               (plVar10 = (long *)(**(code **)(*plVar10 + 0x5f8))
                                            (plVar10,*puVar18,
                                             *(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                             ,*(undefined8 *)PTR_DAT_067cd6c0,
                                             *(undefined8 *)(*plVar10 + 0x600)),
               plVar12 == (long *)0x0)) goto LAB_055d7b30;
            (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar10,*(undefined8 *)(*plVar12 + 0x2e0));
            (**(code **)(*plVar9 + 0x208))(plVar9,iVar4,*(undefined8 *)(*plVar9 + 0x210));
            uVar8 = FUN_055d4838();
            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar10 + 0x2d8))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x2e0));
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      } while (iVar4 < iVar3);
    }
  }
  if ((plVar19 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar19 + 0x328))(plVar19,*(undefined8 *)(*plVar19 + 0x330)),
     (uVar6 & 1) == 0)) {
    (**(code **)(*plVar5 + 0x2b8))(plVar5,plVar19,*(undefined8 *)(*plVar5 + 0x2c0));
  }
  plVar5 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d659c:
    puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar7 == 0) goto LAB_055d7b30;
    puVar18 = (undefined8 *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
    ;
    if (*(int *)(lVar7 + 0x10) == 0) goto LAB_055d659c;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_055d665c:
    uStack0000000000000030 = *puVar18;
  }
  else {
    FUN_05546520(unaff_x29,0);
    FUN_055d8110();
    lVar7 = FUN_05546520(unaff_x29,0);
    if (lVar7 == 0) goto LAB_055d7b30;
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      goto LAB_055d665c;
    }
    plVar19 = *(long **)(unaff_x22 + 0x28);
    uVar8 = FUN_05546520(unaff_x29,0);
    if (plVar19 == (long *)0x0) goto LAB_055d7b30;
    plVar12 = (long *)(**(code **)(*plVar19 + 0x308))
                                (plVar19,uVar8,*(undefined8 *)(*plVar19 + 0x310));
    if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
LAB_055d7b4c:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar12);
    }
    uStack0000000000000030 = FUN_04f65260(plVar12,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (plVar5 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar19 = (long *)
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
      ;
      plVar9 = (long *)
               UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
      ;
      do {
        plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
        if (plVar10 == (long *)0x0) {
LAB_055d66d4:
          plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar19 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar19)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar10 = (long *)FUN_0557b300(plVar5,iVar4,0);
              if (plVar10 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar19 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar19)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar10);
                }
              }
              plVar12 = *(long **)(unaff_x22 + 0x38);
              if (plVar12 == (long *)0x0) goto LAB_055d7b30;
              iVar3 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
              if (iVar3 < 1) {
                uVar6 = FUN_055da208();
                if ((uVar6 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
LAB_055d6d90:
                  plVar19 = (long *)FUN_055a5390(plVar10,0);
                  lVar7 = FUN_055a4c24(plVar10,0);
                  lVar11 = (**(code **)(*plVar10 + 0x2c8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                  if (lVar11 == 0) goto LAB_055d7b30;
                  lVar11 = *(long *)(lVar11 + 0x48);
                  uVar8 = thunk_FUN_02f45270(*plVar9);
                  FUN_055aee44(uVar8,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_SubscribeAndUpdate__
                               ,lVar7,0);
                  if (lVar11 == 0) goto LAB_055d7b30;
                  plVar12 = (long *)FUN_0557ba08(lVar11,uVar8,0);
                  if (plVar12 == (long *)0x0) {
                    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar8 = FUN_0557af78(plVar10,0);
                    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02f6670c(*(long *)
                                          Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                    }
                    uVar8 = FUN_05819fc8(uVar8,0);
                    if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar9 + 0x518))
                              (plVar9,*(undefined8 *)PTR_DAT_067cd778,uVar8,
                               *(undefined8 *)(*plVar9 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d6f20:
                      uVar8 = FUN_05546520(unaff_x29,0);
                      (**(code **)(*plVar9 + 0x558))
                                (plVar9,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,uVar8,*(undefined8 *)(*plVar9 + 0x560));
                    }
                    else {
                      lVar11 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar11 == 0) goto LAB_055d7b30;
                      iVar3 = FUN_0558c670(lVar11,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar3 == -3) goto LAB_055d6f20;
                    }
                    plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar11 = (**(code **)(*plVar10 + 0x2c8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if (lVar11 == 0) goto LAB_055d7b30;
                    uVar8 = FUN_0554de78(lVar11,0);
                    uVar8 = FUN_04f6f6b4(*(undefined8 *)
                                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                         ,uStack0000000000000030,uVar8,0);
                    if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar14 + 0x518))
                              (plVar14,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                               ,uVar8,*(undefined8 *)(*plVar14 + 0x520));
                    (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar14,*(undefined8 *)(*plVar9 + 0x2e0));
                    if (lVar7 == 0) goto LAB_055d7b30;
                    if (*(long *)(lVar7 + 0x18) != 0) {
                      plVar14 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                      FUN_04f77e78(plVar14,0);
                      if (0 < *(int *)(lVar7 + 0x18)) {
                        if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                        lVar20 = 0;
                        lVar11 = lVar7 + 0x20;
                        do {
                          FUN_04f78e50(plVar14,0,0);
                          uVar21 = (uint)lVar20;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar13 = (long *)FUN_04f79730(plVar14,uStack0000000000000030,0);
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar11 + lVar20 * 8);
                            if ((lVar15 == 0) ||
                               (uVar8 = FUN_0555e9b8(lVar15,0), plVar13 == (long *)0x0))
                            goto LAB_055d7b30;
                          }
                          else {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar11 + lVar20 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            FUN_0556053c(lVar15,0);
                            FUN_055d8110();
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar11 + lVar20 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            uVar8 = FUN_0556053c(lVar15,0);
                            uVar6 = FUN_04f6ebb4(uVar8,0);
                            if ((uVar6 & 1) == 0) {
                              if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                              lVar15 = *(long *)(lVar11 + lVar20 * 8);
                              if (lVar15 == 0) goto LAB_055d7b30;
                              plVar13 = *(long **)(unaff_x22 + 0x28);
                              uVar8 = FUN_0556053c(lVar15,0);
                              if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                              uVar8 = (**(code **)(*plVar13 + 0x308))
                                                (plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x310));
                              lVar15 = FUN_04f7a6a0(plVar14,uVar8,0);
                              if (lVar15 == 0) goto LAB_055d7b30;
                              FUN_04f7a548(lVar15,0x3a,0);
                            }
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar11 + lVar20 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            uVar8 = FUN_0555e9b8(lVar15,0);
                            plVar13 = plVar14;
                          }
                          FUN_04f79730(plVar13,uVar8,0);
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          plVar13 = *(long **)(lVar11 + lVar20 * 8);
                          if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                          if (iVar3 == 2) {
LAB_055d71d4:
                            System_Collections_Queue___ctor(plVar14,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            plVar13 = *(long **)(lVar11 + lVar20 * 8);
                            if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                            iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                              (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                            if (iVar3 == 4) goto LAB_055d71d4;
                          }
                          plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar8 = (**(code **)(*plVar14 + 0x168))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                          if (plVar13 == (long *)0x0) goto LAB_055d7b30;
                          (**(code **)(*plVar13 + 0x518))
                                    (plVar13,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                     ,uVar8,*(undefined8 *)(*plVar13 + 0x520));
                          (**(code **)(*plVar9 + 0x2d8))
                                    (plVar9,plVar13,*(undefined8 *)(*plVar9 + 0x2e0));
                          lVar20 = lVar20 + 1;
                        } while ((int)lVar20 < *(int *)(lVar7 + 0x18));
                      }
                    }
                    plVar14 = *(long **)(unaff_x22 + 0x78);
                    if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                    (**(code **)(*plVar14 + 0x298))
                              (plVar14,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar14 + 0x2a0));
                    plVar9 = (long *)
                             UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                    ;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar9 + 0x130);
                    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) {
LAB_055d7b38:
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(plVar12);
                    }
                  }
                  plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar8 = FUN_0557af78(plVar10,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar8 = FUN_05819fc8(uVar8,0);
                  if (plVar14 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar14 + 0x518))
                            (plVar14,*(undefined8 *)PTR_DAT_067cd778,uVar8,
                             *(undefined8 *)(*plVar14 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_055d738c:
                    lVar7 = (**(code **)(*plVar10 + 0x1b8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                    if (lVar7 == 0) goto LAB_055d7b30;
                    uVar8 = FUN_05546520(lVar7,0);
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar8,*(undefined8 *)(*plVar14 + 0x560));
                  }
                  else {
                    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar7 = (**(code **)(*plVar10 + 0x2c8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if ((lVar7 == 0) || (lVar11 == 0)) goto LAB_055d7b30;
                    iVar3 = FUN_0558c670(lVar11,*(undefined8 *)(lVar7 + 0x90),0);
                    if (iVar3 == -3) goto LAB_055d738c;
                  }
                  plVar13 = plVar10;
                  if (plVar12 != (long *)0x0) {
                    plVar13 = plVar12;
                  }
                  uVar8 = FUN_0557af78(plVar13,0);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo)
                    ;
                  }
                  uVar8 = FUN_05819fc8(uVar8,0);
                  (**(code **)(*plVar14 + 0x518))
                            (plVar14,*(undefined8 *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARAnchor>_get_removed__
                             ,uVar8,*(undefined8 *)(*plVar14 + 0x520));
                  lVar7 = plVar10[6];
                  uVar8 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar8 = FUN_050e4454(uVar8,0);
                  FUN_055ccff4(lVar7,plVar14,uVar8);
                  uVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
                  ;
                  uVar22 = FUN_0557af78(plVar10,0);
                  uVar6 = FUN_04f6dc3c(uVar8,uVar22,0);
                  if ((uVar6 & 1) != 0) {
                    uVar8 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__
                               ,*(undefined8 *)
                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                               ,uVar8,*(undefined8 *)(*plVar14 + 0x560));
                  }
                  if (plVar19 == (long *)0x0) {
                    lVar7 = *plVar14;
                    uVar22 = *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<int>_get_inverted__;
                    uVar16 = *(undefined8 *)
                              UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                    ;
                    uVar17 = *(undefined8 *)(lVar7 + 0x560);
                    uVar8 = *(undefined8 *)PTR_DAT_067cab38;
LAB_055d7658:
                    (**(code **)(lVar7 + 0x558))(plVar14,uVar22,uVar16,uVar8,uVar17);
                  }
                  else {
                    uVar6 = (**(code **)(*plVar19 + 0x1d8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                    if ((uVar6 & 1) != 0) {
                      (**(code **)(*plVar14 + 0x558))
                                (plVar14,*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__
                                 ,*(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar14 + 0x560))
                      ;
                    }
                    lVar7 = plVar19[3];
                    uVar8 = *(undefined8 *)
                             Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__
                    ;
                    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uVar8 = FUN_050e4454(uVar8,0);
                    FUN_055ccff4(lVar7,plVar14,uVar8);
                    uVar8 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    uVar22 = (**(code **)(*plVar19 + 0x1c8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
                    uVar6 = FUN_04f6dc3c(uVar8,uVar22,0);
                    if ((uVar6 & 1) != 0) {
                      uVar8 = (**(code **)(*plVar19 + 0x1c8))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
                      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02f6670c(*(long *)
                                            Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
                      }
                      uVar8 = FUN_05819fc8(uVar8,0);
                      lVar7 = *plVar14;
                      uVar22 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__;
                      uVar17 = *(undefined8 *)(lVar7 + 0x560);
                      uVar16 = *(undefined8 *)
                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                      ;
                      goto LAB_055d7658;
                    }
                  }
                  plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar8 = FUN_0554de78(unaff_x29,0);
                  uVar8 = FUN_04f6f6b4(*(undefined8 *)
                                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                       ,uStack0000000000000030,uVar8,0);
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar19 + 0x518))
                            (plVar19,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar8,*(undefined8 *)(*plVar19 + 0x520));
                  (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar19,*(undefined8 *)(*plVar14 + 0x2e0))
                  ;
                  iVar3 = (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280))
                  ;
                  puVar2 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
                  if (iVar3 != 0) {
                    (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
                    uVar8 = FUN_055d9b50();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_highValue__
                               ,*(undefined8 *)puVar2,uVar8,*(undefined8 *)(*plVar14 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
                    uVar8 = FUN_055d9bc0();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__
                               ,*(undefined8 *)puVar2,uVar8,*(undefined8 *)(*plVar14 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                    uVar8 = FUN_055d9bc0();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__
                               ,*(undefined8 *)puVar2,uVar8,*(undefined8 *)(*plVar14 + 0x560));
                  }
                  lVar7 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270))
                  ;
                  if (lVar7 == 0) goto LAB_055d7b30;
                  if (*(long *)(lVar7 + 0x18) != 0) {
                    plVar19 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
                    FUN_04f77e78(plVar19,0);
                    if (0 < *(int *)(lVar7 + 0x18)) {
                      if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                      lVar20 = 0;
                      lVar11 = lVar7 + 0x20;
                      do {
                        FUN_04f78e50(plVar19,0,0);
                        uVar21 = (uint)lVar20;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          plVar10 = (long *)FUN_04f79730(plVar19,uStack0000000000000030,0);
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar11 + lVar20 * 8);
                          if ((lVar15 == 0) ||
                             (uVar8 = FUN_0555e9b8(lVar15,0), plVar10 == (long *)0x0))
                          goto LAB_055d7b30;
                        }
                        else {
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar11 + lVar20 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          FUN_0556053c(lVar15,0);
                          FUN_055d8110();
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar11 + lVar20 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          uVar8 = FUN_0556053c(lVar15,0);
                          uVar6 = FUN_04f6ebb4(uVar8,0);
                          if ((uVar6 & 1) == 0) {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                            lVar15 = *(long *)(lVar11 + lVar20 * 8);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            plVar10 = *(long **)(unaff_x22 + 0x28);
                            uVar8 = FUN_0556053c(lVar15,0);
                            if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                            uVar8 = (**(code **)(*plVar10 + 0x308))
                                              (plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x310));
                            lVar15 = FUN_04f7a6a0(plVar19,uVar8,0);
                            if (lVar15 == 0) goto LAB_055d7b30;
                            FUN_04f7a548(lVar15,0x3a,0);
                          }
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          lVar15 = *(long *)(lVar11 + lVar20 * 8);
                          if (lVar15 == 0) goto LAB_055d7b30;
                          uVar8 = FUN_0555e9b8(lVar15,0);
                          plVar10 = plVar19;
                        }
                        FUN_04f79730(plVar10,uVar8,0);
                        if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                        plVar10 = *(long **)(lVar11 + lVar20 * 8);
                        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                        iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                        if (iVar3 == 2) {
LAB_055d79f8:
                          System_Collections_Queue___ctor(plVar19,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                          plVar10 = *(long **)(lVar11 + lVar20 * 8);
                          if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                          iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                          if (iVar3 == 4) goto LAB_055d79f8;
                        }
                        plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar8 = (**(code **)(*plVar19 + 0x168))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                        if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                        (**(code **)(*plVar10 + 0x518))
                                  (plVar10,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                                   ,uVar8,*(undefined8 *)(*plVar10 + 0x520));
                        (**(code **)(*plVar14 + 0x2d8))
                                  (plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x2e0));
                        lVar20 = lVar20 + 1;
                      } while ((int)lVar20 < *(int *)(lVar7 + 0x18));
                    }
                  }
                  plVar19 = *(long **)(unaff_x22 + 0x78);
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar19 + 0x2a8))
                            (plVar19,plVar14,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar19 + 0x2b0));
                  plVar19 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                }
              }
              else {
                if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                plVar19 = *(long **)(unaff_x22 + 0x38);
                uVar8 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                uVar6 = (**(code **)(*plVar19 + 0x348))
                                  (plVar19,uVar8,*(undefined8 *)(*plVar19 + 0x350));
                plVar19 = (long *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                ;
                if ((uVar6 & 1) != 0) {
                  plVar19 = *(long **)(unaff_x22 + 0x38);
                  uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
                  ;
                  if (plVar19 == (long *)0x0) goto LAB_055d7b30;
                  uVar6 = (**(code **)(*plVar19 + 0x348))
                                    (plVar19,uVar8,*(undefined8 *)(*plVar19 + 0x350));
                  plVar19 = (long *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                  ;
                  if (((uVar6 & 1) != 0) && (uVar6 = FUN_055da208(), (uVar6 & 1) == 0))
                  goto LAB_055d6d90;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar9 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9))
          goto LAB_055d66d4;
          plVar12 = (long *)FUN_0557b300(plVar5,iVar4,0);
          if (plVar12 == (long *)0x0) {
            uVar6 = FUN_055da208();
            if ((uVar6 & 1) == 0) goto LAB_055d7b30;
          }
          else {
            bVar1 = *(byte *)(*plVar9 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9))
            goto LAB_055d7b38;
            uVar6 = FUN_055da208();
            if ((uVar6 & 1) != 0) goto LAB_055d7adc;
            lVar7 = plVar12[7];
            plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            if (*(long *)(unaff_x22 + 0x30) == 0) {
System_Xml_BinXmlDateTime__XsdKatmaiDateToString:
              uVar8 = FUN_05546520(unaff_x29,0);
              if (plVar19 == (long *)0x0) goto LAB_055d7b30;
              (**(code **)(*plVar19 + 0x558))
                        (plVar19,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_pageSize__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar8,*(undefined8 *)(*plVar19 + 0x560));
            }
            else {
              lVar11 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar11 == 0) goto LAB_055d7b30;
              iVar3 = FUN_0558c670(lVar11,*(undefined8 *)(unaff_x29 + 0x90),0);
              if (iVar3 == -3) goto System_Xml_BinXmlDateTime__XsdKatmaiDateToString;
            }
            uVar8 = FUN_0557af78(plVar12,0);
            if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02f6670c(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
            }
            uVar8 = FUN_05819fc8(uVar8,0);
            if (plVar19 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)PTR_DAT_067cd778,uVar8,
                       *(undefined8 *)(*plVar19 + 0x520));
            uVar8 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
            uVar22 = FUN_0557af78(plVar12,0);
            uVar6 = FUN_04f6dc3c(uVar8,uVar22,0);
            if ((uVar6 & 1) != 0) {
              uVar8 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
              (**(code **)(*plVar19 + 0x558))
                        (plVar19,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         uVar8,*(undefined8 *)(*plVar19 + 0x560));
            }
            FUN_055ccff4(plVar12[6],plVar19,0);
            plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar8 = FUN_0554de78(unaff_x29,0);
            uVar8 = FUN_04f6f6b4(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                                 ,uStack0000000000000030,uVar8,0);
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar9 + 0x518))
                      (plVar9,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                       ,uVar8,*(undefined8 *)(*plVar9 + 0x520));
            (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar9,*(undefined8 *)(*plVar19 + 0x2e0));
            uVar6 = FUN_055afea0(plVar12,0);
            if ((uVar6 & 1) != 0) {
              (**(code **)(*plVar19 + 0x558))
                        (plVar19,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cab38,*(undefined8 *)(*plVar19 + 0x560));
            }
            if (lVar7 == 0) goto LAB_055d7b30;
            if (*(long *)(lVar7 + 0x18) != 0) {
              plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
              FUN_04f77e78(plVar9,0);
              if (0 < *(int *)(lVar7 + 0x18)) {
                if (plVar9 == (long *)0x0) goto LAB_055d7b30;
                lVar20 = 0;
                lVar11 = lVar7 + 0x20;
                do {
                  FUN_04f78e50(plVar9,0,0);
                  uVar21 = (uint)lVar20;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar10 = (long *)FUN_04f79730(plVar9,uStack0000000000000030,0);
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar11 + lVar20 * 8);
                    if ((lVar15 == 0) || (uVar8 = FUN_0555e9b8(lVar15,0), plVar10 == (long *)0x0))
                    goto LAB_055d7b30;
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar11 + lVar20 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    FUN_0556053c(lVar15,0);
                    FUN_055d8110();
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar11 + lVar20 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar8 = FUN_0556053c(lVar15,0);
                    uVar6 = FUN_04f6ebb4(uVar8,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) {
LAB_055d7b34:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      lVar15 = *(long *)(lVar11 + lVar20 * 8);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      plVar10 = *(long **)(unaff_x22 + 0x28);
                      uVar8 = FUN_0556053c(lVar15,0);
                      if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                      uVar8 = (**(code **)(*plVar10 + 0x308))
                                        (plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x310));
                      lVar15 = FUN_04f7a6a0(plVar9,uVar8,0);
                      if (lVar15 == 0) goto LAB_055d7b30;
                      FUN_04f7a548(lVar15,0x3a,0);
                    }
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                    lVar15 = *(long *)(lVar11 + lVar20 * 8);
                    if (lVar15 == 0) goto LAB_055d7b30;
                    uVar8 = FUN_0555e9b8(lVar15,0);
                    plVar10 = plVar9;
                  }
                  FUN_04f79730(plVar10,uVar8,0);
                  if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                  plVar10 = *(long **)(lVar11 + lVar20 * 8);
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                  iVar3 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0))
                  ;
                  if (iVar3 == 2) {
LAB_055d6c94:
                    System_Collections_Queue___ctor(plVar9,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_055d7b34;
                    plVar10 = *(long **)(lVar11 + lVar20 * 8);
                    if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                    iVar3 = (**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    if (iVar3 == 4) goto LAB_055d6c94;
                  }
                  plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                  if (plVar10 == (long *)0x0) goto LAB_055d7b30;
                  (**(code **)(*plVar10 + 0x518))
                            (plVar10,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<PokeStateData>__ctor__
                             ,uVar8,*(undefined8 *)(*plVar10 + 0x520));
                  (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar10,*(undefined8 *)(*plVar19 + 0x2e0))
                  ;
                  lVar20 = lVar20 + 1;
                } while ((int)lVar20 < *(int *)(lVar7 + 0x18));
              }
            }
            plVar9 = *(long **)(unaff_x22 + 0x78);
            if (plVar9 == (long *)0x0) goto LAB_055d7b30;
            (**(code **)(*plVar9 + 0x298))
                      (plVar9,plVar19,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar9 + 0x2a0));
            plVar19 = (long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
            ;
            plVar9 = (long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
            ;
          }
        }
LAB_055d7adc:
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      } while (iVar4 < iVar3);
    }
    FUN_055ccff4(*(undefined8 *)(unaff_x29 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_055d7b30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


