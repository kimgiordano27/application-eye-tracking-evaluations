/*
FUNCTION_NAME: OVRPlugin.Ktx$$LoadKtxFromMemory
ENTRY_POINT: 090c510c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__LoadKtxFromMemory(undefined8 param_1)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  lVar1 = *(long *)(unaff_x19 + 0x80);
  FUN_09038efc(&stack0x00000000 + 4,param_1,0,0);
  if (lVar1 != 0) {
    *(ulong *)(lVar1 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar1 + 0x14) = in_stack_00000000._4_8_;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
    *(ulong *)(lVar1 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      lVar1 = *(long *)(unaff_x19 + 0x80);
      uVar2 = FUN_0a18c388(*(long *)(unaff_x19 + 0x58),0);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x70) = uVar2;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


