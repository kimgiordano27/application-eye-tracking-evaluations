/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 05d1fdd0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled
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
  uVar2 = FUN_05d1f594();
  if (DAT_0738e660 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    DAT_0738e660 = '\x01';
  }
  lVar1 = *(long *)(*unaff_x25 + 0xb8);
                    /* try { // try from 05d1fe58 to 05e1febb has its CatchHandler @ 05d1fe58
                       catch() { ... } // from try @ 05d1fe58 with catch @ 05d1fe58
                       catch() { ... } // from try @ 05d1ff14 with catch @ 05d1fe58
                       catch() { ... } // from try @ 05d1ff50 with catch @ 05d1fe58
                       catch() { ... } // from try @ 05d1ff94 with catch @ 05d1fe58 */
  fVar5 = (float)FUN_068ed2ec(uVar2,uVar4,uVar7,uVar8,*(undefined4 *)(lVar1 + 0x48),
                              *(undefined4 *)(lVar1 + 0x4c),*(undefined4 *)(lVar1 + 0x50),0);
  fVar9 = unaff_x22[1];
  fVar10 = unaff_x22[2];
  fVar3 = in_stack_00000008._4_4_ * (float)uVar4;
  fVar6 = in_stack_00000008._4_4_ * (float)uVar7;
  *unaff_x21 = *unaff_x22 + in_stack_00000008._4_4_ * fVar5;
  unaff_x21[1] = fVar9 + fVar3;
  unaff_x21[2] = fVar6 + fVar10;
  fVar9 = unaff_x20[1];
  fVar10 = unaff_x20[2];
  *unaff_x19 = in_stack_00000008._4_4_ * fVar5 + *unaff_x20;
  unaff_x19[1] = fVar3 + fVar9;
  unaff_x19[2] = fVar6 + fVar10;
  return;
}


