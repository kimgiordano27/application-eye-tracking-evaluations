/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 04707578
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long in_stack_00000128;
  undefined *puVar4;
  
  FUN_04482014();
  if (unaff_x22 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar1 = thunk_FUN_0448520c();
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f251e8);
    FUN_07996cc8(uVar1,uVar2,0);
    goto LAB_047076ac;
  }
  if (unaff_w21 < 0) {
LAB_04707604:
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar1 = thunk_FUN_0448520c();
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f25220);
    puVar4 = PTR_DAT_09f25228;
  }
  else {
    if (*(int *)(unaff_x22 + 0x18) < unaff_w21) goto LAB_04707604;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21)) {
      memcpy(&stack0x00000008,unaff_x23,0x90);
      memcpy(&stack0x00000098,&stack0x00000008,0x90);
      FUN_047226ec();
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000128) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar1 = thunk_FUN_0448520c();
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f25230);
    puVar4 = PTR_DAT_09f25238;
  }
  uVar3 = thunk_FUN_044adef4(puVar4);
  FUN_0799a4bc(uVar1,uVar2,uVar3,0);
LAB_047076ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar1);
}


