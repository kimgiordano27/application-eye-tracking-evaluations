/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectAll
ENTRY_POINT: 05fd4f0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_TextSelectingUtilities__SelectAll(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x22;
  thunk_FUN_02dd37b4();
  lVar3 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_05fc094c(lVar3,0);
  puVar2 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
    *(undefined4 *)(lVar3 + 0x18) = 3;
    lVar4 = thunk_FUN_02d9d534(*unaff_x27);
    FUN_03aabc60(lVar4,*unaff_x20);
    if (lVar4 != 0) {
      lVar8 = *unaff_x29;
      uVar6 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<InputField>__;
      lVar7 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(lVar3 + 0x30) = lVar4;
        thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
        FUN_03aabc60(lVar4,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                  );
        FUN_05fc0944(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)
                Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
          ;
          thunk_FUN_02dd37b4();
          if (lVar4 != 0) {
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar7;
                thunk_FUN_02dd37b4(plVar5,lVar7);
              }
              else {
                FUN_03aac494(lVar4,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar3 + 0x28) = lVar4;
              thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
              *unaff_x21 = *unaff_x21 + 1;
              lVar4 = *unaff_x26;
              if (lVar4 != 0) {
                uVar1 = *unaff_x19;
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *unaff_x19 = uVar1 + 1;
                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar3;
                  thunk_FUN_02dd37b4(plVar5,lVar3);
                }
                else {
                  FUN_03aac494();
                }
                lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                FUN_05fc094c(lVar3,0);
                puVar2 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                  *(undefined4 *)(lVar3 + 0x18) = 3;
                  lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                  FUN_03aabc60(lVar4,*unaff_x20);
                  if (lVar4 != 0) {
                    lVar8 = *unaff_x29;
                    uVar6 = *(undefined8 *)Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                    lVar7 = *(long *)(lVar4 + 0x10);
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        thunk_FUN_02dd37b4();
                      }
                      else {
                        FUN_03aac494(lVar4,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x30) = lVar4;
                      thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                );
                      FUN_03aabc60(lVar4,*(undefined8 *)
                                          Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                );
                      FUN_05fc0944(lVar7,0);
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x18) =
                             *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                        ;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar7 + 0x10) =
                             *(undefined8 *)
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                        ;
                        thunk_FUN_02dd37b4();
                        if (lVar4 != 0) {
                          lVar8 = *(long *)(lVar4 + 0x10);
                          lVar9 = *(long *)
                                   Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar7;
                              thunk_FUN_02dd37b4(plVar5,lVar7);
                            }
                            else {
                              FUN_03aac494(lVar4,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar3 + 0x28) = lVar4;
                            thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                            *unaff_x21 = *unaff_x21 + 1;
                            lVar4 = *unaff_x26;
                            if (lVar4 != 0) {
                              uVar1 = *unaff_x19;
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *unaff_x19 = uVar1 + 1;
                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar3;
                                thunk_FUN_02dd37b4(plVar5,lVar3);
                              }
                              else {
                                FUN_03aac494();
                              }
                              lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                              FUN_05fc094c(lVar3,0);
                              puVar2 = 
                              Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__;
                              if (lVar3 != 0) {
                                *(undefined8 *)(lVar3 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                *(undefined4 *)(lVar3 + 0x18) = 4;
                                lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                FUN_03aabc60(lVar4,*unaff_x20);
                                if (lVar4 != 0) {
                                  lVar8 = *unaff_x29;
                                  uVar6 = *(undefined8 *)
                                           Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                  lVar7 = *(long *)(lVar4 + 0x10);
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar4,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x30) = lVar4;
                                    thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                    FUN_05fc0944(lVar7,0);
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar7 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      if (lVar4 != 0) {
                                        lVar8 = *(long *)(lVar4 + 0x10);
                                        lVar9 = *(long *)
                                                 Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                        ;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar7;
                                            thunk_FUN_02dd37b4(plVar5,lVar7);
                                          }
                                          else {
                                            FUN_03aac494(lVar4,lVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar3 + 0x28) = lVar4;
                                          thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                          *unaff_x21 = *unaff_x21 + 1;
                                          lVar4 = *unaff_x26;
                                          if (lVar4 != 0) {
                                            uVar1 = *unaff_x19;
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *unaff_x19 = uVar1 + 1;
                                              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar3;
                                              thunk_FUN_02dd37b4(plVar5,lVar3);
                                            }
                                            else {
                                              FUN_03aac494();
                                            }
                                            lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                                            FUN_05fc094c(lVar3,0);
                                            puVar2 = 
                                            Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__
                                            ;
                                            if (lVar3 != 0) {
                                              *(undefined8 *)(lVar3 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterface__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                              *(undefined4 *)(lVar3 + 0x18) = 1;
                                              lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                              FUN_03aabc60(lVar4,*unaff_x20);
                                              if (lVar4 != 0) {
                                                lVar8 = *unaff_x29;
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                                                ;
                                                lVar7 = *(long *)(lVar4 + 0x10);
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar4,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Unity_VisualScripting_GetDictionaryItem_Get__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Firebase_Firestore_GeoPointProxy__ctor__;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetFields__
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterfaces__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_latitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x26;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x28;
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


