/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 017ddd98
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *unaff_x19;
  undefined8 uVar3;
  long *unaff_x27;
  
  lVar2 = *unaff_x27;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar2 = *unaff_x27;
  }
  puVar1 = PTR_DAT_06d88e48;
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 10) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 10,0);
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0xc,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0x10,0);
  FUN_0532e428(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
  return;
}


