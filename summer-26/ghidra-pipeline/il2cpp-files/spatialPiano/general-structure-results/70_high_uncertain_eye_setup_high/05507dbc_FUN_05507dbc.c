/*
FUNCTION_NAME: FUN_05507dbc
ENTRY_POINT: 05507dbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05507dbc(long param_1,long *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((DAT_06bbf572 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca3c0);
    DAT_06bbf572 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)PTR_DAT_067ca3c0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    if (param_2[4] == 0) {
      FUN_05507d68(param_1);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar1 = FUN_042e7ba8(*(long *)(param_1 + 0x38),
                             *(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
        FUN_05501558(param_1,uVar1);
        if ((param_3 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_054fbf84();
            return;
          }
        }
        else if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054fbfe4();
          return;
        }
      }
    }
    else {
      FUN_05500c08(param_1);
      if ((param_3 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054fbec4();
          return;
        }
      }
      else if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fbf24();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


