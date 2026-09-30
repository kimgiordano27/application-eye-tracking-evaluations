/*
FUNCTION_NAME: FUN_02584ddc
ENTRY_POINT: 02584ddc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02584ddc(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__dest_00;
  undefined1 *__s;
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
  if ((DAT_0482fe47 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe47 = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar11[2] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_90 + -uVar9;
  __dest_00 = __dest + -uVar9;
  __s = __dest_00 + -uVar9;
  memset(__s,0,__n);
  plStack_80 = &local_70;
  local_78 = &uStack_68;
  local_88 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    pcVar4 = (char *)thunk_FUN_01ee7388(uStack_68,
                                        *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) +
                                                 0x80) + 0x60);
    if (*pcVar4 != '\0') {
      __src = (void *)thunk_FUN_01ee7388(uStack_68,
                                         *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
      memcpy(__dest,__src,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest,__n);
      uVar10 = 1;
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   1);
      goto FUN_02585258;
    }
LAB_02584fa8:
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
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02585038;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02585038:
    uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar5);
    FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02585080:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_68,
                                *(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) +
                                0x120);
    plVar11 = (long *)*puVar6;
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
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_025850f8;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_025850f8:
    uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar9 & 1) != 0) {
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
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_025851d8;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_025851d8:
      lVar7 = *(long *)(lVar7 + 8);
      local_60 = __dest;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_60,__dest);
      memcpy(__s,__dest,__n);
      memcpy(__dest_00,__s,__n);
      FUN_01f08810(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,__dest_00,__n);
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   2);
      uVar10 = 1;
      goto FUN_02585258;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_70 + 0x20) + 0xc0) + 8))(uStack_68);
    FUN_01bc5360(uStack_68,*(long *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80) + 0x120,
                 0);
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xffffffff);
      goto LAB_02584fa8;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(uStack_68,*(undefined8 *)(**(long **)(*(long *)(local_70 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_02585080;
    }
  }
  uVar10 = 0;
FUN_02585258:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


