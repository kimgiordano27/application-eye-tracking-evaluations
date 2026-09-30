/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 05ad6e30
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  long in_x9;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  void *__src;
  code *pcVar2;
  
  param_1 = param_1 - param_5;
  __src = (void *)(in_x9 + 0x20);
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    pcVar2 = *(code **)(*param_2 + 0x1b8);
    memcpy(&stack0x000000a8,__src,0xa8);
    memcpy(&stack0x00000000,unaff_x20,0xa8);
    uVar1 = (*pcVar2)(param_2,&stack0x000000a8);
    if ((uVar1 & 1) != 0) break;
    param_1 = param_1 + -1;
    __src = (void *)((long)__src + 0xa8);
    unaff_w19 = unaff_w19 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


