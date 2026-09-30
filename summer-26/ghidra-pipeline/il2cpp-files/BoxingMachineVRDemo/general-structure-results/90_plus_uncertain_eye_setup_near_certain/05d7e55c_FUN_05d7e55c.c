/*
FUNCTION_NAME: FUN_05d7e55c
ENTRY_POINT: 05d7e55c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_05d7e55c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_06b82cdd & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067693c0);
    FUN_02d6084c(PTR_DAT_0676ba80);
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_02d6084c(PTR_DAT_067693b8);
    FUN_02d6084c(
                Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                );
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06b82cdd = 1;
  }
  puVar2 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (param_3 == 0) {
LAB_05d7e754:
    local_70 = auVar1;
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = thunk_FUN_02d709fc(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
  FUN_05d7e82c(&local_60,uVar3);
  puVar2 = PTR_DAT_067693b8;
  if ((char)local_60 == '\0') {
    local_70._0_8_ = FUN_05d7ec94(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0463feb8(auStack_88,&local_60,
                 *(undefined8 *)Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    local_70 = FUN_05d7ec94(param_1,param_2,param_3,param_4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_05d67b1c(local_70,0);
    puVar2 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
    ;
    if ((uVar4 & 1) == 0) {
      lVar6 = *param_4;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05d7e758(lVar6);
      auVar1 = local_70;
      if (*param_4 != 0) {
        lVar6 = FUN_05d69ae4(*param_4,0);
        uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
        uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
        FUN_05d684e8(uVar3,local_80,0);
        auVar1 = local_70;
        if (lVar6 != 0) {
          FUN_048956dc(lVar6,uVar5,uVar3,*(undefined8 *)PTR_DAT_067693c0);
          return local_70._0_8_;
        }
      }
      goto LAB_05d7e754;
    }
  }
  return local_70._0_8_;
}


