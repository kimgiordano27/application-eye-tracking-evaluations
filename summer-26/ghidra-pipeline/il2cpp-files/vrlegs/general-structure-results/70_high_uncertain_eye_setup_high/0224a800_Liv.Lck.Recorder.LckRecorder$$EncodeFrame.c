/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$EncodeFrame
ENTRY_POINT: 0224a800
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224a9cc) */

void Liv_Lck_Recorder_LckRecorder__EncodeFrame(void)

{
  int *piVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  
  piVar1 = (int *)thunk_FUN_01a59484();
  if (*piVar1 < 1) {
    pcVar3 = (char *)thunk_FUN_01a59484();
    if (*pcVar3 == '\0') {
      uVar4 = Liv_Lck_Recorder_LckRecorder__GetReleaseResourcesFunction();
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cdc178);
      uVar4 = FUN_025b1328(uVar4,uVar5,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar5 = thunk_FUN_01a89e68();
      FUN_027a794c(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5);
    }
    iVar7 = 7;
  }
  else {
    puVar2 = (undefined8 *)thunk_FUN_01a59484();
    plVar8 = (long *)*puVar2;
    piVar1 = (int *)thunk_FUN_01a59484();
    iVar7 = *piVar1;
    FUN_01882f84();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar8 + 3) <= iVar7 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy(unaff_x22,
           (void *)((long)plVar8 +
                   (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)(iVar7 - 1U) + 0x20),unaff_x21);
    memcpy(unaff_x26,unaff_x22,unaff_x21);
    iVar7 = 3;
  }
  if (*(char *)(unaff_x29 + -0x1c) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (iVar7 == 7) {
LAB_0224a914:
    __src = (void *)thunk_FUN_01a59484();
    memcpy(unaff_x24,__src,unaff_x25);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18) + 0x28)) {
      unaff_x24 = (undefined8 *)*unaff_x24;
    }
    lVar6 = *unaff_x20;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar6 + 400) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 400) + 8));
  }
  else {
    if (iVar7 != 3) {
      if (iVar7 != 0) goto LAB_0224a99c;
      goto LAB_0224a914;
    }
    memcpy(unaff_x22,unaff_x26,unaff_x21);
  }
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x22,unaff_x21);
LAB_0224a99c:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


