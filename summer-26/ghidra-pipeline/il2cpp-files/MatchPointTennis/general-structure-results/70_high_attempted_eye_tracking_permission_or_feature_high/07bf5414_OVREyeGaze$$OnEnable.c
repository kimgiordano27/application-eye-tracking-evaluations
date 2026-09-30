/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 07bf5414
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint OVREyeGaze__OnEnable(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_07bf5468;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_07bf5468:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    FUN_09537fe0(lVar2,0);
    uStack000000000000000c = 0;
    uStack0000000000000014 = 0;
    FUN_09537b20();
    *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
    unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
    *unaff_x19 = 0;
    return unaff_w20 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


