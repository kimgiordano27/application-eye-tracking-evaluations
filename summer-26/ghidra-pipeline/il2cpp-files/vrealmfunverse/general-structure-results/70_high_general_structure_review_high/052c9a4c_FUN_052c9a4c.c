/*
FUNCTION_NAME: FUN_052c9a4c
ENTRY_POINT: 052c9a4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1
*/


void FUN_052c9a4c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_066d0192 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_BurstDirectCall_TypeInfo
                );
    DAT_066d0192 = 1;
  }
  if (param_1 != 0) {
    if ((param_2 == 0) || (lVar1 = *(long *)(param_2 + 0x10), lVar1 == 0)) {
      plVar2 = (long *)FUN_02b3c834(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_BurstDirectCall_TypeInfo
                                   );
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        return;
      }
    }
    uVar3 = FUN_052c9ae4(lVar1,param_1);
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_052b59c8(param_1,0);
      uVar5 = thunk_FUN_02ba3594(
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar5);
    }
  }
  return;
}


