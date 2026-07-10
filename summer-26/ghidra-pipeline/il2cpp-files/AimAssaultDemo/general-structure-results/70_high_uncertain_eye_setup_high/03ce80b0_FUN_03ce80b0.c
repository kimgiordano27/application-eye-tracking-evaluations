/*
FUNCTION_NAME: FUN_03ce80b0
ENTRY_POINT: 03ce80b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03ce80b0(long *param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long local_c78 [2];
  undefined1 auStack_c68 [1024];
  undefined1 auStack_868 [1024];
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_037756d4(param_3);
  }
  memset(auStack_468,0,0x400);
  iVar2 = thunk_FUN_0374ada8(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_037a15ac(PTR_DAT_07d95aa0);
    uVar4 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d95aa8);
    FUN_06253fb8(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,param_3);
  }
  uVar3 = FUN_0625b654(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(auStack_468,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(auStack_868,param_2,0x400);
      uVar4 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_868);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
      }
      local_c78[1] = 0xffffffffffffffff;
      local_c78[0] = lVar7;
      memcpy(auStack_c68,auStack_468,0x400);
      uVar5 = thunk_FUN_0629d330(local_c78,uVar4,0);
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_0374ad64(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_0374ad64(param_1,0,0);
  iVar2 = iVar2 + -1;
System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


