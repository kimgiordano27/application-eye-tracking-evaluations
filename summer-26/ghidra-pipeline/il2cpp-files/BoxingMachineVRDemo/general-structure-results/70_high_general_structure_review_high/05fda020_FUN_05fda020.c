/*
FUNCTION_NAME: FUN_05fda020
ENTRY_POINT: 05fda020
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_17;validity_or_gating_hits_21;ray_or_cast_sink_hits_11;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05fda020(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int in_w10;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x22 + 0x28) = unaff_x23;
    thunk_FUN_02dd37b4();
    *unaff_x21 = *unaff_x21 + 1;
    lVar7 = *unaff_x26;
    if (lVar7 != 0) {
      uVar1 = *unaff_x19;
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *unaff_x19 = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
        thunk_FUN_02dd37b4();
      }
      else {
                    /* try { // try from 05fda0e0 to 060da24b has its CatchHandler @ 05fda0e0
                       catch() { ... } // from try @ 05fda0e0 with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda284 with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda368 with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda3ec with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda434 with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda450 with catch @ 05fda0e0
                       catch() { ... } // from try @ 05fda490 with catch @ 05fda0e0 */
        FUN_03aac494();
      }
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
      FUN_05fc094c(lVar7,0);
      puVar2 = Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) =
             *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
        *(undefined4 *)(lVar7 + 0x18) = 4;
        lVar3 = thunk_FUN_02d9d534(*unaff_x27);
        FUN_03aabc60(lVar3,*unaff_x20);
        if (lVar3 != 0) {
          lVar8 = *unaff_x29;
          uVar5 = *(undefined8 *)Method_System_Linq_Enumerable_Count<ARAnchor>__;
          lVar6 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(lVar3,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar7 + 0x30) = lVar3;
            thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
            lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                      );
            FUN_03aabc60(lVar3,*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                      );
            FUN_05fc0944(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x18) =
                   *(undefined8 *)
                    Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
              ;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
              thunk_FUN_02dd37b4();
              if (lVar3 != 0) {
                lVar8 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 05fda24c to 060da253 has its CatchHandler @ 05fda434 */
                lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 05fda270 to 060da273 has its CatchHandler @ 05fda3c4 */
                    /* try { // try from 05fda274 to 060da283 has its CatchHandler @ 05fda3cc */
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar4 = lVar6;
                    thunk_FUN_02dd37b4(plVar4,lVar6);
                    /* try { // try from 05fda284 to 060da32f has its CatchHandler @ 05fda0e0 */
                  }
                  else {
                    FUN_03aac494(lVar3,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar7 + 0x28) = lVar3;
                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                  *unaff_x21 = *unaff_x21 + 1;
                  lVar3 = *unaff_x26;
                  if (lVar3 != 0) {
                    uVar1 = *unaff_x19;
                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                      *unaff_x19 = uVar1 + 1;
                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar4 = lVar7;
                      thunk_FUN_02dd37b4(plVar4,lVar7);
                    }
                    else {
                      FUN_03aac494();
                    }
                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                              );
                    FUN_05fc094c(lVar7,0);
                    puVar2 = 
                    Method_Unity_VisualScripting_GraphPointer_GetElementData<OnTimerElapsed_Data>__;
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x10) =
                           *(undefined8 *)
                            Method_Unity_VisualScripting_GraphPointer_GetElementData<OnInputSystemEvent_Data>__
                      ;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                      *(undefined4 *)(lVar7 + 0x18) = 1;
                      lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                      FUN_03aabc60(lVar3,*unaff_x20);
                      if (lVar3 != 0) {
                        lVar8 = *unaff_x29;
                        uVar5 = *(undefined8 *)
                                 Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitConnectionDebugData>__
                        ;
                        lVar6 = *(long *)(lVar3 + 0x10);
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar6 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                            thunk_FUN_02dd37b4();
                          }
                          else {
                            FUN_03aac494(lVar3,uVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar7 + 0x30) = lVar3;
                          thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                          FUN_03aabc60(lVar3,*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                      );
                          lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                          FUN_05fc0944(lVar6,0);
                          if (lVar6 != 0) {
                            *(undefined8 *)(lVar6 + 0x18) =
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<ValueConnection_DebugData>__
                            ;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                            thunk_FUN_02dd37b4();
                            if (lVar3 != 0) {
                              lVar8 = *(long *)(lVar3 + 0x10);
                              lVar9 = *(long *)
                                       Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar4 = lVar6;
                                  thunk_FUN_02dd37b4(plVar4,lVar6);
                                }
                                else {
                                  FUN_03aac494(lVar3,lVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar7 + 0x28) = lVar3;
                                thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                *unaff_x21 = *unaff_x21 + 1;
                                lVar3 = *unaff_x26;
                                if (lVar3 != 0) {
                                  uVar1 = *unaff_x19;
                                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                    *unaff_x19 = uVar1 + 1;
                                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar4 = lVar7;
                                    thunk_FUN_02dd37b4(plVar4,lVar7);
                                  }
                                  else {
                                    FUN_03aac494();
                                  }
                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                  FUN_05fc094c(lVar7,0);
                                  puVar2 = 
                                  Method_Unity_VisualScripting_GraphPointer_GetParent<SubgraphUnit>__
                                  ;
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x10) =
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IGraphElementDebugData>__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                    *(undefined4 *)(lVar7 + 0x18) = 1;
                                    lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                    FUN_03aabc60(lVar3,*unaff_x20);
                                    if (lVar3 != 0) {
                                      lVar8 = *unaff_x29;
                                      uVar5 = *(undefined8 *)
                                               Method_Unity_VisualScripting_GraphPointer_GetGraphData<FlowGraphData>__
                                      ;
                                      lVar6 = *(long *)(lVar3 + 0x10);
                                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                      if (lVar6 != 0) {
                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar5;
                                          thunk_FUN_02dd37b4();
                                        }
                                        else {
                                          FUN_03aac494(lVar3,uVar5,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar7 + 0x30) = lVar3;
                                        thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                        lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                        FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                        lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                        FUN_05fc0944(lVar6,0);
                                        if (lVar6 != 0) {
                                          *(undefined8 *)(lVar6 + 0x18) =
                                               *(undefined8 *)
                                                Method_Unity_VisualScripting_GraphPointer_GetElementData<Once_Data>__
                                          ;
                                          thunk_FUN_02dd37b4();
                                          *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                          thunk_FUN_02dd37b4();
                                          if (lVar3 != 0) {
                                            lVar8 = *(long *)(lVar3 + 0x10);
                                            lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                            ;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar4 = lVar6;
                                                thunk_FUN_02dd37b4(plVar4,lVar6);
                                              }
                                              else {
                                                FUN_03aac494(lVar3,lVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar7 + 0x28) = lVar3;
                                              thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                              *unaff_x21 = *unaff_x21 + 1;
                                              lVar3 = *unaff_x26;
                                              if (lVar3 != 0) {
                                                uVar1 = *unaff_x19;
                                                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                  *unaff_x19 = uVar1 + 1;
                                                  plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar4 = lVar7;
                                                  thunk_FUN_02dd37b4(plVar4,lVar7);
                                                }
                                                else {
                                                  FUN_03aac494();
                                                }
                                                lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                FUN_05fc094c(lVar7,0);
                                                puVar2 = 
                                                Method_Unity_VisualScripting_GetDictionaryItem_Get__
                                                ;
                                                if (lVar7 != 0) {
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleFlow_Data>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Firebase_Firestore_GeoPointProxy__ctor__;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDebugDataAvailable__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetFields__
                                                  ;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Meta_XR_ImmersiveDebugger_Manager_GizmoManager_ProcessTypeFromInspector__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterfaces__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_latitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                                                  ;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<Timer_Data>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitDebugData>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleValue_Data>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_VisualScripting_GraphInstances_Uninstantiate__
                                                  ;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<WaitForFlow_Data>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar7,0);
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<SubgraphUnit_Data>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<GameObjectEventUnit_Data<GameObject>>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_VisualScripting_GraphPointer_GetElementData<Cooldown_Data>__
                                                  ;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_GetGraphData<IGraphDataWithVariables>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar3);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar3 = *unaff_x26;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
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


