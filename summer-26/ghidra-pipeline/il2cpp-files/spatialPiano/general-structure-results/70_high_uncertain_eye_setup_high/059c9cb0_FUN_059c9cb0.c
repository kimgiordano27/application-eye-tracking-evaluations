/*
FUNCTION_NAME: FUN_059c9cb0
ENTRY_POINT: 059c9cb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_059c9cb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_2a0 [152];
  undefined1 auStack_208 [152];
  undefined1 auStack_170 [152];
  undefined1 auStack_d8 [152];
  
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
  puVar4 = PTR_DAT_067cc050;
  puVar3 = PTR_DAT_067cc048;
  puVar2 = PTR_DAT_067cb9e0;
  puVar1 = PTR_DAT_067ca188;
  if ((DAT_06bc1d1a & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    FUN_02f08768(PTR_DAT_067cc048);
    FUN_02f08768(PTR_DAT_067cb9e0);
    FUN_02f08768(PTR_DAT_067ca188);
    FUN_02f08768(PTR_DAT_067cc050);
    DAT_06bc1d1a = 1;
  }
  memset(auStack_d8,0,0x98);
  FUN_06297efc(auStack_d8,*(undefined8 *)puVar1,0);
  memcpy(*(void **)(*(long *)puVar5 + 0xb8),auStack_d8,0x98);
  memset(auStack_170,0,0x98);
  FUN_06297efc(auStack_170,*(undefined8 *)puVar4,0);
  memcpy((void *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98),auStack_170,0x98);
  memset(auStack_208,0,0x98);
  FUN_06297efc(auStack_208,*(undefined8 *)puVar2,0);
  memcpy((void *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x130),auStack_208,0x98);
  memset(auStack_2a0,0,0x98);
  FUN_06297efc(auStack_2a0,*(undefined8 *)puVar3,0);
  memcpy((void *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c8),auStack_2a0,0x98);
  return;
}


