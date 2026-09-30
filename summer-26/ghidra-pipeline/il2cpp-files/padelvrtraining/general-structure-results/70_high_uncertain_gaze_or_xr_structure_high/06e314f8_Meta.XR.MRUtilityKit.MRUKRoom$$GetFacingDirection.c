/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFacingDirection
ENTRY_POINT: 06e314f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


bool Meta_XR_MRUtilityKit_MRUKRoom__GetFacingDirection(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  FUN_07199bdc(0);
  lVar5 = *unaff_x19;
  if (lVar5 == 0) {
LAB_06e31620:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar3 = *(uint *)(lVar5 + 0x20);
  uVar4 = *(uint *)((long)unaff_x19 + 0xc);
  do {
    uVar7 = uVar4;
    if (uVar3 <= uVar7) {
      *(uint *)((long)unaff_x19 + 0xc) = uVar3 + 1;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      unaff_x19[9] = 0;
      unaff_x19[8] = 0;
      unaff_x19[0xb] = 0;
      unaff_x19[10] = 0;
      unaff_x19[0xc] = 0;
      goto LAB_06e31600;
    }
    lVar6 = *(long *)(lVar5 + 0x18);
    *(uint *)((long)unaff_x19 + 0xc) = uVar7 + 1;
    if (lVar6 == 0) goto LAB_06e31620;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar4 = uVar7 + 1;
  } while (*(int *)(lVar6 + (long)(int)uVar7 * 0x60 + 0x20) < 0);
  lVar6 = lVar6 + (long)(int)uVar7 * 0x60;
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  uVar2 = *(undefined8 *)(lVar6 + 0x30);
  memcpy(&stack0x00000008,(void *)(lVar6 + 0x38),0x48);
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38);
  memcpy(&stack0x000000a8,&stack0x00000008,0x48);
  FUN_0580ba20(&stack0x00000050,uVar1,uVar2,&stack0x000000a8,uVar8);
  memcpy(unaff_x19 + 2,&stack0x00000050,0x58);
  thunk_FUN_03d1023c(unaff_x19 + 8,0);
LAB_06e31600:
  return uVar7 < uVar3;
}


