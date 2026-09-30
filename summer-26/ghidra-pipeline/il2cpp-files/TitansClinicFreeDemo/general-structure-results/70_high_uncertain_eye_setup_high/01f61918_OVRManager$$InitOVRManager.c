/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 01f61918
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01f61a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OVRManager__InitOVRManager(void)

{
  undefined2 uVar1;
  ulong uVar2;
  uint in_w9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  if (unaff_w20 <= in_w9) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  if (*(short *)(unaff_x21 + (ulong)in_w9 * 2) == 0x2d) {
    uVar2 = FUN_01f628f0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    *unaff_x19 = in_stack_00000018._4_4_;
    uVar2 = FUN_01f628f0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar1 = (undefined2)((ulong)in_stack_00000018 >> 0x20);
    *(undefined2 *)(unaff_x19 + 1) = uVar1;
    uVar2 = FUN_01f628f0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    *(undefined2 *)((long)unaff_x19 + 6) = uVar1;
    uVar2 = FUN_01f628f0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_01f627a0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  FUN_01f63b18();
  return 0;
}


