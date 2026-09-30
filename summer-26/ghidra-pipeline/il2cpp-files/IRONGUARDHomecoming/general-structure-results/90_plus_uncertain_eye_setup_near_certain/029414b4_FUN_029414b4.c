/*
FUNCTION_NAME: FUN_029414b4
ENTRY_POINT: 029414b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_029414b4(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  void *__s;
  long lVar8;
  long *plVar9;
  undefined8 *apuStack_80 [2];
  char local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04830bf4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830bf4 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x58) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)apuStack_80 - uVar7);
  __dest = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)__dest - uVar7);
  memset(__s,0,__n);
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(lVar8 + 0x30) + 0x80) + 0x20);
  if (*piVar3 != 2) {
    uVar4 = 0;
    if (*piVar3 != 1) goto LAB_02941860;
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) +
                                                   0x18) + 0x80));
    plVar9 = (long *)*puVar5;
    if (plVar9 == (long *)0x0) {
LAB_02941890:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02941610;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_02941610:
    uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    FUN_01bc5360(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18) +
                                  0x80) + 0x40,uVar4);
    FUN_01bc52e4(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30) +
                                  0x80) + 0x20,2);
  }
  do {
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                     0xc0) + 0x18) + 0x80) + 0x40);
    plVar9 = (long *)*puVar5;
    if (plVar9 == (long *)0x0) goto LAB_02941890;
    lVar8 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_029416cc;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_029416cc:
    uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (param_1 == (long *)0x0) goto LAB_02941890;
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar4 = 0;
      goto LAB_02941860;
    }
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                     0xc0) + 0x18) + 0x80) + 0x40);
    plVar9 = (long *)*puVar5;
    if (plVar9 == (long *)0x0) goto LAB_02941890;
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar8) {
          lVar8 = lVar6 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_02941768;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    lVar8 = FUN_01ecb238(plVar9,lVar8,0);
LAB_02941768:
    lVar8 = *(long *)(lVar8 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar9,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    plVar9 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x18) + 0x80) + 0x20);
    lVar8 = *plVar9;
    memcpy(__dest,__s,__n);
    if (lVar8 == 0) goto LAB_02941890;
    lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    apuStack_80[1] = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*__dest;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x60);
    (*(code *)puVar5[2])(*puVar5,puVar5,lVar8,apuStack_80 + 1,local_6c);
  } while (local_6c[0] == '\0');
  memcpy(__src,__s,__n);
  FUN_01f08810(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30) +
                                0x80) + 0x40,__src,__n);
  uVar4 = 1;
LAB_02941860:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


