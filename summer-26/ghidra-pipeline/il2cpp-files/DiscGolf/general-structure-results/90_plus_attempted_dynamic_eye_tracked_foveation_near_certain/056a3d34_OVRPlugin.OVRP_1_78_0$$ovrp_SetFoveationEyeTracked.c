/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 056a3d34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_06a0d468;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_056a32b4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar1);
  }
  in_stack_00000018 = 0;
  FUN_056a930c(&stack0x00000018,0,0);
  FUN_056a9400(&stack0x00000008,uVar2,in_stack_00000018,0);
  uVar3 = FUN_056a3e08(&stack0x00000008,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_056a3c28();
  }
  else {
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f068);
    FUN_0552aca4(lVar4,0);
    *(undefined8 *)(lVar4 + 0x18) = uStack0000000000000010;
    *(undefined8 *)(lVar4 + 0x10) = uStack0000000000000008;
  }
  return lVar4;
}


