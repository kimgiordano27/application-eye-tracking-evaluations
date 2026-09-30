/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<float>$$System.Collections.Generic.ICollection<T>.Add
ENTRY_POINT: 0256d2a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<float>__System_Collections_Generic_ICollection<T>_Add
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lStack_28 = param_2;
  uStack_20 = param_1;
  if ((DAT_0482fdfa & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fdfa = 1;
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar10 = (ulong)*(uint *)(plVar6[4] + 0xfc);
  lVar11 = (long)&uStack_40 - (uVar10 + 0xf & 0x1fffffff0);
  plStack_38 = &lStack_28;
  puStack_30 = &uStack_20;
  uStack_40 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar6 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_20,*(undefined8 *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_20,
                                *(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar6 = (long *)*puVar4;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0256d404;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_0256d404:
    uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    FUN_01bc5360(uStack_20,*(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar5);
    FUN_01bc52e4(uStack_20,*(undefined8 *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_0256d44c:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_20,
                                *(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar6 = (long *)*puVar4;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0256d4c4;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256d4c4:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_20,
                                  *(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80)
                                  + 0xe0);
      plVar6 = (long *)*puVar4;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar3 + 1) * 0x10 + 0x138);
            goto LAB_0256d588;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,1);
LAB_0256d588:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      plVar6 = (long *)thunk_FUN_01ee7388(uStack_20,
                                          *(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0)
                                                   + 0x80) + 0xa0);
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x18);
      uStack_18 = uVar5;
      lStack_10 = lVar11;
      (*(code *)puVar4[2])(*puVar4,puVar4,*plVar6,&uStack_18,lVar11);
      FUN_01f08810(uStack_20,
                   *(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80) + 0x20,lVar11,
                   uVar10);
      uVar9 = 1;
      FUN_01bc52e4(uStack_20,*(undefined8 *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80)
                   ,1);
      goto LAB_0256d628;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lStack_28 + 0x20) + 0xc0) + 8))(uStack_20);
    FUN_01bc5360(uStack_20,*(long *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 0);
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(uStack_20,*(undefined8 *)(**(long **)(*(long *)(lStack_28 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_0256d44c;
  }
  uVar9 = 0;
LAB_0256d628:
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


