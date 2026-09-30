/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$PlaceBox
ENTRY_POINT: 04c2c058
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__PlaceBox(code *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  int unaff_w21;
  long in_stack_00000008;
  
  (*param_1)();
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(in_stack_00000008);
  }
  if (unaff_w21 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_02c7737c(PTR_DAT_065c8580);
    uVar3 = thunk_FUN_02c72dcc(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) != 0) {
      uVar2 = *puVar1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar4 = thunk_FUN_02c7737c(PTR_DAT_065c84d8);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04e5a2ec(unaff_x19 + 2,uVar2,0);
      return;
    }
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_0620d888,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d846d4();
}


