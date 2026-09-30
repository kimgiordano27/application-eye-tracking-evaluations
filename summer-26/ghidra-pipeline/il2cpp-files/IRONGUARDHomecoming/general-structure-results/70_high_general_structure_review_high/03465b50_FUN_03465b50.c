/*
FUNCTION_NAME: FUN_03465b50
ENTRY_POINT: 03465b50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_03465b50(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  undefined4 local_64;
  
  if ((DAT_0483298d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetListItem_Set__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    DAT_0483298d = 1;
  }
  puVar3 = Method_Unity_VisualScripting_SetListItem_Set__;
  local_64 = 0;
  if (param_2 != 0) {
    plVar19 = *(long **)(param_2 + 0x10);
    if (plVar19 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__ +
                       0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar19);
      }
    }
    if (param_1 != (long *)0x0) {
      lVar16 = *param_1;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)Method_Unity_VisualScripting_SetListItem_Set__) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_03465c64;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(param_1,*(long *)Method_Unity_VisualScripting_SetListItem_Set__,2);
LAB_03465c64:
      lVar16 = (*(code *)*puVar8)(param_1,puVar8[1]);
      if (lVar16 != 0) {
        if (plVar19 == (long *)0x0) goto LAB_034660e8;
        plVar9 = (long *)(**(code **)(*plVar19 + 1000))(plVar19,*(undefined8 *)(*plVar19 + 0x3f0));
        lVar16 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_03465ce0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar3,2);
LAB_03465ce0:
        uVar10 = (*(code *)*puVar8)(param_1,puVar8[1]);
        if (plVar9 == (long *)0x0) goto LAB_034660e8;
        uVar17 = (**(code **)(*plVar9 + 0x8b8))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x8c0));
        if ((uVar17 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
          uVar10 = thunk_FUN_01f117cc();
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__
                                     );
          FUN_03568188(uVar10,uVar14,0);
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar10,uVar14);
        }
      }
      uVar17 = FUN_0347e2e8(param_2,&local_64,0);
      if ((uVar17 & 1) == 0) {
        plVar19 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,0);
        return plVar19;
      }
      if (plVar19 != (long *)0x0) {
        lVar16 = (**(code **)(*plVar19 + 0x248))(plVar19,*(undefined8 *)(*plVar19 + 0x250));
        plVar19 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,local_64);
        puVar4 = Method_System_Runtime_Serialization_SerializationInfo_SetType__;
        puVar3 = Method_System_RuntimeType_InvokeMember__;
        if (lVar16 != 0) {
          uVar1 = *(uint *)(lVar16 + 0x18);
          if ((int)uVar1 < 1) {
            return plVar19;
          }
          uVar20 = 0;
          uVar21 = 0;
          do {
            if (uVar1 <= uVar20) goto LAB_034660ec;
            plVar9 = *(long **)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
            if (plVar9 == (long *)0x0) break;
            uVar17 = FUN_034b3c14(plVar9,0);
            if ((uVar17 & 1) == 0) {
LAB_03465dc4:
              lVar11 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (lVar11 == 0) break;
              uVar17 = FUN_035841f4(lVar11,0);
              if ((uVar17 & 1) != 0) {
                iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                lVar11 = *param_1;
                uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_03465e98;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,0);
LAB_03465e98:
                iVar6 = (*(code *)*puVar8)(param_1,puVar8[1]);
                if (iVar5 < iVar6) {
                  uVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                  lVar11 = *param_1;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                        goto LAB_03465f8c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,8);
LAB_03465f8c:
                  lVar11 = (*(code *)*puVar8)(param_1,uVar7,puVar8[1]);
                  if (lVar11 != 0) {
                    plVar12 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                                (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                    if ((plVar12 == (long *)0x0) ||
                       (plVar12 = (long *)(**(code **)(*plVar12 + 0x438))
                                                    (plVar12,*(undefined8 *)(*plVar12 + 0x440)),
                       plVar12 == (long *)0x0)) break;
                    uVar17 = (**(code **)(*plVar12 + 0x8b8))
                                       (plVar12,lVar11,*(undefined8 *)(*plVar12 + 0x8c0));
                    if ((uVar17 & 1) == 0) {
                      FUN_01bc50c0(plVar9);
                      uVar10 = (**(code **)(*plVar9 + 0x1c8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                      uVar14 = thunk_FUN_01efb3a4(
                                                 Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__
                                                 );
                      uVar15 = thunk_FUN_01efb3a4(
                                                 Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__
                                                 );
                      uVar10 = FUN_0340ebc0(uVar14,uVar10,uVar15,0);
                      thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
                      uVar14 = thunk_FUN_01f117cc();
                      FUN_03568188(uVar14,uVar10,0);
LAB_034661e4:
                      uVar10 = thunk_FUN_01efb3a4(
                                                 Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__
                                                 );
                    /* WARNING: Subroutine does not return */
                      FUN_01f08910(uVar14,uVar10);
                    }
                  }
                }
                else {
                  lVar11 = 0;
                }
                if (plVar19 == (long *)0x0) break;
                if ((lVar11 != 0) &&
                   (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar13 == 0)) {
                  uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar10,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar21) {
LAB_034660ec:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar13 = (long)(int)uVar21;
                plVar19[lVar13 + 4] = lVar11;
                uVar21 = uVar21 + 1;
                thunk_FUN_01f51358(plVar19 + lVar13 + 4,lVar11);
              }
            }
            else {
              lVar11 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (lVar11 == 0) break;
              uVar17 = FUN_035841f4(lVar11,0);
              if ((uVar17 & 1) != 0) goto LAB_03465dc4;
              iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
              lVar11 = *param_1;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_03465f14;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,0);
LAB_03465f14:
              iVar6 = (*(code *)*puVar8)(param_1,puVar8[1]);
              if (iVar5 < iVar6) {
                uVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                lVar11 = *param_1;
                uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                      goto LAB_03466048;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,8);
LAB_03466048:
                lVar11 = (*(code *)*puVar8)(param_1,uVar7,puVar8[1]);
                if (lVar11 != 0) {
                  uVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                  lVar13 = FUN_0347e0ec(param_2,uVar7,0);
                  if (lVar13 == 0) {
                    FUN_01bc50c0(plVar9);
                    uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0))
                    ;
                    uVar14 = thunk_FUN_01efb3a4(
                                               Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnValidateInput>__
                                               );
                    uVar15 = thunk_FUN_01efb3a4(
                                               Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                               );
                    uVar10 = FUN_0340ebc0(uVar14,uVar10,uVar15,0);
                    thunk_FUN_01efb3a4(
                                      Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                                      );
                    uVar14 = thunk_FUN_01f117cc();
                    FUN_03454990(uVar14,uVar10);
                    goto LAB_034661e4;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_03461bec(plVar9,lVar13,lVar11);
                }
              }
            }
            uVar1 = *(uint *)(lVar16 + 0x18);
            uVar20 = uVar20 + 1;
            if ((int)uVar1 <= (int)uVar20) {
              return plVar19;
            }
          } while( true );
        }
      }
    }
  }
LAB_034660e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


