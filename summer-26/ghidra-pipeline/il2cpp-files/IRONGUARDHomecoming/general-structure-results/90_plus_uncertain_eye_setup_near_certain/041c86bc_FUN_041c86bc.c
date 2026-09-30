/*
FUNCTION_NAME: FUN_041c86bc
ENTRY_POINT: 041c86bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x041c8b90) */
/* WARNING: Removing unreachable block (ram,0x041c8af0) */

void FUN_041c86bc(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_4 = param_4 & 0xffffffff;
  if ((DAT_04840e3f & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458f350);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>_get_IsCompleted__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458f358);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e1a0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_CoreUnsafeUtils_CombineHashes<Hash128,_CoreUnsafeUtils_DefaultKeyGetter<Hash128>>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458f360);
    thunk_FUN_01efb3a4(PTR_DAT_0458f368);
    DAT_04840e3f = 1;
  }
  puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar10 = param_2[3];
  if (lVar10 == 0) goto LAB_041c8b8c;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  uVar15 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (param_3 != (long *)0x0) {
    lVar10 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_041c8834;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_3,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041c8834:
    puVar4 = Method_System_DateTime_AddTicks__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    plVar7 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
LAB_041c8868:
    do {
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_041c88bc;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_041c88bc:
        uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_041c8af4;
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_041c8abc;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_041c8aa4;
        }
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_041c8918;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_041c8918:
        uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        lVar10 = param_2[3];
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
        }
        else {
          FUN_030ba904(lVar10,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = param_4 & 1;
        param_4 = 1;
      } while (uVar12 != 0);
      uVar12 = FUN_0340eec4(uVar15,0);
      if ((uVar12 & 1) != 0) {
        plVar8 = (long *)FUN_041c8c84(param_2[2],uVar5);
        if (plVar8 != (long *)0x0) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar15 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          if (*(int *)(*(long *)
                        Method_UnityEngine_Rendering_CoreUnsafeUtils_CombineHashes<Hash128,_CoreUnsafeUtils_DefaultKeyGetter<Hash128>>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar8 = (long *)FUN_02442508(uVar15,0,0,*(undefined8 *)PTR_DAT_0458e1a0);
          if (plVar8 != (long *)0x0) {
            uVar15 = (**(code **)(*plVar8 + 0xb28))(plVar8,*(undefined8 *)(*plVar8 + 0xb30));
            param_4 = 0;
            goto LAB_041c8868;
          }
        }
        local_a0 = CONCAT44(local_a0._4_4_,uVar5);
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)
                                     Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                    ,&local_a0);
        uVar15 = FUN_03406290(*(undefined8 *)PTR_DAT_0458f368,uVar15,0);
        param_4 = 0;
        goto LAB_041c8868;
      }
      param_4 = 1;
      uVar15 = *(undefined8 *)PTR_DAT_0458f360;
    } while( true );
  }
  goto LAB_041c8af4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_041c8aa4:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_041c8ad8;
    }
  }
LAB_041c8abc:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_041c8ad8:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_041c8af4:
  lVar10 = param_2[3];
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458f350);
  FUN_02a47684(uVar9,param_2,*(undefined8 *)(*param_2 + 0x250),0);
  if (lVar10 != 0) {
    FUN_030bc24c(lVar10,uVar9,*(undefined8 *)PTR_DAT_0458f358);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_041c8fc8(&local_a0,uVar15,2);
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    return;
  }
LAB_041c8b8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


