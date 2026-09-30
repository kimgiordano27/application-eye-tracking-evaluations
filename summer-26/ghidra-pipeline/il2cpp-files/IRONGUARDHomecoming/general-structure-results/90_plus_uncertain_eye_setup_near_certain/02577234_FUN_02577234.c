/*
FUNCTION_NAME: FUN_02577234
ENTRY_POINT: 02577234
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02577234(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__src;
  undefined1 *__s;
  long *plVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  long *plStack_90;
  undefined8 *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = param_2;
  local_78 = param_1;
  if ((DAT_0482fe19 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe19 = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar11[10] + 0xfc);
  __n = (ulong)*(uint *)(plVar11[9] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = auStack_a0 + -((ulong)uVar1 + 0xf & 0x1fffffff0) + -uVar9;
  __dest = __src + -uVar9;
  __s = __dest + -uVar9;
  memset(__s,0,__n);
  plStack_90 = &local_80;
  local_88 = &local_78;
  local_98 = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  iVar2 = *piVar4;
  plVar11 = (long *)thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) +
                                                                     0xc0) + 0x80) + 0x40);
  if (iVar2 == 0) {
    lVar7 = *plVar11;
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = (long *)(*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x18))(lVar7);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02577418;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_02577418:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x60,
                 uVar6);
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02577460:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_025774d8;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_025774d8:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0)
                                                    + 0x80) + 0x60);
      plVar11 = (long *)*puVar5;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
            goto LAB_025775b8;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_025775b8:
      lVar7 = *(long *)(lVar7 + 8);
      local_70 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,&local_70,__src);
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  (*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x48),__dest);
      lVar7 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      uVar6 = FUN_01f08934(uVar6,lVar7,auStack_a0 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
      FUN_01f08810(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x20,
                   uVar6,(ulong)uVar1);
      uVar10 = 1;
      FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),1
                  );
      goto LAB_02577684;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 8))(local_78);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x60,0)
    ;
  }
  else if (iVar2 == 1) {
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    goto LAB_02577460;
  }
  uVar10 = 0;
LAB_02577684:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


