/*
FUNCTION_NAME: UnityEngine.Physics2D$$Raycast
ENTRY_POINT: 05fe5d4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Physics2D__Raycast(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int in_w10;
  long *unaff_x19;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar7 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02dd37b4();
                    /* try { // try from 05fe5db0 to 060e5db3 has its CatchHandler @ 05fe62b0 */
                    /* try { // try from 05fe5db4 to 060e5def has its CatchHandler @ 05fe59c8 */
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
    FUN_03aabc60(lVar7,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                              );
    FUN_05fc0944(lVar4,0);
    if (lVar4 != 0) {
                    /* try { // try from 05fe5df0 to 060e5dfb has its CatchHandler @ 05fe62ac */
      *(undefined8 *)(lVar4 + 0x18) =
           *(undefined8 *)
            Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineDebugShaders>__
      ;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
      thunk_FUN_02dd37b4();
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = lVar4;
            thunk_FUN_02dd37b4(plVar5,lVar4);
          }
          else {
            FUN_03aac494(lVar7,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar7;
          thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar7);
          *unaff_x21 = *unaff_x21 + 1;
          lVar7 = *unaff_x19;
          if (lVar7 != 0) {
            uVar1 = *unaff_x26;
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *unaff_x26 = uVar1 + 1;
              *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494();
            }
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
            FUN_05fc094c(lVar7,0);
            puVar2 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) =
                   *(undefined8 *)UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
              *(undefined4 *)(lVar7 + 0x18) = 0;
              lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
              FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
              if (lVar4 != 0) {
                lVar9 = *unaff_x25;
                uVar6 = *(undefined8 *)Method_UnityEngine_Color_set_Item__;
                lVar8 = *(long *)(lVar4 + 0x10);
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    thunk_FUN_02dd37b4();
                  }
                  else {
                    FUN_03aac494(lVar4,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar7 + 0x30) = lVar4;
                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                            );
                  FUN_03aabc60(lVar4,*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                            );
                  FUN_05fc0944(lVar8,0);
                  if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x18) =
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar8 + 0x10) =
                         *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
                    thunk_FUN_02dd37b4();
                    if (lVar4 != 0) {
                      lVar9 = *(long *)(lVar4 + 0x10);
                      lVar10 = *unaff_x27;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar8;
                          thunk_FUN_02dd37b4(plVar5,lVar8);
                        }
                        else {
                          FUN_03aac494(lVar4,lVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar7 + 0x28) = lVar4;
                        thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                        *unaff_x21 = *unaff_x21 + 1;
                        lVar4 = *unaff_x19;
                        if (lVar4 != 0) {
                          uVar1 = *unaff_x26;
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *unaff_x26 = uVar1 + 1;
                            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar7;
                            thunk_FUN_02dd37b4(plVar5,lVar7);
                          }
                          else {
                            FUN_03aac494();
                          }
                          lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                          FUN_05fc094c(lVar7,0);
                          puVar2 = 
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                          ;
                          if (lVar7 != 0) {
                            *(undefined8 *)(lVar7 + 0x10) =
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                            ;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                            *(undefined4 *)(lVar7 + 0x18) = 0;
                            lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
                            FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
                            if (lVar4 != 0) {
                              lVar9 = *unaff_x25;
                              uVar6 = *(undefined8 *)
                                       Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                              ;
                              lVar8 = *(long *)(lVar4 + 0x10);
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                  thunk_FUN_02dd37b4();
                                }
                                else {
                                  FUN_03aac494(lVar4,uVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar7 + 0x30) = lVar4;
                                thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                            );
                                lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                FUN_05fc0944(lVar8,0);
                                if (lVar8 != 0) {
                                  *(undefined8 *)(lVar8 + 0x18) =
                                       *(undefined8 *)Method_Firebase_Firestore_GeoPoint__ctor__;
                                  thunk_FUN_02dd37b4();
                                  *(undefined8 *)(lVar8 + 0x10) =
                                       *(undefined8 *)
                                        Method_System_Globalization_GregorianCalendar__ctor__;
                                  thunk_FUN_02dd37b4();
                                  if (lVar4 != 0) {
                                    lVar9 = *(long *)(lVar4 + 0x10);
                                    lVar10 = *unaff_x27;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar8;
                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                      }
                                      else {
                                        FUN_03aac494(lVar4,lVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar7 + 0x28) = lVar4;
                                      thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                      *unaff_x21 = *unaff_x21 + 1;
                                      lVar4 = *unaff_x19;
                                      if (lVar4 != 0) {
                                        uVar1 = *unaff_x26;
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          *unaff_x26 = uVar1 + 1;
                                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar5 = lVar7;
                                          thunk_FUN_02dd37b4(plVar5,lVar7);
                                        }
                                        else {
                                          FUN_03aac494();
                                        }
                                        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                        FUN_05fc094c(lVar7,0);
                                        puVar2 = 
                                        Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                        ;
                                        if (lVar7 != 0) {
                                          *(undefined8 *)(lVar7 + 0x10) =
                                               *(undefined8 *)
                                                UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                          ;
                                          thunk_FUN_02dd37b4();
                                          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                          *(undefined4 *)(lVar7 + 0x18) = 0;
                                          lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60
                                                                    );
                                          FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
                                          if (lVar4 != 0) {
                                            lVar9 = *unaff_x25;
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                            ;
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar6;
                                                thunk_FUN_02dd37b4();
                                              }
                                              else {
                                                FUN_03aac494(lVar4,uVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar7 + 0x30) = lVar4;
                                              thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                              lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                              FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                              lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                              FUN_05fc0944(lVar8,0);
                                              if (lVar8 != 0) {
                                                *(undefined8 *)(lVar8 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                ;
                                                thunk_FUN_02dd37b4();
                                                *(undefined8 *)(lVar8 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                ;
                                                thunk_FUN_02dd37b4();
                                                if (lVar4 != 0) {
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar10 = *unaff_x27;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = PTR_DAT_06762058;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)puVar2;
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x25;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Collider>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                             Method_UnityEngine_Color32_get_Item__;
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<ShaderStrippingSetting>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphGlobalSettings>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphSettings>__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetAbsoluteDate__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = PTR_DAT_06762060;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 1;
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar4 != 0) {
                                                      uVar6 = *(undefined8 *)puVar2;
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x25;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar6;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar4,uVar6,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar7 + 0x30) = lVar4;
                                                        thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),
                                                                           lVar4);
                                                        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_Create__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06786500;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 2;
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar4 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<Canvas>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 2;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_VRUIP_ColorPickerController_OnColorInputTextChanged__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRendererResources>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineRuntimeShaders>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Rendering_GraphicsSettings_GetDefaultShader__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetDaysInYear__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 3;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar4 != 0) {
                                                      lVar9 = *unaff_x25;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                              PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar9 = *unaff_x25;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
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
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02dd37b4(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x26;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x26 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x29;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


