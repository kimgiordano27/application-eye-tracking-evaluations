/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 073dbeac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long lVar1;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  long *unaff_x25;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong uVar7;
  
  uVar8 = (ulong)(uint)(param_8 + param_5);
  uVar4 = (ulong)(uint)(unaff_s8 - param_2);
  fVar5 = unaff_s15 - param_4 * param_3;
  uVar7 = (ulong)(uint)fVar5;
  *unaff_x22 = param_8 - param_1;
  unaff_x22[1] = unaff_s8 - param_2;
  unaff_x22[2] = fVar5;
  *unaff_x20 = param_8 + param_5;
  unaff_x20[1] = unaff_s8 + param_6;
  unaff_x20[2] = unaff_s15 + param_7;
  uVar2 = FUN_073db670();
  if (DAT_09410146 == '\0') {
                    /* try { // try from 073dbf04 to 074dbf4f has its CatchHandler @ 073dbf04
                       catch() { ... } // from try @ 073dbf04 with catch @ 073dbf04
                       catch() { ... } // from try @ 073dc004 with catch @ 073dbf04
                       catch() { ... } // from try @ 073dc050 with catch @ 073dbf04
                       catch() { ... } // from try @ 073dc118 with catch @ 073dbf04
                       catch() { ... } // from try @ 073dc160 with catch @ 073dbf04
                       catch() { ... } // from try @ 073dc198 with catch @ 073dbf04 */
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar1 = *(long *)(*unaff_x25 + 0xb8);
  fVar5 = (float)FUN_085d2bd4(uVar2,uVar4,uVar7,uVar8,*(undefined4 *)(lVar1 + 0x48),
                              *(undefined4 *)(lVar1 + 0x4c),*(undefined4 *)(lVar1 + 0x50),0);
  fVar9 = unaff_x22[1];
  fVar10 = unaff_x22[2];
                    /* try { // try from 073dbf50 to 074dbf53 has its CatchHandler @ 073dc01c */
  fVar3 = in_stack_00000008._4_4_ * (float)uVar4;
  fVar6 = in_stack_00000008._4_4_ * (float)uVar7;
  *unaff_x21 = *unaff_x22 + in_stack_00000008._4_4_ * fVar5;
  unaff_x21[1] = fVar9 + fVar3;
  unaff_x21[2] = fVar6 + fVar10;
  fVar9 = unaff_x20[1];
                    /* try { // try from 073dbf70 to 074dbf87 has its CatchHandler @ 073dc010 */
  fVar10 = unaff_x20[2];
  *unaff_x19 = in_stack_00000008._4_4_ * fVar5 + *unaff_x20;
  unaff_x19[1] = fVar3 + fVar9;
  unaff_x19[2] = fVar6 + fVar10;
                    /* try { // try from 073dbf98 to 074dbfa7 has its CatchHandler @ 073dc008 */
  return;
}


