/*
FUNCTION_NAME: FUN_0256e62c
ENTRY_POINT: 0256e62c
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


undefined4 FUN_0256e62c(undefined8 param_1,long param_2)

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
  undefined8 *__src;
  undefined8 *__dest;
  void *__s;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *local_90 [3];
  long local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  char local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  uStack_70 = param_1;
  if ((DAT_0482fe00 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe00 = 1;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar11[9] + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)local_90 - uVar7);
  __dest = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)__dest - uVar7);
  memset(__s,0,__n);
  local_90[1] = &local_78;
  local_90[2] = &uStack_70;
  local_90[0] = (long *)0x0;
  piVar2 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar11 + 0x80));
  if (*piVar2 == 0) {
    FUN_01bc52e4(uStack_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_70,
                                *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    uVar9 = *puVar4;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0
       ) {
      FUN_01ecaf44();
    }
    uVar3 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x20))(uVar3,uVar9);
    FUN_01bc5360(uStack_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar3);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_70,
                                *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar11 = (long *)*puVar4;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_0256e84c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_0256e84c:
    uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    FUN_01bc5360(uStack_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x100,
                 uVar9);
    FUN_01bc52e4(uStack_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  else {
    if (*piVar2 != 1) {
LAB_0256eae4:
      uVar8 = 0;
      goto LAB_0256eae8;
    }
    FUN_01bc52e4(uStack_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  do {
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_70,
                                *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) +
                                0x100);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *plVar11) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_0256e90c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*plVar11,0);
LAB_0256e90c:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 8))(uStack_70);
      FUN_01bc5360(uStack_70,
                   *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x100,0);
      goto LAB_0256eae4;
    }
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_70,
                                *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) +
                                0x100);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(local_78 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar2 * 0x10 + 0x138;
          goto LAB_0256e9ac;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_0256e9ac:
    lVar5 = *(long *)(lVar5 + 8);
    local_68 = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,&local_68,__src);
    memcpy(__s,__src,__n);
    plVar10 = (long *)thunk_FUN_01ee7388(uStack_70,
                                         *(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) +
                                                  0x80) + 0xe0);
    lVar5 = *plVar10;
    memcpy(__dest,__s,__n);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(local_78 + 0x20) + 0xc0);
    local_68 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x48) + 0x28)) {
      local_68 = (undefined8 *)*__dest;
    }
    puVar4 = *(undefined8 **)(lVar6 + 0x50);
    (*(code *)puVar4[2])(*puVar4,puVar4,lVar5,&local_68,local_5c);
  } while (local_5c[0] == '\0');
  memcpy(__src,__s,__n);
  FUN_01f08810(uStack_70,*(long *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80) + 0x20,
               __src,__n);
  uVar8 = 1;
  FUN_01bc52e4(uStack_70,*(undefined8 *)(**(long **)(*(long *)(local_78 + 0x20) + 0xc0) + 0x80),1);
LAB_0256eae8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


