/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder$$DoCloseMicrophoneAsync
ENTRY_POINT: 0224ad08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0224aff4) */

undefined4 Liv_Lck_Recorder_LckRecorder__DoCloseMicrophoneAsync(long *param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  long *plVar4;
  uint *puVar5;
  long in_x9;
  ulong in_x10;
  ulong uVar6;
  long *unaff_x19;
  undefined8 *__dest;
  void *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *__dest_00;
  uint uVar9;
  void *unaff_x26;
  size_t unaff_x27;
  long lVar10;
  long unaff_x29;
  
  __dest = (undefined8 *)(in_x9 - (in_x10 & 0x1fffffff0));
  uVar6 = unaff_x27 + 0xf & 0x1fffffff0;
  puVar7 = (undefined8 *)((long)__dest - uVar6);
  __dest_00 = (undefined8 *)((long)puVar7 - uVar6);
  *(undefined1 *)(unaff_x29 + -0x34) = 0;
  pvVar2 = (void *)thunk_FUN_01a59484(param_2,*(long *)(*param_1 + 0x80) + 0x20);
  memcpy(puVar7,pvVar2,unaff_x27);
  lVar10 = *(long *)(unaff_x22 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest_00,unaff_x26,unaff_x27);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x28)) {
    puVar7 = (undefined8 *)*puVar7;
    __dest_00 = (undefined8 *)*__dest_00;
  }
  lVar10 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
  *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
  (**(code **)(*(long *)(lVar10 + 0x1b0) + 0x10))(*(undefined8 *)(*(long *)(lVar10 + 0x1b0) + 8));
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    *(undefined1 *)(unaff_x29 + -0x34) = 0;
    FUN_027e0bd8();
    piVar3 = (int *)thunk_FUN_01a59484();
    iVar1 = *piVar3;
    plVar4 = (long *)thunk_FUN_01a59484();
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (iVar1 < *(int *)(*plVar4 + 0x18)) {
      puVar7 = (undefined8 *)thunk_FUN_01a59484();
      plVar4 = (long *)*puVar7;
      puVar5 = (uint *)thunk_FUN_01a59484();
      uVar9 = *puVar5;
      FUN_01882f84();
      pvVar2 = unaff_x21;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(__dest,pvVar2,unaff_x23);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(plVar4 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar9 + 0x20),
             __dest,unaff_x23);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      if (*(uint *)(plVar4 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar10,(long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar9 + 0x20
                   ,__dest);
      uVar8 = 1;
      uVar9 = 4;
    }
    else {
      uVar8 = 0;
      uVar9 = 2;
    }
    if (*(char *)(unaff_x29 + -0x34) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if ((uVar9 | 2) != 2) goto LAB_0224afbc;
  }
  lVar10 = *(long *)(unaff_x22 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x21,unaff_x23);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar10 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = __dest;
  (**(code **)(*(long *)(lVar10 + 0x1a0) + 0x10))(*(undefined8 *)(*(long *)(lVar10 + 0x1a0) + 8));
  uVar8 = 0;
LAB_0224afbc:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


