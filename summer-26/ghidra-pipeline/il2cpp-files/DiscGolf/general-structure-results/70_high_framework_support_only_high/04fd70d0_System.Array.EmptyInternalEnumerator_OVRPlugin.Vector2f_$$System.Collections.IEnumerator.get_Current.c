/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04fd70d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  
  lVar1 = FUN_053f0e78(param_2,**(undefined8 **)(param_1 + 0x778),param_4,0);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  if (lVar1 == 0) {
    FUN_0550953c(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar2 = thunk_FUN_02dd3048(lVar1,lVar4);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(lVar1,lVar4);
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar5 = 0;
    uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      FUN_04fd69c8();
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = FUN_0548850c(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04b86570();
  return;
}


