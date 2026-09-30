/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestPhysicsLayers
ENTRY_POINT: 014b1c64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestPhysicsLayers(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  
  auVar1._8_8_ = in_stack_00000008;
  auVar1._0_8_ = in_stack_00000000;
  auVar5._8_8_ = unaff_x22;
  auVar5._0_8_ = unaff_x21;
  while( true ) {
    FUN_012b8948(&stack0x00000020,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo);
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00dbe778(unaff_x23);
    }
    if (unaff_w24 == 6) goto LAB_014b1a9c;
    if (unaff_w24 != 0) break;
    do {
      if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar4 = (long *)FUN_010ffaa8();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000038 =
           (long *)(**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
      FUN_01299e64();
      (**(code **)(*unaff_x19 + 0x208))();
      auVar1 = auVar5;
LAB_014b1a9c:
      uVar2 = FUN_012b894c(&stack0x00000040,*unaff_x28);
      if ((uVar2 & 1) == 0) goto LAB_014b1c68;
      auVar5 = FUN_00bc46fc(&stack0x00000040,*(undefined8 *)StringLiteral_4996);
      uVar2 = FUN_0129eff4();
    } while ((uVar2 & 1) == 0);
    if (auVar5._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(auVar5._8_8_);
    in_stack_00000030 = in_stack_00000010;
    _in_stack_00000020 = auVar1;
    while (uVar2 = FUN_012b894c(&stack0x00000020,*unaff_x27), (uVar2 & 1) != 0) {
      uVar3 = FUN_00ac2d00(&stack0x00000020,*unaff_x26);
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar4 = (long *)(**(code **)(*in_stack_00000038 + 0x1a8))
                                 (in_stack_00000038,*unaff_x29,
                                  *(undefined8 *)(*in_stack_00000038 + 0x1b0));
      uVar3 = FUN_014f4cac(uVar3,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar3,uVar3);
      }
      (**(code **)(*plVar4 + 0x208))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x210));
    }
    unaff_x23 = 0;
    unaff_w24 = 6;
  }
LAB_014b1c68:
  FUN_012b8948(&stack0x00000040,*(undefined8 *)StringLiteral_4522);
  return;
}


