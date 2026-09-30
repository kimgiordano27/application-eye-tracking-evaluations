/*
FUNCTION_NAME: FUN_02577b0c
ENTRY_POINT: 02577b0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02577b0c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong __n;
  void *__dest;
  long *__src;
  void *__s;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long *local_d0 [4];
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long *plStack_78;
  undefined8 *local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  if ((DAT_0482fe1b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe1b = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar11[0x10] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (long *)((long)local_d0 - uVar8);
  __dest = (void *)((long)__src - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,__n);
  plStack_78 = &local_68;
  local_70 = &local_60;
  local_80 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  iVar1 = *piVar3;
  plVar11 = (long *)thunk_FUN_01ee7388(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) +
                                                                     0xc0) + 0x80) + 0x40);
  if (iVar1 == 0) {
    lVar7 = *plVar11;
    FUN_01bc52e4(local_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar7 + 0x10) != 0) {
      auVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x28))();
      if (auVar13._0_8_ != 0) {
        puVar4 = *(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x38);
        (*(code *)puVar4[2])(*puVar4,puVar4,auVar13._0_8_,0,local_d0 + 3);
        uStack_98 = uStack_b0;
        local_a0 = local_d0[3];
        local_90 = local_a8;
        local_d0[1] = (long *)uStack_b0;
        local_d0[0] = local_d0[3];
        local_d0[2] = (long *)local_a8;
        FUN_01bc6c2c(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) +
                              0x60,local_d0);
        FUN_01bc52e4(local_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80)
                     ,0xfffffffd);
        goto FUN_02577ed0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,auVar13._8_8_,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (iVar1 == 1) {
    FUN_01bc52e4(local_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    do {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0)
                                                    + 0x80) + 0x80);
      plVar11 = (long *)*puVar4;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_02577e88;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02577e88:
      uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        puVar4 = (undefined8 *)
                 thunk_FUN_01ee7388(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x80);
        plVar11 = (long *)*puVar4;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar6 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_02577fc8;
        piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02577fb0;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 8))(local_60);
      FUN_01bc5360(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0x80,
                   0);
FUN_02577ed0:
      plVar11 = *(long **)(*(long *)(local_68 + 0x20) + 0xc0);
      pcVar10 = *(code **)plVar11[0x11];
      uVar5 = thunk_FUN_01ee7388(local_60,*(long *)(*plVar11 + 0x80) + 0x60);
      uVar8 = (*pcVar10)(uVar5,*(undefined8 *)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x88))
      ;
      plVar11 = *(long **)(*(long *)(local_68 + 0x20) + 0xc0);
      if ((uVar8 & 1) == 0) {
        (**(code **)plVar11[2])(local_60);
        puVar4 = (undefined8 *)
                 thunk_FUN_01ee7388(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x60);
        uVar9 = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        goto 
        System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
        ;
      }
      puVar4 = (undefined8 *)plVar11[9];
      uVar12 = *puVar4;
      uVar5 = thunk_FUN_01ee7388(local_60,*(long *)(*plVar11 + 0x80) + 0x60);
      (*(code *)puVar4[2])(uVar12,puVar4,uVar5,0,&local_a0);
      plVar11 = local_a0;
      if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_02577dc8;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02577dc8:
      uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      FUN_01bc5360(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0x80,
                   uVar5);
      FUN_01bc52e4(local_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
    } while( true );
  }
  uVar9 = 0;
  goto 
  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  ;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar3 = piVar3 + 4;
    if (uVar8 == 0) break;
LAB_02577fb0:
    if (*(long *)(piVar3 + -2) == lVar7) {
      lVar7 = lVar6 + (long)*piVar3 * 0x10 + 0x138;
      goto LAB_02577fe4;
    }
  }
LAB_02577fc8:
  lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_02577fe4:
  lVar7 = *(long *)(lVar7 + 8);
  local_a0 = __src;
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_a0,__src);
  memcpy(__s,__src,__n);
  memcpy(__dest,__s,__n);
  FUN_01f08810(local_60,*(long *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80) + 0x20,
               __dest,__n);
  uVar9 = 1;
  FUN_01bc52e4(local_60,*(undefined8 *)(**(long **)(*(long *)(local_68 + 0x20) + 0xc0) + 0x80),1);

  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  :
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


