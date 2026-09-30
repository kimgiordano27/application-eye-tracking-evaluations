/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 036db55c
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long in_stack_00000048;
  
  lVar2 = thunk_FUN_015d0480();
  puVar1 = PTR_DAT_06e130d0;
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar3,0);
  }
  if (3 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
    thunk_FUN_01656ef8();
    uVar3 = FUN_04748adc(*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar3);
    if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


