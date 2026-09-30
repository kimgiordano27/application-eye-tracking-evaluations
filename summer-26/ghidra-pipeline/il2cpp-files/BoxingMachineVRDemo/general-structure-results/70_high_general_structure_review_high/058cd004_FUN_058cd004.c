/*
FUNCTION_NAME: FUN_058cd004
ENTRY_POINT: 058cd004
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_058cd004(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined4 param_4,undefined4 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((DAT_06b80a9a & 1) == 0) {
    FUN_02d6084c(
                Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo
                );
    FUN_02d6084c(
                Unity_VisualScripting_Dependencies_NCalc_NCalcParser_unaryExpression_return_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_Dependencies_NCalc_NCalcParser_value_return_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067683e8);
    DAT_06b80a9a = 1;
  }
  if (*(int *)(param_6 + 0xd8) != 0x506f7365) {
    if (*(long *)(param_6 + 0x178) != 0) {
      fVar4 = (float)FUN_037b65a8(*(long *)(param_6 + 0x178),param_7,
                                  *(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                                 );
      uVar10 = 0x3f000000;
      if (*(long *)(param_6 + 0x180) != 0) {
        uVar3 = FUN_037b0558(*(long *)(param_6 + 0x180),param_7,
                             *(undefined8 *)
                              Unity_VisualScripting_Dependencies_NCalc_NCalcParser_unaryExpression_return_TypeInfo
                            );
        puVar2 = 
        Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo;
        if (*(long *)(param_6 + 0x188) != 0) {
          uVar5 = FUN_037bb020(*(long *)(param_6 + 0x188),param_7,
                               *(undefined8 *)
                                Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo
                              );
          if (*(long *)(param_6 + 400) != 0) {
            uVar11 = uVar10;
            uVar16 = param_4;
            uVar6 = FUN_037b5408(*(long *)(param_6 + 400),param_7,
                                 *(undefined8 *)
                                  Unity_VisualScripting_Dependencies_NCalc_NCalcParser_value_return_TypeInfo
                                );
            if (*(long *)(param_6 + 0x198) != 0) {
              uVar12 = uVar11;
              uVar17 = uVar16;
              uVar7 = FUN_037bb020(*(long *)(param_6 + 0x198),param_7,*(undefined8 *)puVar2);
              if (*(long *)(param_6 + 0x1a0) != 0) {
                uVar13 = uVar12;
                uVar18 = uVar17;
                uVar8 = FUN_037bb020(*(long *)(param_6 + 0x1a0),param_7,*(undefined8 *)puVar2);
                *(bool *)param_1 = 0.5 < fVar4;
                *(undefined4 *)(param_1 + 1) = uVar5;
                *(undefined4 *)((long)param_1 + 0xc) = uVar10;
                *(undefined4 *)((long)param_1 + 4) = uVar3;
                *(undefined4 *)(param_1 + 3) = uVar11;
                *(undefined4 *)((long)param_1 + 0x1c) = uVar16;
                *(undefined4 *)(param_1 + 4) = param_5;
                *(undefined4 *)((long)param_1 + 0x24) = uVar7;
                *(undefined4 *)(param_1 + 2) = param_4;
                *(undefined4 *)((long)param_1 + 0x14) = uVar6;
                *(undefined4 *)(param_1 + 5) = uVar12;
                *(undefined4 *)((long)param_1 + 0x2c) = uVar17;
                *(undefined4 *)(param_1 + 6) = uVar8;
                *(undefined4 *)((long)param_1 + 0x34) = uVar13;
                *(undefined2 *)((long)param_1 + 1) = 0;
                *(undefined1 *)((long)param_1 + 3) = 0;
                *(undefined4 *)(param_1 + 7) = uVar18;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(*(long *)PTR_DAT_067683e8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar1 = (undefined8 *)(*(int *)(param_6 + 0x14) + param_7);
  uVar9 = *(undefined8 *)((long)puVar1 + 0x2c);
  uVar20 = puVar1[3];
  uVar19 = puVar1[2];
  uVar15 = puVar1[5];
  uVar14 = puVar1[4];
  uVar22 = puVar1[1];
  uVar21 = *puVar1;
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)puVar1 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
  param_1[3] = uVar20;
  param_1[2] = uVar19;
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  param_1[1] = uVar22;
  *param_1 = uVar21;
  return;
}


