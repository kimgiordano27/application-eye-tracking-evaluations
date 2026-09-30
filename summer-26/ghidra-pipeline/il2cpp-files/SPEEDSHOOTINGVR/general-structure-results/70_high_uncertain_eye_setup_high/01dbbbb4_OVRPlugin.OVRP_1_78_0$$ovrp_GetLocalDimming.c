/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 01dbbbb4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(long *param_1)

{
  ulong uVar1;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  
  FUN_01dbbe1c();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    if (unaff_x22 != 0) goto LAB_01dbbbd0;
LAB_01dbbc1c:
    if (unaff_x21 == 0) goto LAB_01dbbca4;
  }
  else {
    if (unaff_x22 == 0) goto LAB_01dbbc1c;
LAB_01dbbbd0:
    uVar1 = FUN_01db86c8();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      thunk_FUN_00ffe618();
    }
    if (unaff_x21 == 0) goto LAB_01dbbca4;
    FUN_01db6dec();
  }
  uVar1 = FUN_01db86c8();
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_01dba954(), (uVar1 & 1) != 0)) {
    return;
  }
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01dbbca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x178))(param_1);
    return;
  }
LAB_01dbbca4:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


