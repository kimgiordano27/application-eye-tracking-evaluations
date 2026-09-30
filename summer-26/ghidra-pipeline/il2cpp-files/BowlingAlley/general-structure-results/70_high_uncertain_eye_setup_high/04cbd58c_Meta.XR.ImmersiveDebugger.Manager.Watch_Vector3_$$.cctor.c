/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 04cbd58c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  if (unaff_x20 == 0) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) {
      in_stack_00000008 = 0;
      FUN_05986a10(&stack0x00000008,1,0);
      lVar2 = thunk_FUN_032e1da0(PTR_DAT_0727edd8);
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar1 = in_stack_00000008;
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      lVar2 = FUN_03b4fa88(uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_032934b8(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_032934b8();
      }
      **(long **)(lVar3 + 0xb8) = lVar2;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_032934b8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_032934b8();
      }
      thunk_FUN_0333a630(*(undefined8 *)(lVar3 + 0xb8),lVar2);
    }
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    lVar2 = thunk_FUN_032a56a0();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8(lVar3);
    }
    FUN_04a443a8(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0599909c(lVar2,*(undefined8 *)(unaff_x20 + 0x90));
  }
  return lVar2;
}


