/*
FUNCTION_NAME: FUN_033aa5f8
ENTRY_POINT: 033aa5f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033ab178) */
/* WARNING: Removing unreachable block (ram,0x033ab0a0) */

long FUN_033aa5f8(long *param_1,long param_2,long *param_3,long param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  
  if ((DAT_04832350 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AllocateEvent__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AppendEvent__);
    DAT_04832350 = 1;
  }
  if ((param_5 != 0) && (uVar1 = *(uint *)(param_5 + 0x18), 0 < (int)uVar1)) {
    lVar13 = 0;
    do {
      if (uVar1 <= (uint)lVar13) goto LAB_033ab15c;
      plVar14 = *(long **)(param_5 + 0x20 + lVar13 * 8);
      if (plVar14 == (long *)0x0) goto LAB_033ab250;
      uVar7 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
      if (((uVar7 & 1) != 0) &&
         (uVar7 = (**(code **)(*plVar14 + 0x198))(plVar14,param_1,*(undefined8 *)(*plVar14 + 0x1a0))
         , (uVar7 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x033aabe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (**(code **)(*plVar14 + 0x1a8))
                           (plVar14,param_3,param_1,param_2,*(undefined8 *)(*plVar14 + 0x1b0));
        return lVar13;
      }
      uVar1 = *(uint *)(param_5 + 0x18);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)uVar1);
  }
  uVar15 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar7 = FUN_03582560(param_1,uVar15,0);
  if ((uVar7 & 1) != 0) {
    if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033aa7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar13 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      return lVar13;
    }
    goto LAB_033ab250;
  }
  if (param_1 == (long *)0x0) goto LAB_033ab250;
  uVar7 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
  if ((uVar7 & 1) != 0) {
    if (param_3 != (long *)0x0) {
      uVar15 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                          );
      }
      lVar13 = FUN_0359e654(param_1,0);
      if (lVar13 != 0) {
        plVar14 = (long *)FUN_0358ffe4(lVar13,0);
        puVar6 = Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AllocateEvent__;
        puVar5 = Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_033aa870:
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar11 = *plVar14;
          lVar13 = *(long *)puVar4;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar13) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_033aa8c4;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar14,lVar13,0);
LAB_033aa8c4:
          uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          if ((uVar7 & 1) == 0) {
            plVar14 = (long *)thunk_FUN_01f116d0(plVar14,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                );
            if (plVar14 == (long *)0x0) goto LAB_033ab090;
            lVar13 = *plVar14;
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar7 == 0) goto LAB_033aaba0;
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_033aab88;
          }
          lVar11 = *plVar14;
          lVar13 = *(long *)puVar4;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar13) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_033aa924;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar14,lVar13,1);
LAB_033aa924:
          plVar9 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          lVar13 = FUN_03584bcc(param_1,uVar10,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar16 = *(long **)(lVar13 + 0x20);
          uVar10 = *(undefined8 *)puVar5;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar10 = FUN_03579868(uVar10,0);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar10,uVar10);
          }
          lVar13 = (**(code **)(*plVar16 + 0x208))
                             (plVar16,uVar10,0,*(undefined8 *)(*plVar16 + 0x210));
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar1) {
            uVar17 = 0;
            do {
              if (uVar1 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar16 = *(long **)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar16);
              }
              uVar7 = FUN_0340eec4(plVar16[2],0);
              if ((uVar7 & 1) == 0) {
                uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
                uVar7 = FUN_0340e364(uVar10,plVar16[2],1,0);
                if ((uVar7 & 1) != 0) {
                  uVar15 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                  goto LAB_033aa870;
                }
              }
              uVar1 = *(uint *)(lVar13 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar1);
          }
        } while( true );
      }
    }
    goto LAB_033ab250;
  }
  uVar15 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  uVar10 = *(undefined8 *)Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar10 = FUN_03579868(uVar10,0);
  puVar4 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
  uVar7 = FUN_022ee1a4(uVar15,uVar10,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_033aa338(param_1,param_2);
    if (param_3 != (long *)0x0) {
      uVar10 = (**(code **)(*param_3 + 0x2f8))(param_3,*(undefined8 *)(*param_3 + 0x300));
      lVar13 = FUN_033ab7d4(param_1,uVar15,uVar10,param_4,param_5);
      return lVar13;
    }
    goto LAB_033ab250;
  }
  uVar15 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  uVar10 = *(undefined8 *)
            Method_UnityEngine_InputSystem_LowLevel_InputEvent_GetNextInMemoryChecked__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar10 = FUN_03579868(uVar10,0);
  uVar7 = FUN_022ee1a4(uVar15,uVar10,*(undefined8 *)puVar4);
  if ((uVar7 & 1) != 0) {
    lVar13 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar7 = FUN_03582560(lVar13,0,0);
    if ((((uVar7 & 1) != 0) &&
        (lVar11 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480)),
        lVar11 != 0)) && (*(long *)(lVar11 + 0x18) != 0)) {
      if ((int)*(long *)(lVar11 + 0x18) == 0) goto LAB_033ab15c;
      lVar13 = *(long *)(lVar11 + 0x20);
    }
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03583338(lVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar15 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer__ctor__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_03579868(uVar15,0);
      if (lVar11 == 0) goto LAB_033ab250;
      plVar14 = (long *)FUN_03584c60(lVar11,*(undefined8 *)
                                             Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AppendEvent__
                                     ,0x18,0);
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,1);
      if (plVar9 == (long *)0x0) goto LAB_033ab250;
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_033ab180;
      if ((int)plVar9[3] == 0) goto LAB_033ab15c;
      plVar9[4] = lVar13;
      thunk_FUN_01f51358(plVar9 + 4,lVar13);
      if (plVar14 == (long *)0x0) goto LAB_033ab250;
      lVar13 = (**(code **)(*plVar14 + 0x408))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 0x410));
      puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      plVar14 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,4);
      if (plVar14 == (long *)0x0) goto LAB_033ab250;
      if ((param_2 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(param_2,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0)) {
LAB_033ab180:
        uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar15,0);
      }
      if ((int)plVar14[3] == 0) {
LAB_033ab15c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar14[4] = param_2;
      thunk_FUN_01f51358();
      if ((param_3 != (long *)0x0) &&
         (lVar11 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
      goto LAB_033ab180;
      if (*(uint *)(plVar14 + 3) < 2) goto LAB_033ab15c;
      plVar14[5] = (long)param_3;
      thunk_FUN_01f51358(plVar14 + 5,param_3);
      if ((param_4 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(param_4,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
      goto LAB_033ab180;
      if (*(uint *)(plVar14 + 3) < 3) goto LAB_033ab15c;
      plVar14[6] = param_4;
      thunk_FUN_01f51358();
      if ((param_5 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(param_5,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
      goto LAB_033ab180;
      if (*(uint *)(plVar14 + 3) < 4) goto LAB_033ab15c;
      plVar14[7] = param_5;
      thunk_FUN_01f51358(plVar14 + 7,param_5);
      if (lVar13 == 0) goto LAB_033ab250;
      lVar13 = FUN_034b2bf4(lVar13,0,plVar14,0);
      uVar7 = FUN_035841e4(param_1,0);
      if ((uVar7 & 1) != 0) {
        return lVar13;
      }
      uVar15 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
      uVar10 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar10 = FUN_03579868(uVar10,0);
      uVar7 = FUN_022ee1a4(uVar15,uVar10,*(undefined8 *)puVar4);
      if ((uVar7 & 1) != 0) {
        plVar14 = (long *)FUN_01f08890(*(undefined8 *)puVar5,1);
        if (plVar14 != (long *)0x0) {
          if ((lVar13 != 0) &&
             (lVar11 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
          goto LAB_033ab180;
          if ((int)plVar14[3] != 0) {
            plVar14[4] = lVar13;
            thunk_FUN_01f51358(plVar14 + 4,lVar13);
            lVar13 = FUN_035949e4(param_1,plVar14,0);
            return lVar13;
          }
          goto LAB_033ab15c;
        }
        goto LAB_033ab250;
      }
    }
  }
  uVar7 = FUN_035846d4(param_1,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_0358471c(param_1,0);
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_035849ac(param_1,0), (uVar7 & 1) != 0)) {
      if (param_3 != (long *)0x0) {
        uVar15 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar13 = FUN_034fefcc(uVar15,param_1,0);
        return lVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_2 = FUN_03594a14(param_1,0);
    if (param_3 != (long *)0x0) {
      uVar15 = (**(code **)(*param_3 + 0x2f8))(param_3,*(undefined8 *)(*param_3 + 0x300));
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
      }
      goto LAB_033aafe4;
    }
  }
  else if (param_3 != (long *)0x0) {
    uVar15 = (**(code **)(*param_3 + 0x2f8))(param_3,*(undefined8 *)(*param_3 + 0x300));
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
    }
LAB_033aafe4:
    lVar13 = FUN_033ab9ec(param_1,param_2,uVar15,param_4,param_5);
    return lVar13;
  }
LAB_033ab250:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_033aab88:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033ab084;
    }
  }
LAB_033aaba0:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_033ab084:
  (*(code *)*puVar8)(plVar14,puVar8[1]);
LAB_033ab090:
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NavMeshAgent>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_033aa338(param_1,param_2);
  lVar13 = FUN_033ab388(param_1,uVar10,uVar15,param_4);
  return lVar13;
}


