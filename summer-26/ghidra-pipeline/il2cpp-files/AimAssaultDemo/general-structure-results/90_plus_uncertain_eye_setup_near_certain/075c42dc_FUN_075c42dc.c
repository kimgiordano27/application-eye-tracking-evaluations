/*
FUNCTION_NAME: FUN_075c42dc
ENTRY_POINT: 075c42dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_075c42dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long local_38;
  
  if ((DAT_0826e856 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_69_0_TypeInfo);
    DAT_0826e856 = 1;
  }
  local_38 = 0;
  FUN_075c52bc(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_059ec97c(*(long *)(param_1 + 0x18),param_2,param_3,&local_38,
                         *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (local_38 != 0) {
      *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + -1;
      if ((*(long *)(local_38 + 0x20) != 0) &&
         (FUN_05566250(*(long *)(local_38 + 0x20),param_4,
                       *(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo), local_38 != 0)) {
        if (0 < *(int *)(local_38 + 0x18)) {
          return;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_049d0340(*(long *)(param_1 + 0x10),local_38,
                       *(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo);
          if (*(long *)(param_1 + 0x18) != 0) {
            FUN_059ec364(*(long *)(param_1 + 0x18),param_2,param_3,
                         *(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


