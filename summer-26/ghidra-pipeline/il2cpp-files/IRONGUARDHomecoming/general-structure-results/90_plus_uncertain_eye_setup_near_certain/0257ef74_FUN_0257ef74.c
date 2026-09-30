/*
FUNCTION_NAME: FUN_0257ef74
ENTRY_POINT: 0257ef74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_0257ef74(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__src;
  ulong uVar11;
  undefined1 *__s;
  undefined1 *__s_00;
  long *plVar12;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long *plStack_80;
  undefined8 *local_78;
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = param_2;
  uStack_68 = param_1;
  if ((DAT_0482fe34 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe34 = 1;
  }
  plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar12[7] + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = auStack_90 + -uVar11;
  __dest = __src + -uVar11;
  __s_00 = __dest + -uVar11;
  memset(__s_00,0,__n);
  __s = __s_00 + -uVar11;
  memset(__s,0,__n);
  plStack_80 = &local_70;
  local_78 = &uStack_68;
  local_88 = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar12 + 0x80));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    pcVar5 = (char *)thunk_FUN_01ee7388(uStack_68,
                                        *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) +
                                                 0x80) + 0x60);
    if (*pcVar5 != '\0') {
      puVar7 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0xa0);
      plVar12 = (long *)*puVar7;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0257f180;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f180:
      uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      FUN_01bc5360(uStack_68,
                   *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,uVar6);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_0257f1c8;
    }
LAB_0257f304:
    puVar7 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar12 = (long *)*puVar7;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0257f394;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f394:
    uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar6);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
LAB_0257f3dc:
    puVar7 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0x120);
    plVar12 = (long *)*puVar7;
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
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0257f44c;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f44c:
    uVar11 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      puVar7 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0x120);
      plVar12 = (long *)*puVar7;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
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
            goto LAB_0257f52c;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      lVar8 = FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f52c:
      lVar8 = *(long *)(lVar8 + 8);
      local_60 = __src;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar12,&local_60,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   2);
      uVar10 = 1;
      goto LAB_0257f63c;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x10))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 0);
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
LAB_0257f1c8:
      puVar7 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0x120);
      plVar12 = (long *)*puVar7;
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
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0257f238;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f238:
      uVar11 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        puVar7 = (undefined8 *)
                 thunk_FUN_01ee7388(uStack_68,
                                    *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80)
                                    + 0x120);
        plVar12 = (long *)*puVar7;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
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
              goto LAB_0257f5bc;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        lVar8 = FUN_01ecb238(plVar12,lVar8,0);
LAB_0257f5bc:
        lVar8 = *(long *)(lVar8 + 8);
        local_60 = __src;
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar12,&local_60,__src);
        memcpy(__s_00,__src,__n);
        memcpy(__dest,__s_00,__n);
        FUN_01f08810(uStack_68,
                     *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20,__dest,
                     __n);
        uVar10 = 1;
        FUN_01bc52e4(uStack_68,
                     *(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),1);
        goto LAB_0257f63c;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 8))(uStack_68);
      FUN_01bc5360(uStack_68,
                   *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,0);
      goto LAB_0257f304;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      goto LAB_0257f3dc;
    }
  }
  uVar10 = 0;
LAB_0257f63c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


