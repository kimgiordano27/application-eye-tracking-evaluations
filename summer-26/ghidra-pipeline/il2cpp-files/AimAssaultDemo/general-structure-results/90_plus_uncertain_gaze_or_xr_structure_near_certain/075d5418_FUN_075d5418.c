/*
FUNCTION_NAME: FUN_075d5418
ENTRY_POINT: 075d5418
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_075d5418(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  if ((DAT_0826ebde & 1) == 0) {
    FUN_0373b518(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanInt16_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanInt32_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanInt64_TypeInfo);
    FUN_0373b518(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_0826ebde = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_075bd1f8(0,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    local_30 = param_2 + 0x20;
    local_28 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    local_40 = FUN_05324f34(&local_30,
                            *(undefined8 *)
                             System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanInt16_TypeInfo
                           );
    local_38 = CONCAT44(local_38._4_4_,(undefined4)local_28);
    if (DAT_0826ef88 == (code *)0x0) {
      DAT_0826ef88 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Rendering.CommandBuffer::SetLateLatchProjectionMatrices_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                         );
    }
    (*DAT_0826ef88)(lVar1,&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_075c0ac8(param_1);
}


