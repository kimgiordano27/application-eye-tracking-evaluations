/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0601022c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  undefined4 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  ulong in_stack_00000018;
  
  in_stack_00000018 = in_stack_00000018 >> 0x20;
  uVar3 = (ulong)(uint)unaff_x20[1];
  uVar5 = (ulong)(uint)unaff_x20[2];
  uVar1 = FUN_060100c0(*unaff_x20,uVar3,uVar5);
  uStack000000000000000c = unaff_x20[6];
  uStack0000000000000004 = *(undefined8 *)(unaff_x20 + 4);
  uVar4 = uVar3;
  uVar6 = uVar5;
  uVar2 = FUN_06010798(uVar1,uVar3);
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = 0;
  *(undefined4 *)(unaff_x22 + 3) = 0;
  FUN_06e67e1c(uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,in_stack_00000018);
  return;
}


