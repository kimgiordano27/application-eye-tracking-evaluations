/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 04fd70f0
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___cctor(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x23;
  ulong uVar3;
  long unaff_x24;
  long *unaff_x26;
  
  if ((*(ushort *)(unaff_x23 + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  if (unaff_x24 == 0) {
    FUN_0550953c(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar1 = thunk_FUN_02dd3048();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar3 = 0;
    uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      FUN_04fd69c8();
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
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


