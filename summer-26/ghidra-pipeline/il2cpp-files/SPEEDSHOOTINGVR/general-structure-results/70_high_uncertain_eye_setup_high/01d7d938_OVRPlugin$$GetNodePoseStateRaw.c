/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateRaw
ENTRY_POINT: 01d7d938
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateRaw(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *in_x9;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  
  lVar4 = *in_x9;
  plVar1 = param_1;
  if (*param_1 != lVar4) {
    plVar1 = (long *)0x0;
  }
  *(undefined8 *)(unaff_x20 + 0x70) = plVar1;
  if (*param_1 != lVar4) {
    param_1 = (long *)0x0;
  }
  thunk_FUN_0106e12c((undefined8 *)(unaff_x20 + 0x70),param_1);
  if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
    if (unaff_w25 == 0x80) {
      uVar2 = FUN_01c45a74(*unaff_x24,*unaff_x23,0);
      *unaff_x24 = uVar2;
      thunk_FUN_0106e12c();
      *unaff_x23 = 0;
      thunk_FUN_0106e12c();
      return;
    }
    return;
  }
  uVar2 = thunk_FUN_010303a8(PTR_DAT_02353b00);
  thunk_FUN_010303a8(PTR_DAT_0234d110);
  uVar3 = thunk_FUN_010400dc();
  FUN_01c96740(uVar3,uVar2,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_02358fb0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar2);
}


