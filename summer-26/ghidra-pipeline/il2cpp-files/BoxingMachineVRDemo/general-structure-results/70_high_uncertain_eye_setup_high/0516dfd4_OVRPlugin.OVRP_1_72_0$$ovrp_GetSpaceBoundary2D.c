/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundary2D
ENTRY_POINT: 0516dfd4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundary2D(long param_1,long param_2)

{
  long lVar1;
  byte unaff_w19;
  long *unaff_x20;
  
  if (1 < *(uint *)(param_1 + 0x18)) {
                    /* catch() { ... } // from try @ 0516dfd0 with catch @ 0516dfe8 */
    if (unaff_w19 <= *(byte *)(param_1 + 0x21)) {
      return 2;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
                    /* try { // try from 0516dff4 to 0526dffb has its CatchHandler @ 0516e030 */
      thunk_FUN_02dbd7b4();
      param_2 = *unaff_x20;
    }
                    /* try { // try from 0516dffc to 0526e00b has its CatchHandler @ 0516db10 */
    lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
    if (lVar1 == 0) {
LAB_0516e0e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0516e00c to 0526e02f has its CatchHandler @ 0516e030 */
    if (*(int *)(lVar1 + 0x18) != 0) {
      if (*(byte *)(lVar1 + 0x20) <= unaff_w19) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          param_2 = *unaff_x20;
                    /* catch() { ... } // from try @ 0516df60 with catch @ 0516e030
                       catch() { ... } // from try @ 0516dff4 with catch @ 0516e030
                       catch() { ... } // from try @ 0516e00c with catch @ 0516e030 */
          lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
          if (lVar1 == 0) goto LAB_0516e0e4;
        }
        if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_0516e0e8;
        if (unaff_w19 <= *(byte *)(lVar1 + 0x21)) {
          return 3;
        }
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        param_2 = *unaff_x20;
      }
      lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x18);
      if (lVar1 == 0) goto LAB_0516e0e4;
      if (*(int *)(lVar1 + 0x18) != 0) {
        if (*(byte *)(lVar1 + 0x20) <= unaff_w19) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
            if (lVar1 == 0) goto LAB_0516e0e4;
          }
          if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_0516e0e8;
          if (unaff_w19 <= *(byte *)(lVar1 + 0x21)) {
            return 4;
          }
        }
        return 0;
      }
    }
  }
LAB_0516e0e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


