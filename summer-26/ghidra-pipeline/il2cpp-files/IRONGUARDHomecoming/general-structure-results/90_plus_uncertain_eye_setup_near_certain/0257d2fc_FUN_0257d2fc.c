/*
FUNCTION_NAME: FUN_0257d2fc
ENTRY_POINT: 0257d2fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0257d748) */
/* WARNING: Removing unreachable block (ram,0x0257dabc) */

undefined4 FUN_0257d2fc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar10;
  void *__s;
  void *__s_00;
  undefined8 uVar11;
  long *plVar12;
  long *aplStack_b0 [4];
  undefined8 *local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  char local_70 [4];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_88 = param_2;
  uStack_80 = param_1;
  if ((DAT_0482fe2e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe2e = 1;
  }
  plVar12 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar12[9] + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)aplStack_b0 - uVar10);
  __dest = (undefined8 *)((long)__src - uVar10);
  __s_00 = (void *)((long)__dest - uVar10);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar10);
  memset(__s,0,__n);
  aplStack_b0[3] = &local_88;
  local_90 = &uStack_80;
  aplStack_b0[2] = (long *)0x0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar12 + 0x80));
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_80,
                                *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    uVar11 = *puVar6;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0
       ) {
      FUN_01ecaf44();
    }
    uVar4 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x20))(uVar4,uVar11);
    FUN_01bc5360(uStack_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar4);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_80,
                                *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar12 = (long *)*puVar6;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0257d550;
        }
        uVar10 = uVar10 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d550:
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar12;
      lVar7 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0257d5b0;
          }
          uVar10 = uVar10 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d5b0:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_0257d73c;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_0257d714;
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0257d6fc;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_0257d62c;
          }
          uVar10 = uVar10 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d62c:
      lVar7 = *(long *)(lVar7 + 8);
      local_78 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,&local_78,__src);
      memcpy(__s_00,__src,__n);
      plVar5 = (long *)thunk_FUN_01ee7388(uStack_80,
                                          *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                   0x80) + 0x120);
      lVar7 = *plVar5;
      memcpy(__dest,__s_00,__n);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(local_88 + 0x20) + 0xc0);
      local_78 = __dest;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x48) + 0x28)) {
        local_78 = (undefined8 *)*__dest;
      }
      puVar6 = *(undefined8 **)(lVar8 + 0x50);
      (*(code *)puVar6[2])(*puVar6,puVar6,lVar7,&local_78,auStack_6c);
    } while( true );
  }
  if (*piVar3 != 1) {
LAB_0257da6c:
    uVar9 = 0;
    goto LAB_0257da70;
  }
  FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  goto LAB_0257d824;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar3 = piVar3 + 4;
    if (uVar10 == 0) break;
LAB_0257d6fc:
    if (*(long *)(piVar3 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_0257d730;
    }
  }
LAB_0257d714:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0257d730:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_0257d73c:
  puVar6 = (undefined8 *)
           thunk_FUN_01ee7388(uStack_80,
                              *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                              0xe0);
  plVar12 = (long *)*puVar6;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_0257d7dc;
      }
      uVar10 = uVar10 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d7dc:
  uVar11 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  FUN_01bc5360(uStack_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x140,
               uVar11);
  FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
LAB_0257d824:
  do {
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_80,
                                *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0x140);
    plVar12 = (long *)*puVar6;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar12;
    lVar7 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0257d894;
        }
        uVar10 = uVar10 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d894:
    uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 8))(uStack_80);
      FUN_01bc5360(uStack_80,
                   *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x140,0);
      goto LAB_0257da6c;
    }
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_80,
                                *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0x140);
    plVar12 = (long *)*puVar6;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_0257d934;
        }
        uVar10 = uVar10 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar10 != 0);
    }
    lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d934:
    lVar7 = *(long *)(lVar7 + 8);
    local_78 = __src;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,&local_78,__src);
    memcpy(__s,__src,__n);
    plVar12 = (long *)thunk_FUN_01ee7388(uStack_80,
                                         *(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                  0x80) + 0x120);
    lVar7 = *plVar12;
    memcpy(__dest,__s,__n);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(local_88 + 0x20) + 0xc0);
    local_78 = __dest;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x48) + 0x28)) {
      local_78 = (undefined8 *)*__dest;
    }
    puVar6 = *(undefined8 **)(lVar8 + 0x58);
    (*(code *)puVar6[2])(*puVar6,puVar6,lVar7,&local_78,local_70);
  } while (local_70[0] == '\0');
  memcpy(__src,__s,__n);
  FUN_01f08810(uStack_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x20,
               __src,__n);
  uVar9 = 1;
  FUN_01bc52e4(uStack_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),1);
LAB_0257da70:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


