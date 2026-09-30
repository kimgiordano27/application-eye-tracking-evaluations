/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncConnection_GetSessionId
ENTRY_POINT: 035f5144
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Oculus_Platform_CAPI__ovr_NetSyncConnection_GetSessionId(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x21;
  
  plVar6 = *(long **)(unaff_x20 + 0x370);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_<>c__DisplayClass21_0_<Visit>b__0__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_99__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_<>c__DisplayClass21_0_<Visit>b__1__
                      );
    *(undefined1 *)(unaff_x19 + 0x847) = 1;
  }
  lVar2 = FUN_0407370c(*unaff_x21,0);
  lVar5 = *plVar6;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar5);
  }
  uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (lVar2,0,0);
  puVar1 = 
  Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_<>c__DisplayClass21_0_<Visit>b__0__
  ;
  if ((uVar3 & 1) == 0) {
    if (lVar2 != 0) {
      uVar4 = FUN_023361c8(lVar2,*(undefined8 *)
                                  Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_<>c__DisplayClass21_0_<Visit>b__0__
                          );
      lVar5 = *plVar6;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar5);
      }
      uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar4,0,0);
      if ((uVar3 & 1) != 0) goto LAB_035f5218;
      lVar2 = FUN_023361c8(lVar2,*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        FUN_035f3b5c();
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_035f5218:
  puVar1 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  lVar2 = *(long *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x20) == '\0') {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(*(undefined8 *)
                  Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_<>c__DisplayClass21_0_<Visit>b__1__
                 ,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar2);
      lVar2 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x20) = 1;
  }
  return 0;
}


