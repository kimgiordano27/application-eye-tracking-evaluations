/*
FUNCTION_NAME: FUN_05dab454
ENTRY_POINT: 05dab454
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05dab454(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3b25 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9380);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_MemoryExtensions_AsSpan<Vector2>__);
    DAT_06bc3b25 = 1;
  }
  puVar1 = PTR_DAT_067c8f20;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar1);
  }
  uVar4 = FUN_060f245c(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = FUN_060bc4c8(*(undefined8 *)Method_System_MemoryExtensions_AsSpan<Vector2>__,0);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9380);
    FUN_060bda68(uVar5,uVar6,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar2;
    }
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x88) = uVar5;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x88);
}


