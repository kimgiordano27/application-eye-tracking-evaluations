/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 07ca178c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack000000000000000c;
  
  puVar3 = PTR_DAT_09f50e90;
  puVar2 = PTR_DAT_09f50e50;
  puVar1 = PTR_DAT_09f1e730;
  if ((DAT_0a5269f1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1f308);
    FUN_04447ba8(PTR_DAT_09f1e730);
    FUN_04447ba8(PTR_DAT_09f50e50);
    FUN_04447ba8(PTR_DAT_09f50e90);
    DAT_0a5269f1 = 1;
  }
  uStack000000000000000c = param_2;
  uVar4 = thunk_FUN_04484e3c(*(undefined8 *)puVar2,&stack0x0000000c);
  uVar4 = FUN_078ab14c(*(undefined8 *)puVar3,uVar4,0);
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_0952aff4(lVar5,uVar4,0);
  if ((lVar5 != 0) && (lVar5 = FUN_04d7a120(lVar5,*(undefined8 *)PTR_DAT_09f1f308), lVar5 != 0)) {
    FUN_095bbb1c(0x3f800000,lVar5,0);
    FUN_095bbe1c(lVar5,1,0);
    FUN_095bbca4(lVar5,0,0);
    FUN_095bc140(lVar5,3,0);
    lVar6 = FUN_095258d0(lVar5,0);
    if (lVar6 != 0) {
      FUN_0953acf8(lVar6,param_3,0,0);
      uVar4 = FUN_095258d0(lVar5,0);
      FUN_07c0b9b4(uVar4,param_4,0,0);
      FUN_095bcc94(lVar5,0);
      lVar6 = FUN_095259a0(lVar5,0);
      if (lVar6 != 0) {
        FUN_0952a454(lVar6,0,0);
        lVar6 = FUN_095259a0(lVar5,0);
        if (lVar6 != 0) {
          FUN_0952a218(lVar6,*(undefined4 *)(param_1 + 0x4c),0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


