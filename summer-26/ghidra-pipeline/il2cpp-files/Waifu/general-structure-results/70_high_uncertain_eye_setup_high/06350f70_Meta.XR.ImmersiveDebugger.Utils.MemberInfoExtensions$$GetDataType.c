/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$GetDataType
ENTRY_POINT: 06350f70
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__GetDataType(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long unaff_x21;
  undefined4 unaff_w24;
  undefined1 auVar6 [16];
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
                    /* try { // try from 06350f8c to 0645112f has its CatchHandler @ 06350f8c
                       catch() { ... } // from try @ 06350f8c with catch @ 06350f8c
                       catch() { ... } // from try @ 06351538 with catch @ 06350f8c
                       catch() { ... } // from try @ 06351680 with catch @ 06350f8c
                       catch() { ... } // from try @ 0635173c with catch @ 06350f8c
                       catch() { ... } // from try @ 06351784 with catch @ 06350f8c
                       catch() { ... } // from try @ 063517bc with catch @ 06350f8c
                       catch() { ... } // from try @ 06351884 with catch @ 06350f8c */
    lVar4 = FUN_0631798c(*(long *)(unaff_x21 + 0x18),0);
    if ((lVar4 != 0) && ((*(long *)(lVar4 + 0x60) != 0 && (*(long *)(unaff_x21 + 0x18) != 0)))) {
      lVar4 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 0xd8);
        if (*(int *)(lVar4 + 0xe0) != 0) {
          plVar2 = (long *)(lVar4 + 0xd0);
        }
        if ((*plVar2 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
          lVar4 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
            if (*(long *)(unaff_x21 + 0x18) != 0) {
              lVar4 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0);
              if (lVar4 != 0) {
                if ((DAT_086de93e & 1) == 0) {
                  FUN_0335b6c8(&DAT_083eb4b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086de93e = 1;
                }
                if (*(long *)(lVar4 + 0x18) == 0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x30);
                }
                uStack000000000000012c = 0;
                uStack0000000000000128 = unaff_w24;
                auVar6 = FUN_04003860(&stack0x00000128,uVar5,0x40);
                if ((*(long *)(unaff_x21 + 0x18) != 0) &&
                   (lVar4 = FUN_06317848(*(long *)(unaff_x21 + 0x18),0), lVar4 != 0)) {
                  iVar3 = *(int *)(lVar4 + 0xe0);
                  uVar1 = iVar3 + 2;
                  if (-1 < iVar3 + 1) {
                    uVar1 = iVar3 + 1;
                  }
                  *(uint *)(lVar4 + 0xe0) = (iVar3 + 1) - (uVar1 & 0xfffffffe);
                  return auVar6;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


