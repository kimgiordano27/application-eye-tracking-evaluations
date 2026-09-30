/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 033a0270
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  
  uVar1 = thunk_FUN_01c22fc8(param_2,*param_1);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar2 = *unaff_x22;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&PTR_PTR_04025298,0);
  }
  uVar3 = *unaff_x22;
  __cxa_end_catch();
  FUN_03368ed8();
  uVar1 = FUN_03393b30();
  if ((uVar1 & 1) != 0) {
    FUN_033a0df8();
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    return;
  }
  FUN_03393ad0();
                    /* WARNING: Subroutine does not return */
  FUN_01c01e80(uVar3);
}


