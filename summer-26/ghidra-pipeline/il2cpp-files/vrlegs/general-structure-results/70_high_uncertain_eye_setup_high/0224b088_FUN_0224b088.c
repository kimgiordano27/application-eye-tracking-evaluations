/*
FUNCTION_NAME: FUN_0224b088
ENTRY_POINT: 0224b088
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224b314) */

undefined4 FUN_0224b088(long *param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****__src;
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *__dest;
  ulong __n;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uStack_80;
  undefined8 ***local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28) + 0xfc);
  __dest = (undefined8 *)((long)&uStack_80 - (__n + 0xf & 0x1fffffff0));
  uStack_80._4_1_ = '\0';
  local_78 = param_2;
  FUN_027e0bd8(param_1,(long)&uStack_80 + 4,0);
  piVar3 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0)
                                                      + 0x80) + 0x60);
  iVar1 = *piVar3;
  plVar4 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0x40);
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (iVar1 < *(int *)(*plVar4 + 0x18)) {
    puVar5 = (undefined8 *)
             thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                 0x80) + 0x40);
    plVar4 = (long *)*puVar5;
    puVar6 = (uint *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x80) + 0x60);
    uVar9 = *puVar6;
    FUN_01882f84(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x60,
                 uVar9 + 1);
    __src = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28) + 0x28)) {
      __src = &local_78;
    }
    memcpy(__dest,__src,__n);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar4 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar9 + 0x20),
           __dest,__n);
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    if (*(uint *)(plVar4 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar7,(long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar9 + 0x20,
                 __dest);
    uVar8 = 1;
    uVar9 = 3;
  }
  else {
    uVar8 = 0;
    uVar9 = 4;
  }
  if (uStack_80._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if ((uVar9 | 4) == 4) {
    lVar7 = *(long *)(param_3 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
      param_2 = &local_78;
    }
    memcpy(__dest,param_2,__n);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar7 = *(long *)(*param_1 + 0x1a0);
    local_70 = __dest;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,param_1,&local_70,__dest);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


