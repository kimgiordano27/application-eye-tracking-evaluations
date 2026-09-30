/*
FUNCTION_NAME: FUN_01db8bac
ENTRY_POINT: 01db8bac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db8cc0) */

void FUN_01db8bac(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char local_34 [4];
  
  if ((DAT_0247da3c & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a718);
    DAT_0247da3c = 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  thunk_FUN_00ffe618();
  if ((lVar2 == 0) && (lVar2 = FUN_01db85c8(param_1,1), lVar2 == 0)) {
OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  plVar3 = (long *)(lVar2 + 0x20);
  lVar4 = *plVar3;
  thunk_FUN_00ffe618();
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a718);
    FUN_01dbe5b4(lVar4,param_1,0);
    thunk_FUN_00ffe618();
    lVar1 = FUN_00ff754c(plVar3,lVar4,0);
    if (lVar1 != 0) {
      if (lVar4 == 0) goto OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize;
      FUN_01dbefa8(lVar4,0,0);
    }
  }
  local_34[0] = '\0';
  FUN_01da75d8(lVar2,local_34);
  lVar4 = *plVar3;
  thunk_FUN_00ffe618();
  if (lVar4 != 0) {
    FUN_01dbe9b8(lVar4,param_2,param_3 & 1,0);
    if (local_34[0] != '\0') {
      FUN_0102a860(lVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


