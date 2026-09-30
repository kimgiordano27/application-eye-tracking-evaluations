/*
FUNCTION_NAME: FUN_02581234
ENTRY_POINT: 02581234
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


undefined4 FUN_02581234(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__src;
  ulong uVar10;
  undefined1 *__s;
  undefined1 *__s_00;
  long *plVar11;
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
  if ((DAT_0482fe3b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe3b = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar11[7] + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = auStack_90 + -uVar10;
  __dest = __src + -uVar10;
  __s_00 = __dest + -uVar10;
  memset(__s_00,0,__n);
  __s = __s_00 + -uVar10;
  memset(__s,0,__n);
  plStack_80 = &local_70;
  local_78 = &uStack_68;
  local_88 = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    plVar11 = (long *)thunk_FUN_01ee7388(uStack_68,
                                         *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    lVar7 = *plVar11;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = (**(code **)(lVar7 + 0x18))
                       (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    if ((uVar10 & 1) != 0) {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0xa0);
      plVar11 = (long *)*puVar6;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
            goto 
            System_Collections_ObjectModel_ReadOnlyCollection<WitEntityKeywordInfo>__System_Collections_IList_Add
            ;
          }
          uVar10 = uVar10 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);

      System_Collections_ObjectModel_ReadOnlyCollection<WitEntityKeywordInfo>__System_Collections_IList_Add
      :
      uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      FUN_01bc5360(uStack_68,
                   *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,uVar5);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_0258149c;
    }
LAB_025815d8:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar11 = (long *)*puVar6;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02581668;
        }
        uVar10 = uVar10 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02581668:
    uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar5);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
LAB_025816b0:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0x120);
    plVar11 = (long *)*puVar6;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar11;
    lVar7 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02581720;
        }
        uVar10 = uVar10 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02581720:
    uVar10 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar10 & 1) != 0) {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0x120);
      plVar11 = (long *)*puVar6;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
            goto LAB_02581800;
          }
          uVar10 = uVar10 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_02581800:
      lVar7 = *(long *)(lVar7 + 8);
      local_60 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_60,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   2);
      uVar9 = 1;
      goto LAB_02581910;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x10))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 0);
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
LAB_0258149c:
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0x120);
      plVar11 = (long *)*puVar6;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar11;
      lVar7 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0258150c;
          }
          uVar10 = uVar10 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_0258150c:
      uVar10 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar10 & 1) != 0) {
        puVar6 = (undefined8 *)
                 thunk_FUN_01ee7388(uStack_68,
                                    *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80)
                                    + 0x120);
        plVar11 = (long *)*puVar6;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar7) {
              lVar7 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
              goto LAB_02581890;
            }
            uVar10 = uVar10 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar10 != 0);
        }
        lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_02581890:
        lVar7 = *(long *)(lVar7 + 8);
        local_60 = __src;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_60,__src);
        memcpy(__s_00,__src,__n);
        memcpy(__dest,__s_00,__n);
        FUN_01f08810(uStack_68,
                     *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20,__dest,
                     __n);
        uVar9 = 1;
        FUN_01bc52e4(uStack_68,
                     *(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),1);
        goto LAB_02581910;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 8))(uStack_68);
      FUN_01bc5360(uStack_68,
                   *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,0);
      goto LAB_025815d8;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      goto LAB_025816b0;
    }
  }
  uVar9 = 0;
LAB_02581910:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


