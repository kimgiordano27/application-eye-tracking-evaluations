/*
FUNCTION_NAME: FUN_0548588c
ENTRY_POINT: 0548588c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_0548588c(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((DAT_066d0fe8 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_00000228_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_00000228_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_0632bd40);
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_00000219_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_00000219_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_0000021A_BurstDirectCall_TypeInfo
                );
    FUN_02b3c81c(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_0631f8b0);
    DAT_066d0fe8 = 1;
  }
  FUN_05481d08(param_1,param_2);
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_0557265c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48),
                         *(undefined8 *)(param_1 + 0x48),0);
    if ((uVar1 & 1) != 0) {
      FUN_055bde90(param_1,*(undefined8 *)
                            UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_00000219_PostfixBurstDelegate_TypeInfo
                   ,param_2,0);
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x70) != 0)) {
      uVar1 = FUN_0558a954(*(long *)(param_2 + 0x70),0);
      if ((uVar1 & 1) == 0) {
        FUN_055bde08(param_1,*(undefined8 *)
                              Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeInfo
                     ,*(undefined8 *)PTR_DAT_0632bd40,param_2,0);
      }
      if ((*(long *)(param_2 + 0x50) != 0) &&
         (((*(long *)(param_2 + 0x58) == 0 ||
           (FUN_055bde90(param_1,*(undefined8 *)
                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_00000219_BurstDirectCall_TypeInfo
                         ,param_2,0), *(long *)(param_2 + 0x50) != 0)) &&
          (1 < *(uint *)(param_2 + 0x6c))))) {
        FUN_055bde90(param_1,*(undefined8 *)
                              UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_0000021A_BurstDirectCall_TypeInfo
                     ,param_2,0);
      }
      uVar1 = thunk_FUN_04c08854(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_1 + 0x40),0);
      if ((uVar1 & 1) != 0) {
        FUN_055bde90(param_1,*(undefined8 *)
                              UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_00000228_PostfixBurstDelegate_TypeInfo
                     ,param_2,0);
      }
      if (*(long *)(param_2 + 0x88) != 0) {
        plVar2 = (long *)(*(long *)(param_2 + 0x88) + 0x28);
        *plVar2 = param_2;
        thunk_FUN_02bb0e9c(plVar2,param_2);
        if (*(long *)(param_2 + 0x78) == 0) goto LAB_05485ab8;
        uVar1 = FUN_0558a954(*(long *)(param_2 + 0x78),0);
        if ((uVar1 & 1) == 0) {
          FUN_055bde90(param_1,*(undefined8 *)
                                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_00000228_BurstDirectCall_TypeInfo
                       ,param_2,0);
        }
        FUN_05483e1c(param_1,*(undefined8 *)(param_2 + 0x88),1);
      }
      if (*(long *)(param_2 + 0x78) != 0) {
        uVar1 = FUN_0558a954(*(long *)(param_2 + 0x78),0);
        if ((uVar1 & 1) != 0) {
          return;
        }
        FUN_05485c78(param_1,param_2,*(undefined8 *)PTR_DAT_0631f8b0,*(undefined8 *)(param_2 + 0x78)
                    );
        return;
      }
    }
  }
LAB_05485ab8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


