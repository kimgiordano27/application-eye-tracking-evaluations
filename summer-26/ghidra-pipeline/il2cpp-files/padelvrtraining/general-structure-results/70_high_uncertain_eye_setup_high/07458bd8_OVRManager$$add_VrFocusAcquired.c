/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 07458bd8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000098457c4 & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_51809_091f7f98);
    bRam00000000098457c4 = 1;
  }
  plVar1 = (long *)(param_1 + 0x168);
  lVar3 = FUN_071bfc68(*(undefined8 *)(param_1 + 0x168),param_2,0);
  puVar2 = PTR_StringLiteral_51809_091f7f98;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_StringLiteral_51809_091f7f98;
    lVar4 = thunk_FUN_03d2ee44(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_03d2ee44(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_07458c68;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_07458c68:
  thunk_FUN_03d1023c(plVar1,lVar4);
  return;
}


