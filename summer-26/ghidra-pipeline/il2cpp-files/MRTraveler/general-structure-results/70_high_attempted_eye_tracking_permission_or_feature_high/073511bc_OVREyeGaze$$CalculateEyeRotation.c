/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 073511bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVREyeGaze__CalculateEyeRotation(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long unaff_x21;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  long unaff_x23;
  undefined8 *puVar7;
  long unaff_x24;
  
  puVar3 = PTR_DAT_08e717a8;
  puVar7 = *(undefined8 **)(unaff_x23 + 0x8b0);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x8b8);
  puVar5 = *(undefined8 **)(unaff_x21 + 0x8c0);
  if ((*(byte *)(unaff_x24 + 0x1b9) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb38c0);
    FUN_03c8f898(PTR_DAT_08eb38b8);
    FUN_03c8f898(PTR_DAT_08e717a8);
    FUN_03c8f898(PTR_DAT_08eb38b0);
    *(undefined1 *)(unaff_x24 + 0x1b9) = 1;
  }
                    /* try { // try from 07351214 to 07451257 has its CatchHandler @ 07351270 */
  uVar2 = _UNK_018b2fa8;
  uVar1 = _DAT_018b2fa0;
  *(undefined4 *)(param_1 + 0x58) = 0x3ba3d70a;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar4 = FUN_085b2b04(*puVar7,0);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  uVar4 = FUN_085b2b04(*puVar6,0);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  uVar4 = FUN_085b2b04(*puVar5,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar4 = FUN_085b2b04(*(undefined8 *)puVar3,0);
                    /* try { // try from 07351268 to 0745126b has its CatchHandler @ 0735126c */
  *(undefined4 *)(param_1 + 0x80) = uVar4;
                    /* catch() { ... } // from try @ 07351268 with catch @ 0735126c */
                    /* catch() { ... } // from try @ 07351214 with catch @ 07351270 */
  thunk_FUN_085db0ec(param_1,0);
  return;
}


