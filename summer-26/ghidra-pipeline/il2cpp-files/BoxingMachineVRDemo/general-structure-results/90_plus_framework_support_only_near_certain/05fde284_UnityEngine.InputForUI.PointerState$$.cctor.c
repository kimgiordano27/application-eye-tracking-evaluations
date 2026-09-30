/*
FUNCTION_NAME: UnityEngine.InputForUI.PointerState$$.cctor
ENTRY_POINT: 05fde284
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_InputForUI_PointerState___cctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  FUN_03aac494(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_02dd37b4();
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
  FUN_03aabc60(lVar4,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) =
         *(undefined8 *)
          Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x29;
    thunk_FUN_02dd37b4();
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar9 = *unaff_x27;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar5;
          thunk_FUN_02dd37b4(plVar6,lVar5);
        }
        else {
          FUN_03aac494(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar4;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar4);
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar4 = thunk_FUN_02d9d534(*unaff_x19);
          FUN_05fc094c(lVar4,0);
          puVar2 = PTR_DAT_06762058;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
            *(undefined4 *)(lVar4 + 0x18) = 1;
            lVar5 = thunk_FUN_02d9d534(*unaff_x25);
            FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68);
            if (lVar5 != 0) {
              uVar7 = *(undefined8 *)puVar2;
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *unaff_x26;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar5,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar4 + 0x30) = lVar5;
                thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                          );
                FUN_03aabc60(lVar5,*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                          );
                FUN_05fc0944(lVar8,0);
                puVar2 = Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__;
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x18) =
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                  thunk_FUN_02dd37b4();
                  if (lVar5 != 0) {
                    lVar9 = *(long *)(lVar5 + 0x10);
                    lVar10 = *unaff_x27;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar6 = lVar8;
                        thunk_FUN_02dd37b4(plVar6,lVar8);
                      }
                      else {
                        FUN_03aac494(lVar5,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x28) = lVar5;
                      thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                      lVar5 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar4;
                          thunk_FUN_02dd37b4(plVar6,lVar4);
                        }
                        else {
                          FUN_03aac494();
                        }
                        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                        FUN_05fc094c(lVar4,0);
                        puVar3 = Method_UnityEngine_GameObject_TryGetComponent<Collider>__;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) =
                               *(undefined8 *)UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                          *(undefined4 *)(lVar4 + 0x18) = 0;
                          lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                          FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68);
                          if (lVar5 != 0) {
                            lVar9 = *unaff_x26;
                            uVar7 = *(undefined8 *)Method_UnityEngine_Color32_get_Item__;
                            lVar8 = *(long *)(lVar5 + 0x10);
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar5,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar4 + 0x30) = lVar5;
                              thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                              lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                              FUN_03aabc60(lVar5,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                          );
                              lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                              FUN_05fc0944(lVar8,0);
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                thunk_FUN_02dd37b4();
                                if (lVar5 != 0) {
                                  lVar9 = *(long *)(lVar5 + 0x10);
                                  lVar10 = *unaff_x27;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar6 = lVar8;
                                      thunk_FUN_02dd37b4(plVar6,lVar8);
                                    }
                                    else {
                                      FUN_03aac494(lVar5,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x28) = lVar5;
                                    thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                    lVar5 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar5 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar4;
                                        thunk_FUN_02dd37b4(plVar6,lVar4);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                      FUN_05fc094c(lVar4,0);
                                      puVar2 = PTR_DAT_06761180;
                                      if (lVar4 != 0) {
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)PTR_DAT_0676a290;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                        *(undefined4 *)(lVar4 + 0x18) = 0;
                                        lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                        FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68);
                                        if (lVar5 != 0) {
                                          lVar9 = *unaff_x26;
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                          ;
                                          lVar8 = *(long *)(lVar5 + 0x10);
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar5,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar4 + 0x30) = lVar5;
                                            thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                            lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                            FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                            FUN_05fc0944(lVar8,0);
                                            if (lVar8 != 0) {
                                              *(undefined8 *)(lVar8 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                              thunk_FUN_02dd37b4();
                                              if (lVar5 != 0) {
                                                lVar9 = *(long *)(lVar5 + 0x10);
                                                lVar10 = *unaff_x27;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar6 = lVar8;
                                                    thunk_FUN_02dd37b4(plVar6,lVar8);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar5,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = PTR_DAT_06762060;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 1;
                                                    lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_03aabc60(lVar5,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *(undefined8 *)puVar2;
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      lVar9 = *unaff_x26;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar7;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar5,uVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02dd37b4();
                                                    if (lVar5 != 0) {
                                                      lVar10 = *unaff_x27;
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_Graphics_DrawMeshInstancedIndirect__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Xml_Schema_XmlAnyListConverter_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRTrackedObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = Method_UnityEngine_Graphics_DrawMesh__;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_03aabc60(lVar5,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x26;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar5,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x26;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008);
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
  FUN_02d60ae8();
}


