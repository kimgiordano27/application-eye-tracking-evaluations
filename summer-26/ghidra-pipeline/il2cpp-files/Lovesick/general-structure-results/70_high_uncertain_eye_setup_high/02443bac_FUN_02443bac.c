/*
FUNCTION_NAME: FUN_02443bac
ENTRY_POINT: 02443bac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02443bac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long local_28;
  
  puVar1 = System_Dynamic_ExpandoObject_var;
  if ((DAT_037824a2 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(System_Dynamic_ExpandoObject_var);
    DAT_037824a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
  ;
  FUN_02450ddc();
  iVar5 = 0;
  while( true ) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= iVar5) {
      return;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) break;
    }
    FUN_0132138c(lVar4,iVar5,&local_28,*(undefined8 *)puVar2);
    if (local_28 == 0) break;
    FUN_0289f978(param_1,local_28,0);
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


