/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeVelocity
ENTRY_POINT: 051e2320
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_0_1_3__ovrp_GetNodeVelocity(long param_1)

{
  int iVar1;
  long unaff_x19;
  
  iVar1 = FUN_051e20e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(unaff_x19 + 0x8c),8);
  if (iVar1 != 0) {
    return false;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x28),
                         *(undefined4 *)(unaff_x19 + 0x8c),3);
    if (iVar1 != 0) {
      return false;
    }
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x24),
                           *(undefined4 *)(unaff_x19 + 0x8c),4);
      if (iVar1 != 0) {
        return false;
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x2c),
                             *(undefined4 *)(unaff_x19 + 0x8c),9);
        if (iVar1 != 0) {
          return false;
        }
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x34),
                               *(undefined4 *)(unaff_x19 + 0x8c),5);
          if (iVar1 != 0) {
            return false;
          }
          if (*(long *)(unaff_x19 + 0x80) != 0) {
            iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30),
                                 *(undefined4 *)(unaff_x19 + 0x8c),6);
            if (iVar1 != 0) {
              return false;
            }
            if (*(long *)(unaff_x19 + 0x80) != 0) {
              iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x38),
                                   *(undefined4 *)(unaff_x19 + 0x8c),10);
              if (iVar1 != 0) {
                return false;
              }
              if (*(long *)(unaff_x19 + 0x80) != 0) {
                iVar1 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x3c),
                                     *(undefined4 *)(unaff_x19 + 0x8c),7);
                return iVar1 == 0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


