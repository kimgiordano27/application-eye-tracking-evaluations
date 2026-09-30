/*
FUNCTION_NAME: FUN_058d10d0
ENTRY_POINT: 058d10d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_058d10d0(undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((DAT_06b80ac1 & 1) == 0) {
    FUN_02d6084c(
                Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_Dependencies_NCalc_NCalcParser_value_return_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                );
    DAT_06b80ac1 = 1;
  }
  puVar1 = Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo;
  if (*(long *)(param_6 + 0x198) != 0) {
    uVar3 = FUN_037bb020(*(long *)(param_6 + 0x198),param_7,
                         *(undefined8 *)
                          Unity_VisualScripting_Dependencies_NCalc_NCalcParser_shiftExpression_return_TypeInfo
                        );
    puVar2 = Unity_VisualScripting_Dependencies_NCalc_NCalcParser_value_return_TypeInfo;
    if (*(long *)(param_6 + 0x1a0) != 0) {
      uVar10 = param_3;
      uVar14 = param_4;
      uVar4 = FUN_037b5408(*(long *)(param_6 + 0x1a0),param_7,
                           *(undefined8 *)
                            Unity_VisualScripting_Dependencies_NCalc_NCalcParser_value_return_TypeInfo
                          );
      if (*(long *)(param_6 + 0x1a8) != 0) {
        uVar11 = uVar10;
        uVar15 = uVar14;
        uVar18 = param_5;
        uVar5 = FUN_037bb020(*(long *)(param_6 + 0x1a8),param_7,*(undefined8 *)puVar1);
        if (*(long *)(param_6 + 0x1b0) != 0) {
          uVar12 = uVar11;
          uVar16 = uVar15;
          uVar6 = FUN_037b5408(*(long *)(param_6 + 0x1b0),param_7,*(undefined8 *)puVar2);
          if (*(long *)(param_6 + 0x1b8) != 0) {
            uVar13 = uVar12;
            uVar17 = uVar16;
            uVar7 = FUN_037bb020(*(long *)(param_6 + 0x1b8),param_7,*(undefined8 *)puVar1);
            puVar1 = 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
            ;
            if (*(long *)(param_6 + 0x1c0) != 0) {
              uVar8 = FUN_037b65a8(*(long *)(param_6 + 0x1c0),param_7,
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                                  );
              if (*(long *)(param_6 + 0x1c8) != 0) {
                uVar9 = FUN_037b65a8(*(long *)(param_6 + 0x1c8),param_7,*(undefined8 *)puVar1);
                *param_1 = uVar3;
                param_1[1] = param_3;
                param_1[0xc] = uVar16;
                param_1[0xd] = uVar18;
                param_1[0xe] = uVar7;
                param_1[0xf] = uVar13;
                param_1[2] = param_4;
                param_1[3] = uVar4;
                param_1[0x10] = uVar17;
                param_1[0x11] = uVar8;
                param_1[0x12] = uVar9;
                param_1[4] = uVar10;
                param_1[5] = uVar14;
                param_1[6] = param_5;
                param_1[7] = uVar5;
                param_1[8] = uVar11;
                param_1[9] = uVar15;
                param_1[10] = uVar6;
                param_1[0xb] = uVar12;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


