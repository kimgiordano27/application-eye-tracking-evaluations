/*
FUNCTION_NAME: System.Net.WebOperation$$ThrowIfClosedOrDisposed
ENTRY_POINT: 055b35e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Net_WebOperation__ThrowIfClosedOrDisposed
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,uint param_7,uint param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x27;
  
  if ((*(byte *)(unaff_x27 + 0x7c0) & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0x7c0) = 1;
  }
  if ((param_7 & 1) == 0) {
    uVar3 = FUN_055b1724(param_1,param_5,param_6,param_2);
    System_Net_ServicePointScheduler__OnConnectionCreated(param_1,uVar3,0);
    return;
  }
  if ((param_8 & 1) == 0) {
    if (param_6 != 0) {
      uVar3 = *(undefined8 *)(param_6 + 0x10);
      uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(uVar4,0);
      uVar2 = FUN_04d938a0(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = FUN_055b1724(param_1,param_5,param_6,param_2);
        FUN_055ac814(param_1,param_3,param_4,uVar3,0);
        return;
      }
      if (param_2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                         + 0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
           )) goto LAB_055b384c;
      }
      FUN_055ac610(param_1,param_3,param_4,param_2,0);
      return;
    }
  }
  else if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_6 + 0x10);
    uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    uVar2 = FUN_04d938a0(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_055b1724(param_1,param_5,param_6,param_2);
      FUN_055acf10(param_1,param_3,param_4,uVar3,0);
      return;
    }
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo))
      {
LAB_055b384c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(param_2);
      }
    }
    FUN_055ace50(param_1,param_3,param_4,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


