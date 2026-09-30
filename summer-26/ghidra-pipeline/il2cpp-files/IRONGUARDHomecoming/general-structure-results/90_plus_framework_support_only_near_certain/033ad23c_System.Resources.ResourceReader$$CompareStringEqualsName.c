/*
FUNCTION_NAME: System.Resources.ResourceReader$$CompareStringEqualsName
ENTRY_POINT: 033ad23c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 200
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x033ae020) */

long * System_Resources_ResourceReader__CompareStringEqualsName(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 uVar17;
  long *unaff_x22;
  long *unaff_x23;
  uint uVar18;
  undefined8 uVar19;
  undefined8 *unaff_x27;
  long *unaff_x29;
  undefined4 uVar20;
  
  if ((param_1 & 1) == 0) {
    uVar17 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar17,0);
    uVar7 = FUN_03582560();
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar17,0);
      uVar7 = FUN_03582560();
      if ((uVar7 & 1) == 0) {
        if (unaff_x22 != (long *)0x0) {
          uVar7 = (**(code **)(*unaff_x22 + 0x5c8))();
          if ((uVar7 & 1) != 0) {
LAB_033ad15c:
            lVar9 = (**(code **)(*unaff_x23 + 0x168))();
            plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                               );
            FUN_035ac8e8(plVar5,0);
            plVar5[2] = lVar9;
            thunk_FUN_01f51358(plVar5 + 2,lVar9);
            return plVar5;
          }
          uVar17 = (**(code **)(*unaff_x22 + 0x8a8))();
          uVar19 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__
          ;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*unaff_x29);
          }
          uVar19 = FUN_03579868(uVar19,0);
          puVar3 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
          uVar7 = FUN_022ee1a4(uVar17,uVar19,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
          if ((uVar7 & 1) == 0) {
            uVar17 = (**(code **)(*unaff_x22 + 0x8a8))();
            uVar19 = *(undefined8 *)
                      Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x29);
            }
            uVar19 = FUN_03579868(uVar19,0);
            uVar7 = FUN_022ee1a4(uVar17,uVar19,*(undefined8 *)puVar3);
            if ((uVar7 & 1) == 0) {
              uVar7 = FUN_035846d4();
              if (((uVar7 & 1) == 0) &&
                 ((uVar7 = FUN_0358471c(), (uVar7 & 1) == 0 ||
                  (uVar7 = FUN_035849ac(), (uVar7 & 1) != 0)))) {
                FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputManager_QueueEvent<TextEvent>__);
                if (unaff_x19 != 0) {
                  FUN_03418c10();
                  goto LAB_033ad15c;
                }
              }
              else {
                plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                                  );
                FUN_033ae20c();
                lVar9 = (**(code **)(*unaff_x22 + 0x6d8))();
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar18 = 0;
                    do {
                      if (uVar1 <= uVar18) goto LAB_033adfa8;
                      plVar10 = *(long **)(lVar9 + (long)(int)uVar18 * 8 + 0x20);
                      uVar17 = *(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar17 = FUN_03579868(uVar17,0);
                      lVar15 = FUN_034b9230(plVar10,uVar17,0);
                      if (lVar15 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        uVar17 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                        ;
                        lVar11 = thunk_FUN_01f116d0(lVar15,uVar17);
                        if (lVar11 == 0) goto LAB_033ae004;
                      }
                      if (plVar10 == (long *)0x0) goto LAB_033adfa4;
                      uVar17 = (**(code **)(*plVar10 + 600))
                                         (plVar10,*(undefined8 *)(*plVar10 + 0x260));
                      uVar19 = (**(code **)(*plVar10 + 0x1a8))
                                         (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                      uVar14 = (**(code **)(*plVar10 + 0x2e8))(plVar10);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                                  ) == 0) {
                        thunk_FUN_01ee6d7c(*(long *)
                                            Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                          );
                      }
                      FUN_033ae31c(plVar5,uVar17,uVar19,uVar14,lVar11);
                      uVar18 = uVar18 + 1;
                      uVar1 = *(uint *)(lVar9 + 0x18);
                    } while ((int)uVar18 < (int)uVar1);
                  }
                  lVar9 = (**(code **)(*unaff_x22 + 0x858))();
                  if (lVar9 != 0) {
                    uVar1 = *(uint *)(lVar9 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar18 = 0;
                      do {
                        if (uVar1 <= uVar18) goto LAB_033adfa8;
                        plVar10 = *(long **)(lVar9 + (long)(int)uVar18 * 8 + 0x20);
                        if (plVar10 == (long *)0x0) goto LAB_033adfa4;
                        plVar12 = (long *)FUN_034b43c0(plVar10,0);
                        uVar7 = System_Console__SetOut(plVar12,0,0);
                        if ((uVar7 & 1) != 0) {
                          if ((plVar12 == (long *)0x0) ||
                             (lVar15 = (**(code **)(*plVar12 + 0x248))
                                                 (plVar12,*(undefined8 *)(*plVar12 + 0x250)),
                             lVar15 == 0)) goto LAB_033adfa4;
                          if (*(long *)(lVar15 + 0x18) == 0) {
                            uVar17 = *(undefined8 *)
                                      Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__
                            ;
                            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar17 = FUN_03579868(uVar17,0);
                            lVar15 = FUN_034b9230(plVar10,uVar17,0);
                            if (lVar15 == 0) {
                              lVar11 = 0;
                            }
                            else {
                              uVar17 = *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                              ;
                              lVar11 = thunk_FUN_01f116d0(lVar15,uVar17);
                              if (lVar11 == 0) {
LAB_033ae004:
                    /* WARNING: Subroutine does not return */
                                FUN_01f08cfc(lVar15,uVar17);
                              }
                            }
                            uVar17 = (**(code **)(*plVar10 + 0x248))
                                               (plVar10,*(undefined8 *)(*plVar10 + 0x250));
                            uVar19 = (**(code **)(*plVar10 + 0x1a8))
                                               (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                            uVar14 = FUN_034b43e8(plVar10);
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c(*(long *)
                                                  Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                                );
                            }
                            FUN_033ae31c(plVar5,uVar17,uVar19,uVar14,lVar11);
                          }
                        }
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        uVar18 = uVar18 + 1;
                      } while ((int)uVar18 < (int)uVar1);
                    }
                    uVar17 = (**(code **)(*unaff_x22 + 0x8a8))();
                    uVar19 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputManager_ExecuteGlobalCommand<UseWindowsGamingInputCommand>__
                    ;
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*unaff_x29);
                    }
                    uVar19 = FUN_03579868(uVar19,0);
                    uVar7 = FUN_022ee1a4(uVar17,uVar19,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__
                                        );
                    puVar3 = 
                    Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeltaStateEvent>__;
                    if ((uVar7 & 1) == 0) {
                      return plVar5;
                    }
                    lVar9 = thunk_FUN_01f116d0();
                    if (lVar9 != 0) {
                      lVar15 = *(long *)puVar3;
                      plVar10 = (long *)thunk_FUN_01f116d0();
                      lVar9 = *plVar10;
                      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar7 != 0) {
                        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == lVar15) {
                            puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_033adf60;
                          }
                          uVar7 = uVar7 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,0);
LAB_033adf60:
                      uVar7 = (*(code *)*puVar8)(plVar10,plVar5,puVar8[1]);
                      if ((uVar7 & 1) != 0) {
                        return plVar5;
                      }
                      FUN_03406290(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputManager_QueueEvent<StateEvent>__
                                  );
                      if (unaff_x19 != 0) {
                        FUN_03418c10();
                        return plVar5;
                      }
                    }
                  }
                }
              }
            }
            else {
              plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                      
                                                  Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Evaluate__
                                                 );
              FUN_033ae294();
              puVar3 = 
              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
              ;
              lVar9 = thunk_FUN_01f116d0();
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              lVar9 = *(long *)puVar3;
              plVar10 = (long *)thunk_FUN_01f116d0();
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc();
              }
              lVar15 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar7 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar9) {
                    puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_033adda4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,0);
LAB_033adda4:
              plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
              uVar17 = (**(code **)(*unaff_x22 + 0x438))();
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*unaff_x29);
              }
              uVar7 = FUN_03582560(uVar17,0,0);
              if ((((uVar7 & 1) != 0) && (lVar9 = (**(code **)(*unaff_x22 + 0x478))(), lVar9 != 0))
                 && (*(long *)(lVar9 + 0x18) != 0)) {
                if ((int)*(long *)(lVar9 + 0x18) == 0) goto LAB_033adfa8;
                uVar17 = *(undefined8 *)(lVar9 + 0x20);
              }
              puVar4 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
              puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
              puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar10 != (long *)0x0) {
                do {
                  lVar15 = *plVar10;
                  lVar9 = *(long *)puVar3;
                  uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar9) {
                        puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033ade84;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,0);
LAB_033ade84:
                  uVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                  if ((uVar7 & 1) == 0) {
                    return plVar5;
                  }
                  lVar15 = *plVar10;
                  lVar9 = *(long *)puVar3;
                  uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar9) {
                        puVar8 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_033adee4;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,1);
LAB_033adee4:
                  uVar19 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)puVar4);
                  }
                  uVar19 = FUN_033aa338(uVar17,uVar19);
                  uVar14 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                  uVar19 = System_Resources_ResourceReader__Dispose(uVar17,uVar19);
                  if (plVar5 == (long *)0x0) break;
                  (**(code **)(*plVar5 + 0x178))
                            (plVar5,uVar14,uVar19,*(undefined8 *)(*plVar5 + 0x180));
                } while( true );
              }
            }
          }
          else {
            plVar5 = (long *)thunk_FUN_01f116d0();
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                                );
            FUN_033ae20c();
            lVar9 = (**(code **)(*unaff_x22 + 0x478))();
            if (lVar9 != 0) {
              if (*(uint *)(lVar9 + 0x18) < 2) {
LAB_033adfa8:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar15 = *plVar5;
              uVar17 = *(undefined8 *)(lVar9 + 0x28);
              uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar7 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                    puVar8 = (undefined8 *)(lVar15 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                    goto LAB_033ada54;
                  }
                  uVar7 = uVar7 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01ecb238(plVar5,*(long *)
                                            Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                    ,2);
LAB_033ada54:
              plVar12 = (long *)(*(code *)*puVar8)(plVar5,puVar8[1]);
              if (plVar12 != (long *)0x0) {
                lVar9 = *plVar12;
                uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar7 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) ==
                        *(long *)
                         Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                       ) {
                      puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033adabc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01ecb238(plVar12,*(long *)
                                               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                                      ,0);
LAB_033adabc:
                plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
                puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                do {
                  lVar15 = *plVar12;
                  lVar9 = *(long *)puVar3;
                  uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar9) {
                        puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033adb24;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar12,lVar9,0);
LAB_033adb24:
                  uVar7 = (*(code *)*puVar8)(plVar12,puVar8[1]);
                  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                  if ((uVar7 & 1) == 0) {
                    plVar5 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                                                                                                  
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  );
                    if (plVar5 == (long *)0x0) {
                      return plVar10;
                    }
                    lVar9 = *plVar5;
                    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar7 == 0) goto LAB_033add14;
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    goto LAB_033adcfc;
                  }
                  lVar15 = *plVar12;
                  lVar9 = *(long *)puVar3;
                  uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar9) {
                        puVar8 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_033adb84;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar12,lVar9,1);
LAB_033adb84:
                  plVar13 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
                  lVar9 = *plVar5;
                  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar7 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                        puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033adbe8;
                      }
                      uVar7 = uVar7 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_01ecb238(plVar5,*(long *)
                                                Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                        ,0);
LAB_033adbe8:
                  lVar9 = (*(code *)*puVar8)(plVar5,plVar13,puVar8[1]);
                  if (lVar9 == 0) {
                    uVar19 = *unaff_x27;
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar19 = FUN_03579868(uVar19,0);
                    uVar7 = FUN_03582560(uVar17,uVar19,0);
                    if ((uVar7 & 1) == 0) {
                      lVar9 = FUN_03594a14(uVar17,0);
                    }
                    else {
                      lVar9 = **(long **)(*(long *)
                                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                         + 0xb8);
                    }
                  }
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar19 = (**(code **)(*plVar13 + 0x168))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar14 = System_Resources_ResourceReader__Dispose(uVar17,lVar9);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  (**(code **)(*plVar10 + 0x178))
                            (plVar10,uVar19,uVar14,*(undefined8 *)(*plVar10 + 0x180));
                } while( true );
              }
            }
          }
        }
LAB_033adfa4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                         );
      if (*(long *)(*unaff_x23 + 0x40) ==
          *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40)) {
        puVar8 = (undefined8 *)thunk_FUN_01f11920();
        uVar17 = *puVar8;
        FUN_035ac8e8(plVar5,0);
        (**(code **)(*plVar5 + 0x2a8))(uVar17,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        return plVar5;
      }
    }
    else {
      plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                         );
      if (*(long *)(*unaff_x23 + 0x40) ==
          *(long *)(*(long *)
                     Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                   + 0x40)) {
        puVar6 = (undefined4 *)thunk_FUN_01f11920();
        uVar20 = *puVar6;
        FUN_035ac8e8(plVar5,0);
        (**(code **)(*plVar5 + 0x288))(uVar20,plVar5,*(undefined8 *)(*plVar5 + 0x290));
        return plVar5;
      }
    }
  }
  else {
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__);
    if (*(long *)(*unaff_x23 + 0x40) ==
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) {
      puVar6 = (undefined4 *)thunk_FUN_01f11920();
      uVar20 = *puVar6;
      FUN_035ac8e8(plVar5,0);
      (**(code **)(*plVar5 + 0x268))(plVar5,uVar20,*(undefined8 *)(*plVar5 + 0x270));
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
LAB_033adcfc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033add80;
    }
  }
LAB_033add14:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_033add80:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return plVar10;
}


