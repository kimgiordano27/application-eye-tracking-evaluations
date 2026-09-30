/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 05cf8054
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDLost(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_0739874b & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5a80);
    DAT_0739874b = 1;
  }
  plVar4 = (long *)(param_1 + 0x90);
  lVar2 = FUN_05b36320(*plVar4,param_2,0);
  puVar1 = PTR_DAT_06fb5a80;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_06fb5a80;
    lVar3 = thunk_FUN_03010710(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_03010710(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_05cf80e4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_05cf80e4:
  thunk_FUN_03048534(plVar4,lVar3);
  return;
}


