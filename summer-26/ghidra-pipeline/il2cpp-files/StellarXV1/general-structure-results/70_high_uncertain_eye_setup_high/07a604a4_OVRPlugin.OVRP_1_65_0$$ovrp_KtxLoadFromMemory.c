/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 07a604a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  
  iVar1 = FUN_07a6027c(*(undefined4 *)(param_1 + 0x18),param_2,2);
  if (iVar1 != 0) {
    return false;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x20),
                         *(undefined4 *)(unaff_x19 + 0x8c),8);
    if (iVar1 != 0) {
      return false;
    }
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x28),
                           *(undefined4 *)(unaff_x19 + 0x8c),3);
      if (iVar1 != 0) {
        return false;
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x24),
                             *(undefined4 *)(unaff_x19 + 0x8c),4);
        if (iVar1 != 0) {
          return false;
        }
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x2c),
                               *(undefined4 *)(unaff_x19 + 0x8c),9);
          if (iVar1 != 0) {
            return false;
          }
          if (*(long *)(unaff_x19 + 0x80) != 0) {
            iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x34),
                                 *(undefined4 *)(unaff_x19 + 0x8c),5);
            if (iVar1 != 0) {
              return false;
            }
            if (*(long *)(unaff_x19 + 0x80) != 0) {
              iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30),
                                   *(undefined4 *)(unaff_x19 + 0x8c),6);
              if (iVar1 != 0) {
                return false;
              }
              if (*(long *)(unaff_x19 + 0x80) != 0) {
                iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x38),
                                     *(undefined4 *)(unaff_x19 + 0x8c),10);
                if (iVar1 != 0) {
                  return false;
                }
                if (*(long *)(unaff_x19 + 0x80) != 0) {
                  iVar1 = FUN_07a6027c(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x3c),
                                       *(undefined4 *)(unaff_x19 + 0x8c),7);
                  return iVar1 == 0;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


