/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSurfacePositionDebugger>b__57_0
ENTRY_POINT: 05b0d79c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSurfacePositionDebugger>b__57_0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int in_w9;
  undefined8 uVar3;
  long in_x10;
  uint in_w11;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while( true ) {
    if (in_w12 <= in_w11) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar4 = in_w11 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w23 * (long)in_w9 + 0x20)) break;
    if (unaff_w22 <= uVar4) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      goto LAB_05b0d83c;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = in_w11 + 2;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w12 = *(uint *)(in_x10 + 0x18);
    in_w11 = in_w11 + 1;
    unaff_w23 = uVar4;
  }
  lVar2 = in_x10 + (long)(int)unaff_w23 * 0x28;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar6 = *(undefined8 *)(lVar2 + 0x38);
  uVar5 = *(undefined8 *)(lVar2 + 0x30);
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  in_stack_00000040 = uVar5;
  in_stack_00000048 = uVar6;
  in_stack_00000050 = uVar3;
  FUN_045e3084(&stack0x00000020,uVar1,&stack0x00000040,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
  thunk_FUN_0329bf60(unaff_x19 + 0x18,0);
  uVar4 = unaff_w23;
LAB_05b0d83c:
  return uVar4 < unaff_w22;
}


