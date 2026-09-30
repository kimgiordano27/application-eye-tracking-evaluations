/*
FUNCTION_NAME: System.Resources.ResourceReader$$GetNamePosition
ENTRY_POINT: 033ad00c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 227
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033ae020) */

long * System_Resources_ResourceReader__GetNamePosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  int *piVar16;
  uint uVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long *plVar19;
  long *unaff_x22;
  long *unaff_x23;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long *unaff_x29;
  undefined4 uVar23;
  
  uVar18 = **(undefined8 **)(param_1 + 0xab8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar18,0);
  uVar4 = FUN_03582560();
  if ((uVar4 & 1) != 0) {
    unaff_x22 = (long *)thunk_FUN_01ecaf38();
  }
  if ((unaff_x20 != 0) && (uVar17 = *(uint *)(unaff_x20 + 0x18), 0 < (int)uVar17)) {
    lVar21 = 0;
    do {
      if (uVar17 <= (uint)lVar21) goto LAB_033adfa8;
      plVar19 = *(long **)(unaff_x20 + 0x20 + lVar21 * 8);
      if (plVar19 == (long *)0x0) goto LAB_033adfa4;
      uVar4 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
      if (((uVar4 & 1) != 0) &&
         (uVar4 = (**(code **)(*plVar19 + 0x198))
                            (plVar19,unaff_x22,*(undefined8 *)(*plVar19 + 0x1a0)), (uVar4 & 1) != 0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x033ad2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar19 = (long *)(**(code **)(*plVar19 + 0x1b8))(plVar19);
        return plVar19;
      }
      uVar17 = *(uint *)(unaff_x20 + 0x18);
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 < (int)uVar17);
  }
                    /* try { // try from 033ad0b8 to 034ad0c7 has its CatchHandler @ 033ad0cc */
  if (unaff_x23 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 033acc8c with catch @ 033ad0cc
                       catch() { ... } // from try @ 033ad0b8 with catch @ 033ad0cc */
                    /* try { // try from 033ad0d0 to 034ad0d3 has its CatchHandler @ 033ad4b0 */
                    /* try { // try from 033ad0d4 to 034ad0f3 has its CatchHandler @ 033ab940 */
                    /* catch() { ... } // from try @ 033ac000 with catch @ 033ad0d8 */
  uVar4 = FUN_03582560(unaff_x22,0,0);
  puVar3 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
                    /* catch() { ... } // from try @ 033acc6c with catch @ 033ad0dc */
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar18 = thunk_FUN_01f117cc();
    uVar22 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_InputManager_RegisterPrecompiledLayout<FastKeyboard>__
                               );
    FUN_034f6754(uVar18,uVar22,0);
    uVar22 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_InputManager_RegisterPrecompiledLayout<FastMouse>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar18,uVar22);
  }
  uVar18 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
                    /* try { // try from 033ad0f4 to 034ad10b has its CatchHandler @ 033ad14c */
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar18 = FUN_03579868(uVar18,0);
                    /* try { // try from 033ad10c to 034ad137 has its CatchHandler @ 033ab940 */
  uVar4 = FUN_03582560(unaff_x22,uVar18,0);
  if ((uVar4 & 1) == 0) {
    uVar18 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03579868(uVar18,0);
    uVar4 = FUN_03582560(unaff_x22,uVar18,0);
    if ((uVar4 & 1) == 0) {
      uVar18 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar4 = FUN_03582560(unaff_x22,uVar18,0);
      if ((uVar4 & 1) == 0) {
        uVar18 = *(undefined8 *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
        ;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_03579868(uVar18,0);
        uVar4 = FUN_03582560(unaff_x22,uVar18,0);
        if ((uVar4 & 1) != 0) {
          plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                              );
          if (*(long *)(*unaff_x23 + 0x40) ==
              *(long *)(*(long *)
                         Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                       + 0x40)) {
            puVar7 = (undefined4 *)thunk_FUN_01f11920();
            uVar23 = *puVar7;
            FUN_035ac8e8(plVar19,0);
            (**(code **)(*plVar19 + 0x288))(uVar23,plVar19,*(undefined8 *)(*plVar19 + 0x290));
            return plVar19;
          }
LAB_033adff4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        uVar18 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_03579868(uVar18,0);
        uVar4 = FUN_03582560(unaff_x22,uVar18,0);
        if ((uVar4 & 1) != 0) {
          plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                              );
          if (*(long *)(*unaff_x23 + 0x40) ==
              *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40)) {
            puVar8 = (undefined8 *)thunk_FUN_01f11920();
            uVar18 = *puVar8;
            FUN_035ac8e8(plVar19,0);
            (**(code **)(*plVar19 + 0x2a8))(uVar18,plVar19,*(undefined8 *)(*plVar19 + 0x2b0));
            return plVar19;
          }
          goto LAB_033adff4;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_033adfa4;
        uVar4 = (**(code **)(*unaff_x22 + 0x5c8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x5d0));
        if ((uVar4 & 1) == 0) {
          uVar18 = (**(code **)(*unaff_x22 + 0x8a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
          uVar22 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__
          ;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*unaff_x29);
          }
          uVar22 = FUN_03579868(uVar22,0);
          puVar2 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
          uVar4 = FUN_022ee1a4(uVar18,uVar22,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
          if ((uVar4 & 1) != 0) {
            plVar19 = (long *)thunk_FUN_01f116d0();
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                               );
            FUN_033ae20c();
            lVar21 = (**(code **)(*unaff_x22 + 0x478))
                               (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x480));
            if (lVar21 != 0) {
              if (*(uint *)(lVar21 + 0x18) < 2) {
LAB_033adfa8:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar14 = *plVar19;
              uVar18 = *(undefined8 *)(lVar21 + 0x28);
              uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar4 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                    goto LAB_033ada54;
                  }
                  uVar4 = uVar4 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar4 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01ecb238(plVar19,*(long *)
                                             Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                    ,2);
LAB_033ada54:
              plVar11 = (long *)(*(code *)*puVar8)(plVar19,puVar8[1]);
              if (plVar11 != (long *)0x0) {
                lVar21 = *plVar11;
                uVar4 = (ulong)*(ushort *)(lVar21 + 0x12e);
                if (uVar4 != 0) {
                  piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) ==
                        *(long *)
                         Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                       ) {
                      puVar8 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033adabc;
                    }
                    uVar4 = uVar4 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar4 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01ecb238(plVar11,*(long *)
                                               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                                      ,0);
LAB_033adabc:
                plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
                puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                do {
                  lVar14 = *plVar11;
                  lVar21 = *(long *)puVar2;
                  uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar4 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar21) {
                        puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033adb24;
                      }
                      uVar4 = uVar4 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar21,0);
LAB_033adb24:
                  uVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
                  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                  if ((uVar4 & 1) == 0) {
                    plVar19 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  );
                    if (plVar19 == (long *)0x0) {
                      return plVar9;
                    }
                    lVar21 = *plVar19;
                    uVar4 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar4 == 0) goto LAB_033add14;
                    piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    goto LAB_033adcfc;
                  }
                  lVar14 = *plVar11;
                  lVar21 = *(long *)puVar2;
                  uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar4 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar21) {
                        puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_033adb84;
                      }
                      uVar4 = uVar4 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar21,1);
LAB_033adb84:
                  plVar12 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
                  lVar21 = *plVar19;
                  uVar4 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar4 != 0) {
                    piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
                        puVar8 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033adbe8;
                      }
                      uVar4 = uVar4 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_01ecb238(plVar19,*(long *)
                                                 Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                                        ,0);
LAB_033adbe8:
                  lVar21 = (*(code *)*puVar8)(plVar19,plVar12,puVar8[1]);
                  if (lVar21 == 0) {
                    uVar22 = *(undefined8 *)puVar3;
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar22 = FUN_03579868(uVar22,0);
                    uVar4 = FUN_03582560(uVar18,uVar22,0);
                    if ((uVar4 & 1) == 0) {
                      lVar21 = FUN_03594a14(uVar18,0);
                    }
                    else {
                      lVar21 = **(long **)(*(long *)
                                            Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                          + 0xb8);
                    }
                  }
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar22 = (**(code **)(*plVar12 + 0x168))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar13 = System_Resources_ResourceReader__Dispose(uVar18,lVar21);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  (**(code **)(*plVar9 + 0x178))
                            (plVar9,uVar22,uVar13,*(undefined8 *)(*plVar9 + 0x180));
                } while( true );
              }
            }
LAB_033adfa4:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar18 = (**(code **)(*unaff_x22 + 0x8a8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
          uVar22 = *(undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*unaff_x29);
          }
          uVar22 = FUN_03579868(uVar22,0);
          uVar4 = FUN_022ee1a4(uVar18,uVar22,*(undefined8 *)puVar2);
          if ((uVar4 & 1) != 0) {
            plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Evaluate__
                                                );
            FUN_033ae294();
            puVar3 = 
            Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
            ;
            lVar21 = thunk_FUN_01f116d0();
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            lVar21 = *(long *)puVar3;
            plVar9 = (long *)thunk_FUN_01f116d0();
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            lVar14 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar4 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar21) {
                  puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_033adda4;
                }
                uVar4 = uVar4 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar4 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar21,0);
LAB_033adda4:
            plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
            uVar18 = (**(code **)(*unaff_x22 + 0x438))
                               (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x440));
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x29);
            }
            uVar4 = FUN_03582560(uVar18,0,0);
            if ((((uVar4 & 1) != 0) &&
                (lVar21 = (**(code **)(*unaff_x22 + 0x478))
                                    (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x480)), lVar21 != 0))
               && (*(long *)(lVar21 + 0x18) != 0)) {
              if ((int)*(long *)(lVar21 + 0x18) == 0) goto LAB_033adfa8;
              uVar18 = *(undefined8 *)(lVar21 + 0x20);
            }
            puVar1 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
            puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar9 != (long *)0x0) {
              do {
                lVar14 = *plVar9;
                lVar21 = *(long *)puVar3;
                uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar4 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar21) {
                      puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033ade84;
                    }
                    uVar4 = uVar4 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar4 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar21,0);
LAB_033ade84:
                uVar4 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                if ((uVar4 & 1) == 0) {
                  return plVar19;
                }
                lVar14 = *plVar9;
                lVar21 = *(long *)puVar3;
                uVar4 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar4 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar21) {
                      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_033adee4;
                    }
                    uVar4 = uVar4 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar4 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar21,1);
LAB_033adee4:
                uVar22 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                uVar22 = FUN_033aa338(uVar18,uVar22);
                uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                uVar22 = System_Resources_ResourceReader__Dispose(uVar18,uVar22);
                if (plVar19 == (long *)0x0) break;
                (**(code **)(*plVar19 + 0x178))
                          (plVar19,uVar13,uVar22,*(undefined8 *)(*plVar19 + 0x180));
              } while( true );
            }
            goto LAB_033adfa4;
          }
          uVar4 = FUN_035846d4(unaff_x22,0);
          if (((uVar4 & 1) != 0) ||
             ((uVar4 = FUN_0358471c(unaff_x22,0), (uVar4 & 1) != 0 &&
              (uVar4 = FUN_035849ac(unaff_x22,0), (uVar4 & 1) == 0)))) {
            plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                                                );
            FUN_033ae20c();
            lVar21 = (**(code **)(*unaff_x22 + 0x6d8))
                               (unaff_x22,0x14,*(undefined8 *)(*unaff_x22 + 0x6e0));
            if (lVar21 != 0) {
              uVar17 = *(uint *)(lVar21 + 0x18);
              if (0 < (int)uVar17) {
                uVar20 = 0;
                do {
                  if (uVar17 <= uVar20) goto LAB_033adfa8;
                  plVar9 = *(long **)(lVar21 + (long)(int)uVar20 * 8 + 0x20);
                  uVar18 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar18 = FUN_03579868(uVar18,0);
                  lVar14 = FUN_034b9230(plVar9,uVar18,0);
                  if (lVar14 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    uVar18 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                    ;
                    lVar10 = thunk_FUN_01f116d0(lVar14,uVar18);
                    if (lVar10 == 0) goto LAB_033ae004;
                  }
                  if (plVar9 == (long *)0x0) goto LAB_033adfa4;
                  uVar18 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
                  uVar22 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                  uVar13 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
                  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
                  }
                  FUN_033ae31c(plVar19,uVar18,uVar22,uVar13,lVar10);
                  uVar20 = uVar20 + 1;
                  uVar17 = *(uint *)(lVar21 + 0x18);
                } while ((int)uVar20 < (int)uVar17);
              }
              lVar21 = (**(code **)(*unaff_x22 + 0x858))
                                 (unaff_x22,0x14,*(undefined8 *)(*unaff_x22 + 0x860));
              if (lVar21 != 0) {
                uVar17 = *(uint *)(lVar21 + 0x18);
                if (0 < (int)uVar17) {
                  uVar20 = 0;
                  do {
                    if (uVar17 <= uVar20) goto LAB_033adfa8;
                    plVar9 = *(long **)(lVar21 + (long)(int)uVar20 * 8 + 0x20);
                    if (plVar9 == (long *)0x0) goto LAB_033adfa4;
                    plVar11 = (long *)FUN_034b43c0(plVar9,0);
                    uVar4 = System_Console__SetOut(plVar11,0,0);
                    if ((uVar4 & 1) != 0) {
                      if ((plVar11 == (long *)0x0) ||
                         (lVar14 = (**(code **)(*plVar11 + 0x248))
                                             (plVar11,*(undefined8 *)(*plVar11 + 0x250)),
                         lVar14 == 0)) goto LAB_033adfa4;
                      if (*(long *)(lVar14 + 0x18) == 0) {
                        uVar18 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
                        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar18 = FUN_03579868(uVar18,0);
                        lVar14 = FUN_034b9230(plVar9,uVar18,0);
                        if (lVar14 == 0) {
                          lVar10 = 0;
                        }
                        else {
                          uVar18 = *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeviceConfigurationEvent>__
                          ;
                          lVar10 = thunk_FUN_01f116d0(lVar14,uVar18);
                          if (lVar10 == 0) {
LAB_033ae004:
                    /* WARNING: Subroutine does not return */
                            FUN_01f08cfc(lVar14,uVar18);
                          }
                        }
                        uVar18 = (**(code **)(*plVar9 + 0x248))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x250));
                        uVar22 = (**(code **)(*plVar9 + 0x1a8))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                        uVar13 = FUN_034b43e8(plVar9);
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c(*(long *)
                                              Method_UnityEngine_Component_GetComponent<NavMeshAgent>__
                                            );
                        }
                        FUN_033ae31c(plVar19,uVar18,uVar22,uVar13,lVar10);
                      }
                    }
                    uVar17 = *(uint *)(lVar21 + 0x18);
                    uVar20 = uVar20 + 1;
                  } while ((int)uVar20 < (int)uVar17);
                }
                uVar18 = (**(code **)(*unaff_x22 + 0x8a8))
                                   (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x8b0));
                uVar22 = *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputManager_ExecuteGlobalCommand<UseWindowsGamingInputCommand>__
                ;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*unaff_x29);
                }
                uVar22 = FUN_03579868(uVar22,0);
                uVar4 = FUN_022ee1a4(uVar18,uVar22,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__
                                    );
                puVar3 = Method_UnityEngine_InputSystem_InputManager_QueueEvent<DeltaStateEvent>__;
                if ((uVar4 & 1) == 0) {
                  return plVar19;
                }
                lVar21 = thunk_FUN_01f116d0();
                if (lVar21 != 0) {
                  lVar14 = *(long *)puVar3;
                  plVar9 = (long *)thunk_FUN_01f116d0();
                  lVar21 = *plVar9;
                  uVar4 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar4 != 0) {
                    piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == lVar14) {
                        puVar8 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_033adf60;
                      }
                      uVar4 = uVar4 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,0);
LAB_033adf60:
                  uVar4 = (*(code *)*puVar8)(plVar9,plVar19,puVar8[1]);
                  if ((uVar4 & 1) != 0) {
                    return plVar19;
                  }
                  FUN_03406290(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_QueueEvent<StateEvent>__
                               ,unaff_x22,0);
                  if (unaff_x19 != 0) {
                    FUN_03418c10();
                    return plVar19;
                  }
                }
              }
            }
            goto LAB_033adfa4;
          }
          FUN_03406290(*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputManager_QueueEvent<TextEvent>__,
                       unaff_x22,0);
          if (unaff_x19 == 0) goto LAB_033adfa4;
          FUN_03418c10();
        }
        lVar21 = (**(code **)(*unaff_x23 + 0x168))();
        plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                            );
        FUN_035ac8e8(plVar19,0);
        plVar19[2] = lVar21;
        goto LAB_033ad15c;
      }
      plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                          );
      if (*(long *)(*unaff_x23 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_033adff4;
      puVar6 = (uint *)thunk_FUN_01f11920();
      uVar17 = *puVar6;
      FUN_035ac8e8(plVar19,0);
      pcVar15 = *(code **)(*plVar19 + 0x268);
      uVar18 = *(undefined8 *)(*plVar19 + 0x270);
    }
    else {
      plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__
                                          );
      if (*(long *)(*unaff_x23 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_033adff4;
      pbVar5 = (byte *)thunk_FUN_01f11920();
      uVar17 = (uint)*pbVar5;
      FUN_035ac8e8(plVar19,0);
      pcVar15 = *(code **)(*plVar19 + 0x2c8);
      uVar18 = *(undefined8 *)(*plVar19 + 0x2d0);
    }
    (*pcVar15)(plVar19,uVar17,uVar18);
  }
  else {
    plVar19 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_UnityEngine_ExpressionEvaluator_Evaluate<double>__)
    ;
    if (*unaff_x23 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
    goto LAB_033adff4;
    FUN_035ac8e8(plVar19,0);
    plVar19[2] = (long)unaff_x23;
LAB_033ad15c:
    thunk_FUN_01f51358();
  }
  return plVar19;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar16 = piVar16 + 4;
    if (uVar4 == 0) break;
LAB_033adcfc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033add80;
    }
  }
LAB_033add14:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar19,*(long *)puVar1,0);
LAB_033add80:
  (*(code *)*puVar8)(plVar19,puVar8[1]);
  return plVar9;
}


