/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 027fc320
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x23;
  ulong uVar3;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfda18);
    FUN_01ab69ac(PTR_DAT_03cfda20);
    FUN_01ab69ac(PTR_DAT_03cfda28);
    FUN_01ab69ac(PTR_DAT_03cfda10);
    *(undefined1 *)(unaff_x24 + 0x209) = 1;
  }
  puVar2 = PTR_DAT_03cfda28;
  puVar1 = PTR_DAT_03cfda18;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = (ulong)&stack0x00000000 | 8;
  FUN_021454e4(uVar3,*(undefined8 *)puVar1);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(uVar3,0);
  in_stack_00000020 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000020,param_2);
  in_stack_00000028 = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000028,param_3);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000030);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000038);
  in_stack_00000000 = CONCAT44(in_stack_00000000._4_4_,0xffffffff);
  FUN_01f07828(uVar3);
  FUN_021454f8(uVar3,*(undefined8 *)puVar2);
  return;
}


