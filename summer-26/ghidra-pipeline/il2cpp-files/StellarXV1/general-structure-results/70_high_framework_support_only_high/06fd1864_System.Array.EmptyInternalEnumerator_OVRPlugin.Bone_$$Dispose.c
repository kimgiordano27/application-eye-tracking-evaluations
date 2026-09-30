/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 06fd1864
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      return;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (-1 < *(int *)(unaff_x27 + -2)) {
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_059fcee4(&stack0x00000010,*(undefined4 *)(unaff_x27 + -1),*unaff_x27,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
      lVar1 = thunk_FUN_040b4b34(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
      thunk_FUN_040ec700(unaff_x26 + (long)(int)unaff_w20 * 8,lVar1);
      unaff_w20 = unaff_w20 + 1;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x27 = unaff_x27 + 3;
    in_ZR = unaff_x23 == unaff_x25;
  } while( true );
}


