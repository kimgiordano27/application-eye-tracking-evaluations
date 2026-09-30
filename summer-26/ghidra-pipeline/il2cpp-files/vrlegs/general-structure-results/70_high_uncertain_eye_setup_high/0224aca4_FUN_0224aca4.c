/*
FUNCTION_NAME: FUN_0224aca4
ENTRY_POINT: 0224aca4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224aff4) */

undefined4 FUN_0224aca4(long *param_1,undefined8 ****param_2,undefined8 ****param_3,long param_4)

{
  undefined8 ****__src;
  int iVar1;
  void *__src_00;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *__dest;
  ulong __n;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 *__dest_00;
  uint uVar8;
  ulong __n_00;
  long lVar9;
  long local_a0;
  char local_94 [4];
  undefined8 ***local_90;
  undefined8 ***pppuStack_88;
  undefined8 *local_80;
  void *pvStack_78;
  char local_6c [4];
  long local_68;
  
  local_a0 = tpidr_el0;
  local_68 = *(long *)(local_a0 + 0x28);
  plVar4 = *(long **)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar4[5] + 0xfc);
  __n_00 = (ulong)*(uint *)(plVar4[3] + 0xfc);
  __dest = (undefined8 *)((long)&local_a0 - (__n + 0xf & 0x1fffffff0));
  uVar5 = __n_00 + 0xf & 0x1fffffff0;
  puVar6 = (undefined8 *)((long)__dest - uVar5);
  __dest_00 = (undefined8 *)((long)puVar6 - uVar5);
  local_94[0] = '\0';
  local_90 = param_3;
  pppuStack_88 = param_2;
  __src_00 = (void *)thunk_FUN_01a59484(param_1,*(long *)(*plVar4 + 0x80) + 0x20);
  memcpy(puVar6,__src_00,__n_00);
  lVar9 = *(long *)(param_4 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x28)) {
    param_3 = &local_90;
  }
  memcpy(__dest_00,param_3,__n_00);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x28)) {
    puVar6 = (undefined8 *)*puVar6;
    __dest_00 = (undefined8 *)*__dest_00;
  }
  lVar9 = *(long *)(*param_1 + 0x1b0);
  local_80 = puVar6;
  pvStack_78 = __dest_00;
  (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,param_1,&local_80,local_6c);
  if (local_6c[0] != '\0') {
    local_94[0] = '\0';
    FUN_027e0bd8(param_1,local_94,0);
    piVar2 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                    0xc0) + 0x80) + 0x60);
    iVar1 = *piVar2;
    plVar4 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                     0xc0) + 0x80) + 0x40);
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (iVar1 < *(int *)(*plVar4 + 0x18)) {
      puVar6 = (undefined8 *)
               thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                   0x80) + 0x40);
      plVar4 = (long *)*puVar6;
      puVar3 = (uint *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                       0xc0) + 0x80) + 0x60);
      uVar8 = *puVar3;
      FUN_01882f84(param_1,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x60,
                   uVar8 + 1);
      __src = param_2;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28) + 0x28)) {
        __src = &pppuStack_88;
      }
      memcpy(__dest,__src,__n);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(plVar4 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar8 + 0x20),
             __dest,__n);
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      if (*(uint *)(plVar4 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar9,(long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar8 + 0x20,
                   __dest);
      uVar7 = 1;
      uVar8 = 4;
    }
    else {
      uVar7 = 0;
      uVar8 = 2;
    }
    if (local_94[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
    if ((uVar8 | 2) != 2) goto LAB_0224afbc;
  }
  lVar9 = *(long *)(param_4 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x28) + 0x28)) {
    param_2 = &pppuStack_88;
  }
  memcpy(__dest,param_2,__n);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x28) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar9 = *(long *)(*param_1 + 0x1a0);
  local_80 = __dest;
  (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,param_1,&local_80,__dest);
  uVar7 = 0;
LAB_0224afbc:
  if (*(long *)(local_a0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


