/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$.cctor
ENTRY_POINT: 0224b118
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

undefined4 Liv_Lck_Recorder_LckRecorder___cctor(int *param_1)

{
  void *__src;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x23;
  undefined4 uVar6;
  long unaff_x26;
  uint uVar7;
  long unaff_x29;
  
  iVar1 = *param_1;
  plVar2 = (long *)thunk_FUN_01a59484();
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (iVar1 < *(int *)(*plVar2 + 0x18)) {
    puVar3 = (undefined8 *)thunk_FUN_01a59484();
    plVar2 = (long *)*puVar3;
    puVar4 = (uint *)thunk_FUN_01a59484();
    uVar7 = *puVar4;
    FUN_01882f84();
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x28) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,__src,unaff_x22);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar2 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * (long)(int)uVar7 + 0x20),
           unaff_x20,unaff_x22);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    if (*(uint *)(plVar2 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar5,(long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * (long)(int)uVar7 + 0x20);
    uVar6 = 1;
    uVar7 = 3;
  }
  else {
    uVar6 = 0;
    uVar7 = 4;
  }
  if (*(char *)(unaff_x29 + -0x1c) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if ((uVar7 | 4) == 4) {
    lVar5 = *(long *)(unaff_x23 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,unaff_x21,unaff_x22);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    lVar5 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
    (**(code **)(*(long *)(lVar5 + 0x1a0) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x1a0) + 8));
    uVar6 = 0;
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


