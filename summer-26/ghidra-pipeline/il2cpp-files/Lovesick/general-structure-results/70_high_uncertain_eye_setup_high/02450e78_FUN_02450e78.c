/*
FUNCTION_NAME: FUN_02450e78
ENTRY_POINT: 02450e78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02450e78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long local_28;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0378249f & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Dynamic_ExpandoObject_var);
    DAT_0378249f = 1;
  }
  uVar4 = FUN_026ae324(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar5 = FUN_0268b4e0(uVar4,0,0);
  puVar1 = System_Dynamic_ExpandoObject_var;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)System_Dynamic_ExpandoObject_var + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
  ;
  FUN_02450ddc();
  iVar8 = 0;
  while( true ) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = **(long **)(lVar6 + 0xb8);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x18) <= iVar8) {
      return;
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar7 == 0) break;
    }
    FUN_0132138c(lVar7,iVar8,&local_28,*(undefined8 *)puVar2);
    if (local_28 == 0) break;
    FUN_0289fb7c(local_28,1,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
       (FUN_0132138c(**(long **)(*(long *)puVar1 + 0xb8),iVar8,&local_28,*(undefined8 *)puVar2),
       local_28 == 0)) break;
    FUN_0289faf4(local_28,1,0);
    if (**(long **)(*(long *)puVar1 + 0xb8) == 0) break;
    FUN_0132138c(**(long **)(*(long *)puVar1 + 0xb8),iVar8,&local_28,*(undefined8 *)puVar2);
    lVar6 = local_28;
    iVar3 = FUN_0267a71c(0);
    if (lVar6 == 0) break;
    FUN_0289fa5c(lVar6,iVar3 == 1,0);
    iVar8 = iVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


