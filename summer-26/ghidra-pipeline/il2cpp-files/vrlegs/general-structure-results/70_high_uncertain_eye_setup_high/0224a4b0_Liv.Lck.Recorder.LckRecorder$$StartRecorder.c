/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$StartRecorder
ENTRY_POINT: 0224a4b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224a61c) */

void Liv_Lck_Recorder_LckRecorder__StartRecorder(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    memcpy(unaff_x25,(void *)((long)unaff_x28 + (ulong)*(uint *)(param_1 + 0x104) * in_x9 + 0x20),
           unaff_x24);
    puVar5 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x25;
    }
    lVar6 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
    (**(code **)(*(long *)(lVar6 + 0x1a0) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x1a0) + 8));
    piVar3 = (int *)thunk_FUN_01a59484();
    if (*piVar3 < 1) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
        unaff_x22 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      FUN_01ab69d4();
      puVar4 = (undefined4 *)thunk_FUN_01a59484();
      uVar2 = *puVar4;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8();
      }
      FUN_01ab6a94(lVar6,uVar2);
      FUN_018820a8();
      FUN_01883150();
      if (*(char *)(unaff_x29 + -0x1c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar5 = (undefined8 *)thunk_FUN_01a59484();
    unaff_x28 = (long *)*puVar5;
    piVar3 = (int *)thunk_FUN_01a59484();
    iVar1 = *piVar3;
    FUN_01882f84();
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x28 + 3) <= iVar1 - 1U) break;
    param_1 = *unaff_x28;
    in_x9 = (long)(int)(iVar1 - 1U);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


