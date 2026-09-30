/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 04f8fc14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_38_0___cctor
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_06312cb0;
  fVar8 = param_4;
  if ((DAT_066c9db2 & 1) == 0) {
    FUN_02b3c81c(System_Func<PointerUpLinkTagEvent>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312cb0);
    DAT_066c9db2 = 1;
  }
  lVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_05c8d47c(lVar2,param_10,0);
  if ((lVar2 != 0) &&
     (lVar2 = FUN_031d8020(lVar2,*(undefined8 *)System_Func<PointerUpLinkTagEvent>_TypeInfo),
     lVar2 != 0)) {
    FUN_05d0d8b8(lVar2,*(undefined1 *)(param_9 + 0x48),0);
    param_4 = param_4 - param_1;
    param_5 = param_5 - param_2;
    param_6 = param_6 - param_3;
    fVar5 = param_5;
    fVar6 = param_6;
    uVar4 = FUN_05c7bb74(param_4,0);
    if (DAT_066c1d9c == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    fVar9 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5) - ABS(param_8);
    UnityEngine_UIElements_StyleBackgroundPosition___ctor(param_7,lVar2,0);
    FUN_05d0bed4(param_7 + param_7 + fVar9,lVar2,0);
    FUN_05d0c05c(lVar2,2,0);
    if (DAT_066c1d9f == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d9f = '\x01';
    }
    fVar7 = 0.0;
    if (0.0 <= param_8) {
      fVar7 = param_8;
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar7 = fVar7 + fVar9 * 0.5;
    FUN_05d0bbc4(fVar7 * *(float *)(lVar3 + 0x48),fVar7 * *(float *)(lVar3 + 0x4c),
                 fVar7 * *(float *)(lVar3 + 0x50),lVar2,0);
    lVar3 = FUN_05c89340(lVar2,0);
    if (lVar3 != 0) {
      FUN_05c9caa4(lVar3,param_11,0,0);
      FUN_05c9cce4(param_1,param_2,param_3,uVar4,fVar5,fVar6,fVar8,lVar3,0);
      lVar3 = FUN_05c89410(lVar2,0);
      if (lVar3 != 0) {
        FUN_05c8ca64(lVar3,*(undefined4 *)(param_9 + 0x4c),0);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


