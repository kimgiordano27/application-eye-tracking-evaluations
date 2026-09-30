/*
FUNCTION_NAME: FUN_0243e674
ENTRY_POINT: 0243e674
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


undefined8 FUN_0243e674(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((DAT_03782439 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(StringLiteral_13849);
    thunk_FUN_00d48444(StringLiteral_1024);
    thunk_FUN_00d48444(StringLiteral_7090);
    DAT_03782439 = 1;
  }
  uVar4 = FUN_0269e8c8(0);
  puVar2 = StringLiteral_7090;
  puVar1 = StringLiteral_1024;
  if ((uVar4 < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1c0800U) != 0)) {
    lVar5 = *(long *)StringLiteral_7090;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    puVar3 = StringLiteral_13849;
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_011475dc(uVar7,*(undefined8 *)puVar3);
    lVar6 = *(long *)puVar2;
    lVar5 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar5 == 0) {
LAB_0243e7cc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_0243e7cc;
      }
      FUN_0132138c(lVar5,0,&local_28,
                   *(undefined8 *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                  );
      if (local_28 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


