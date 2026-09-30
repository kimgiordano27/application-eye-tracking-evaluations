/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 05ac3364
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
               (long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar4 = *param_2;
  }
  uVar6 = param_3[4];
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  lVar5 = *(long *)(param_4 + 0x20);
  lVar2 = param_2[1];
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4();
  }
  in_stack_00000030 = uVar9;
  in_stack_00000038 = uVar10;
  in_stack_00000040 = uVar7;
  in_stack_00000048 = uVar8;
  in_stack_00000050 = uVar6;
  uVar3 = FUN_04011800(lVar4,&stack0x00000030,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x50));
  return ~uVar3 >> 0x1f;
}


