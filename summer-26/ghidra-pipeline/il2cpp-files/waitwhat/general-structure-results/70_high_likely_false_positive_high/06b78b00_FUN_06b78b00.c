/*
FUNCTION_NAME: FUN_06b78b00
ENTRY_POINT: 06b78b00
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_06b78b00(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_88;
  undefined8 *puStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_075600c1 & 1) == 0) {
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate>_get_Value__
                );
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
    DAT_075600c1 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if ((param_2 != 0) &&
     (plVar5 = (long *)UnityEngine_UIElements_ToggleButtonGroup___ctor(param_2,0),
     puVar1 = PTR_DAT_070f59e8, plVar5 != (long *)0x0)) {
    lVar8 = *plVar5;
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070f59e8) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
          goto LAB_06b78c08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f59e8,0x11);
LAB_06b78c08:
    (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
    puVar4 = 
    Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000356_PostfixBurstDelegate>_get_Value__
    ;
    puVar3 = 
    Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_00000355_PostfixBurstDelegate>_get_Value__
    ;
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate>_get_Value__
    ;
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_0428551c(&local_88,*(long *)(param_1 + 0x50),
                   *(undefined8 *)
                    Method_Unity_Burst_FunctionPointer<BurstMathUtility_FastVectorEquals_00000357_PostfixBurstDelegate>_get_Value__
                  );
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar7 = FUN_0543fa90(&local_70,*(undefined8 *)puVar4), uVar9 = local_60,
            (uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar7 = FUN_06c7f310(param_3,uVar9 & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)UnityEngine_UIElements_ToggleButtonGroup___ctor(param_2,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar8 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
                goto LAB_06b78d00;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0x12);
LAB_06b78d00:
          (*(code *)*puVar6)(plVar5,uVar9 & 0xffffffff,puVar6[1]);
        }
      }
      FUN_0543fa8c(&local_70,*(undefined8 *)puVar3);
      lVar8 = *(long *)(param_1 + 0x50);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


