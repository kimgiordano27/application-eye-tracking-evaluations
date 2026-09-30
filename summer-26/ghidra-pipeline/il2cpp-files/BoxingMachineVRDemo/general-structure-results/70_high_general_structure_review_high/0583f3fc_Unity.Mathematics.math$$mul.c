/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 0583f3fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined1  [16] Unity_Mathematics_math__mul(ulong param_1,long param_2)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000351_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067683e8);
    *(undefined1 *)(unaff_x21 + 0x5b0) = 1;
  }
  if (*(int *)(param_2 + 0xd8) == 0x51554154) {
    if (*(int *)(*(long *)PTR_DAT_067683e8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = (ulong)*(uint *)(*(int *)(param_2 + 0x14) + unaff_x19);
    uVar3 = 0;
LAB_0583f4e0:
    auVar1._8_8_ = uVar3;
    auVar1._0_8_ = uVar2;
    return auVar1;
  }
  if (*(long *)(param_2 + 0x120) != 0) {
    auVar1 = FUN_037b6540();
    uVar3 = auVar1._8_8_;
    uVar2 = auVar1._0_8_;
    if (*(long *)(param_2 + 0x128) != 0) {
      FUN_037b6540();
      if (*(long *)(param_2 + 0x130) != 0) {
        FUN_037b6540();
        if (*(long *)(param_2 + 0x138) != 0) {
          FUN_037b65a8();
          goto LAB_0583f4e0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


