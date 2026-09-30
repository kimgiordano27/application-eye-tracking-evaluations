/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$.cctor
ENTRY_POINT: 0635685c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c___cctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uStack0000000000000004;
  undefined8 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000024;
  
  FUN_0335b6c8(param_1 + 0xdf8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0x8c3) = unaff_w25;
  if ((unaff_x23 == 0) || (*(long *)(unaff_x23 + 0x18) == 0)) {
    return 0xffffffff;
  }
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    auVar3 = FUN_042b99dc(*(long *)(unaff_x22 + 0x20),*(long *)(unaff_x23 + 0x18),DAT_083eb578);
    if ((unaff_x21 != 0) && (*(long *)(unaff_x22 + 0x28) != 0)) {
      auVar4 = FUN_0429eef4(*(long *)(unaff_x22 + 0x28),*(undefined4 *)(unaff_x21 + 0x18),
                            DAT_083eb030);
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if (lVar2 != 0) {
        FUN_0405e034(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                     auVar3._0_8_ >> 0x20);
        lVar2 = *(long *)(unaff_x22 + 0x28);
        if ((lVar2 != 0) &&
           (FUN_0405d584(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                         auVar4._0_8_ >> 0x20), *(long *)(unaff_x22 + 0x30) != 0)) {
          uStack0000000000000004 = unaff_w20 & 1;
          _uStack000000000000000c = auVar3;
          _uStack000000000000001c = auVar4;
          uVar1 = FUN_043958d0();
          return uVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


