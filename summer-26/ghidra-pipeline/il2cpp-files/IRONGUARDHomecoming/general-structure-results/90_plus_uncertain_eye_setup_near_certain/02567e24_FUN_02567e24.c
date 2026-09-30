/*
FUNCTION_NAME: FUN_02567e24
ENTRY_POINT: 02567e24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 FUN_02567e24(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__src;
  ulong uVar9;
  undefined1 *__s;
  undefined1 *__s_00;
  long *plVar10;
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
  if ((DAT_0482fde3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fde3 = 1;
  }
  plVar10 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar10[7] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = auStack_90 + -uVar9;
  __dest = __src + -uVar9;
  __s_00 = __dest + -uVar9;
  memset(__s_00,0,__n);
  __s = __s_00 + -uVar9;
  memset(__s,0,__n);
  plStack_80 = &local_70;
  local_78 = &uStack_68;
  local_88 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar10 + 0x80));
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02568004;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_02568004:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar4);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_0256804c:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_025680c4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_025680c4:
    uVar9 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_02568220;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_02568220:
      lVar6 = *(long *)(lVar6 + 8);
      local_60 = __src;
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,&local_60,__src);
      memcpy(__s_00,__src,__n);
      memcpy(__dest,__s_00,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      uVar8 = 1;
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   1);
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__System_Collections_IList_Insert
      ;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 8))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,0
                );
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_025682b0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_025682b0:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar4);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
LAB_025682f8:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0xe0);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02568370;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02568370:
    uVar9 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_68,
                                  *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                  0xe0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_02568450;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_02568450:
      lVar6 = *(long *)(lVar6 + 8);
      local_60 = __src;
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,&local_60,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   2);
      uVar8 = 1;
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__System_Collections_IList_Insert
      ;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 0x10))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0xe0,0
                );
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_0256804c;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      goto LAB_025682f8;
    }
  }
  uVar8 = 0;
System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__System_Collections_IList_Insert:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


