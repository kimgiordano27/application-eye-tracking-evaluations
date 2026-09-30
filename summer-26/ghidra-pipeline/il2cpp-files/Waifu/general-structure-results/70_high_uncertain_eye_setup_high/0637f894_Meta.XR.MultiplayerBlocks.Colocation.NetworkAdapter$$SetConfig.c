/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter$$SetConfig
ENTRY_POINT: 0637f894
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__SetConfig(long param_1)

{
  long lVar1;
  long *unaff_x22;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (param_1 != 0) {
    lVar1 = FUN_06317920(param_1,0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x60) != 0)) && (*unaff_x22 != 0)) {
      lVar1 = FUN_06317920(*unaff_x22,0);
                    /* try { // try from 0637f8d4 to 0647f8db has its CatchHandler @ 06380020 */
      if (((lVar1 != 0) && (*(long *)(lVar1 + 0x68) != 0)) && (*unaff_x22 != 0)) {
        lVar1 = FUN_06317920(*unaff_x22,0);
        if (((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) && (*unaff_x22 != 0)) {
                    /* try { // try from 0637f904 to 0647f90b has its CatchHandler @ 06380034 */
          lVar1 = FUN_06317920(*unaff_x22,0);
          if (((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) && (*unaff_x22 != 0)) {
            lVar1 = FUN_06317920(*unaff_x22,0);
            if (((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) && (*unaff_x22 != 0)) {
              lVar1 = FUN_06317920(*unaff_x22,0);
              if (((lVar1 != 0) && (*(long *)(lVar1 + 0x98) != 0)) && (*unaff_x22 != 0)) {
                lVar1 = FUN_06317920(*unaff_x22,0);
                if (((lVar1 != 0) && (*(long *)(lVar1 + 0xa0) != 0)) && (*unaff_x22 != 0)) {
                  lVar1 = FUN_06317920(*unaff_x22,0);
                  if (lVar1 != 0) {
                    if ((*(long *)(lVar1 + 0x88) != 0) && (*unaff_x22 != 0)) {
                      lVar1 = FUN_06317920(*unaff_x22,0);
                      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
                        auVar2 = FUN_0400508c(&stack0x00000090,
                                              *(undefined4 *)(*(long *)(lVar1 + 0x80) + 0x30),0x80);
                        return auVar2;
                      }
                    }
                  }
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


