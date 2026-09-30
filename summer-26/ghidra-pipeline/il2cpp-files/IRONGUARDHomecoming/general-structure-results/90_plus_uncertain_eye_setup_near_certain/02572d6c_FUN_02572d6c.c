/*
FUNCTION_NAME: FUN_02572d6c
ENTRY_POINT: 02572d6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02572d6c(undefined8 param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_70;
  long *plStack_68;
  undefined8 *local_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  uStack_50 = param_1;
  if ((DAT_0482fe0a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe0a = 1;
  }
  plVar5 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar9 = (ulong)*(uint *)(plVar5[2] + 0xfc);
  plStack_68 = &local_58;
  local_60 = &uStack_50;
  local_70 = 0;
  piVar2 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar5 + 0x80));
  if (*piVar2 == 0) {
    FUN_01bc52e4(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_50,
                                *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar5 = (long *)*puVar3;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02572ed0;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_02572ed0:
    uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    FUN_01bc5360(uStack_50,*(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0xa0,
                 uVar4);
    FUN_01bc52e4(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar5 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  else {
    if (*piVar2 != 1) {
LAB_02573104:
      uVar8 = 0;
      goto LAB_02573108;
    }
    FUN_01bc52e4(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar5 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  do {
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_50,
                                *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar10 = (long *)*puVar3;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *plVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02572f90;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*plVar5,0);
LAB_02572f90:
    uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 8))(uStack_50);
      FUN_01bc5360(uStack_50,*(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0xa0
                   ,0);
      goto LAB_02573104;
    }
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_50,
                                *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar10 = (long *)*puVar3;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *plVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar2 + 1) * 0x10 + 0x138);
          goto LAB_02573014;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*plVar5,1);
LAB_02573014:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    lVar6 = *(long *)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar6 = thunk_FUN_01f116d0(uVar4,lVar6);
  } while (lVar6 == 0);
  lVar6 = *(long *)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  uVar4 = FUN_01f08934(uVar4,lVar6,(long)&local_70 - (uVar9 + 0xf & 0x1fffffff0));
  FUN_01f08810(uStack_50,*(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0x20,
               uVar4,uVar9);
  uVar8 = 1;
  FUN_01bc52e4(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),1);
LAB_02573108:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


