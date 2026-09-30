/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 05673f08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPerfMetricsSupported(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_0420f404(in_stack_00000008,*unaff_x23);
    lVar3 = in_stack_00000010;
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar2);
    }
  }
  else {
    FUN_02cfed90();
    if (param_2 != 1) {
      FUN_02d01510(&stack0x00000010);
                    /* WARNING: Subroutine does not return */
      FUN_02e86b8c(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar3 = *plVar1;
    in_stack_00000010 = lVar3;
    __cxa_end_catch();
  }
  FUN_0423f4f8(in_stack_00000018,*(undefined8 *)System_Collections_Generic_List<Material>_TypeInfo);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar3);
  }
  return;
}


