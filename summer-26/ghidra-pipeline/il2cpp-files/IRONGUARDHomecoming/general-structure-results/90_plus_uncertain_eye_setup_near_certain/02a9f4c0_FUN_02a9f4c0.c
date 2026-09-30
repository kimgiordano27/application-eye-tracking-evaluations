/*
FUNCTION_NAME: FUN_02a9f4c0
ENTRY_POINT: 02a9f4c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02a9f4c0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *__dest;
  ulong __n;
  void *__s;
  void *__src;
  long *plVar12;
  long *local_b0 [3];
  long local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined4 *puStack_80;
  long local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_98 = param_2;
  uStack_90 = param_1;
  if ((DAT_0483102a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483102a = 1;
  }
  plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar12[6] + 0xfc);
  uVar1 = *(uint *)(plVar12[9] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)local_b0 - uVar9);
  __dest = (undefined8 *)((long)__src - uVar9);
  lVar11 = (long)__dest - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  __s = (void *)(lVar11 - uVar9);
  memset(__s,0,__n);
  local_b0[1] = &local_98;
  local_b0[2] = &uStack_90;
  local_b0[0] = (long *)0x0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar12 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_90,*(undefined8 *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    FUN_01bc52e4(uStack_90,*(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_90,
                                *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar12 = (long *)*puVar4;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_98 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02a9f69c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_02a9f69c:
    uVar6 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    FUN_01bc5360(uStack_90,*(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) + 0x100,
                 uVar6);
    FUN_01bc52e4(uStack_90,*(undefined8 *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02a9f6e4:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_90,
                                *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) +
                                0x100);
    plVar12 = (long *)*puVar4;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02a9f75c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02a9f75c:
    uVar9 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_90,
                                  *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) +
                                  0x100);
      plVar12 = (long *)*puVar4;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_98 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_02a9f83c;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_02a9f83c:
      lVar7 = *(long *)(lVar7 + 8);
      local_88 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,&local_88,__src);
      memcpy(__s,__src,__n);
      piVar3 = (int *)thunk_FUN_01ee7388(uStack_90,
                                         *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) +
                                                  0x80) + 0xe0);
      if (*piVar3 == 0x7fffffff) {
        uVar6 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,local_98);
      }
      FUN_01bc52e4(uStack_90,*(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) + 0xe0
                   ,*piVar3 + 1);
      plVar12 = (long *)thunk_FUN_01ee7388(uStack_90,
                                           *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0)
                                                    + 0x80) + 0xa0);
      lVar7 = *plVar12;
      memcpy(__dest,__s,__n);
      puVar5 = (undefined4 *)
               thunk_FUN_01ee7388(uStack_90,
                                  *(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(local_98 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar8 + 0x40);
      local_6c = *puVar5;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x30) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      puStack_80 = &local_6c;
      local_88 = __dest;
      local_78 = lVar11;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar7,&local_88,lVar11);
      FUN_01f08810(uStack_90,*(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,lVar11,(ulong)uVar1);
      uVar10 = 1;
      FUN_01bc52e4(uStack_90,*(undefined8 *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80),
                   1);
      goto LAB_02a9f994;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_98 + 0x20) + 0xc0) + 8))(uStack_90);
    FUN_01bc5360(uStack_90,*(long *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80) + 0x100,
                 0);
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(uStack_90,*(undefined8 *)(**(long **)(*(long *)(local_98 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_02a9f6e4;
  }
  uVar10 = 0;
LAB_02a9f994:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


