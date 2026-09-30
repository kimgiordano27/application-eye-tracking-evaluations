/*
FUNCTION_NAME: FUN_03bf55f8
ENTRY_POINT: 03bf55f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03bf5c04) */
/* WARNING: Removing unreachable block (ram,0x03bf59e8) */

void FUN_03bf55f8(long param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined2 uVar20;
  undefined4 local_68 [2];
  
  if ((DAT_04839aa1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(StringLiteral_14174);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_RemoveControlLayout__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_14175);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_14176);
    thunk_FUN_01efb3a4(Method_System_Collections_Comparer_GetObjectData__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04839aa1 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar15 = thunk_FUN_01f117cc();
    uVar16 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    FUN_034efd20(uVar15,uVar16,0);
  }
  else {
    uVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar3 = Method_System_Collections_Comparer_GetObjectData__;
    if ((uVar9 & 1) != 0) {
      plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_InputManager_RemoveControlLayout__
                                          );
      FUN_034dd008(plVar10,param_2,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_03b5ac9c(0);
      puVar3 = StringLiteral_14176;
      if (lVar11 != 0) {
        iVar2 = *(int *)(lVar11 + 0x20);
        if (*(int *)(*(long *)StringLiteral_14176 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)StringLiteral_14176);
        }
        local_68[0] = 0;
        FUN_03b44b80(local_68,0x49,0x45,0x56,0x54,0);
        puVar4 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x238))(plVar10,local_68[0],*(undefined8 *)(*plVar10 + 0x240));
          (**(code **)(*plVar10 + 0x238))
                    (plVar10,**(undefined4 **)(*(long *)puVar3 + 0xb8),
                     *(undefined8 *)(*plVar10 + 0x240));
          (**(code **)(*plVar10 + 0x238))(plVar10,iVar2 == 2,*(undefined8 *)(*plVar10 + 0x240));
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          uVar7 = FUN_04039fb4(0);
          (**(code **)(*plVar10 + 0x238))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x240));
          (**(code **)(*plVar10 + 0x268))
                    (plVar10,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(*plVar10 + 0x270));
          (**(code **)(*plVar10 + 0x268))
                    (plVar10,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(*plVar10 + 0x270));
          plVar12 = (long *)FUN_03bf5cfc(param_1);
          puVar6 = StringLiteral_14175;
          puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          puVar3 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar11 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03bf5884;
                }
                uVar9 = uVar9 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar5,0);
LAB_03bf5884:
            uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar9 & 1) == 0) goto LAB_03bf5978;
            lVar11 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03bf58e0;
                }
                uVar9 = uVar9 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar6,0);
LAB_03bf58e0:
            lVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if (lVar11 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined2 *)(lVar11 + 4);
            }
            lVar14 = FUN_01f08890(*(undefined8 *)puVar3,uVar20);
            if (lVar14 == 0) {
              lVar18 = 0;
            }
            else {
              lVar18 = 0;
              if (*(int *)(lVar14 + 0x18) != 0) {
                lVar18 = lVar14 + 0x20;
              }
            }
            FUN_04037e20(lVar18,lVar11,uVar20,0);
            (**(code **)(*plVar10 + 0x1c8))(plVar10,lVar14,*(undefined8 *)(*plVar10 + 0x1d0));
          } while( true );
        }
      }
LAB_03bf5b68:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar15 = thunk_FUN_01f117cc();
    uVar16 = thunk_FUN_01efb3a4(StringLiteral_14177);
    uVar17 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    FUN_034efd98(uVar15,uVar16,uVar17,0);
  }
  uVar16 = thunk_FUN_01efb3a4(StringLiteral_14178);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar15,uVar16);
LAB_03bf5978:
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03bf59d0;
        }
        uVar9 = uVar9 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,0);
LAB_03bf59d0:
    (*(code *)*puVar13)(plVar12,puVar13[1]);
  }
  puVar3 = StringLiteral_14174;
  (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
  lVar11 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
  uVar8 = FUN_02294008(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)puVar3);
  (**(code **)(*plVar10 + 0x238))(plVar10,(ulong)uVar8,*(undefined8 *)(*plVar10 + 0x240));
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  if (0 < (int)uVar8) {
    uVar9 = 0;
    lVar14 = 0x20;
    do {
      lVar18 = *(long *)(param_1 + 0xc0);
      if (lVar18 == 0) goto LAB_03bf5b68;
      if (*(uint *)(lVar18 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar1 = (undefined4 *)(lVar18 + lVar14);
      (**(code **)(*plVar10 + 0x238))(plVar10,*puVar1,*(undefined8 *)(*plVar10 + 0x240));
      (**(code **)(*plVar10 + 0x288))
                (plVar10,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(*plVar10 + 0x290));
      (**(code **)(*plVar10 + 0x238))(plVar10,puVar1[4],*(undefined8 *)(*plVar10 + 0x240));
      (**(code **)(*plVar10 + 0x238))(plVar10,puVar1[5],*(undefined8 *)(*plVar10 + 0x240));
      lVar18 = *(long *)(puVar1 + 6);
      if (lVar18 == 0) {
        lVar18 = **(long **)(*(long *)puVar3 + 0xb8);
      }
      (**(code **)(*plVar10 + 0x288))(plVar10,lVar18,*(undefined8 *)(*plVar10 + 0x290));
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar8 != uVar9);
  }
  (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
  lVar14 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
  (**(code **)(*plVar10 + 600))(plVar10,lVar14 - lVar11,*(undefined8 *)(*plVar10 + 0x260));
  return;
}


