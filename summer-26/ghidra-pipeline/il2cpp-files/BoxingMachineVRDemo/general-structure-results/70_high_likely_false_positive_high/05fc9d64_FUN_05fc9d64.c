/*
FUNCTION_NAME: FUN_05fc9d64
ENTRY_POINT: 05fc9d64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_7;telemetry_or_network_hits_2
*/


void FUN_05fc9d64(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_02dd37b4();
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
  FUN_03aabc60(lVar5,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x18) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponents<Component>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar6 + 0x10) =
         *(undefined8 *)
          Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__;
    thunk_FUN_02dd37b4();
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar10 = *unaff_x27;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar6;
          thunk_FUN_02dd37b4(plVar7,lVar6);
        }
        else {
          FUN_03aac494(lVar5,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x22 + 0x28) = lVar5;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar5);
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
          FUN_05fc094c(lVar5,0);
          puVar3 = Method_UnityEngine_GameObject_GetComponentInParent<IXRHapticImpulseProvider>__;
          puVar2 = 
          Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
          ;
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x10) =
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
            ;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
            *(undefined4 *)(lVar5 + 0x18) = 1;
            lVar6 = thunk_FUN_02d9d534(*unaff_x25);
            FUN_03aabc60(lVar6,*unaff_x19);
            if (lVar6 != 0) {
              uVar8 = *(undefined8 *)puVar2;
              lVar9 = *(long *)(lVar6 + 0x10);
              lVar10 = *unaff_x26;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar6,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar5 + 0x30) = lVar6;
                thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                          );
                FUN_03aabc60(lVar6,*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                          );
                FUN_05fc0944(lVar9,0);
                puVar2 = Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__;
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x18) =
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar9 + 0x10) =
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                  ;
                  thunk_FUN_02dd37b4();
                  if (lVar6 != 0) {
                    lVar10 = *(long *)(lVar6 + 0x10);
                    lVar11 = *unaff_x27;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar9;
                        thunk_FUN_02dd37b4(plVar7,lVar9);
                      }
                      else {
                        FUN_03aac494(lVar6,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar5 + 0x28) = lVar6;
                      thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                      lVar6 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar7 = lVar5;
                          thunk_FUN_02dd37b4(plVar7,lVar5);
                        }
                        else {
                          FUN_03aac494();
                        }
                        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                        FUN_05fc094c(lVar5,0);
                        puVar4 = 
                        Method_UnityEngine_GameObject_GetComponentInParent<IScrollHandler>__;
                        puVar3 = Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__;
                        if (lVar5 != 0) {
                          *(undefined8 *)(lVar5 + 0x10) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar4;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                          *(undefined4 *)(lVar5 + 0x18) = 0;
                          lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                          FUN_03aabc60(lVar6,*unaff_x19);
                          if (lVar6 != 0) {
                            uVar8 = *(undefined8 *)puVar3;
                            lVar9 = *(long *)(lVar6 + 0x10);
                            lVar10 = *unaff_x26;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar6,uVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar5 + 0x30) = lVar6;
                              thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                              FUN_03aabc60(lVar6,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                          );
                              lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                              FUN_05fc0944(lVar9,0);
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar2;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar9 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                ;
                                thunk_FUN_02dd37b4();
                                if (lVar6 != 0) {
                                  lVar10 = *(long *)(lVar6 + 0x10);
                                  lVar11 = *unaff_x27;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar7 = lVar9;
                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                    }
                                    else {
                                      FUN_03aac494(lVar6,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar5 + 0x28) = lVar6;
                                    thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                                    lVar6 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar5;
                                        thunk_FUN_02dd37b4(plVar7,lVar5);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                      FUN_05fc094c(lVar5,0);
                                      puVar3 = 
                                      Method_UnityEngine_GameObject_GetComponentInChildren<Text>__;
                                      puVar2 = 
                                      Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                      ;
                                      if (lVar5 != 0) {
                                        *(undefined8 *)(lVar5 + 0x10) =
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                        *(undefined4 *)(lVar5 + 0x18) = 0;
                                        lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                        FUN_03aabc60(lVar6,*unaff_x19);
                                        if (lVar6 != 0) {
                                          uVar8 = *(undefined8 *)puVar2;
                                          lVar9 = *(long *)(lVar6 + 0x10);
                                          lVar10 = *unaff_x26;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar8;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar6,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar5 + 0x30) = lVar6;
                                            thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                                            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                            FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                            FUN_05fc0944(lVar9,0);
                                            if (lVar9 != 0) {
                                              *(undefined8 *)(lVar9 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentInParent<OVRFaceExpressions>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar9 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              if (lVar6 != 0) {
                                                lVar10 = *(long *)(lVar6 + 0x10);
                                                lVar11 = *unaff_x27;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar7 = lVar9;
                                                    thunk_FUN_02dd37b4(plVar7,lVar9);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar6,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar5,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRGrabInteractable>__
                                                  ;
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_02dd37b4(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar5,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponents<IAnimationWindowPreview>__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_02dd37b4(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar5,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_02dd37b4(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar7,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


