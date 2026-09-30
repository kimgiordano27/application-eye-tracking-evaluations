/*
FUNCTION_NAME: FUN_0213a2fc
ENTRY_POINT: 0213a2fc
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


void FUN_0213a2fc(long param_1,undefined8 ****param_2,void *param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *apvStack_b0 [2];
  long local_a0;
  char *local_90;
  long *plStack_88;
  char local_7c [4];
  long local_78;
  undefined8 ***local_70;
  long local_68;
  
  local_a0 = tpidr_el0;
  local_68 = *(long *)(local_a0 + 0x28);
  plVar6 = (long *)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(*plVar6 + 0x30) + 0xfc);
  uVar3 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)apvStack_b0 - uVar3);
  __s = (void *)((long)__dest - uVar3);
  apvStack_b0[1] = param_3;
  local_70 = param_2;
  memset(__s,0,__n);
  local_78 = 0;
  local_7c[0] = '\0';
  plVar4 = (long *)(param_1 + 0x10);
  lVar5 = *plVar4;
  ppppuVar1 = param_2;
  if (-1 < *(int *)(*(long *)(*plVar6 + 0x30) + 0x28)) {
    ppppuVar1 = &local_70;
  }
  memcpy(__dest,ppppuVar1,__n);
  if (lVar5 != 0) {
    do {
      puVar2 = __dest;
      if (-1 < *(int *)(*(long *)(*plVar6 + 0x30) + 0x28)) {
        puVar2 = (undefined8 *)*__dest;
      }
      uVar3 = FUN_02139a8c(lVar5,puVar2,__s,*(undefined8 *)(*plVar6 + 0x38));
      if ((uVar3 & 1) != 0) {
        memcpy(__dest,__s,__n);
        memcpy(apvStack_b0[1],__dest,__n);
        if (*(long *)(local_a0 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_90 = local_7c;
      local_7c[0] = '\0';
      plStack_88 = &local_78;
      local_78 = param_1;
      FUN_027e0bd8(param_1,local_7c,0);
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = FUN_02139510(*plVar4,*(undefined8 *)
                                    (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40));
      thunk_FUN_01a4b338(0);
      *plVar4 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar5);
      if (local_7c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(local_78,0);
      }
      lVar5 = *plVar4;
      plVar6 = (long *)(*(long *)(param_4 + 0x20) + 0xc0);
      ppppuVar1 = param_2;
      if (-1 < *(int *)(*(long *)(*plVar6 + 0x30) + 0x28)) {
        ppppuVar1 = &local_70;
      }
      memcpy(__dest,ppppuVar1,__n);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


