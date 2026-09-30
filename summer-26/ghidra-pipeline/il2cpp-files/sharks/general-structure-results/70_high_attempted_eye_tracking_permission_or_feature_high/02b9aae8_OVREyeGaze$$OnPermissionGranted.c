/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 02b9aae8
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVREyeGaze__OnPermissionGranted(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_03808d08;
  if ((DAT_03a259a8 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03808d08);
    DAT_03a259a8 = 1;
  }
  lVar5 = thunk_FUN_01861bbc(*(undefined8 *)puVar4);
  FUN_02c108e4(lVar5,0);
  uVar3 = _UNK_009a7958;
  uVar2 = _DAT_009a7950;
  uVar1 = DAT_009a5650;
  *(undefined2 *)(lVar5 + 0x10) = 0x2d;
  *(undefined4 *)(lVar5 + 0x2c) = 0x80;
  *(undefined8 *)(lVar5 + 0x1c) = uVar3;
  *(undefined8 *)(lVar5 + 0x14) = uVar2;
  *(undefined8 *)(lVar5 + 0x24) = uVar1;
  *(long *)(param_1 + 0x18) = lVar5;
  thunk_FUN_0188fd20((long *)(param_1 + 0x18),lVar5);
  FUN_02c108e4(param_1,0);
  return;
}


