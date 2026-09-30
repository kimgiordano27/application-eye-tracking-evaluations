/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 05318a80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    *(undefined1 *)(unaff_x23 + 0x21f) = 1;
  }
  in_stack_00000020 = *unaff_x21;
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
  in_stack_00000028 = (undefined4)unaff_x21[1];
  uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
  in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_060f078c();
  if ((uVar1 & 1) != 0) {
    FUN_052c2dcc(&stack0x00000020);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar2 = FUN_060ed7ac(*(long *)(param_2 + 0x20),0);
    FUN_052c22b0(uVar2,&stack0x00000020,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


