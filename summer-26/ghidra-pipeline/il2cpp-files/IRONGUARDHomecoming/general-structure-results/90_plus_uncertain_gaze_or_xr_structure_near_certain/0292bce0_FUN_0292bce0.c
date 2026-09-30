/*
FUNCTION_NAME: FUN_0292bce0
ENTRY_POINT: 0292bce0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0292c01c) */
/* WARNING: Removing unreachable block (ram,0x0292c06c) */

void FUN_0292bce0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  
  if ((DAT_04830b77 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>_get_IsCompleted__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<InvalidConnection>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__
                      );
    DAT_04830b77 = 1;
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x768))(plVar4,*(undefined8 *)(*plVar4 + 0x770));
    if (lVar5 == param_2) {
      return;
    }
    lVar5 = param_1[8];
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      plVar4 = (long *)param_1[2];
      if ((plVar4 != (long *)0x0) &&
         (lVar5 = (**(code **)(*plVar4 + 0x768))(plVar4,*(undefined8 *)(*plVar4 + 0x770)),
         lVar5 != 0)) {
        uVar6 = FUN_0422f548(lVar5,param_2,param_1[8],0);
        if ((uVar6 & 1) == 0) {
          *(undefined4 *)(param_1 + 7) = 0xffffffff;
          return;
        }
        plVar4 = (long *)param_1[2];
        if (plVar4 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x768))(plVar4,*(undefined8 *)(*plVar4 + 0x770));
          if ((param_1[8] != 0) &&
             (uVar3 = FUN_030ba614(param_1[8],0,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__
                                  ), lVar5 != 0)) {
            lVar5 = FUN_0422f238(lVar5,uVar3,0);
            plVar4 = (long *)(**(code **)(*param_1 + 0x248))
                                       (param_1,*(undefined8 *)(*param_1 + 0x250));
            if (plVar4 != (long *)0x0) {
              lVar9 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
                    puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0292be94;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_01ecb238(plVar4,*(long *)
                                            Method_System_Linq_Enumerable_Any<ISerializationDepender>__
                                    ,0);
LAB_0292be94:
              plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
              puVar2 = Method_System_Linq_Enumerable_Any<int>__;
              puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar9 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_0292bf04;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0292bf04:
                uVar6 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                if ((uVar6 & 1) == 0) goto joined_r0x0292bfac;
                lVar9 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_0292bf60;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0292bf60:
                plVar8 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              } while (lVar9 != lVar5);
              *(int *)(param_1 + 7) = (int)plVar8[4];
joined_r0x0292bfac:
              if (plVar4 != (long *)0x0) {
                lVar5 = *plVar4;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_0292c004;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01ecb238(plVar4,*(long *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      ,0);
LAB_0292c004:
                (*(code *)*puVar7)(plVar4,puVar7[1]);
              }
              if (param_1[8] != 0) {
                System_Collections_Generic_List<DrawingData_MeshWithType>__System_Collections_IList_Remove
                          (param_1[8],0,
                           *(undefined8 *)Method_System_Linq_Enumerable_Any<InvalidConnection>__);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


