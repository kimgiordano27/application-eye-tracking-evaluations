/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFacingDirection
ENTRY_POINT: 05afe560
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


bool Meta_XR_MRUtilityKit_MRUKRoom__GetFacingDirection(long param_1)

{
  long lVar1;
  long in_x9;
  int in_w10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
  while( true ) {
    uVar3 = in_w11;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x9 + 0x18) <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (-1 < *(int *)(in_x9 + (long)(int)unaff_w23 * (long)in_w10 + 0x20)) break;
    if (unaff_w22 <= uVar3) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      goto LAB_05afe61c;
    }
    in_x9 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar3 + 1;
    in_w11 = uVar3 + 1;
    unaff_w23 = uVar3;
  }
  lVar1 = in_x9 + (long)(int)unaff_w23 * 0x30;
  uStack0000000000000014 = *(undefined8 *)(lVar1 + 0x44);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  in_stack_00000040 = 0;
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20);
  uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  in_stack_00000058 = uStack0000000000000008;
  uStack0000000000000064 = uStack0000000000000014;
  uStack000000000000005c = uStack000000000000000c;
  in_stack_00000060 = uStack0000000000000010;
  in_stack_00000050 = uVar4;
  FUN_045e0a28(&stack0x00000020,uVar2,&stack0x00000050,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
  uVar3 = unaff_w23;
LAB_05afe61c:
  return uVar3 < unaff_w22;
}


