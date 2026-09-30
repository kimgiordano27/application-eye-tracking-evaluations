/*
FUNCTION_NAME: System.Threading.SendOrPostCallback$$.ctor
ENTRY_POINT: 034ccaf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void System_Threading_SendOrPostCallback___ctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01bc4c70(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  FUN_034ccb04();
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar1 = thunk_FUN_01f117cc();
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Sirenix_Serialization_UnitySerializationUtility_ApplyPrefabModifications__
                            );
  FUN_0356adc8(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Mono_Unity_UnityTlsContext_ReadCallback__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,uVar2);
}


