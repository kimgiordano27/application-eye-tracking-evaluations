/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpaceRotation
ENTRY_POINT: 052ed908
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpaceRotation
               (float param_1,undefined8 param_2,undefined1 param_3 [16],undefined4 param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  FUN_052ee044(param_4,param_2,unaff_s8 * param_1);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = FUN_060ed7ac(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = FUN_052c2324(&stack0x00000008,uVar1,0,0);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    uStack0000000000000054 = uStack000000000000001c;
    in_stack_00000050 = uStack0000000000000018;
    FUN_052ee2c0(uVar1,unaff_x19 + 0xb0,&stack0x00000060,&stack0x00000040);
    FUN_052ee40c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


