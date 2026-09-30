/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 061c65bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  uint unaff_w22;
  uint uVar4;
  int unaff_w23;
  
  do {
    plVar2 = (long *)(param_1 + 0x20);
    lVar3 = *plVar2;
    *plVar2 = 0;
    thunk_FUN_040ec700(plVar2,param_2);
    thunk_FUN_0408541c(unaff_x19,0);
    uVar4 = unaff_w22;
    if (lVar3 != 0) {
      return lVar3;
    }
    while( true ) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      unaff_w22 = 0;
      if (uVar4 + 1 != uVar1) {
        unaff_w22 = uVar4 + 1;
      }
      if ((int)uVar1 <= unaff_w23) {
        return 0;
      }
      if (uVar1 <= unaff_w22) goto LAB_061c6620;
      unaff_x19 = *(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
      if (unaff_x19 == 0) goto LAB_061c661c;
      thunk_FUN_040853fc(unaff_x19,0);
      if (0 < *(int *)(unaff_x19 + 0x18)) break;
      thunk_FUN_0408541c(unaff_x19,0);
      uVar4 = unaff_w22;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    uVar4 = *(int *)(unaff_x19 + 0x18) - 1;
    *(uint *)(unaff_x19 + 0x18) = uVar4;
    if (param_1 == 0) {
LAB_061c661c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
LAB_061c6620:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = param_1 + (ulong)uVar4 * 8;
    param_2 = 0;
  } while( true );
}


