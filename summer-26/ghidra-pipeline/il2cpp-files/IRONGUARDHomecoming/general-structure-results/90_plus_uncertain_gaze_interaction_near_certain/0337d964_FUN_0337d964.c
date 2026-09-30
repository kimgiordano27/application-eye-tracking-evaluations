/*
FUNCTION_NAME: FUN_0337d964
ENTRY_POINT: 0337d964
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0337e028) */

undefined4 FUN_0337d964(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if ((DAT_0483217d & 1) == 0) {
                    /* try { // try from 0337d99c to 0347d9fb has its CatchHandler @ 0337db24 */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<ITTSRuntimeCacheHandler>__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Image>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<InputField>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Interactable>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<BoxCollider>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<LineRenderer>__);
    DAT_0483217d = 1;
  }
                    /* try { // try from 0337da2c to 0347da33 has its CatchHandler @ 0337db10 */
  if (((param_2 != 0) && (plVar4 = *(long **)(param_2 + 0x18), plVar4 != (long *)0x0)) &&
     (lVar5 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)), lVar5 != 0))
  {
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,*(undefined4 *)(lVar5 + 0x18));
    puVar2 = Method_UnityEngine_GameObject_GetComponent<BoxCollider>__;
    puVar1 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
    if (0 < *(int *)(lVar5 + 0x18)) {
      uVar14 = 0;
      do {
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        FUN_03416d98(uVar7,0);
        if (*(uint *)(lVar5 + 0x18) <= uVar14) {
LAB_0337e014:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (param_3 == (long *)0x0) goto LAB_0337e130;
        lVar11 = *param_3;
        uVar17 = *(undefined8 *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
        uVar16 = *(undefined8 *)(param_2 + 0x30);
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
              goto LAB_0337db14;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,6);
LAB_0337db14:
        lVar11 = (*(code *)*puVar8)(param_3,uVar17,uVar16,param_4 & 1,puVar8[1]);
        if (plVar6 == (long *)0x0) goto LAB_0337e130;
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
          uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,0);
        }
        if (*(uint *)(plVar6 + 3) <= uVar14) goto LAB_0337e014;
        plVar15 = plVar6 + (long)(int)uVar14 + 4;
        *plVar15 = lVar11;
        thunk_FUN_01f51358(plVar15,lVar11);
        if (*(uint *)(plVar6 + 3) <= uVar14) goto LAB_0337e014;
        if (*plVar15 == 0) {
          plVar4 = *(long **)(param_2 + 0x18);
          if (plVar4 != (long *)0x0) {
            uVar16 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            plVar4 = *(long **)(param_2 + 0x10);
            if (plVar4 != (long *)0x0) {
              uVar17 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
              plVar4 = *(long **)(param_2 + 0x18);
              if (plVar4 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
                puVar1 = Method_UnityEngine_GameObject_GetComponent<LineRenderer>__;
                uVar17 = FUN_0340f334(*(undefined8 *)
                                       Method_UnityEngine_GameObject_GetComponent<LineRenderer>__,
                                      uVar17,uVar10,uVar7,0);
                uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                           );
                Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar10,uVar17,0);
                FUN_0337d514(param_1,uVar16,uVar10);
                plVar4 = *(long **)(param_2 + 0x10);
                if (plVar4 != (long *)0x0) {
                  uVar16 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
                  plVar4 = *(long **)(param_2 + 0x18);
                  if (plVar4 != (long *)0x0) {
                    uVar17 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0))
                    ;
                    uVar7 = FUN_0340f334(*(undefined8 *)puVar1,uVar16,uVar17,uVar7,0);
                    FUN_033a2f1c(uVar7,0);
                    return 0;
                  }
                }
              }
            }
          }
          goto LAB_0337e130;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < *(int *)(lVar5 + 0x18));
    }
    uVar12 = FUN_034b2ac0(plVar4,0);
    if ((uVar12 & 1) != 0) {
      uVar7 = FUN_02308ab0(plVar6,*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<ITTSRuntimeCacheHandler>__
                          );
      FUN_034b2bf4(plVar4,0,uVar7,0);
      return 1;
    }
    plVar15 = *(long **)(param_1 + 0x20);
    if (plVar15 != (long *)0x0) {
      lVar5 = *plVar15;
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_GameObject_GetComponent<Interactable>__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0337dd48;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar15,*(long *)
                                     Method_UnityEngine_GameObject_GetComponent<Interactable>__,0);
LAB_0337dd48:
      plVar15 = (long *)(*(code *)*puVar8)(plVar15,uVar7,puVar8[1]);
      if (plVar15 != (long *)0x0) {
        lVar5 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_UnityEngine_GameObject_GetComponent<Image>__) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0337ddbc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar15,*(long *)Method_UnityEngine_GameObject_GetComponent<Image>__,0
                             );
LAB_0337ddbc:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar3 = Method_UnityEngine_GameObject_GetComponent<InputField>__;
        puVar2 = Method_UnityEngine_GameObject_GetComponent<ITTSRuntimeCacheHandler>__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        do {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0337de48;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar1,0);
LAB_0337de48:
          uVar12 = (*(code *)*puVar8)(plVar15,puVar8[1]);
          if ((uVar12 & 1) == 0) {
            if (plVar15 == (long *)0x0) {
              return 1;
            }
            lVar5 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar12 == 0) goto LAB_0337dfc4;
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_0337dfac;
          }
          lVar5 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto FUN_0337dea4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
FUN_0337dea4:
          uVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
          uVar16 = FUN_02308ab0(plVar6,*(undefined8 *)puVar2);
          FUN_034b2bf4(plVar4,uVar7,uVar16,0);
        } while( true );
      }
    }
  }
LAB_0337e130:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0337dfac:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0337dfe0;
    }
  }
LAB_0337dfc4:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0337dfe0:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
  return 1;
}


