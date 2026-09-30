/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01a1d7d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined1 auVar4 [16];
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x21 + 0x9e1) = 1;
  uVar1 = _LAB_028aa0d8;
  uVar3 = _DAT_028aa0d0;
  auVar4 = NEON_fmov(0x3f800000,4);
  *(long *)(unaff_x19 + 0x70) = auVar4._8_8_;
  *(long *)(unaff_x19 + 0x68) = auVar4._0_8_;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  uVar3 = FUN_0265fee4(0,ZEXT816(0x3f800000),0x3f800000,0,0);
  uVar2 = DAT_028aa288;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  uVar3 = FUN_0265fee4(0,ZEXT816(0),0x3f800000,uVar2,0);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x98) = 0x41000000;
  *(undefined1 *)(unaff_x19 + 0xa8) = 1;
  FUN_01301648();
  return;
}


