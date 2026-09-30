/*
FUNCTION_NAME: FUN_06b7a4dc
ENTRY_POINT: 06b7a4dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


void FUN_06b7a4dc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  if ((DAT_075600c0 & 1) == 0) {
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000355_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000356_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_00000359_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(PTR_DAT_070f59e8);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastSafeDivide_0000035A_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastVectorEquals_00000357_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<CurveUtility_SampleProjectilePoint_00000440_PostfixBurstDelegate>_get_Value__
                );
    DAT_075600c0 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((param_2 != 0) &&
     (plVar4 = (long *)UnityEngine_UIElements_ToggleButtonGroup___ctor(param_2,0),
     puVar1 = PTR_DAT_070f59e8, plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070f59e8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x11) * 0x10 + 0x138);
          goto LAB_06b7a5dc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)PTR_DAT_070f59e8,0x11);
LAB_06b7a5dc:
    (*(code *)*puVar5)(plVar4,uVar10,puVar5[1]);
    puVar3 = 
    Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000356_PostfixBurstDelegate>_get_Value__
    ;
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000355_PostfixBurstDelegate>_get_Value__
    ;
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      if (0 < *(int *)(lVar7 + 0x18)) {
        FUN_0428551c(&local_58,lVar7,
                     *(undefined8 *)
                      Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastVectorEquals_00000357_PostfixBurstDelegate>_get_Value__
                    );
        while (uVar6 = FUN_0543fa90(&local_58,*(undefined8 *)puVar3), uVar8 = local_48,
              (uVar6 & 1) != 0) {
          plVar4 = (long *)UnityEngine_UIElements_ToggleButtonGroup___ctor(param_2,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar7 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                goto LAB_06b7a6a4;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0x10);
LAB_06b7a6a4:
          (*(code *)*puVar5)(plVar4,uVar8 & 0xffffffff,puVar5[1]);
        }
        FUN_0543fa8c(&local_58,*(undefined8 *)puVar2);
        lVar7 = *(long *)(param_1 + 0x50);
        if (lVar7 == 0) goto LAB_06b7a6f4;
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      }
      return;
    }
  }
LAB_06b7a6f4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


