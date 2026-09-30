/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 027fb03c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *__ptr;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 local_64 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar2 = PTR_DAT_03cc4fe8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_041251ac & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4fe8);
    FUN_01ab69ac(PTR_DAT_03cc5378);
    FUN_01ab69ac(PTR_DAT_03ccdb28);
    FUN_01ab69ac(PTR_DAT_03cfd990);
    DAT_041251ac = 1;
  }
  puVar5 = PTR_DAT_03cfd990;
  puVar4 = PTR_DAT_03ccdb28;
  puVar3 = PTR_DAT_03cc5378;
  local_50 = param_1[2];
  uStack_58 = param_1[1];
  local_60 = *param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  __ptr = (void *)FUN_02670d34(0x40,0);
  FUN_027fb17c(&local_60,__ptr,0x40);
  uVar6 = thunk_FUN_01a60d3c(__ptr,0);
  free(__ptr);
  local_64[0] = *(undefined2 *)(param_1 + 2);
  uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,local_64);
  FUN_025be8b0(*(undefined8 *)puVar5,*(undefined8 *)puVar4,uVar6,uVar7,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


