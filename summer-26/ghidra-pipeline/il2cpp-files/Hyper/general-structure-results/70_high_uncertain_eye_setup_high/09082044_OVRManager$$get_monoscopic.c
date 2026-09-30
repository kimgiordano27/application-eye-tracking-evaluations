/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 09082044
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_monoscopic(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
  lVar2 = FUN_08dc2b6c(param_1,param_2,0);
  puVar1 = PTR_DAT_0ac786e8;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)PTR_DAT_0ac786e8;
    lVar3 = thunk_FUN_04983e64(lVar2,uVar4);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)puVar1;
      *unaff_x19 = lVar3;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar4);
      if (lVar3 != 0) goto LAB_0908209c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(lVar2,uVar4);
  }
  *unaff_x19 = 0;
LAB_0908209c:
  thunk_FUN_049ee3d8();
  return;
}


