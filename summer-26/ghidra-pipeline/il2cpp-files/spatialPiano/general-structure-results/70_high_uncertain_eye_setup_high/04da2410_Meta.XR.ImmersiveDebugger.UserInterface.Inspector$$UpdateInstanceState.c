/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 04da2410
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  byte in_stack_00000008;
  byte bStack000000000000000c;
  
  bStack000000000000000c = (*in_x9)();
  lVar3 = *(long *)(unaff_x19 + 0x50);
  bStack000000000000000c = bStack000000000000000c & 1;
  if (lVar3 != 0) {
    in_stack_00000008 =
         (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    in_stack_00000008 = in_stack_00000008 & 1;
    uVar1 = thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18)
                               ,&stack0x00000008);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0x28));
    }
    uVar2 = FUN_05058350(&stack0x0000000c,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x58);
      if (lVar3 == 0) goto LAB_04da24d8;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),bStack000000000000000c,*(undefined8 *)(lVar3 + 0x28))
      ;
      lVar3 = *(long *)(unaff_x19 + 0x60);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
    }
    return;
  }
LAB_04da24d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


