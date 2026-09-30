/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$LoadAssembliesAsync
ENTRY_POINT: 06355808
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__LoadAssembliesAsync(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  
  if (param_1 != 0) {
    lVar2 = FUN_06317848(param_1,0);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0xd0);
      if (*(int *)(lVar2 + 0xe0) != 0) {
        plVar1 = (long *)(lVar2 + 0xd8);
      }
      if ((*plVar1 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
        lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x28) != 0) {
            if (*(long *)(unaff_x20 + 0x18) != 0) {
              lVar2 = FUN_06317848(*(long *)(unaff_x20 + 0x18),0);
              if (lVar2 != 0) {
                if ((DAT_086de93e & 1) == 0) {
                  FUN_0335b6c8(&DAT_083eb4b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086de93e = 1;
                }
                if (*(long *)(lVar2 + 0x18) == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x30);
                }
                uStack000000000000005c = 0;
                auVar4 = FUN_040049d0(&stack0x00000058,uVar3,0x40);
                return auVar4;
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


