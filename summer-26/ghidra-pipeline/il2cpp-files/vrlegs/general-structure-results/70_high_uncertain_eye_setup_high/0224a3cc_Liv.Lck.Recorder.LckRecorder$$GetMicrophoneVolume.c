/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$GetMicrophoneVolume
ENTRY_POINT: 0224a3cc
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


/* WARNING: Removing unreachable block (ram,0x0224a61c) */

void Liv_Lck_Recorder_LckRecorder__GetMicrophoneVolume(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x22;
  undefined8 *__dest;
  long unaff_x27;
  long *plVar9;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x9 + 0xfc);
  uVar2 = *(uint *)(param_1 + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  FUN_027e0bd8(param_2,unaff_x29 + -0x1c,0);
  while( true ) {
    piVar5 = (int *)thunk_FUN_01a59484();
    if (*piVar5 < 1) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
        unaff_x22 = (void *)(unaff_x29 + -0x18);
      }
      memcpy((void *)((long)__dest - ((ulong)uVar2 + 0xf & 0x1fffffff0)),unaff_x22,(ulong)uVar2);
      FUN_01ab69d4();
      puVar7 = (undefined4 *)thunk_FUN_01a59484();
      uVar4 = *puVar7;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      FUN_01ab6a94(lVar8,uVar4);
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
    puVar6 = (undefined8 *)thunk_FUN_01a59484();
    plVar9 = (long *)*puVar6;
    piVar5 = (int *)thunk_FUN_01a59484();
    iVar3 = *piVar5;
    FUN_01882f84();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar9 + 3) <= iVar3 - 1U) break;
    memcpy(__dest,(void *)((long)plVar9 +
                          (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)(iVar3 - 1U) + 0x20),
           (ulong)uVar1);
    puVar6 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28) + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
    }
    lVar8 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar6;
    (**(code **)(*(long *)(lVar8 + 0x1a0) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0x1a0) + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


