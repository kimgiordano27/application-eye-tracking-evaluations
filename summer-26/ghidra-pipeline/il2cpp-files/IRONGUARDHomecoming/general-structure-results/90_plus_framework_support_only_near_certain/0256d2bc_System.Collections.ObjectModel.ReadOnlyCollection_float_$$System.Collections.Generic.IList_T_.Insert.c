/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<float>$$System.Collections.Generic.IList<T>.Insert
ENTRY_POINT: 0256d2bc
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
System_Collections_ObjectModel_ReadOnlyCollection<float>__System_Collections_Generic_IList<T>_Insert
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x22 + 0x28);
  bVar2 = DAT_0482fdfa;
  *(long *)(unaff_x29 + -0x28) = param_2;
  *(undefined8 *)(unaff_x29 + -0x20) = param_1;
  if ((bVar2 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fdfa = 1;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar11 = (ulong)*(uint *)(plVar7[4] + 0xfc);
  lVar12 = (long)&stack0x00000000 - (uVar11 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x28;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar7 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar7 = (long *)*puVar4;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0256d404;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_0256d404:
    uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,uVar5);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_0256d44c:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar7 = (long *)*puVar4;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0256d4c4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0256d4c4:
    uVar9 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar7 = (long *)*puVar4;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar3 + 1) * 0x10 + 0x138);
            goto LAB_0256d588;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,1);
LAB_0256d588:
      uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      plVar7 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                   -0x28) + 0x20) +
                                                               0xc0) + 0x80) + 0xa0);
      lVar8 = *plVar7;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x18);
      uVar6 = *puVar4;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
      *(long *)(unaff_x29 + -0x10) = lVar12;
      (*(code *)puVar4[2])(uVar6,puVar4,lVar8,unaff_x29 + -0x18,lVar12);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x20,lVar12,uVar11);
      uVar10 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_0256d628;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x20));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,0);
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_0256d44c;
  }
  uVar10 = 0;
LAB_0256d628:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


