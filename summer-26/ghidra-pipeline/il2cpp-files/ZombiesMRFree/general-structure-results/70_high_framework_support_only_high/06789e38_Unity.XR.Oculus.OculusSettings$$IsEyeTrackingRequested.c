/*
FUNCTION_NAME: Unity.XR.Oculus.OculusSettings$$IsEyeTrackingRequested
ENTRY_POINT: 06789e38
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_XR_Oculus_OculusSettings__IsEyeTrackingRequested(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if ((DAT_073a15e3 & 1) == 0) {
    FUN_02fe925c(UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo);
    DAT_073a15e3 = 1;
  }
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_066515ec(&stack0x00000028,uVar2,0);
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000068 = in_stack_00000040;
    in_stack_00000060 = in_stack_00000038;
    in_stack_00000070 = in_stack_00000048;
    if (lVar1 != 0) {
      FUN_06916814(lVar1,*(undefined8 *)
                          Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


