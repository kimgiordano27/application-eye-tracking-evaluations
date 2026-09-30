/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 07caa948
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_09f51160;
  if ((DAT_0a526a50 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51150);
    FUN_04447ba8(PTR_DAT_09f51160);
    DAT_0a526a50 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_09f51150;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_09f51150;
    lVar4 = thunk_FUN_04485110(lVar3,uVar6);
    if (lVar4 == 0) goto LAB_07caaa54;
  }
  lVar3 = FUN_07a84204(lVar4,param_1,0);
  if (lVar3 == 0) {
    lVar4 = 0;
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_04485110(lVar3,uVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(lVar3,uVar6);
    }
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar4;
    uVar6 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_04485110(lVar3,uVar6);
    if (lVar4 == 0) {
LAB_07caaa54:
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(lVar3,uVar6);
    }
  }
  thunk_FUN_044bb4b4(plVar5,lVar4);
  return;
}


