/*
FUNCTION_NAME: FUN_025835a0
ENTRY_POINT: 025835a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_025835a0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  ulong __n;
  void *__dest;
  void *__src;
  ulong uVar11;
  void *__s;
  void *__s_00;
  long *plVar12;
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
  if ((DAT_0482fe42 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe42 = 1;
  }
  plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar12[9] + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_90 - uVar11);
  __dest = (void *)((long)__src - uVar11);
  __s_00 = (void *)((long)__dest - uVar11);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar11);
  memset(__s,0,__n);
  plStack_88 = &local_78;
  local_80 = &local_70;
  local_90 = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar12 + 0x80));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    plVar12 = (long *)thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) +
                                                                       0xc0) + 0x80) + 0x60);
    lVar8 = *plVar12;
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x28);
    local_68 = (void *)*puVar6;
    (*(code *)puVar7[2])(*puVar7,puVar7,lVar8,&local_68,local_5c);
    if (local_5c[0] != '\0') {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0)
                                                    + 0x80) + 0xe0);
      plVar12 = (long *)*puVar6;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02583804;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_02583804:
      uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120
                   ,uVar5);
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_0258384c;
    }
LAB_02583988:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    plVar12 = (long *)*puVar6;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02583a18;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_02583a18:
    uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar5);
    FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
LAB_02583a60:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0x120);
    plVar12 = (long *)*puVar6;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02583ad0;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_02583ad0:
    uVar11 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0)
                                                    + 0x80) + 0x120);
      plVar12 = (long *)*puVar6;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar4 * 0x10 + 0x138;
            goto LAB_02583bb0;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      lVar8 = FUN_01ecb238(plVar12,lVar8,0);
LAB_02583bb0:
      lVar8 = *(long *)(lVar8 + 8);
      local_68 = __src;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar12,&local_68,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      FUN_01f08810(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x20,
                   __dest,__n);
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),2
                  );
      uVar10 = 1;
      goto LAB_02583cc0;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x10))(local_70);
    FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120,0
                );
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
LAB_0258384c:
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0)
                                                    + 0x80) + 0x120);
      plVar12 = (long *)*puVar6;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_025838bc;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_025838bc:
      uVar11 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        puVar6 = (undefined8 *)
                 thunk_FUN_01ee7388(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x120);
        plVar12 = (long *)*puVar6;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar9 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar8) {
              lVar8 = lVar9 + (long)*piVar4 * 0x10 + 0x138;
              goto LAB_02583c40;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        lVar8 = FUN_01ecb238(plVar12,lVar8,0);
LAB_02583c40:
        lVar8 = *(long *)(lVar8 + 8);
        local_68 = __src;
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar12,&local_68,__src);
        memcpy(__s_00,__src,__n);
        memcpy(__dest,__s_00,__n);
        FUN_01f08810(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) +
                              0x20,__dest,__n);
        uVar10 = 1;
        FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80)
                     ,1);
        goto LAB_02583cc0;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 8))(local_70);
      FUN_01bc5360(local_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x120
                   ,0);
      goto LAB_02583988;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(local_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      goto LAB_02583a60;
    }
  }
  uVar10 = 0;
LAB_02583cc0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


