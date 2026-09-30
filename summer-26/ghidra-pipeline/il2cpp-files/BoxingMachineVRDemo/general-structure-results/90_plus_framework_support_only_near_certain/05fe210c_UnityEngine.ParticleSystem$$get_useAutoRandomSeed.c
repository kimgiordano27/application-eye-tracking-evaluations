/*
FUNCTION_NAME: UnityEngine.ParticleSystem$$get_useAutoRandomSeed
ENTRY_POINT: 05fe210c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_ParticleSystem__get_useAutoRandomSeed
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 in_w10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x23 + 0x1c) = in_w10;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
                    /* try { // try from 05fe2150 to 060e2157 has its CatchHandler @ 05fe26c4 */
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02dd37b4();
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
                    /* try { // try from 05fe2180 to 060e218b has its CatchHandler @ 05fe26b8 */
    FUN_03aabc60(lVar4,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    lVar5 = thunk_FUN_02d9d534(*unaff_x28);
    FUN_05fc0944(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) =
           *(undefined8 *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
      thunk_FUN_02dd37b4();
      lVar6 = thunk_FUN_02d9d534(*unaff_x29);
      FUN_03aabc60(lVar6,*unaff_x27);
      if (lVar6 != 0) {
        lVar10 = *unaff_x19;
        uVar8 = *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
        lVar9 = *(long *)(lVar6 + 0x10);
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
          *(long *)(lVar5 + 0x20) = lVar6;
          thunk_FUN_02dd37b4((long *)(lVar5 + 0x20),lVar6);
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            lVar9 = *unaff_x20;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar5;
                thunk_FUN_02dd37b4(plVar7,lVar5);
              }
              else {
                FUN_03aac494(lVar4,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = thunk_FUN_02d9d534(*unaff_x28);
              FUN_05fc0944(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x18) =
                     *(undefined8 *)Method_Firebase_Firestore_GeoPointProxy_longitude__;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
                thunk_FUN_02dd37b4();
                lVar6 = thunk_FUN_02d9d534(*unaff_x29);
                FUN_03aabc60(lVar6,*unaff_x27);
                if (lVar6 != 0) {
                  lVar10 = *unaff_x19;
                  uVar8 = *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
                  lVar9 = *(long *)(lVar6 + 0x10);
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
                    *(long *)(lVar5 + 0x20) = lVar6;
                    thunk_FUN_02dd37b4((long *)(lVar5 + 0x20),lVar6);
                    lVar6 = *(long *)(lVar4 + 0x10);
                    lVar9 = *unaff_x20;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar5;
                        thunk_FUN_02dd37b4(plVar7,lVar5);
                      }
                      else {
                        FUN_03aac494(lVar4,lVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
                        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                        FUN_05fc094c(lVar4,0);
                        puVar2 = PTR_DAT_06762060;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0676c270;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                          *(undefined4 *)(lVar4 + 0x18) = 1;
                          lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                          FUN_03aabc60(lVar5,*unaff_x27);
                          if (lVar5 != 0) {
                            uVar8 = *(undefined8 *)puVar2;
                            lVar6 = *(long *)(lVar5 + 0x10);
                            lVar9 = *unaff_x19;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar5,uVar8,
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
                              lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                              FUN_05fc0944(lVar6,0);
                              puVar2 = 
                              Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__;
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x18) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                thunk_FUN_02dd37b4();
                                if (lVar5 != 0) {
                                  lVar9 = *(long *)(lVar5 + 0x10);
                                  lVar10 = *unaff_x20;
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
                                        plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar4;
                                        thunk_FUN_02dd37b4(plVar7,lVar4);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                      FUN_05fc094c(lVar4,0);
                                      puVar3 = 
                                      Method_UnityEngine_GameObject_TryGetComponent<Renderer>__;
                                      if (lVar4 != 0) {
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                        *(undefined4 *)(lVar4 + 0x18) = 0;
                                        lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                        FUN_03aabc60(lVar5,*unaff_x27);
                                        if (lVar5 != 0) {
                                          lVar9 = *unaff_x19;
                                          uVar8 = *(undefined8 *)Method_UnityEngine_Color_get_Item__
                                          ;
                                          lVar6 = *(long *)(lVar5 + 0x10);
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar8;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar5,uVar8,
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
                                            lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                            FUN_05fc0944(lVar6,0);
                                            if (lVar6 != 0) {
                                              *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)puVar2;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                              thunk_FUN_02dd37b4();
                                              if (lVar5 != 0) {
                                                lVar9 = *(long *)(lVar5 + 0x10);
                                                lVar10 = *unaff_x20;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar7 = lVar6;
                                                    thunk_FUN_02dd37b4(plVar7,lVar6);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                    FUN_03aabc60(lVar5,*unaff_x27);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x19;
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
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
                                                  lVar5 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x19;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar5,uVar8,
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
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar5,lVar6,
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


