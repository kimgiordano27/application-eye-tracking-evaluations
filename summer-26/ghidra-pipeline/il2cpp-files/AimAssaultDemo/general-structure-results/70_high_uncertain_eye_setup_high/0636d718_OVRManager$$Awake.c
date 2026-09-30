/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 0636d718
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Awake(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  int unaff_w22;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0377596c();
      goto LAB_0636d740;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_0636d740:
  (*(code *)*puVar3)();
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac();
  }
  if (unaff_w22 == 0) {
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
  uVar4 = thunk_FUN_037788cc();
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db5910);
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db5918);
  FUN_061a5334(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db5920);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar4,uVar5);
}


