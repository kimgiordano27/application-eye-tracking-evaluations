/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$CopyRecordingToGalleryWhenReadyAsync
ENTRY_POINT: 0224adb0
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


/* WARNING: Removing unreachable block (ram,0x0224aff4) */

undefined4
Liv_Lck_Recorder_LckRecorder__CopyRecordingToGalleryWhenReadyAsync(undefined8 param_1,long param_2)

{
  void *__src;
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined4 uVar7;
  uint uVar8;
  long unaff_x29;
  
  (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 8));
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    *(undefined1 *)(unaff_x29 + -0x34) = 0;
    FUN_027e0bd8();
    piVar2 = (int *)thunk_FUN_01a59484();
    iVar1 = *piVar2;
    plVar3 = (long *)thunk_FUN_01a59484();
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (iVar1 < *(int *)(*plVar3 + 0x18)) {
      puVar4 = (undefined8 *)thunk_FUN_01a59484();
      plVar3 = (long *)*puVar4;
      puVar5 = (uint *)thunk_FUN_01a59484();
      uVar8 = *puVar5;
      FUN_01882f84();
      __src = unaff_x21;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x20,__src,unaff_x23);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(plVar3 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * (long)(int)uVar8 + 0x20),
             unaff_x20,unaff_x23);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8();
      }
      if (*(uint *)(plVar3 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar6,(long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * (long)(int)uVar8 + 0x20)
      ;
      uVar7 = 1;
      uVar8 = 4;
    }
    else {
      uVar7 = 0;
      uVar8 = 2;
    }
    if (*(char *)(unaff_x29 + -0x34) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if ((uVar8 | 2) != 2) goto LAB_0224afbc;
  }
  lVar6 = *(long *)(unaff_x22 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x28) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x20,unaff_x21,unaff_x23);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x28) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  lVar6 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
  (**(code **)(*(long *)(lVar6 + 0x1a0) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x1a0) + 8));
  uVar7 = 0;
LAB_0224afbc:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


