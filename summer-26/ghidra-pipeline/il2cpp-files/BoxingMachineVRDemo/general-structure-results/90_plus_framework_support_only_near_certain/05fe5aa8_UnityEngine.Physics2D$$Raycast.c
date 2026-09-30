/*
FUNCTION_NAME: UnityEngine.Physics2D$$Raycast
ENTRY_POINT: 05fe5aa8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Physics2D__Raycast(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int *piVar14;
  long unaff_x22;
  undefined8 unaff_x26;
  uint *puVar15;
  long unaff_x28;
  long unaff_x29;
  
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x19;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x22 + 0x20));
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  lVar6 = thunk_FUN_02d9d534(*unaff_x21);
  FUN_03aabc60(lVar6,*unaff_x20);
  puVar2 = PTR_DAT_0675eb70;
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)Method_VRUIP_ColorPickerController_OnSliderValueChanged__;
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)PTR_DAT_0675eb70;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar6,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x22 + 0x30) = lVar6;
      thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x30),lVar6);
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
      FUN_03aabc60(lVar6,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                 );
      FUN_05fc0944(lVar10,0);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x18) =
             *(undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
        ;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar10 + 0x10) =
             *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
        thunk_FUN_02dd37b4();
        puVar4 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
        if (lVar6 != 0) {
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar12 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar10;
              thunk_FUN_02dd37b4(plVar7,lVar10);
            }
            else {
              FUN_03aac494(lVar6,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar6;
            thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar6);
            if (unaff_x29 != 0) {
              piVar14 = (int *)(unaff_x29 + 0x1c);
              *piVar14 = *piVar14 + 1;
              plVar7 = (long *)(unaff_x29 + 0x10);
              lVar6 = *plVar7;
              puVar15 = (uint *)(unaff_x29 + 0x18);
              uVar1 = *puVar15;
              if (lVar6 != 0) {
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *puVar15 = uVar1 + 1;
                  *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494();
                }
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                          );
                FUN_05fc094c(lVar6,0);
                puVar3 = 
                Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<ProbeVolumeDebugResources>__
                ;
                if (lVar6 != 0) {
                  *(undefined8 *)(lVar6 + 0x10) =
                       *(undefined8 *)Method_System_Globalization_GregorianCalendar_GetDaysInMonth__
                  ;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                  *(undefined4 *)(lVar6 + 0x18) = 0;
                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
                  FUN_03aabc60(lVar10,*(undefined8 *)PTR_DAT_0675eb68);
                  if (lVar10 != 0) {
                    lVar12 = *(long *)puVar2;
                    uVar9 = *(undefined8 *)
                             Method_System_Linq_Expressions_Interpreter_GreaterThanInstruction_Create__
                    ;
                    lVar11 = *(long *)(lVar10 + 0x10);
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                        thunk_FUN_02dd37b4();
                      }
                      else {
                        FUN_03aac494(lVar10,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar6 + 0x30) = lVar10;
                      thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                 );
                      FUN_03aabc60(lVar10,*(undefined8 *)
                                           Method_UnityEngine_GameObject_AddComponent<FixedJoint>__)
                      ;
                      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                 );
                      FUN_05fc0944(lVar11,0);
                      if (lVar11 != 0) {
                        *(undefined8 *)(lVar11 + 0x18) =
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineDebugShaders>__
                        ;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar11 + 0x10) =
                             *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
                        thunk_FUN_02dd37b4();
                        if (lVar10 != 0) {
                          lVar12 = *(long *)(lVar10 + 0x10);
                          lVar13 = *(long *)puVar4;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar8 = lVar11;
                              thunk_FUN_02dd37b4(plVar8,lVar11);
                            }
                            else {
                              FUN_03aac494(lVar10,lVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar6 + 0x28) = lVar10;
                            thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                            *piVar14 = *piVar14 + 1;
                            lVar10 = *plVar7;
                            if (lVar10 != 0) {
                              uVar1 = *puVar15;
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *puVar15 = uVar1 + 1;
                                plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar6;
                                thunk_FUN_02dd37b4(plVar8,lVar6);
                              }
                              else {
                                FUN_03aac494();
                              }
                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                              FUN_05fc094c(lVar6,0);
                              puVar3 = 
                              Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                *(undefined4 *)(lVar6 + 0x18) = 0;
                                lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
                                FUN_03aabc60(lVar10,*(undefined8 *)PTR_DAT_0675eb68);
                                if (lVar10 != 0) {
                                  lVar12 = *(long *)puVar2;
                                  uVar9 = *(undefined8 *)Method_UnityEngine_Color_set_Item__;
                                  lVar11 = *(long *)(lVar10 + 0x10);
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar10,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar6 + 0x30) = lVar10;
                                    thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                    FUN_05fc0944(lVar11,0);
                                    if (lVar11 != 0) {
                                      *(undefined8 *)(lVar11 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar11 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Globalization_GregorianCalendar__ctor__;
                                      thunk_FUN_02dd37b4();
                                      if (lVar10 != 0) {
                                        lVar12 = *(long *)(lVar10 + 0x10);
                                        lVar13 = *(long *)puVar4;
                                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar11;
                                            thunk_FUN_02dd37b4(plVar8,lVar11);
                                          }
                                          else {
                                            FUN_03aac494(lVar10,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar6 + 0x28) = lVar10;
                                          thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                          *piVar14 = *piVar14 + 1;
                                          lVar10 = *plVar7;
                                          if (lVar10 != 0) {
                                            uVar1 = *puVar15;
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *puVar15 = uVar1 + 1;
                                              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               );
                                              *plVar8 = lVar6;
                                              thunk_FUN_02dd37b4(plVar8,lVar6);
                                            }
                                            else {
                                              FUN_03aac494();
                                            }
                                            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                            FUN_05fc094c(lVar6,0);
                                            puVar3 = 
                                            Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                            ;
                                            if (lVar6 != 0) {
                                              *(undefined8 *)(lVar6 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                              *(undefined4 *)(lVar6 + 0x18) = 0;
                                              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                           PTR_DAT_0675eb60);
                                              FUN_03aabc60(lVar10,*(undefined8 *)PTR_DAT_0675eb68);
                                              if (lVar10 != 0) {
                                                lVar12 = *(long *)puVar2;
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                ;
                                                lVar11 = *(long *)(lVar10 + 0x10);
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar10,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = PTR_DAT_06762058;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)puVar3;
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar12 = *(long *)puVar2;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Collider>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                             Method_UnityEngine_Color32_get_Item__;
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<ShaderStrippingSetting>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphGlobalSettings>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphSettings>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetAbsoluteDate__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = PTR_DAT_06762060;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 1;
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar10,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar10 != 0) {
                                                      uVar9 = *(undefined8 *)puVar3;
                                                      lVar11 = *(long *)(lVar10 + 0x10);
                                                      lVar12 = *(long *)puVar2;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar9;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar10,uVar9,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar12 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_Create__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06786500;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 2;
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar10,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)puVar2;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<Canvas>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 2;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_VRUIP_ColorPickerController_OnColorInputTextChanged__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRendererResources>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineRuntimeShaders>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Rendering_GraphicsSettings_GetDefaultShader__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetDaysInYear__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar10,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)puVar2;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar8,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar10);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *plVar7;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *puVar15;
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar15 = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x29;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(unaff_x26,unaff_x28,0);
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


