/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$<Start>b__15_0
ENTRY_POINT: 06e45358
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SpaceMap__<Start>b__15_0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(unaff_x19 + 0xc);
  do {
    uVar5 = uVar3;
    if (uVar1 <= uVar5) {
      *(uint *)(unaff_x19 + 0xc) = uVar1 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      goto LAB_06e4544c;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar5 + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar3 = uVar5 + 1;
  } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x68 + 0x20) < 0);
  lVar4 = lVar4 + (long)(int)uVar5 * 0x68;
  uVar2 = *(undefined4 *)(lVar4 + 0x28);
  memcpy(&stack0x00000008,(void *)(lVar4 + 0x30),0x58);
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38);
  memcpy(&stack0x000000c8,&stack0x00000008,0x58);
  System_Collections_Generic_List<ValueTuple<Vector3,_float>>__set_Capacity
            (&stack0x00000060,uVar2,&stack0x000000c8,uVar6);
  memcpy((void *)(unaff_x19 + 0x10),&stack0x00000060,0x60);
  thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
LAB_06e4544c:
  return uVar5 < uVar1;
}


