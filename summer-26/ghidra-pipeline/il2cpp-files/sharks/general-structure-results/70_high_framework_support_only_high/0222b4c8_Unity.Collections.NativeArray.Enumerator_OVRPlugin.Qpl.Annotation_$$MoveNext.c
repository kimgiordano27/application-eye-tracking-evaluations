/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 0222b4c8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__MoveNext(void)

{
  long *__src;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar3;
  long *unaff_x26;
  long *plVar4;
  
  lVar1 = thunk_FUN_01861ac0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    uVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x20);
    do {
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      if (uVar2 <= uVar3) {
LAB_0222b5e0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (*plVar4 == 0) {
        FUN_02bef85c(0x11,0);
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      }
      if (uVar2 <= uVar3) goto LAB_0222b5e0;
      __src = plVar4 + 1;
      plVar4 = plVar4 + 0xc;
      memcpy(&stack0x00000000,__src,0x58);
      memcpy(&stack0x00000058,&stack0x00000000,0x58);
      FUN_0222ada0();
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(lVar1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = FUN_02b9f808(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  FUN_020aeb98();
  return;
}


