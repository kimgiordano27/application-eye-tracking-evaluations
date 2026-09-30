/*
FUNCTION_NAME: FUN_06e35af8
ENTRY_POINT: 06e35af8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_06e35af8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_076ead21 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Net_NetEventSource_WriteEvent__);
    thunk_FUN_032e1da0(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_076ead21 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar6 = *(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)Method_System_Net_NetEventSource_WriteEvent__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_06e35b9c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_032937ac(plVar5,*(long *)Method_System_Net_NetEventSource_WriteEvent__,9);
LAB_06e35b9c:
                    /* WARNING: Could not recover jumptable at 0x06e35bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}


