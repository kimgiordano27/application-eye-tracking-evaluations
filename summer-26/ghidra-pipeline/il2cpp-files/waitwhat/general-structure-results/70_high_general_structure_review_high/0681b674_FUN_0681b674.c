/*
FUNCTION_NAME: FUN_0681b674
ENTRY_POINT: 0681b674
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_8;telemetry_or_network_hits_4
*/


void FUN_0681b674(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar6 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
  ;
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_BurstDirectCall_TypeInfo
  ;
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate_TypeInfo
  ;
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_BurstDirectCall_TypeInfo
  ;
  puVar2 = UnityEngine__AndroidJNIHelper_TypeInfo;
  puVar1 = System_Xml_Serialization_XmlTypeMapping_TypeInfo;
  if ((DAT_07558ac6 & 1) == 0) {
    FUN_03188a78(System_Xml_Serialization_XmlTypeMapping_TypeInfo);
    FUN_03188a78(UnityEngine__AndroidJNIHelper_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_BurstDirectCall_TypeInfo
                );
    DAT_07558ac6 = 1;
  }
  FUN_05971910(param_1,0);
  uVar7 = *(undefined8 *)puVar1;
  *(long **)(param_1 + 0x10) = param_2;
  uVar7 = FUN_03188b1c(uVar7,8);
  uVar9 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  uVar7 = FUN_03188b1c(uVar9,4);
  uVar9 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  uVar7 = FUN_03188b1c(uVar9,0);
  uVar9 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  uVar7 = FUN_03188b1c(uVar9,2);
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar7 = FUN_03188b1c(uVar9,4);
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  lVar8 = FUN_03188b1c(uVar9,1);
  *(long *)(param_1 + 0x60) = lVar8;
  if ((lVar8 != 0) && (param_2 != (long *)0x0)) {
    uVar7 = (**(code **)(*param_2 + 0x608))(param_2,*(undefined8 *)(*param_2 + 0x610));
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = uVar7;
      *(undefined4 *)(param_1 + 0x34) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


