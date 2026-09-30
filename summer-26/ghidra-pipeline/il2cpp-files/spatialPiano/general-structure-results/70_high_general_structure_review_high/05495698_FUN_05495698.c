/*
FUNCTION_NAME: FUN_05495698
ENTRY_POINT: 05495698
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05495698(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000361_BurstDirectCall_TypeInfo
  ;
  puVar1 = PTR_DAT_067c8f20;
  if ((DAT_06bbf0d6 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000365_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000361_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000366_BurstDirectCall_TypeInfo
                );
    DAT_06bbf0d6 = 1;
  }
  lVar5 = *(long *)puVar2;
  lVar3 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_060f078c(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_060f078c(uVar6,param_1,0);
    if ((uVar4 & 1) != 0) {
      FUN_060ed000(param_1,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060f7174(param_1,0);
      return;
    }
  }
  **(long **)(*(long *)puVar2 + 0xb8) = param_1;
  lVar3 = FUN_060ed7ac(param_1,0);
  if (lVar3 != 0) {
    uVar6 = FUN_06101cf4(lVar3,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000366_BurstDirectCall_TypeInfo
                         ,0);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    lVar3 = FUN_060ed7ac(param_1,0);
    if (lVar3 != 0) {
      uVar6 = FUN_03356750(lVar3,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000365_PostfixBurstDelegate_TypeInfo
                          );
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


