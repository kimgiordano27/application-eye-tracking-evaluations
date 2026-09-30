/*
FUNCTION_NAME: FUN_0455cf74
ENTRY_POINT: 0455cf74
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0455cf74(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined1 local_40 [16];
  
  local_40._8_8_ = 0;
  local_40._0_8_ = 0;
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8(lVar1);
  }
  FUN_0455cc00(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 400));
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  Unity_AppUI_UI_NumericalField<double>__SetValueWithoutNotify
            (param_1,param_3 & 0xffffffff,0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x198));
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  local_40 = FUN_0455cc68(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x128));
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray
            (local_40,param_2,param_3,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x160));
  return;
}


