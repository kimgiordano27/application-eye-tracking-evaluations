/*
FUNCTION_NAME: FUN_0426c2b4
ENTRY_POINT: 0426c2b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0426c2b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long *param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
                    /* try { // try from 0426c2c8 to 0436c2db has its CatchHandler @ 0426c984 */
  *param_5 = (long)param_6;
  thunk_FUN_036b7ad0();
  *(undefined4 *)(param_5 + 2) = param_1;
  *(undefined4 *)((long)param_5 + 0x14) = param_2;
  *(undefined4 *)(param_5 + 3) = param_3;
  *(undefined4 *)((long)param_5 + 0x1c) = param_4;
  if (param_6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar1 = *(long *)(param_7 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  lVar3 = *param_6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(param_6,lVar1,2);
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor:
  lVar1 = (*(code *)*puVar2)(param_6,puVar2[1]);
  param_5[1] = lVar1;
  *(undefined4 *)(param_5 + 4) = 0xffffffff;
  return;
}


