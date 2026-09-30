/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 051b9c7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000007c;
  
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack000000000000007c = 0;
  FUN_051b8b60(param_6,param_8);
  uVar3 = FUN_051b8da8(param_6,param_8);
  FUN_051b9e20(*param_7,param_7[1],param_7[2],param_6,&stack0x00000020,&stack0x0000007c,param_8);
  uVar1 = uStack000000000000007c;
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  uVar5 = FUN_05eea23c(uVar3,param_3,param_4,param_5,*(undefined4 *)(lVar2 + 0x18),
                       *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  fVar4 = (float)FUN_05ee9f08(uVar1,uVar5,param_3,param_4,0);
  fVar8 = (float)param_4;
  fVar6 = (float)uVar5;
  fVar7 = (float)param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = 0;
  FUN_05effcac(uStack0000000000000020 & 0xffffffff,uStack0000000000000020._4_4_,
               uStack0000000000000028,
               (fStack0000000000000014 * fVar6 +
               in_stack_00000008._4_4_ * fVar8 + in_stack_00000018 * fVar4) -
               fStack0000000000000010 * fVar7,
               (in_stack_00000008._4_4_ * fVar7 +
               fStack0000000000000010 * fVar8 + in_stack_00000018 * fVar6) -
               fStack0000000000000014 * fVar4,
               (fStack0000000000000010 * fVar4 +
               fStack0000000000000014 * fVar8 + in_stack_00000018 * fVar7) -
               in_stack_00000008._4_4_ * fVar6,
               ((in_stack_00000018 * fVar8 - in_stack_00000008._4_4_ * fVar4) -
               fStack0000000000000010 * fVar6) - fStack0000000000000014 * fVar7,param_1,0);
  return;
}


