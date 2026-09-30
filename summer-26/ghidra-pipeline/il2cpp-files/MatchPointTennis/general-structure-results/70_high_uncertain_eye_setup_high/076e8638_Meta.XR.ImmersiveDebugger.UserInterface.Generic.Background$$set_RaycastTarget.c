/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_RaycastTarget
ENTRY_POINT: 076e8638
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_RaycastTarget(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  
  thunk_FUN_044bb4b4();
  if (*unaff_x20 != 0) {
    FUN_076db560(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x58));
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
    FUN_0799ce68();
    if (*(int *)(*(long *)PTR_DAT_09f259c8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    puVar1 = PTR_DAT_09f2f388;
    FUN_076dd470(*(undefined8 *)PTR_DAT_09f2f388,*(undefined8 *)PTR_DAT_09f2f378,uVar2);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f22468);
    FUN_073ab0a8();
    FUN_04cb4e94(*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_09f2f380,uVar2,
                 *(undefined8 *)PTR_DAT_09f2ecc0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


