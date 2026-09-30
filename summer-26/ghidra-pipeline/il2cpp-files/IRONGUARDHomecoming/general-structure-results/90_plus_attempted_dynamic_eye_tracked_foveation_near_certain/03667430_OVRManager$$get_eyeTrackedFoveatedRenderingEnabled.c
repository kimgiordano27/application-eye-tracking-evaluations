/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03667430
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],
               undefined4 param_4)

{
  undefined8 *unaff_x19;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
  uStack0000000000000014 = param_2;
  uStack000000000000001c = param_4;
  FUN_0407bae8();
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  uStack0000000000000004 = param_2;
  FUN_03667690(uStack000000000000002c,uStack0000000000000028,&stack0x00000030);
  *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(in_stack_00000048,uStack0000000000000044);
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(in_stack_00000040,uStack000000000000003c);
  unaff_x19[1] = CONCAT44(uStack000000000000003c,in_stack_00000038);
  *unaff_x19 = in_stack_00000030;
  return;
}


