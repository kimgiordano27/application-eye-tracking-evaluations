/*
FUNCTION_NAME: FUN_02581fe4
ENTRY_POINT: 02581fe4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02581fe4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong __n;
  void *__src;
  void *__dest;
  void *__s;
  long *plVar11;
  undefined8 local_90;
  long *plStack_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  void *local_68;
  char local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  if ((DAT_0482fe3e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe3e = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar11[7] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_90 - uVar9);
  __dest = (void *)((long)__src - uVar9);
  __s = (void *)((long)__dest - uVar9);
  memset(__s,0,__n);
  plStack_88 = &local_78;
  local_80 = &local_70;
  local_90 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    plVar11 = (long *)thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) +
                                                                       0xc0) + 0x80) + 0x60);
    lVar7 = *plVar11;
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x20);
    local_68 = (void *)*puVar5;
    (*(code *)puVar6[2])(*puVar6,puVar6,lVar7,&local_68,local_5c);
    if (local_5c[0] != '\0') {
      plVar11 = (long *)thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20)
                                                                         + 0xc0) + 0x80) + 0xe0);
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x30);
      local_68 = __src;
      (*(code *)puVar5[2])(*puVar5,puVar5,*plVar11,&local_68,__src);
      FUN_01f08810(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x20,
                   __src,__n);
      uVar10 = 1;
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),1
                  );
      goto LAB_025824d8;
    }
LAB_02582228:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_025822b8;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_025822b8:
    uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar4);
    FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02582300:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0x120);
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02582378;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02582378:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0)
                                                    + 0x80) + 0x120);
      plVar11 = (long *)*puVar5;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto FUN_02582458;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
FUN_02582458:
      lVar7 = *(long *)(lVar7 + 8);
      local_68 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_68,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      FUN_01f08810(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x20,
                   __dest,__n);
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),2
                  );
      uVar10 = 1;
      goto LAB_025824d8;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 8))(local_70);
    FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120,0
                );
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                   0xffffffff);
      goto LAB_02582228;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_02582300;
    }
  }
  uVar10 = 0;
LAB_025824d8:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


