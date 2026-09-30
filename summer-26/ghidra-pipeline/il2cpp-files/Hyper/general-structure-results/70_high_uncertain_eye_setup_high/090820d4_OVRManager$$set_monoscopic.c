/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 090820d4
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


void OVRManager__set_monoscopic(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x6e8));
  *(undefined1 *)(unaff_x21 + 0x13b) = 1;
  plVar4 = (long *)(unaff_x19 + 0x90);
  lVar2 = FUN_08dc2d58(*plVar4);
  puVar1 = PTR_DAT_0ac786e8;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_0ac786e8;
    lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *plVar4 = lVar3;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_09082144;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_09082144:
  thunk_FUN_049ee3d8(plVar4,lVar3);
  return;
}


