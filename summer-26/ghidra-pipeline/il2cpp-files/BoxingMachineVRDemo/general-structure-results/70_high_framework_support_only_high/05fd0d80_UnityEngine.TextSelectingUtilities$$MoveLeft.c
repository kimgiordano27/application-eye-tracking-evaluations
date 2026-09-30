/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveLeft
ENTRY_POINT: 05fd0d80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_TextSelectingUtilities__MoveLeft(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x28;
  
  *(undefined4 *)(unaff_x22 + 0x10) = 0x264;
  *(undefined8 *)(unaff_x22 + 0x18) = *param_1;
  thunk_FUN_02dd37b4();
  lVar13 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
  if (lVar13 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x20 + 0x20) = unaff_x21;
    thunk_FUN_02dd37b4();
    lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_03aabc60(lVar13,*(undefined8 *)puVar2);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    FUN_05fc094c(lVar9,0);
    puVar4 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__;
    puVar3 = PTR_DAT_0675eb68;
    puVar2 = PTR_DAT_0675eb60;
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x10) =
           *(undefined8 *)
            Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
      thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
      *(undefined4 *)(lVar9 + 0x18) = 0;
      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
      puVar4 = PTR_DAT_0675eb70;
      if (lVar10 != 0) {
        uVar12 = *(undefined8 *)Method_UnityEngine_Color_set_Item__;
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)PTR_DAT_0675eb70;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        puVar8 = Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar10,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar9 + 0x30) = lVar10;
          thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
          lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
          FUN_03aabc60(lVar10,*(undefined8 *)
                               Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
          lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                     );
          FUN_05fc0944(lVar14,0);
          if (lVar14 != 0) {
            *(undefined8 *)(lVar14 + 0x18) =
                 *(undefined8 *)
                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructorImpl__;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar14 + 0x10) =
                 *(undefined8 *)
                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__;
            thunk_FUN_02dd37b4();
            puVar6 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
            if (lVar10 != 0) {
              lVar15 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar11 = lVar14;
                  thunk_FUN_02dd37b4(plVar11,lVar14);
                }
                else {
                  FUN_03aac494(lVar10,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar9 + 0x28) = lVar10;
                thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                puVar7 = Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__;
                if (lVar13 != 0) {
                  lVar10 = *(long *)(lVar13 + 0x10);
                  lVar14 = *(long *)
                            Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                  ;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar1 = *(uint *)(lVar13 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar11 = lVar9;
                      thunk_FUN_02dd37b4(plVar11,lVar9);
                    }
                    else {
                      FUN_03aac494(lVar13,lVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                              );
                    FUN_05fc094c(lVar9,0);
                    puVar5 = PTR_DAT_06761180;
                    if (lVar9 != 0) {
                      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_0676a290;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                      *(undefined4 *)(lVar9 + 0x18) = 0;
                      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                      FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                      if (lVar10 != 0) {
                        lVar15 = *(long *)puVar4;
                        uVar12 = *(undefined8 *)
                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__;
                        lVar14 = *(long *)(lVar10 + 0x10);
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                            thunk_FUN_02dd37b4();
                          }
                          else {
                            FUN_03aac494(lVar10,uVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar9 + 0x30) = lVar10;
                          thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                          lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                          FUN_03aabc60(lVar10,*(undefined8 *)
                                               Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                      );
                          lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                          FUN_05fc0944(lVar14,0);
                          if (lVar14 != 0) {
                            *(undefined8 *)(lVar14 + 0x18) =
                                 *(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                            ;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar14 + 0x10) =
                                 *(undefined8 *)
                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                            ;
                            thunk_FUN_02dd37b4();
                            if (lVar10 != 0) {
                              lVar15 = *(long *)(lVar10 + 0x10);
                              lVar16 = *(long *)puVar6;
                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                              if (lVar15 != 0) {
                                uVar1 = *(uint *)(lVar10 + 0x18);
                                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar14;
                                  thunk_FUN_02dd37b4(plVar11,lVar14);
                                }
                                else {
                                  FUN_03aac494(lVar10,lVar14,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar9 + 0x28) = lVar10;
                                thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                lVar10 = *(long *)(lVar13 + 0x10);
                                lVar14 = *(long *)puVar7;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar11 = lVar9;
                                    thunk_FUN_02dd37b4(plVar11,lVar9);
                                  }
                                  else {
                                    FUN_03aac494(lVar13,lVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                  FUN_05fc094c(lVar9,0);
                                  puVar5 = 
                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
                                  if (lVar9 != 0) {
                                    *(undefined8 *)(lVar9 + 0x10) =
                                         *(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                    if (lVar10 != 0) {
                                      lVar15 = *(long *)puVar4;
                                      uVar12 = *(undefined8 *)
                                                Method_UnityEngine_GameObject_GetComponent<InputField>__
                                      ;
                                      lVar14 = *(long *)(lVar10 + 0x10);
                                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar12;
                                          thunk_FUN_02dd37b4();
                                        }
                                        else {
                                          FUN_03aac494(lVar10,uVar12,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x30) = lVar10;
                                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                        FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                        lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                        FUN_05fc0944(lVar14,0);
                                        if (lVar14 != 0) {
                                          *(undefined8 *)(lVar14 + 0x18) =
                                               *(undefined8 *)
                                                Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                          ;
                                          thunk_FUN_02dd37b4();
                                          *(undefined8 *)(lVar14 + 0x10) =
                                               *(undefined8 *)
                                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                          ;
                                          thunk_FUN_02dd37b4();
                                          if (lVar10 != 0) {
                                            lVar15 = *(long *)(lVar10 + 0x10);
                                            lVar16 = *(long *)puVar6;
                                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                            if (lVar15 != 0) {
                                              uVar1 = *(uint *)(lVar10 + 0x18);
                                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar11 = lVar14;
                                                thunk_FUN_02dd37b4(plVar11,lVar14);
                                              }
                                              else {
                                                FUN_03aac494(lVar10,lVar14,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar9 + 0x28) = lVar10;
                                              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                              lVar10 = *(long *)(lVar13 + 0x10);
                                              lVar14 = *(long *)puVar7;
                                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar11 = lVar9;
                                                  thunk_FUN_02dd37b4(plVar11,lVar9);
                                                }
                                                else {
                                                  FUN_03aac494(lVar13,lVar9,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                FUN_05fc094c(lVar9,0);
                                                puVar5 = 
                                                Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                ;
                                                if (lVar9 != 0) {
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_06779338;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar16 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar16 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar13;
                                                  thunk_FUN_02dd37b4((long *)(unaff_x20 + 0x28),
                                                                     lVar13);
                                                  FUN_05fc0710(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


