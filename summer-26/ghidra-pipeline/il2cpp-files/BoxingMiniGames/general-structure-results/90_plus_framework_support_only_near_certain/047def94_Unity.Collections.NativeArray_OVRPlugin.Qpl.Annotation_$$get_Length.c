/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Length
ENTRY_POINT: 047def94
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  long lVar4;
  
  thunk_FUN_036b7ad0();
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != 0) {
    lVar1 = thunk_FUN_0367fd24();
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar2,0);
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(long *)(lVar4 + unaff_x21 * 8 + 0x20) = unaff_x20;
    thunk_FUN_036b7ad0();
    plVar3 = (long *)(unaff_x19 + 0x20);
    lVar4 = unaff_x20;
    if (*plVar3 != 0) {
      *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(*plVar3 + 0x40);
      thunk_FUN_036b7ad0();
      lVar4 = *plVar3;
      if (lVar4 == 0) goto LAB_047df048;
    }
    *(long *)(lVar4 + 0x40) = unaff_x20;
    thunk_FUN_036b7ad0();
    *(long *)(unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_036b7ad0(plVar3);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
    return;
  }
LAB_047df048:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


