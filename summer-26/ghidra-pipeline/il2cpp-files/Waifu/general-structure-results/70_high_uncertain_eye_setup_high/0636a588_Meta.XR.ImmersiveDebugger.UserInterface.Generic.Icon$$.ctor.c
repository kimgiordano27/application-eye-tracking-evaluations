/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$.ctor
ENTRY_POINT: 0636a588
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon___ctor(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  long unaff_x22;
  long lVar3;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  
                    /* try { // try from 0636a588 to 0646a59b has its CatchHandler @ 0636a6d0 */
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(*(long *)(unaff_x22 + 0x540) + 0xb8);
    FUN_042a80d8(*puVar2,puVar2[1],puVar2[2],puVar2[3],param_1,*(undefined8 *)(unaff_x23 + 0x1e8));
    lVar3 = *(long *)(unaff_x19 + 0x98);
    if (lVar3 != 0) {
      lVar1 = FUN_0429e128(lVar3,1,*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(unaff_x25 + 0xfd8) + 0x20) + 0xc0
                                              ) + 0x48));
      *(undefined4 *)(*(long *)(lVar3 + 0x10) + (lVar1 >> 0x20) * 4) = 0xffffffff;
      lVar3 = *(long *)(unaff_x19 + 0xa0);
      if (lVar3 != 0) {
        lVar1 = FUN_0429e128(lVar3,1,*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)(unaff_x25 + 0xfd8) + 0x20) +
                                                0xc0) + 0x48));
        *(undefined4 *)(*(long *)(lVar3 + 0x10) + (lVar1 >> 0x20) * 4) = 0xffffffff;
        if ((unaff_w24 >> 4 & 1) != 0) {
          *(int *)(unaff_x19 + 0xfc) = *(int *)(unaff_x19 + 0xfc) + 1;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


