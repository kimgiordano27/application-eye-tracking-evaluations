/*
FUNCTION_NAME: System.Resources.ResourceReader$$AllocateStringForNameIndex
ENTRY_POINT: 033ad440
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 194
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x033ae020) */

long * System_Resources_ResourceReader__AllocateStringForNameIndex(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  uint uVar17;
  undefined8 uVar18;
  undefined8 *unaff_x27;
  long *unaff_x29;
  
  if (unaff_x22 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x22 + 0x5c8))();
    if ((uVar5 & 1) != 0) {
LAB_033ad15c:
      lVar6 = (**(code **)(*unaff_x23 + 0x168))();
      plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                         );
      FUN_035ac8e8(plVar7,0);
                    /* try { // try from 033ad490 to 034ad49f has its CatchHandler @ 033ad4a0 */
      plVar7[2] = lVar6;
      thunk_FUN_01f51358(plVar7 + 2,lVar6);
      return plVar7;
    }
                    /* catch() { ... } // from try @ 033ad1ec with catch @ 033ad4a0
                       catch() { ... } // from try @ 033ad490 with catch @ 033ad4a0 */
                    /* try { // try from 033ad4a4 to 034ad4a7 has its CatchHandler @ 033ad4b0 */
                    /* try { // try from 033ad4a8 to 034ad4b3 has its CatchHandler @ 033ab940 */
                    /* catch() { ... } // from try @ 033ad0d0 with catch @ 033ad4b0
                       catch() { ... } // from try @ 033ad150 with catch @ 033ad4b0
                       catch() { ... } // from try @ 033ad1cc with catch @ 033ad4b0
                       catch() { ... } // from try @ 033ad4a4 with catch @ 033ad4b0 */
    uVar8 = (**(code **)(*unaff_x22 + 0x8a8))();
    uVar18 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x29);
    }
    uVar18 = FUN_03579868(uVar18,0);
    puVar3 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
    uVar5 = FUN_022ee1a4(uVar8,uVar18,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    if ((uVar5 & 1) == 0) {
      uVar8 = (**(code **)(*unaff_x22 + 0x8a8))();
      uVar18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar5 = FUN_022ee1a4(uVar8,uVar18,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_035846d4();
        if (((uVar5 & 1) == 0) &&
           ((uVar5 = FUN_0358471c(), (uVar5 & 1) == 0 || (uVar5 = FUN_035849ac(), (uVar5 & 1) != 0))
           )) {
          FUN_03406290(*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputManager_QueueEvent<TextEvent>__);
          if (unaff_x19 != 0) {
            FUN_03418c10();
            goto LAB_033ad15c;
          }
        }
        else {
          plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                             );
          FUN_033ae20c();
          lVar6 = (**(code **)(*unaff_x22 + 0x6d8))();
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar1) {
              uVar17 = 0;
              do {
                if (uVar1 <= uVar17) goto LAB_033adfa8;
                plVar9 = *(long **)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
                uVar8 = *(undefined8 *)
                         Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar8 = FUN_03579868(uVar8,0);
                lVar15 = FUN_034b9230(plVar9,uVar8,0);
                if (lVar15 == 0) {
                  lVar11 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                  ;
                  lVar11 = thunk_FUN_01f116d0(lVar15,uVar8);
                  if (lVar11 == 0) goto LAB_033ae004;
                }
                if (plVar9 == (long *)0x0) goto LAB_033adfa4;
                uVar8 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
                uVar18 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                uVar14 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
                if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)
                                      Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
                }
                FUN_033ae31c(plVar7,uVar8,uVar18,uVar14,lVar11);
                uVar17 = uVar17 + 1;
                uVar1 = *(uint *)(lVar6 + 0x18);
              } while ((int)uVar17 < (int)uVar1);
            }
            lVar6 = (**(code **)(*unaff_x22 + 0x858))();
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (0 < (int)uVar1) {
                uVar17 = 0;
                do {
                  if (uVar1 <= uVar17) goto LAB_033adfa8;
                  plVar9 = *(long **)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_033adfa4;
                  plVar12 = (long *)FUN_034b43c0(plVar9,0);
                  uVar5 = System_Console__SetOut(plVar12,0,0);
                  if ((uVar5 & 1) != 0) {
                    if ((plVar12 == (long *)0x0) ||
                       (lVar15 = (**(code **)(*plVar12 + 0x248))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x250)), lVar15 == 0)
                       ) goto LAB_033adfa4;
                    if (*(long *)(lVar15 + 0x18) == 0) {
                      uVar8 = *(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar8 = FUN_03579868(uVar8,0);
                      lVar15 = FUN_034b9230(plVar9,uVar8,0);
                      if (lVar15 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        uVar8 = *(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                        ;
                        lVar11 = thunk_FUN_01f116d0(lVar15,uVar8);
                        if (lVar11 == 0) {
LAB_033ae004:
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc(lVar15,uVar8);
                        }
                      }
                      uVar8 = (**(code **)(*plVar9 + 0x248))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x250));
                      uVar18 = (**(code **)(*plVar9 + 0x1a8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                      uVar14 = FUN_034b43e8(plVar9);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0
                                  ) == 0) {
                        thunk_FUN_01ee6d7c(*(long *)
                                            Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                          );
                      }
                      FUN_033ae31c(plVar7,uVar8,uVar18,uVar14,lVar11);
                    }
                  }
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  uVar17 = uVar17 + 1;
                } while ((int)uVar17 < (int)uVar1);
              }
              uVar8 = (**(code **)(*unaff_x22 + 0x8a8))();
              uVar18 = *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputManager_ExecuteGlobalCommand<UseWindowsGamingInputCommand>__
              ;
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*unaff_x29);
              }
              uVar18 = FUN_03579868(uVar18,0);
              uVar5 = FUN_022ee1a4(uVar8,uVar18,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__
                                  );
              puVar3 = Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeltaStateEvent>__;
              if ((uVar5 & 1) == 0) {
                return plVar7;
              }
              lVar6 = thunk_FUN_01f116d0();
              if (lVar6 != 0) {
                lVar15 = *(long *)puVar3;
                plVar9 = (long *)thunk_FUN_01f116d0();
                lVar6 = *plVar9;
                uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar5 != 0) {
                  piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar15) {
                      puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033adf60;
                    }
                    uVar5 = uVar5 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar5 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,0);
LAB_033adf60:
                uVar5 = (*(code *)*puVar10)(plVar9,plVar7,puVar10[1]);
                if ((uVar5 & 1) != 0) {
                  return plVar7;
                }
                FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputManager_QueueEvent<StateEvent>__);
                if (unaff_x19 != 0) {
                  FUN_03418c10();
                  return plVar7;
                }
              }
            }
          }
        }
      }
      else {
        plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Evaluate__
                                           );
        FUN_033ae294();
        puVar3 = 
        Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
        ;
        lVar6 = thunk_FUN_01f116d0();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        lVar6 = *(long *)puVar3;
        plVar9 = (long *)thunk_FUN_01f116d0();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        lVar15 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar5 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar6) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_033adda4;
            }
            uVar5 = uVar5 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_033adda4:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        uVar8 = (**(code **)(*unaff_x22 + 0x438))();
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x29);
        }
        uVar5 = FUN_03582560(uVar8,0,0);
        if ((((uVar5 & 1) != 0) && (lVar6 = (**(code **)(*unaff_x22 + 0x478))(), lVar6 != 0)) &&
           (*(long *)(lVar6 + 0x18) != 0)) {
          if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_033adfa8;
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
        }
        puVar4 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
        puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 != (long *)0x0) {
          do {
            lVar15 = *plVar9;
            lVar6 = *(long *)puVar3;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_033ade84;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_033ade84:
            uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar5 & 1) == 0) {
              return plVar7;
            }
            lVar15 = *plVar9;
            lVar6 = *(long *)puVar3;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_033adee4;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
LAB_033adee4:
            uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar4);
            }
            uVar18 = FUN_033aa338(uVar8,uVar18);
            uVar14 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
            uVar18 = System_Resources_ResourceReader__Dispose(uVar8,uVar18);
            if (plVar7 == (long *)0x0) break;
            (**(code **)(*plVar7 + 0x178))(plVar7,uVar14,uVar18,*(undefined8 *)(*plVar7 + 0x180));
          } while( true );
        }
      }
    }
    else {
      plVar7 = (long *)thunk_FUN_01f116d0();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                         );
      FUN_033ae20c();
      lVar6 = (**(code **)(*unaff_x22 + 0x478))();
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) < 2) {
LAB_033adfa8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar15 = *plVar7;
        uVar8 = *(undefined8 *)(lVar6 + 0x28);
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar5 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_033ada54;
            }
            uVar5 = uVar5 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar7,*(long *)
                                       Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,2
                              );
LAB_033ada54:
        plVar12 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
        if (plVar12 != (long *)0x0) {
          lVar6 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)
                   Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                 ) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_033adabc;
              }
              uVar5 = uVar5 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar5 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar12,*(long *)
                                          Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                                 ,0);
LAB_033adabc:
          plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar15 = *plVar12;
            lVar6 = *(long *)puVar3;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_033adb24;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar12,lVar6,0);
LAB_033adb24:
            uVar5 = (*(code *)*puVar10)(plVar12,puVar10[1]);
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
            if ((uVar5 & 1) == 0) {
              plVar7 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                 );
              if (plVar7 == (long *)0x0) {
                return plVar9;
              }
              lVar6 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar5 == 0) goto LAB_033add14;
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_033adcfc;
            }
            lVar15 = *plVar12;
            lVar6 = *(long *)puVar3;
            uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_033adb84;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar12,lVar6,1);
LAB_033adb84:
            plVar13 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
            lVar6 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                  puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_033adbe8;
                }
                uVar5 = uVar5 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01ecb238(plVar7,*(long *)
                                           Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                   ,0);
LAB_033adbe8:
            lVar6 = (*(code *)*puVar10)(plVar7,plVar13,puVar10[1]);
            if (lVar6 == 0) {
              uVar18 = *unaff_x27;
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar18 = FUN_03579868(uVar18,0);
              uVar5 = FUN_03582560(uVar8,uVar18,0);
              if ((uVar5 & 1) == 0) {
                lVar6 = FUN_03594a14(uVar8,0);
              }
              else {
                lVar6 = **(long **)(*(long *)
                                     Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                   + 0xb8);
              }
            }
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar18 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
            if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = System_Resources_ResourceReader__Dispose(uVar8,lVar6);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar9 + 0x178))(plVar9,uVar18,uVar14,*(undefined8 *)(*plVar9 + 0x180));
          } while( true );
        }
      }
    }
  }
LAB_033adfa4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar16 = piVar16 + 4;
    if (uVar5 == 0) break;
LAB_033adcfc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033add80;
    }
  }
LAB_033add14:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_033add80:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  return plVar9;
}


