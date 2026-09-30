/*
FUNCTION_NAME: FUN_02145584
ENTRY_POINT: 02145584
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02145584(long param_1,undefined8 ****param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *__dest;
  ulong __n;
  long *plVar9;
  long lVar10;
  void *__dest_00;
  undefined8 ***local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_2;
  if ((DAT_04121fa9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04121fa9 = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  puVar2 = PTR_DAT_03cc0330;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)&local_60 - uVar8);
  __dest_00 = (void *)((long)__dest - uVar8);
  plVar9 = (long *)(param_1 + 0x10);
  lVar4 = *plVar9;
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_3 + 0x20);
    lVar4 = lVar5;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8(lVar5);
      lVar4 = *(long *)(param_3 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      param_2 = &local_60;
    }
    memcpy(__dest,param_2,__n);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x28) < 0) {
      memcpy(__dest_00,__dest,__n);
    }
    else {
      __dest_00 = (void *)*__dest;
    }
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    lVar4 = FUN_02145b9c(__dest_00,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30));
    *plVar9 = lVar4;
                    /* try { // try from 02145858 to 022458ab has its CatchHandler @ 02145f7c */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar4);
  }
  else {
    uVar8 = FUN_025cb0a0(0);
    if ((uVar8 & 1) != 0) {
      uVar3 = OVRPlugin__SetControllerLocalizedVibration(lVar4,0);
      FUN_025cb0ac(0,uVar3,1,0);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
      uVar3 = OVRPlugin__SetControllerLocalizedVibration(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar2);
      }
      FUN_027f7f98(uVar3,0);
    }
    lVar10 = *(long *)(param_3 + 0x20);
    lVar5 = lVar10;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8(lVar10);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 0x28)) {
      param_2 = &local_60;
    }
    memcpy(__dest,param_2,__n);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8(lVar5);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    uVar8 = FUN_020a24f8(lVar4,__dest,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    if ((uVar8 & 1) == 0) {
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cdab88);
      uVar6 = FUN_027b3d94(uVar6,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar7 = thunk_FUN_01a89e68();
                    /* try { // try from 0214577c to 02245857 has its CatchHandler @ 0214577c
                       catch() { ... } // from try @ 0214577c with catch @ 0214577c
                       catch() { ... } // from try @ 02145e78 with catch @ 0214577c
                       catch() { ... } // from try @ 02145f0c with catch @ 0214577c
                       catch() { ... } // from try @ 02145fac with catch @ 0214577c
                       catch() { ... } // from try @ 02146024 with catch @ 0214577c */
      FUN_0276a4a8(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,param_3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


