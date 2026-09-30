/*
FUNCTION_NAME: FUN_05cd8458
ENTRY_POINT: 05cd8458
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long FUN_05cd8458(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = 
  Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000D03_PostfixBurstDelegate>_get_Value__
  ;
  if ((DAT_06dc2d1b & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000D03_PostfixBurstDelegate>_get_Value__
                );
    DAT_06dc2d1b = 1;
  }
  lVar4 = FUN_0537c010(0x41,0);
  auVar8 = FUN_046af328(param_1,*(undefined8 *)puVar1);
  uVar5 = FUN_05c520dc(auVar8._0_8_,auVar8._8_8_,0);
  if ((uVar5 & 1) == 0) {
    FUN_05cd8578(param_1,0,8,lVar4);
  }
  else {
    FUN_05cd8578(param_1,0,6,lVar4);
    if (lVar4 == 0) goto LAB_05cd8574;
    iVar3 = FUN_05378acc(lVar4,0);
    sVar2 = FUN_05379330(lVar4,iVar3 + -1,0);
    if (sVar2 != 0x3a) {
      FUN_0537a744(lVar4,0x3a,0);
    }
    uVar6 = FUN_05cd8728(param_1);
    FUN_05cd8320(uVar6,lVar4);
  }
  if (param_2 != 0) {
    if ((lVar4 == 0) || (lVar7 = FUN_0537a744(lVar4,0x25,0), lVar7 == 0)) {
LAB_05cd8574:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0537a844(lVar7,param_2,0);
  }
  return lVar4;
}


