/*
FUNCTION_NAME: FUN_0224a748
ENTRY_POINT: 0224a748
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224a9cc) */

void FUN_0224a748(long *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  ulong __n;
  void *__dest;
  undefined8 *__dest_00;
  ulong __n_00;
  void *pvVar12;
  void *apvStack_90 [2];
  char local_7c [4];
  void *local_78;
  void *pvStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x28) + 0xfc);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar8 + 0x18) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)apvStack_90 - uVar9);
  __dest_00 = (undefined8 *)((long)__dest - (__n_00 + 0xf & 0x1fffffff0));
  pvVar12 = (void *)((long)__dest_00 - uVar9);
  apvStack_90[1] = param_2;
  memset(pvVar12,0,__n);
  local_7c[0] = '\0';
  FUN_027e0bd8(param_1,local_7c,0);
  piVar3 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0)
                                                      + 0x80) + 0x60);
  lVar8 = *(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  if (*piVar3 < 1) {
    pcVar5 = (char *)thunk_FUN_01a59484(param_1,lVar8 + 0xa0);
    if (*pcVar5 == '\0') {
      uVar6 = Liv_Lck_Recorder_LckRecorder__GetReleaseResourcesFunction
                        (param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38)
                        );
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdc178);
      uVar6 = FUN_025b1328(uVar6,uVar7,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar7 = thunk_FUN_01a89e68();
      FUN_027a794c(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,param_3);
    }
    iVar10 = 7;
  }
  else {
    puVar4 = (undefined8 *)thunk_FUN_01a59484(param_1,lVar8 + 0x40);
    plVar11 = (long *)*puVar4;
    piVar3 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x60);
    uVar1 = *piVar3 - 1;
    FUN_01882f84(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x60,
                 uVar1);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar11 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy(__dest,(void *)((long)plVar11 +
                          (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar1 + 0x20),__n);
    memcpy(pvVar12,__dest,__n);
    iVar10 = 3;
  }
  if (local_7c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if (iVar10 == 7) {
LAB_0224a914:
    pvVar12 = (void *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                      0xc0) + 0x80) + 0x20);
    memcpy(__dest_00,pvVar12,__n_00);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18) + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar8 = *(long *)(*param_1 + 400);
    local_78 = __dest_00;
    pvStack_70 = __dest;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&local_78,__dest);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) goto LAB_0224a99c;
      goto LAB_0224a914;
    }
    memcpy(__dest,pvVar12,__n);
  }
  memcpy(apvStack_90[1],__dest,__n);
LAB_0224a99c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


