/*
FUNCTION_NAME: FUN_0256d2a0
ENTRY_POINT: 0256d2a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_0256d2a0(undefined8 param_1,long param_2)

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
  undefined8 local_80;
  long *plStack_78;
  undefined8 *local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = param_2;
  uStack_60 = param_1;
  if ((DAT_0482fdfa & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fdfa = 1;
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar10 = (ulong)*(uint *)(plVar6[4] + 0xfc);
  lVar11 = (long)&local_80 - (uVar10 + 0xf & 0x1fffffff0);
  plStack_78 = &local_68;
  local_70 = &uStack_60;
  local_80 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar6 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_60,
                                *(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) +
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
    FUN_01bc5360(uStack_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar5);
    FUN_01bc52e4(uStack_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_0256d44c:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_60,
                                *(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) +
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
               thunk_FUN_01ee7388(uStack_60,
                                  *(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
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
      plVar6 = (long *)thunk_FUN_01ee7388(uStack_60,
                                          *(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) +
                                                   0x80) + 0xa0);
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x18);
      local_58 = uVar5;
      lStack_50 = lVar11;
      (*(code *)puVar4[2])(*puVar4,puVar4,*plVar6,&local_58,lVar11);
      FUN_01f08810(uStack_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,lVar11,uVar10);
      uVar9 = 1;
      FUN_01bc52e4(uStack_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                   1);
      goto LAB_0256d628;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 8))(uStack_60);
    FUN_01bc5360(uStack_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0xe0,0
                );
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(uStack_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_0256d44c;
  }
  uVar9 = 0;
LAB_0256d628:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


