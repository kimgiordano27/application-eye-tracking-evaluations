/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 01a14294
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined4 *unaff_x21;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack000000000000007c = 0;
  FUN_01a13234(param_5,param_7);
  in_stack_00000078 = FUN_01a1347c(param_5,param_7);
  FUN_01a1441c(*unaff_x21,unaff_x21[1],unaff_x21[2],param_5,&stack0x00000020,&stack0x0000007c,
               param_7);
  uVar1 = uStack000000000000007c;
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  lVar2 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  uVar4 = FUN_02699088(in_stack_00000078,param_2,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),
                       *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  fVar3 = (float)FUN_02698d50(uVar1,uVar4,param_2,param_3,0);
  fVar7 = (float)param_3;
  fVar5 = (float)uVar4;
  fVar6 = (float)param_2;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_02666aac(uStack0000000000000020 & 0xffffffff,uStack0000000000000020._4_4_,
               uStack0000000000000028,
               (fStack0000000000000014 * fVar5 +
               in_stack_00000008._4_4_ * fVar7 + in_stack_00000018 * fVar3) -
               fStack0000000000000010 * fVar6,
               (in_stack_00000008._4_4_ * fVar6 +
               fStack0000000000000010 * fVar7 + in_stack_00000018 * fVar5) -
               fStack0000000000000014 * fVar3,
               (fStack0000000000000010 * fVar3 +
               fStack0000000000000014 * fVar7 + in_stack_00000018 * fVar6) -
               in_stack_00000008._4_4_ * fVar5,
               ((in_stack_00000018 * fVar7 - in_stack_00000008._4_4_ * fVar3) -
               fStack0000000000000010 * fVar5) - fStack0000000000000014 * fVar6);
  return;
}


