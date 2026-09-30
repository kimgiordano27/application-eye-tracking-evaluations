/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 072926e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 155
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  long *unaff_x20;
  int iVar3;
  long unaff_x21;
  long *unaff_x22;
  long lVar4;
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  int iStack0000000000000050;
  long in_stack_000000b0;
  
  *(long **)(&stack0x00000040 + unaff_x21 * 8) = unaff_x20;
  iVar3 = (int)unaff_x21;
  iStack0000000000000050 = iVar3 + 1;
  __cxa_end_catch();
  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *(long *)(in_stack_000000b0 + 0x80);
  if (lVar4 != 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x188))();
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar2,*(undefined8 *)(lVar4 + 0x28));
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  lVar4 = *(long *)(in_stack_000000b0 + 0x88);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),0x3ee,*(undefined8 *)(lVar4 + 0x28));
  }
  iStack0000000000000050 = iVar3;
  if (*in_stack_00000030 < 0) {
    lVar4 = *in_stack_00000038;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x40) == 0) goto LAB_072924bc;
      if (*(long *)(lVar4 + 0x48) != 0) {
        FUN_076e11d4(*(long *)(lVar4 + 0x48),0);
        if ((*in_stack_00000038 != 0) &&
           (plVar1 = *(long **)(*in_stack_00000038 + 0x40), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
          goto LAB_072924bc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072924bc:
  if (in_stack_00000028 == 0) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


