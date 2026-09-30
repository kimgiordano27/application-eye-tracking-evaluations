/*
FUNCTION_NAME: FUN_0224a380
ENTRY_POINT: 0224a380
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


/* WARNING: Removing unreachable block (ram,0x0224a61c) */

void FUN_0224a380(long *param_1,undefined8 ****param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong __n;
  void *__dest;
  ulong __n_00;
  undefined8 *__dest_00;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar8 + 0x28) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x18) + 0xfc);
  __dest_00 = (undefined8 *)((long)&uStack_80 - (__n_00 + 0xf & 0x1fffffff0));
  __dest = (void *)((long)__dest_00 - (__n + 0xf & 0x1fffffff0));
  uStack_80._4_1_ = '\0';
  local_78 = param_2;
  FUN_027e0bd8(param_1,(long)&uStack_80 + 4,0);
  while( true ) {
    piVar4 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x60);
    lVar8 = *(long *)(param_3 + 0x20);
    plVar9 = *(long **)(lVar8 + 0xc0);
    if (*piVar4 < 1) {
      if (-1 < *(int *)(plVar9[3] + 0x28)) {
        param_2 = &local_78;
      }
      memcpy(__dest,param_2,__n);
      FUN_01ab69d4(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x20,__dest,__n);
      puVar6 = (undefined4 *)
               thunk_FUN_01a59484(param_1,*(undefined8 *)
                                           (**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
      uVar1 = *puVar6;
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      uVar7 = FUN_01ab6a94(lVar8,uVar1);
      FUN_018820a8(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x40,
                   uVar7);
      FUN_01883150(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0xa0,1)
      ;
      if (uStack_80._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar5 = (undefined8 *)thunk_FUN_01a59484(param_1,*(long *)(*plVar9 + 0x80) + 0x40);
    plVar9 = (long *)*puVar5;
    piVar4 = (int *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0x80) + 0x60);
    uVar2 = *piVar4 - 1;
    FUN_01882f84(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x60,
                 uVar2);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar9 + 3) <= uVar2) break;
    memcpy(__dest_00,
           (void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar2 + 0x20),
           __n_00);
    local_70 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28) + 0x28)) {
      local_70 = (undefined8 *)*__dest_00;
    }
    lVar8 = *(long *)(*param_1 + 0x1a0);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&local_70);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


