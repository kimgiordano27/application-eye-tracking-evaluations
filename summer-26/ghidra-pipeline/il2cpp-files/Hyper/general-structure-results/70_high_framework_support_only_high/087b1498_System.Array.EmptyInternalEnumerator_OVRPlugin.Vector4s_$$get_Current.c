/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 087b1498
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__get_Current
               (code *param_1,long *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  uint unaff_w26;
  ulong in_stack_00000008;
  
  while( true ) {
    uVar2 = (*param_1)(param_2,param_3,param_4,param_5);
    if ((uVar2 & 1) != 0) {
      return unaff_w22;
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= unaff_w22)
      goto 
      System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
      ;
      unaff_w22 = *(uint *)(unaff_x24 + (long)(int)unaff_w26 * (long)unaff_w25 + 4);
      if ((int)uVar1 <= unaff_w21) {
        FUN_08d9d998(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w21 = unaff_w21 + 1;
      if (uVar1 <= unaff_w22) {
        return unaff_w22;
      }
      unaff_w26 = unaff_w22;
    } while (*(int *)(unaff_x24 + (long)(int)unaff_w22 * (long)unaff_w25) != unaff_w20);
    param_2 = (long *)FUN_0566cc80(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22) break;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_3 = (ulong)*(uint *)(unaff_x24 + (long)(int)unaff_w22 * (long)unaff_w25 + 8);
    param_1 = *(code **)(*param_2 + 0x1b8);
    param_5 = *(undefined8 *)(*param_2 + 0x1c0);
    param_4 = in_stack_00000008 >> 0x20;
  }

  System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
  :
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


