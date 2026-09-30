/*
FUNCTION_NAME: FUN_0601e50c
ENTRY_POINT: 0601e50c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0601e50c(long param_1,void *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 auStack_1a8 [120];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [128];
  
  if ((DAT_06bc538e & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_98__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_107__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulxs_f32__);
    DAT_06bc538e = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmulxs_f32__;
  plVar3 = *(long **)(param_1 + 0x30);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_107__ + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_107__)) {
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_128 = 0;
      local_130 = 0;
      memcpy(auStack_1a8,param_2,0x78);
      FUN_05f612a8(&local_130,auStack_1a8,0);
      UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile___ctor
                (*(undefined4 *)((long)plVar3 + 0x24),&local_130,0);
      FUN_05f612b8(&local_130,(char)plVar3[4],0);
      memcpy(auStack_b0,&local_130,0x80);
      FUN_0342dbf4(auStack_b0,0,0,*(undefined8 *)puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar3);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  memcpy(auStack_1a8,param_2,0x78);
  FUN_05f612a8(&local_130,auStack_1a8,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


