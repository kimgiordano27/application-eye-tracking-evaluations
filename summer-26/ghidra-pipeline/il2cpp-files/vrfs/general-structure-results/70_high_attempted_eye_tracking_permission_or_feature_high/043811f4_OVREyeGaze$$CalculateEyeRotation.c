/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 043811f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  lVar2 = thunk_FUN_0159f088(*(undefined8 *)(param_2 + 0x6f0));
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar3 = FUN_031c8668(uVar4,0);
  uVar4 = thunk_FUN_0159f088(PTR_DAT_06e57350,uVar3,0);
  uVar4 = FUN_0160edfc(uVar4,2);
  FUN_011a9bc8();
  FUN_011ae3d8(uVar4);
  FUN_011ae40c(uVar4,0);
  FUN_011a9bc8(uVar4);
  FUN_011ae3d8(uVar4,uVar3);
  FUN_011ae40c(uVar4,1,uVar3);
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06d9af80);
  uVar4 = FUN_02d78b34(uVar3,uVar4,0);
  thunk_FUN_0159f088(PTR_DAT_06dde728);
  uVar3 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar1 = thunk_FUN_0159f088(PTR_DAT_06e0a6b0);
  FUN_028f287c(uVar3,uVar4,uVar1,0);
  uVar4 = thunk_FUN_0159f088(PTR_DAT_06e3ee20);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,uVar4);
}


