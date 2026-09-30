/*
FUNCTION_NAME: Cysharp.Threading.Tasks.UniTask.WhenAnyPromise$$GetStatus
ENTRY_POINT: 02fc8400
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


/* WARNING: Removing unreachable block (ram,0x02fc84b8) */

void Cysharp_Threading_Tasks_UniTask_WhenAnyPromise__GetStatus(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000068;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar1 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0x30);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(lVar1,(long)*(short *)(param_1 + 0x11c),&stack0x00000040,
                 *(undefined8 *)PTR_DAT_03d268d8);
    uVar2 = in_stack_00000040;
  }
  *(undefined8 *)(in_stack_00000038 + 0x38) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined1 *)(in_stack_00000038 + 0x40) = 1;
  if (in_stack_00000068._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


