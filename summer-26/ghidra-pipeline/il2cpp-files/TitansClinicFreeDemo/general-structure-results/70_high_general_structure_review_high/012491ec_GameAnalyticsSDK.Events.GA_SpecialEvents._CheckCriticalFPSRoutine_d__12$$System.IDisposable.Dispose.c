/*
FUNCTION_NAME: GameAnalyticsSDK.Events.GA_SpecialEvents.<CheckCriticalFPSRoutine>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 012491ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
GameAnalyticsSDK_Events_GA_SpecialEvents_<CheckCriticalFPSRoutine>d__12__System_IDisposable_Dispose
          (undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  long in_x9;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  bVar1 = *(byte *)*param_1;
  if (bVar1 == 0) {
    uVar4 = 0x1505;
    uVar5 = 0x1505;
  }
  else {
    uVar4 = 0x1505;
    uVar5 = 0x1505;
    pbVar2 = (byte *)*param_1;
    do {
      uVar5 = uVar5 * 0x21 ^ (ulong)bVar1;
      if ((ulong)pbVar2[1] == 0) break;
      bVar1 = pbVar2[2];
      uVar4 = uVar4 * 0x21 ^ (ulong)pbVar2[1];
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
  }
  lVar7 = 0;
  uVar5 = uVar5 + uVar4 * 0x5d588b65;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 & in_x9 - 1U;
    uVar6 = uVar5 % 0x30;
    if ((*(byte *)(*(long *)(param_2 + 0x40) + (uVar5 / 0x30) * 0x10 + (uVar6 >> 3) + 10) >>
         (uVar6 & 7) & 1) == 0) {
      uVar6 = uVar5;
      if (uVar4 != 0xffffffffffffffff) {
        uVar6 = uVar4;
      }
      uVar5 = 0xffffffffffffffff;
LAB_012492f8:
      auVar8._8_8_ = uVar6;
      auVar8._0_8_ = uVar5;
      return auVar8;
    }
    uVar3 = FUN_01249318(param_2,uVar5);
    if ((uVar3 & 1) == 0) {
      FUN_01205604(*(long *)(param_2 + 0x40) + (uVar5 / 0x30) * 0x10 + 10,uVar6);
      uVar3 = FUN_012490d8(param_2 + 0x20);
      uVar6 = uVar4;
      if ((uVar3 & 1) != 0) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_012492f8;
      }
    }
    else {
      uVar6 = uVar5;
      if (uVar4 != 0xffffffffffffffff) {
        uVar6 = uVar4;
      }
    }
    lVar7 = lVar7 + 1;
    uVar5 = lVar7 + uVar5;
    uVar4 = uVar6;
  } while( true );
}


