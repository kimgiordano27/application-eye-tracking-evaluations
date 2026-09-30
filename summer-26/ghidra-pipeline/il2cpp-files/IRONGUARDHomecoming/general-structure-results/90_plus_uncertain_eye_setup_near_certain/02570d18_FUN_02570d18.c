/*
FUNCTION_NAME: FUN_02570d18
ENTRY_POINT: 02570d18
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


undefined4 FUN_02570d18(undefined8 param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong __n;
  void *__dest;
  undefined8 *__dest_00;
  void *__s;
  void *__src;
  long *plVar9;
  long *aplStack_90 [4];
  long local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  uStack_68 = param_1;
  if ((DAT_0482fe04 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe04 = 1;
  }
  plVar9 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar9[6] + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)aplStack_90 - uVar7);
  __dest_00 = (undefined8 *)((long)__src - uVar7);
  __dest = (void *)((long)__dest_00 - uVar7);
  __s = (void *)((long)__dest - uVar7);
  memset(__s,0,__n);
  aplStack_90[2] = &local_70;
  aplStack_90[3] = &uStack_68;
  aplStack_90[1] = (long *)0x0;
  piVar2 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar9 + 0x80));
  if (*piVar2 == 0) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar9 = (long *)*puVar4;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02570ec0;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02570ec0:
    uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar3);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02570f08:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar9 = (long *)*puVar4;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02570f80;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02570f80:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      plVar9 = (long *)*puVar4;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_02571060;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(plVar9,lVar5,0);
LAB_02571060:
      lVar5 = *(long *)(lVar5 + 8);
      local_60 = __src;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,&local_60,__src);
      memcpy(__s,__src,__n);
      plVar9 = (long *)thunk_FUN_01ee7388(uStack_68,
                                          *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) +
                                                   0x80) + 0xa0);
      lVar5 = *plVar9;
      memcpy(__dest_00,__s,__n);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(local_70 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar6 + 0x40);
      if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      local_60 = __dest_00;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar5,&local_60,__dest_00);
      memcpy(__dest,__s,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      uVar8 = 1;
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   1);
      goto LAB_02571150;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 8))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,0
                );
  }
  else if (*piVar2 == 1) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_02570f08;
  }
  uVar8 = 0;
LAB_02571150:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


