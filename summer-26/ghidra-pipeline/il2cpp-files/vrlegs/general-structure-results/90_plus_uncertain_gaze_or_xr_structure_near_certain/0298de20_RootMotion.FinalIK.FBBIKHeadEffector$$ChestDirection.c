/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$ChestDirection
ENTRY_POINT: 0298de20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0298df2c) */
/* WARNING: Removing unreachable block (ram,0x0298de74) */
/* WARNING: Removing unreachable block (ram,0x0298dea4) */
/* WARNING: Removing unreachable block (ram,0x0298df68) */
/* WARNING: Removing unreachable block (ram,0x0298df70) */
/* WARNING: Removing unreachable block (ram,0x0298db60) */

void RootMotion_FinalIK_FBBIKHeadEffector__ChestDirection(long *param_1)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 unaff_w25;
  long in_stack_00000008;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000090;
  
  do {
    if (in_w8 == 2) {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *(long *)(in_stack_00000008 + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*param_1 + 0x198))
                (param_1,lVar2,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*param_1 + 0x1a0));
    }
    do {
      uVar1 = FUN_021b4a88(&stack0x00000030,*unaff_x22);
      if ((uVar1 & 1) == 0) {
        FUN_021b503c(&stack0x00000030,*(undefined8 *)PTR_DAT_03d079a0);
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x100);
        if (lVar2 != 0) {
          FUN_02210f9c(lVar2,*(undefined8 *)PTR_DAT_03d07978);
          if (in_stack_00000058._4_1_ != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0();
          }
          *(undefined1 *)(unaff_x20 + 0x10) = unaff_w25;
          if (*(long *)(unaff_x20 + 0x40) != 0) {
            FUN_027de7f8(*(long *)(unaff_x20 + 0x40),0);
            if (in_stack_00000090._4_1_ != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0();
            }
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01d5dd70(&stack0x00000030,&stack0x00000008,*unaff_x23);
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      param_1 = *(long **)(*(long *)(unaff_x20 + 0x30) + 0x28);
    } while (param_1 == (long *)0x0);
    in_w8 = *(int *)((long)param_1 + 0x1c);
  } while( true );
}


