/*
FUNCTION_NAME: FUN_0244a0e4
ENTRY_POINT: 0244a0e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 177
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_0244a0e4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_28;
  
  puVar2 = System_Dynamic_ExpandoObject_var;
  if ((DAT_037824a5 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
    thunk_FUN_00d48444(System_Dynamic_ExpandoObject_var);
    DAT_037824a5 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02450ddc();
  lVar9 = *(long *)puVar2;
  lVar6 = **(long **)(lVar9 + 0xb8);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
LAB_0244a2e4:
      return uVar5 & 1;
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar2;
      lVar6 = **(long **)(lVar9 + 0xb8);
      if (lVar6 == 0) goto LAB_0244a2f8;
    }
    if (1 < *(int *)(lVar6 + 0x18)) {
      thunk_FUN_00d48444(Method_System_IO_BinaryReader_Read7BitEncodedInt__);
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar8 = thunk_FUN_00d48444(StringLiteral_10026);
      FUN_01773d84(uVar7,uVar8,0);
      uVar8 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<AudioSource>__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,uVar8);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar6 == 0) goto LAB_0244a2f8;
    }
    FUN_0132138c(lVar6,0,&local_28,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                );
    *(long *)(param_1 + 0x20) = local_28;
    puVar2 = Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__;
    if (local_28 != 0) {
      FUN_0289fb7c(local_28,1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03781f54 == '\0') {
        thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
        DAT_03781f54 = '\x01';
      }
      puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar2;
      }
      uVar1 = **(undefined4 **)(lVar6 + 0xb8);
      uVar4 = 1;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = 2;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar4 = FUN_017724a8(uVar1,uVar4,0);
      if (DAT_037824d7 == '\0') {
        thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
        DAT_037824d7 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar2;
      }
      **(undefined4 **)(lVar6 + 0xb8) = uVar4;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar5 = FUN_026f9320(*(long *)(param_1 + 0x20),0);
        goto LAB_0244a2e4;
      }
    }
  }
LAB_0244a2f8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


