/*
FUNCTION_NAME: FUN_029a3af8
ENTRY_POINT: 029a3af8
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


void FUN_029a3af8(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *__src;
  ulong __n;
  void *__s;
  long lVar10;
  long *plVar11;
  undefined8 *local_80;
  long lStack_78;
  char local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04830d9d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830d9d = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x60) + 0xfc);
  uVar8 = (ulong)*(uint *)(*(long *)(lVar10 + 0x78) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)&local_80 - uVar7);
  lVar9 = (long)__src - (uVar8 + 0xf & 0x1fffffff0);
  __s = (void *)(lVar9 - uVar7);
  memset(__s,0,__n);
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(lVar10 + 0x38) + 0x80) + 0x20);
  if (*piVar3 != 2) {
    uVar4 = 0;
    if (*piVar3 != 1) goto FUN_029a3f34;
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) +
                                                   0x18) + 0x80));
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) goto LAB_029a3f64;
    lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_029a3c64;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar10,0);
LAB_029a3c64:
    uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    FUN_01bc5360(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18) +
                                  0x80) + 0x60,uVar4);
    FUN_01bc52e4(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38) +
                                  0x80) + 0x20,2);
  }
  do {
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                     0xc0) + 0x18) + 0x80) + 0x60);
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) goto LAB_029a3f64;
    lVar10 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_029a3d20;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_029a3d20:
    uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (param_1 == (long *)0x0) goto LAB_029a3f64;
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar4 = 0;
      goto FUN_029a3f34;
    }
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                     0xc0) + 0x18) + 0x80) + 0x60);
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) goto LAB_029a3f64;
    lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar10) {
          lVar10 = lVar6 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_029a3dbc;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    lVar10 = FUN_01ecb238(plVar11,lVar10,0);
LAB_029a3dbc:
    lVar10 = *(long *)(lVar10 + 8);
    local_80 = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar11,&local_80,__src);
    memcpy(__s,__src,__n);
    plVar11 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 +
                                                                                        0x20) + 0xc0
                                                                              ) + 0x18) + 0x80) +
                                                 0x20);
    if (*plVar11 == 0) break;
    plVar11 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 +
                                                                                        0x20) + 0xc0
                                                                              ) + 0x18) + 0x80) +
                                                 0x20);
    lVar10 = *plVar11;
    memcpy(__src,__s,__n);
    if (lVar10 == 0) goto LAB_029a3f64;
    lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    local_80 = __src;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
      local_80 = (undefined8 *)*__src;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x68);
    (*(code *)puVar5[2])(*puVar5,puVar5,lVar10,&local_80,local_6c);
  } while (local_6c[0] == '\0');
  plVar11 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x18) + 0x80) + 0x40);
  lVar10 = *plVar11;
  memcpy(__src,__s,__n);
  if (lVar10 == 0) {
LAB_029a3f64:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  puVar5 = *(undefined8 **)(lVar6 + 0x70);
  if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
    __src = (undefined8 *)*__src;
  }
  local_80 = __src;
  lStack_78 = lVar9;
  (*(code *)puVar5[2])(*puVar5,puVar5,lVar10,&local_80,lVar9);
  FUN_01f08810(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38) +
                                0x80) + 0x40,lVar9,uVar8);
  uVar4 = 1;
FUN_029a3f34:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


