/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 05695e68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_06dbc7ec & 1) == 0) {
    FUN_02d965b8(System_Predicate<Collider>_TypeInfo);
    FUN_02d965b8(System_Predicate<Column>_TypeInfo);
    DAT_06dbc7ec = 1;
  }
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x18) <= (int)param_3)) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_055339fc(*(undefined8 *)(param_1 + 0x10),0);
    uVar2 = 1;
    *param_2 = *(undefined8 *)(lVar1 + (ulong)param_3 * 8);
  }
  return uVar2;
}


