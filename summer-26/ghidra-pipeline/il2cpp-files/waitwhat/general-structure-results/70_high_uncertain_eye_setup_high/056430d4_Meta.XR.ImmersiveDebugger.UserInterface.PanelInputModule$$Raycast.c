/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 056430d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000038;
  
  FUN_031c09d4();
  lVar1 = thunk_FUN_031c3cac();
  if (lVar1 == 0) {
    FUN_0595040c(2,0);
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4(lVar2);
      lVar2 = lVar1;
    }
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) {
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058();
      }
      goto LAB_056431a8;
    }
    thunk_FUN_031c3ef0();
    lVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_056431a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


