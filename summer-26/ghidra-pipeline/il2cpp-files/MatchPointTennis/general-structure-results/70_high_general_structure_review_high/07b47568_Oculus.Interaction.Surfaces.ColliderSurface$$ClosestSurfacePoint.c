/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ColliderSurface$$ClosestSurfacePoint
ENTRY_POINT: 07b47568
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07b477d0) */

void Oculus_Interaction_Surfaces_ColliderSurface__ClosestSurfacePoint
               (undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar3;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  uStack0000000000000018 = param_1;
  if (param_2 != 1) {
    FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
                    /* WARNING: Subroutine does not return */
    FUN_0452a004(uStack0000000000000018);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
  if (lVar3 == 0) {
    if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
      FUN_05bae95c(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      while (uVar1 = FUN_0768d020(&stack0x00000060,*unaff_x19), (uVar1 & 1) != 0) {
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
           ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
            ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
          lVar3 = *(long *)(in_stack_00000030 + 0xe0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
        }
      }
      FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
    }
    if (in_stack_00000038._4_4_ != 0) {
      FUN_05bae95c(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      while (uVar1 = FUN_0768d020(&stack0x00000060,*unaff_x19), (uVar1 & 1) != 0) {
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(in_stack_00000070 + 0x18) != 0) {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          (**(code **)(*unaff_x20 + 0x268))();
          FUN_07b47fa4(in_stack_00000028);
        }
      }
      FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
    }
    FUN_07b458d0(in_stack_00000028);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c(lVar3);
}


