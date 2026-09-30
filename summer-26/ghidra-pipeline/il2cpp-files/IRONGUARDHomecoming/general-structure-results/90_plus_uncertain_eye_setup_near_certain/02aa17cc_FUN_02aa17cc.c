/*
FUNCTION_NAME: FUN_02aa17cc
ENTRY_POINT: 02aa17cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_02aa17cc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong __n;
  void *__dest;
  undefined8 *__src;
  ulong uVar10;
  void *__s;
  ulong __n_00;
  undefined8 *__dest_00;
  void *__s_00;
  long *plVar11;
  long alStack_b0 [3];
  long *plStack_98;
  undefined8 *local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  alStack_b0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_b0[1] + 0x28);
  local_88 = param_2;
  uStack_80 = param_1;
  if ((DAT_04831035 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831035 = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n_00 = (ulong)*(uint *)(plVar11[7] + 0xfc);
  __n = (ulong)*(uint *)(plVar11[0xe] + 0xfc);
  uVar8 = __n_00 + 0xf & 0x1fffffff0;
  puVar5 = (undefined8 *)((long)alStack_b0 - uVar8);
  __dest_00 = (undefined8 *)((long)puVar5 - uVar8);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)__dest_00 - uVar10);
  __dest = (void *)((long)__src - uVar10);
  __s_00 = (void *)((long)__dest - uVar8);
  memset(__s_00,0,__n_00);
  __s = (void *)((long)__s_00 - uVar10);
  memset(__s,0,__n);
  plStack_98 = &local_88;
  local_90 = &uStack_80;
  alStack_b0[2] = 0;
  piVar2 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*piVar2 == 0) {
    FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_80,
                                *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar11 = (long *)*puVar4;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
          goto FUN_02aa19bc;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
FUN_02aa19bc:
    uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    FUN_01bc5360(uStack_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar3);
    FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_02aa1a20;
  }
  if (*piVar2 == 1) {
    FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    do {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_80,
                                  *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                  0x100);
      plVar11 = (long *)*puVar4;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02aa1d00;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02aa1d00:
      uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        puVar5 = (undefined8 *)
                 thunk_FUN_01ee7388(uStack_80,
                                    *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80)
                                    + 0x100);
        plVar11 = (long *)*puVar5;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x60);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_02aa1dfc;
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02aa1de4;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 8))(uStack_80);
      FUN_01bc5360(uStack_80,
                   *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x100,0);
LAB_02aa1a20:
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_80,
                                  *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      plVar11 = (long *)*puVar4;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02aa1a90;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02aa1a90:
      uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x10))(uStack_80)
        ;
        FUN_01bc5360(uStack_80,
                     *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0xe0,0);
        break;
      }
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_80,
                                  *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      plVar11 = (long *)*puVar4;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_02aa1b30;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      lVar6 = FUN_01ecb238(plVar11,lVar6,0);
LAB_02aa1b30:
      lVar6 = *(long *)(lVar6 + 8);
      local_78 = puVar5;
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar11,&local_78,puVar5);
      memcpy(__s_00,puVar5,__n_00);
      plVar11 = (long *)thunk_FUN_01ee7388(uStack_80,
                                           *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0)
                                                    + 0x80) + 0xa0);
      lVar6 = *plVar11;
      memcpy(__dest_00,__s_00,__n_00);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(local_88 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar7 + 0x48);
      local_78 = __dest_00;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x38) + 0x28)) {
        local_78 = (undefined8 *)*__dest_00;
      }
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar6,&local_78,&local_70);
      plVar11 = local_70;
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02aa1c48;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar6,0);
LAB_02aa1c48:
      uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      FUN_01bc5360(uStack_80,
                   *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x100,uVar3);
      FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
    } while( true );
  }
  uVar9 = 0;
  goto LAB_02aa1e98;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar2 = piVar2 + 4;
    if (uVar8 == 0) break;
LAB_02aa1de4:
    if (*(long *)(piVar2 + -2) == lVar6) {
      lVar6 = lVar7 + (long)*piVar2 * 0x10 + 0x138;
      goto LAB_02aa1e18;
    }
  }
LAB_02aa1dfc:
  lVar6 = FUN_01ecb238(plVar11,lVar6,0);
LAB_02aa1e18:
  lVar6 = *(long *)(lVar6 + 8);
  local_78 = __src;
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar11,&local_78,__src);
  memcpy(__s,__src,__n);
  memcpy(__dest,__s,__n);
  FUN_01f08810(uStack_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x20,
               __dest,__n);
  uVar9 = 1;
  FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),1);
LAB_02aa1e98:
  if (*(long *)(alStack_b0[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


