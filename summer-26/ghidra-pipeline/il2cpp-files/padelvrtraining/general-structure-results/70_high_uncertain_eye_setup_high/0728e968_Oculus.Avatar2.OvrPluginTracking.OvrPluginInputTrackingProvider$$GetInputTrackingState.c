/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginInputTrackingProvider$$GetInputTrackingState
ENTRY_POINT: 0728e968
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider__GetInputTrackingState(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar3 = thunk_FUN_03d19be4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar7 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_03d1e194(PTR_DAT_091a2ae0);
    FUN_037e7a9c();
    uVar2 = FUN_071392b4(0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_092189d8);
    uVar2 = FUN_072675bc(uVar4,uVar2,uVar6,0);
    thunk_FUN_03d1e194(PTR_DAT_09215b78);
    uVar4 = thunk_FUN_03d2ef40();
    FUN_07209100(uVar4,uVar2,uVar7,0);
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_09218938);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,uVar2);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_08cb6798,0);
}


