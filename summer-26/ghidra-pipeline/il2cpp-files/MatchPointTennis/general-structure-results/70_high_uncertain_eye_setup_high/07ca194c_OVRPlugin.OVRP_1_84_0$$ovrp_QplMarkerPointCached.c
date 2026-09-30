/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 07ca194c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPointCached
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5
               ,float param_6,undefined1 param_7 [16],float param_8,long param_9,undefined8 param_10
               ,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_09f1e730;
  fVar7 = param_4;
  if ((DAT_0a5269f2 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1fb90);
    FUN_04447ba8(PTR_DAT_09f1e730);
    DAT_0a5269f2 = 1;
  }
  lVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_0952aff4(lVar2,param_10,0);
  if ((lVar2 != 0) && (lVar2 = FUN_04d7a120(lVar2,*(undefined8 *)PTR_DAT_09f1fb90), lVar2 != 0)) {
    FUN_095af67c(lVar2,*(undefined1 *)(param_9 + 0x48),0);
    param_4 = param_4 - (float)param_1;
    param_5 = param_5 - (float)param_2;
    param_6 = param_6 - (float)param_3;
    fVar5 = param_5;
    fVar6 = param_6;
    uVar4 = FUN_09516c60(param_4,0);
    if (DAT_0a51c009 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c009 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar8 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5) - ABS(param_8);
    FUN_095ae4c0(param_7._0_8_,lVar2,0);
    FUN_095ae648(param_7._0_4_ + param_7._0_4_ + fVar8,lVar2,0);
    FUN_095ae7d0(lVar2,2,0);
    if (DAT_0a51bf41 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf41 = '\x01';
    }
    param_8 = param_8 + fVar8 * 0.5;
    lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    FUN_095ae338(param_8 * *(float *)(lVar3 + 0x48),param_8 * *(float *)(lVar3 + 0x4c),
                 param_8 * *(float *)(lVar3 + 0x50),lVar2,0);
    lVar3 = FUN_095258d0(lVar2,0);
    if (lVar3 != 0) {
      FUN_0953acf8(lVar3,param_11,0,0);
      FUN_0953af30(param_1,param_2,param_3,uVar4,fVar5,fVar6,fVar7,lVar3,0);
      lVar3 = FUN_095259a0(lVar2,0);
      if (lVar3 != 0) {
        FUN_0952a218(lVar3,*(undefined4 *)(param_9 + 0x4c),0);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


