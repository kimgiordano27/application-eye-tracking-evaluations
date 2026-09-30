/*
FUNCTION_NAME: Unity.Mathematics.math$$hash
ENTRY_POINT: 05840bf0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


undefined1  [16] Unity_Mathematics_math__hash(long param_1,long param_2)

{
  undefined *puVar1;
  long unaff_x21;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(unaff_x21 + 0x5c6) & 1) == 0) {
                    /* try { // try from 05840c00 to 05940c0b has its CatchHandler @ 05840dc8 */
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067683e8);
    *(undefined1 *)(unaff_x21 + 0x5c6) = 1;
  }
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
  ;
  if (*(int *)(param_1 + 0xd8) == 0x56454333) {
    if (*(int *)(*(long *)PTR_DAT_067683e8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
                    /* try { // try from 05840c54 to 05940c57 has its CatchHandler @ 05840ddc */
    uVar3 = (ulong)*(uint *)(*(int *)(param_1 + 0x14) + param_2);
    uVar4 = 0;
                    /* try { // try from 05840c58 to 05940c6b has its CatchHandler @ 05840de8 */
LAB_05840cb0:
    auVar2._8_8_ = uVar4;
    auVar2._0_8_ = uVar3;
    return auVar2;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    auVar2 = FUN_037b65a8(*(long *)(param_1 + 0x118),param_2,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                         );
    uVar4 = auVar2._8_8_;
    uVar3 = auVar2._0_8_;
    if (*(long *)(param_1 + 0x120) != 0) {
      FUN_037b65a8(*(long *)(param_1 + 0x120),param_2,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 0x128) != 0) {
        FUN_037b65a8(*(long *)(param_1 + 0x128),param_2,*(undefined8 *)puVar1);
        goto LAB_05840cb0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


