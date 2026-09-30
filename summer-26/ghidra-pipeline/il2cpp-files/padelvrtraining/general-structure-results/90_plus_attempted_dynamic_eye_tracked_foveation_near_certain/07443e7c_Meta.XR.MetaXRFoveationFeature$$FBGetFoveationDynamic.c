/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 07443e7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 126
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  uStack0000000000000008 = in_stack_00000038;
  uStack0000000000000000 = in_stack_00000030;
  uStack0000000000000018 = in_stack_00000048;
  uStack0000000000000010 = in_stack_00000040;
  uStack0000000000000020 = in_stack_00000050;
  FUN_074442b4();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_08abf9b0(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
      if (lVar1 != 0) {
        FUN_08a5d494(lVar1,0);
        *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
        *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
        *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
        *(undefined1 *)(unaff_x19 + 0x7c) = 1;
        FUN_074437b0();
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


