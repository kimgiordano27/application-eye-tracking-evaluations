/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 06556ec4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = in_w8;
  uVar1 = FUN_071af138(&stack0x00000008,0);
  if (3 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x38),uVar1);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = *unaff_x23;
      thunk_FUN_03d1023c();
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      in_stack_00000010 = 0xffffffffffffffff;
      uStack0000000000000018 = *(undefined4 *)(unaff_x20 + 8);
      in_stack_00000008 = lVar2;
      uVar1 = FUN_071af138(&stack0x00000008,0);
      if (5 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x48),uVar1);
        if (6 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_091a15c8;
          thunk_FUN_03d1023c();
          FUN_06fd2590();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


