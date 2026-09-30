/*
FUNCTION_NAME: FUN_02443a60
ENTRY_POINT: 02443a60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02443a60(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long local_38;
  
  puVar2 = System_Dynamic_ExpandoObject_var;
  if ((DAT_037824a0 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(System_Dynamic_ExpandoObject_var);
    DAT_037824a0 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 8) == param_1) {
    return;
  }
  iVar4 = FUN_02699ba8(param_1,0);
  if (7 < iVar4) {
    iVar4 = 8;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
  ;
  FUN_02450ddc();
  iVar7 = 0;
  while( true ) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    plVar6 = *(long **)(lVar5 + 0xb8);
    if (*plVar6 == 0) break;
    iVar1 = *(int *)(*plVar6 + 0x18);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      plVar6 = *(long **)(*(long *)puVar2 + 0xb8);
    }
    if (iVar1 <= iVar7) {
      *(int *)(plVar6 + 1) = iVar4;
      return;
    }
    if ((*plVar6 == 0) ||
       (FUN_0132138c(*plVar6,iVar7,&local_38,*(undefined8 *)puVar3), local_38 == 0)) break;
    FUN_0289fb38(local_38,iVar4,0);
    iVar7 = iVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


