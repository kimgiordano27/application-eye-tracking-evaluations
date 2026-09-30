/*
FUNCTION_NAME: Autohand.GrabbablePoseAdvanced$$GetClosestRotation
ENTRY_POINT: 00e731ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Autohand_GrabbablePoseAdvanced__GetClosestRotation(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00e6b32c();
    uVar1 = FUN_012b894c(&stack0x00000020,*unaff_x23);
    if ((uVar1 & 1) == 0) break;
    param_1 = FUN_00ac4c80(&stack0x00000020,*unaff_x24);
  }
  FUN_012b8948(&stack0x00000020,*unaff_x22);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0x68),&stack0x00000008,*unaff_x25);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar1 = FUN_012b894c(&stack0x00000020,*unaff_x23), (uVar1 & 1) != 0) {
      lVar2 = FUN_00ac4c80(&stack0x00000020,*unaff_x24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0268f270(lVar2,0);
      *(undefined1 *)(lVar2 + 100) = 0;
    }
    FUN_012b8948(&stack0x00000020,*unaff_x22);
    plVar3 = *(long **)(unaff_x19 + 0x40);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_00e6d1d0();
        if (*(long *)(unaff_x19 + 0x58) != 0) {
          FUN_0266622c(*(long *)(unaff_x19 + 0x58),0,0);
          if (*(long *)(unaff_x19 + 0x78) != 0) {
            FUN_00e6d138();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


