/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$Dispose
ENTRY_POINT: 0224ae58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224af5c) */
/* WARNING: Removing unreachable block (ram,0x0224af7c) */
/* WARNING: Removing unreachable block (ram,0x0224af94) */
/* WARNING: Removing unreachable block (ram,0x0224af98) */
/* WARNING: Removing unreachable block (ram,0x0224aff4) */

undefined4 Liv_Lck_Recorder_LckRecorder__Dispose(void)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  void *unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  long *unaff_x24;
  long unaff_x29;
  
  puVar2 = (uint *)thunk_FUN_01a59484();
  uVar1 = *puVar2;
  FUN_01882f84();
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x20,unaff_x21,unaff_x23);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)unaff_x24 + (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)uVar1 + 0x20),
         unaff_x20,unaff_x23);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  if (uVar1 < *(uint *)(unaff_x24 + 3)) {
    FUN_01ab6954(lVar3,(long)unaff_x24 +
                       (ulong)*(uint *)(*unaff_x24 + 0x104) * (long)(int)uVar1 + 0x20);
    if (*(char *)(unaff_x29 + -0x34) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


