/*
FUNCTION_NAME: FUN_055c4468
ENTRY_POINT: 055c4468
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_055c4468(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__;
  if ((DAT_06bbfb6b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d8d00);
    FUN_02f08768(PTR_DAT_067d8b28);
    FUN_02f08768(PTR_DAT_067d8d28);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_get_lowValue__);
    FUN_02f08768(PTR_DAT_067d8d70);
    FUN_02f08768(System_EventHandler<ColocationDiscoveryMessage>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_direction__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_inverted__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_set_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_highValue__);
    FUN_02f08768(PTR_DAT_067cd6b8);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Start__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_lowValue__);
    FUN_02f08768(PTR_DAT_067db960);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_value__);
    FUN_02f08768(PTR_DAT_067d02e0);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__);
    FUN_02f08768(PTR_DAT_067d6720);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_highValue__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_value__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_formatString__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_value__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_formatString__);
    FUN_02f08768(
                Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<NearFarInteractor_Region>_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_highValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_invalid__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_value__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_formatString__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_formatString__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__);
    FUN_02f08768(
                Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_lowValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_value__);
    DAT_06bbfb6b = 1;
  }
  puVar3 = Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_lowValue__;
  puVar6 = Method_UnityEngine_UIElements_BaseSlider<float>_get_lowValue__;
  lVar8 = FUN_02f0880c(*(undefined8 *)puVar2,0x2c);
  puVar2 = PTR_DAT_067c9338;
  lVar10 = *(long *)(PTR_DAT_067c9338 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar9 = FUN_050e4454(lVar10 + 0x20,0);
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
  uVar11 = *(undefined8 *)puVar3;
  FUN_05116b38(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  *(undefined8 *)(lVar10 + 0x18) = uVar9;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(long *)(lVar8 + 0x20) = lVar10;
      puVar3 = Method_UnityEngine_UIElements_BaseSlider<float>_set_direction__;
      uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
      lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      uVar11 = *(undefined8 *)puVar3;
      FUN_05116b38(lVar10,0);
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
      *(undefined8 *)(lVar10 + 0x18) = uVar9;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
        *(long *)(lVar8 + 0x28) = lVar10;
        puVar3 = Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_value__;
        uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
        uVar11 = *(undefined8 *)puVar3;
        FUN_05116b38(lVar10,0);
        uVar1 = *(uint *)(lVar8 + 0x18);
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
        *(undefined8 *)(lVar10 + 0x18) = uVar9;
        if (2 < uVar1) {
          *(long *)(lVar8 + 0x30) = lVar10;
          puVar3 = Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_lowValue__;
          uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
          uVar11 = *(undefined8 *)puVar3;
          FUN_05116b38(lVar10,0);
          *(undefined8 *)(lVar10 + 0x10) = uVar11;
          *(undefined8 *)(lVar10 + 0x18) = uVar9;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
            *(long *)(lVar8 + 0x38) = lVar10;
            puVar3 = Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_highValue__;
            uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
            lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
            uVar11 = *(undefined8 *)puVar3;
            FUN_05116b38(lVar10,0);
            uVar1 = *(uint *)(lVar8 + 0x18);
            *(undefined8 *)(lVar10 + 0x10) = uVar11;
            *(undefined8 *)(lVar10 + 0x18) = uVar9;
            if (4 < uVar1) {
              *(long *)(lVar8 + 0x40) = lVar10;
              puVar3 = Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_value__;
              uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
              lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
              uVar11 = *(undefined8 *)puVar3;
              FUN_05116b38(lVar10,0);
              uVar1 = *(uint *)(lVar8 + 0x18);
              *(undefined8 *)(lVar10 + 0x10) = uVar11;
              *(undefined8 *)(lVar10 + 0x18) = uVar9;
              if (5 < uVar1) {
                *(long *)(lVar8 + 0x48) = lVar10;
                puVar3 = Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_highValue__;
                uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
                lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                uVar11 = *(undefined8 *)puVar3;
                FUN_05116b38(lVar10,0);
                uVar1 = *(uint *)(lVar8 + 0x18);
                *(undefined8 *)(lVar10 + 0x10) = uVar11;
                *(undefined8 *)(lVar10 + 0x18) = uVar9;
                if (6 < uVar1) {
                  *(long *)(lVar8 + 0x50) = lVar10;
                  puVar3 = Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_lowValue__;
                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                  uVar11 = *(undefined8 *)puVar3;
                  FUN_05116b38(lVar10,0);
                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                    *(long *)(lVar8 + 0x58) = lVar10;
                    puVar3 = 
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Start__
                    ;
                    uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
                    lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                    uVar11 = *(undefined8 *)puVar3;
                    FUN_05116b38(lVar10,0);
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    *(undefined8 *)(lVar10 + 0x10) = uVar11;
                    *(undefined8 *)(lVar10 + 0x18) = uVar9;
                    if (8 < uVar1) {
                      *(long *)(lVar8 + 0x60) = lVar10;
                      puVar3 = PTR_DAT_067d6720;
                      uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
                      lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                      uVar11 = *(undefined8 *)puVar3;
                      FUN_05116b38(lVar10,0);
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      *(undefined8 *)(lVar10 + 0x10) = uVar11;
                      *(undefined8 *)(lVar10 + 0x18) = uVar9;
                      if (9 < uVar1) {
                        *(long *)(lVar8 + 0x68) = lVar10;
                        puVar3 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_lowValue__;
                        uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
                        lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                        uVar11 = *(undefined8 *)puVar3;
                        FUN_05116b38(lVar10,0);
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        *(undefined8 *)(lVar10 + 0x10) = uVar11;
                        *(undefined8 *)(lVar10 + 0x18) = uVar9;
                        if (10 < uVar1) {
                          *(long *)(lVar8 + 0x70) = lVar10;
                          puVar3 = 
                          Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
                          uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x10) + 0x20,0);
                          lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                          uVar11 = *(undefined8 *)puVar3;
                          FUN_05116b38(lVar10,0);
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          *(undefined8 *)(lVar10 + 0x10) = uVar11;
                          *(undefined8 *)(lVar10 + 0x18) = uVar9;
                          puVar3 = System_EventHandler<ColocationDiscoveryMessage>_TypeInfo;
                          if (0xb < uVar1) {
                            *(long *)(lVar8 + 0x78) = lVar10;
                            puVar4 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_invalid__;
                            uVar9 = FUN_050e4454(*(undefined8 *)puVar3,0);
                            lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                            uVar11 = *(undefined8 *)puVar4;
                            FUN_05116b38(lVar10,0);
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            *(undefined8 *)(lVar10 + 0x10) = uVar11;
                            *(undefined8 *)(lVar10 + 0x18) = uVar9;
                            puVar3 = PTR_DAT_067d8d00;
                            if (0xc < uVar1) {
                              *(long *)(lVar8 + 0x80) = lVar10;
                              puVar4 = 
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
                              ;
                              uVar9 = FUN_050e4454(*(undefined8 *)puVar3,0);
                              lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                              uVar11 = *(undefined8 *)puVar4;
                              FUN_05116b38(lVar10,0);
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              *(undefined8 *)(lVar10 + 0x10) = uVar11;
                              *(undefined8 *)(lVar10 + 0x18) = uVar9;
                              if (0xd < uVar1) {
                                *(long *)(lVar8 + 0x88) = lVar10;
                                puVar4 = 
                                Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                                ;
                                uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x28) + 0x20,0);
                                lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                uVar11 = *(undefined8 *)puVar4;
                                FUN_05116b38(lVar10,0);
                                uVar1 = *(uint *)(lVar8 + 0x18);
                                *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                if (0xe < uVar1) {
                                  *(long *)(lVar8 + 0x90) = lVar10;
                                  puVar4 = 
                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__
                                  ;
                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x30) + 0x20,0);
                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                  uVar11 = *(undefined8 *)puVar4;
                                  FUN_05116b38(lVar10,0);
                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                  puVar4 = PTR_DAT_067d8b28;
                                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0) != 0) {
                                    *(long *)(lVar8 + 0x98) = lVar10;
                                    puVar5 = 
                                    Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                    ;
                                    uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                    lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                    uVar11 = *(undefined8 *)puVar5;
                                    FUN_05116b38(lVar10,0);
                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                    *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                    *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                    if (0x10 < uVar1) {
                                      *(long *)(lVar8 + 0xa0) = lVar10;
                                      puVar5 = PTR_DAT_067db960;
                                      uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                      lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                      uVar11 = *(undefined8 *)puVar5;
                                      FUN_05116b38(lVar10,0);
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                      *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                      puVar5 = PTR_DAT_067d8d28;
                                      if (0x11 < uVar1) {
                                        *(long *)(lVar8 + 0xa8) = lVar10;
                                        puVar7 = 
                                        Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__
                                        ;
                                        uVar9 = FUN_050e4454(*(undefined8 *)puVar5,0);
                                        lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                        uVar11 = *(undefined8 *)puVar7;
                                        FUN_05116b38(lVar10,0);
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                        *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                        if (0x12 < uVar1) {
                                          *(long *)(lVar8 + 0xb0) = lVar10;
                                          puVar5 = 
                                          Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__
                                          ;
                                          uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x80) + 0x20,0);
                                          lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                          uVar11 = *(undefined8 *)puVar5;
                                          FUN_05116b38(lVar10,0);
                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                          *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                          *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                          puVar5 = PTR_DAT_067d8d70;
                                          if (0x13 < uVar1) {
                                            *(long *)(lVar8 + 0xb8) = lVar10;
                                            puVar7 = 
                                            Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__;
                                            uVar9 = FUN_050e4454(*(undefined8 *)puVar5,0);
                                            lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                            uVar11 = *(undefined8 *)puVar7;
                                            FUN_05116b38(lVar10,0);
                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                            *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                            *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                            if (0x14 < uVar1) {
                                              *(long *)(lVar8 + 0xc0) = lVar10;
                                              puVar5 = 
                                              Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                              ;
                                              uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x78) + 0x20,0
                                                                  );
                                              lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                              uVar11 = *(undefined8 *)puVar5;
                                              FUN_05116b38(lVar10,0);
                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                              *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                              *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                              if (0x15 < uVar1) {
                                                *(long *)(lVar8 + 200) = lVar10;
                                                puVar5 = 
                                                Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_formatString__
                                                ;
                                                uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                uVar11 = *(undefined8 *)puVar5;
                                                FUN_05116b38(lVar10,0);
                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                if (0x16 < uVar1) {
                                                  *(long *)(lVar8 + 0xd0) = lVar10;
                                                  puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_formatString__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x17 < uVar1) {
                                                    *(long *)(lVar8 + 0xd8) = lVar10;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_formatString__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x18 < uVar1) {
                                                    *(long *)(lVar8 + 0xe0) = lVar10;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_value__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x19 < uVar1) {
                                                    *(long *)(lVar8 + 0xe8) = lVar10;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_formatString__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x1a < uVar1) {
                                                    *(long *)(lVar8 + 0xf0) = lVar10;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_lowValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(undefined8 *)puVar3,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x1b < uVar1) {
                                                    *(long *)(lVar8 + 0xf8) = lVar10;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x48) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x1c < uVar1) {
                                                    *(long *)(lVar8 + 0x100) = lVar10;
                                                    puVar3 = 
                                                  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<NearFarInteractor_Region>_TypeInfo
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x68) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x1d < uVar1) {
                                                    *(long *)(lVar8 + 0x108) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_value__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x1e < uVar1) {
                                                    *(long *)(lVar8 + 0x110) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x68) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if ((*(uint *)(lVar8 + 0x18) & 0xffffffe0) != 0) {
                                                    *(long *)(lVar8 + 0x118) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_lowValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x68) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x20 < uVar1) {
                                                    *(long *)(lVar8 + 0x120) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_highValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x70) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x21 < uVar1) {
                                                    *(long *)(lVar8 + 0x128) = lVar10;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_inverted__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x68) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x22 < uVar1) {
                                                    *(long *)(lVar8 + 0x130) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_value__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x23 < uVar1) {
                                                    *(long *)(lVar8 + 0x138) = lVar10;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_lowValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x70) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x24 < uVar1) {
                                                    *(long *)(lVar8 + 0x140) = lVar10;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x38) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x25 < uVar1) {
                                                    *(long *)(lVar8 + 0x148) = lVar10;
                                                    puVar3 = PTR_DAT_067cd6b8;
                                                    uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x90) +
                                                                         0x20,0);
                                                    lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar6);
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    FUN_05116b38(lVar10,0);
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                    if (0x26 < uVar1) {
                                                      *(long *)(lVar8 + 0x150) = lVar10;
                                                      puVar3 = PTR_DAT_067d02e0;
                                                      uVar9 = FUN_050e4454(*(undefined8 *)puVar4,0);
                                                      lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar6);
                                                      uVar11 = *(undefined8 *)puVar3;
                                                      FUN_05116b38(lVar10,0);
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                      *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                      if (0x27 < uVar1) {
                                                        *(long *)(lVar8 + 0x158) = lVar10;
                                                        puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x18) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x28 < uVar1) {
                                                    *(long *)(lVar8 + 0x160) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x50) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x29 < uVar1) {
                                                    *(long *)(lVar8 + 0x168) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x70) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  if (0x2a < uVar1) {
                                                    *(long *)(lVar8 + 0x170) = lVar10;
                                                    puVar3 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__
                                                  ;
                                                  uVar9 = FUN_050e4454(*(long *)(puVar2 + 0x40) +
                                                                       0x20,0);
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar10,0);
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined8 *)(lVar10 + 0x10) = uVar11;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar9;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                                                  ;
                                                  if (0x2b < uVar1) {
                                                    *(long *)(lVar8 + 0x178) = lVar10;
                                                    **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


