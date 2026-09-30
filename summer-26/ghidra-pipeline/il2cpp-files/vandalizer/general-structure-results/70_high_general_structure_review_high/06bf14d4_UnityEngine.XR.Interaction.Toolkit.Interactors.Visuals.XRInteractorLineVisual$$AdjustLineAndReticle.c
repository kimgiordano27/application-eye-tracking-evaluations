/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual$$AdjustLineAndReticle
ENTRY_POINT: 06bf14d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__AdjustLineAndReticle
               (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  
  if ((uint)in_x10 < in_w11) {
    *(uint *)(unaff_x20 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x21;
    thunk_FUN_0329bf60();
  }
  else {
    FUN_047af440();
  }
  lVar13 = thunk_FUN_0322f148(*unaff_x23);
  FUN_06be4080(lVar13,0);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x10) = unaff_x19;
    thunk_FUN_0329bf60();
    lVar18 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar3 = System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
    if (lVar18 != 0) {
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
        *plVar14 = lVar13;
        thunk_FUN_0329bf60(plVar14,lVar13);
      }
      else {
        FUN_047af440();
      }
      lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
      FUN_05e44034(lVar13,0);
      if (lVar13 != 0) {
        *(long *)(lVar13 + 0x10) = unaff_x19;
        thunk_FUN_0329bf60();
        lVar18 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        puVar3 = System_Action<InstanceHandle>_TypeInfo;
        if (lVar18 != 0) {
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
            plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *plVar14 = lVar13;
            thunk_FUN_0329bf60(plVar14,lVar13);
          }
          else {
            FUN_047af440();
          }
          lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
          FUN_06be135c(lVar13,0);
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x10) = unaff_x19;
            thunk_FUN_0329bf60();
            lVar18 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            puVar3 = System_Action<InteractableUnregisteredEventArgs>_TypeInfo;
            if (lVar18 != 0) {
              uVar2 = *(uint *)(unaff_x20 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                *plVar14 = lVar13;
                thunk_FUN_0329bf60(plVar14,lVar13);
              }
              else {
                FUN_047af440();
              }
              lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
              FUN_06be3230(lVar13,0);
              if (lVar13 != 0) {
                *(long *)(lVar13 + 0x10) = unaff_x19;
                thunk_FUN_0329bf60();
                lVar18 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                puVar3 = System_Action<InteractorRegisteredEventArgs>_TypeInfo;
                if (lVar18 != 0) {
                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                    plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar14 = lVar13;
                    thunk_FUN_0329bf60(plVar14,lVar13);
                  }
                  else {
                    FUN_047af440();
                  }
                  lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                  FUN_05e44034(lVar13,0);
                  if (lVar13 != 0) {
                    *(long *)(lVar13 + 0x10) = unaff_x19;
                    thunk_FUN_0329bf60();
                    lVar18 = *(long *)(unaff_x20 + 0x10);
                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    puVar3 = System_Action<InteractorStateChangeArgs>_TypeInfo;
                    if (lVar18 != 0) {
                      uVar2 = *(uint *)(unaff_x20 + 0x18);
                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                        plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar14 = lVar13;
                        thunk_FUN_0329bf60(plVar14,lVar13);
                      }
                      else {
                        FUN_047af440();
                      }
                      lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                      FUN_05e44034(lVar13,0);
                      if (lVar13 != 0) {
                        *(long *)(lVar13 + 0x10) = unaff_x19;
                        thunk_FUN_0329bf60();
                        lVar18 = *(long *)(unaff_x20 + 0x10);
                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                        puVar3 = System_Action<LogEntry>_TypeInfo;
                        if (lVar18 != 0) {
                          uVar2 = *(uint *)(unaff_x20 + 0x18);
                          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                            plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar14 = lVar13;
                            thunk_FUN_0329bf60(plVar14,lVar13);
                          }
                          else {
                            FUN_047af440();
                          }
                          lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                          FUN_05e44034(lVar13,0);
                          if (lVar13 != 0) {
                            *(long *)(lVar13 + 0x10) = unaff_x19;
                            thunk_FUN_0329bf60();
                            lVar18 = *(long *)(unaff_x20 + 0x10);
                            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                            puVar3 = System_Action<LayoutRebuilder>_TypeInfo;
                            if (lVar18 != 0) {
                              uVar2 = *(uint *)(unaff_x20 + 0x18);
                              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                                *plVar14 = lVar13;
                                thunk_FUN_0329bf60(plVar14,lVar13);
                              }
                              else {
                                FUN_047af440();
                              }
                              lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                              FUN_05e44034(lVar13,0);
                              if (lVar13 != 0) {
                                *(long *)(lVar13 + 0x10) = unaff_x19;
                                thunk_FUN_0329bf60();
                                lVar18 = *(long *)(unaff_x20 + 0x10);
                                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                puVar6 = System_Action<LocomotionEvent>_TypeInfo;
                                puVar5 = System_Action<InputUpdateType>_TypeInfo;
                                puVar9 = System_Action<InputDevice>_TypeInfo;
                                puVar4 = System_Action<IUpdateReceiver>_TypeInfo;
                                puVar3 = System_Action<IResourceProvider>_TypeInfo;
                                if (lVar18 != 0) {
                                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                                  if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                    plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                                    *plVar14 = lVar13;
                                    thunk_FUN_0329bf60(plVar14,lVar13);
                                  }
                                  else {
                                    FUN_047af440();
                                  }
                                  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                  thunk_FUN_0329bf60();
                                  uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                  FUN_05812e88(uVar15,*(undefined8 *)puVar3);
                                  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
                                  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18),uVar15);
                                  lVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
                                  FUN_047aec0c(lVar13,*(undefined8 *)puVar9);
                                  uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
                                  FUN_05e44034(uVar15,0);
                                  puVar3 = System_Action<IXRInteractor>_TypeInfo;
                                  if (lVar13 != 0) {
                                    lVar18 = *(long *)(lVar13 + 0x10);
                                    lVar19 = *(long *)System_Action<IXRInteractor>_TypeInfo;
                                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                    puVar4 = System_Action<LocomotionProvider>_TypeInfo;
                                    if (lVar18 != 0) {
                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                        puVar16 = (undefined8 *)
                                                  (lVar18 + (long)(int)uVar2 * 8 + 0x20);
                                        *puVar16 = uVar15;
                                        thunk_FUN_0329bf60(puVar16,uVar15);
                                      }
                                      else {
                                        FUN_047af440(lVar13,uVar15,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      plVar14 = (long *)(unaff_x19 + 0x20);
                                      *plVar14 = lVar13;
                                      thunk_FUN_0329bf60(plVar14,lVar13);
                                      lVar13 = *plVar14;
                                      uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                      FUN_05e44034(uVar15,0);
                                      if (lVar13 != 0) {
                                        lVar18 = *(long *)(lVar13 + 0x10);
                                        lVar19 = *(long *)puVar3;
                                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                        puVar9 = PTR_DAT_075f1458;
                                        puVar4 = PTR_DAT_075de370;
                                        puVar3 = PTR_DAT_075de368;
                                        if (lVar18 != 0) {
                                          uVar2 = *(uint *)(lVar13 + 0x18);
                                          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                            puVar16 = (undefined8 *)
                                                      (lVar18 + (long)(int)uVar2 * 8 + 0x20);
                                            *puVar16 = uVar15;
                                            thunk_FUN_0329bf60(puVar16,uVar15);
                                          }
                                          else {
                                            FUN_047af440(lVar13,uVar15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          puVar12 = 
                                          System_Action<InteractableRegisteredEventArgs>_TypeInfo;
                                          puVar11 = 
                                          System_Action<AsyncOperationHandle<IResourceLocator>>_TypeInfo
                                          ;
                                          puVar10 = Best_HTTP_Request_Timings_TimingEventInfo_var;
                                          puVar8 = PTR_DAT_075d7d80;
                                          puVar7 = PTR_DAT_075d7d50;
                                          puVar6 = PTR_DAT_075d74d8;
                                          puVar5 = PTR_DAT_075d6700;
                                          uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                                          FUN_05812e88(uVar15,*(undefined8 *)puVar4);
                                          *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
                                          thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x38),uVar15
                                                            );
                                          uVar15 = *(undefined8 *)puVar9;
                                          if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) ==
                                              0) {
                                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                      ();
                                          }
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar15,0);
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                    (*(undefined8 *)puVar6,0);
                                          FUN_06bf1f84();
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                    (*(undefined8 *)puVar5,0);
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                    (*(undefined8 *)puVar6,0);
                                          FUN_06bf1f84();
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                    (*(undefined8 *)puVar8,0);
                                          Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                    (*(undefined8 *)puVar7,0);
                                          FUN_06bf1f84();
                                          uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar12);
                                          FUN_06beb854();
                                          *(undefined8 *)(unaff_x19 + 0x58) = uVar15;
                                          thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x58),uVar15
                                                            );
                                          uVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar10);
                                          FUN_06beb3e0();
                                          *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
                                          thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x60),uVar15
                                                            );
                                          lVar13 = *(long *)puVar11;
                                          if (*(int *)(lVar13 + 0xe4) == 0) {
                                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                      ();
                                            lVar13 = *(long *)puVar11;
                                          }
                                          puVar9 = System_Action<int>_TypeInfo;
                                          puVar4 = PTR_DAT_075b75d0;
                                          puVar3 = PTR_DAT_075b75c8;
                                          if (**(long **)(lVar13 + 0xb8) != 0) {
                                            FUN_047afec0(&stack0x00000008,**(long **)(lVar13 + 0xb8)
                                                         ,*(undefined8 *)PTR_DAT_075b7608);
                                            do {
                                              uVar17 = FUN_05a2e8e4(&stack0x00000008,
                                                                    *(undefined8 *)puVar4);
                                              if ((uVar17 & 1) == 0) {
                                                FUN_05a2e8e0(&stack0x00000008,*(undefined8 *)puVar3)
                                                ;
                                                return;
                                              }
                                              plVar14 = (long *)FUN_05e2c1b0(in_stack_00000018,0);
                                              if (plVar14 != (long *)0x0) {
                                                bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                                                   (*(long *)(*(long *)(*plVar14 + 200) +
                                                              (ulong)bVar1 * 8 + -8) !=
                                                    *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_031f2730(plVar14);
                                                }
                                              }
                                              FUN_06bf208c();
                                            } while( true );
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_031f2390();
}


