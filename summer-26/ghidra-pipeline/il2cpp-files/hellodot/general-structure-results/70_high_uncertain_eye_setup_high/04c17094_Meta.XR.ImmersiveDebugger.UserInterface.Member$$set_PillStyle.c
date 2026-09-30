/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$set_PillStyle
ENTRY_POINT: 04c17094
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__set_PillStyle(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x21;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  thunk_FUN_02c7737c(PTR_DAT_065e5420);
  uVar3 = FUN_0349e5c8(lVar2);
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x20);
  in_stack_00000008 = 0;
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e5428);
  Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
            (&stack0x00000008,uVar1,uVar4);
  thunk_FUN_02c7737c(PTR_DAT_065e3a10);
  uVar4 = thunk_FUN_02cea894();
  FUN_04c11c30(uVar4,uVar3,in_stack_00000008);
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065e5660);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar3);
}


