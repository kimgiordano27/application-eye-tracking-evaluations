/*
FUNCTION_NAME: FUN_04136014
ENTRY_POINT: 04136014
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04136374) */
/* WARNING: Removing unreachable block (ram,0x04136560) */

void FUN_04136014(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  
  if ((DAT_0484080a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__)
    ;
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    DAT_0484080a = 1;
  }
  uVar7 = (**(code **)(*param_1 + 0x818))(param_1,*(undefined8 *)(*param_1 + 0x820));
  puVar5 = Method_System_Linq_Enumerable_Any<int>__;
  puVar4 = Method_System_Linq_Enumerable_Any<ISerializationDepender>__;
  puVar3 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (((uVar7 & 1) == 0) || ((int)param_1[0x85] != 2)) {
    return;
  }
  plVar8 = (long *)param_1[0x89];
  if (plVar8 != (long *)0x0) {
    iVar16 = 0;
    do {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if (plVar8 == (long *)0x0) break;
      lVar12 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_04136158;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,1);
LAB_04136158:
      iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar6 <= iVar16) {
        FUN_04138518(param_1);
        FUN_0422b58c(param_1,0);
        return;
      }
      plVar8 = (long *)param_1[0x89];
      if (plVar8 == (long *)0x0) break;
      iVar6 = (**(code **)(*plVar8 + 0x1f8))(plVar8,iVar16,*(undefined8 *)(*plVar8 + 0x200));
      plVar8 = (long *)param_1[0x89];
      if (plVar8 == (long *)0x0) break;
      uVar10 = (**(code **)(*plVar8 + 0x208))(plVar8,iVar16,*(undefined8 *)(*plVar8 + 0x210));
      plVar8 = (long *)FUN_04133c3c(param_1);
      if (plVar8 == (long *)0x0) break;
      lVar12 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04136208;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_04136208:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_0413621c:
      lVar12 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04136268;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_04136268:
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar7 & 1) != 0) {
        lVar12 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_041362c4;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_041362c4:
        plVar11 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)((long)plVar11 + 0x24) == iVar6) {
          (**(code **)(*plVar11 + 0x1b8))(plVar11,1,*(undefined8 *)(*plVar11 + 0x1c0));
        }
        goto LAB_0413621c;
      }
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0413635c;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0413635c:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if (param_1[0x8d] == 0) break;
      uVar7 = FUN_030bac7c(param_1[0x8d],iVar6,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
      if ((uVar7 & 1) == 0) {
        lVar12 = param_1[0x8d];
        if (lVar12 == 0) break;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
        }
        else {
          FUN_030ba904(lVar12,iVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = param_1[0x8e];
        if (lVar12 == 0) break;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = iVar16;
        }
        else {
          FUN_030ba904(lVar12,iVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = param_1[0x8f];
        if (lVar12 == 0) break;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)
                  Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar10;
          thunk_FUN_01f51358(puVar9,uVar10);
        }
        else {
          FUN_030f2bb4(lVar12,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar8 = (long *)param_1[0x89];
      iVar16 = iVar16 + 1;
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


