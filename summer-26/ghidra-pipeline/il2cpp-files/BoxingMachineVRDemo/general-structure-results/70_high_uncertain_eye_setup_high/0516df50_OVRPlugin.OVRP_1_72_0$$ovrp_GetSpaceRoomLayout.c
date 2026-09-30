/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceRoomLayout
ENTRY_POINT: 0516df50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceRoomLayout(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte unaff_w19;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
                    /* catch() { ... } // from try @ 0516df2c with catch @ 0516df54 */
                    /* catch() { ... } // from try @ 0516df0c with catch @ 0516df58
                       catch() { ... } // from try @ 0516df44 with catch @ 0516df58 */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
                    /* try { // try from 0516df60 to 0526df63 has its CatchHandler @ 0516e030 */
    lVar1 = *unaff_x20;
  }
                    /* try { // try from 0516df64 to 0526dfcf has its CatchHandler @ 0516db10 */
  plVar2 = *(long **)(lVar1 + 0xb8);
                    /* catch() { ... } // from try @ 0516ded0 with catch @ 0516df68 */
  lVar3 = *plVar2;
                    /* catch() { ... } // from try @ 0516dd6c with catch @ 0516df6c
                       catch() { ... } // from try @ 0516dee8 with catch @ 0516df6c */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0516dd60 with catch @ 0516df70 */
                    /* catch() { ... } // from try @ 0516dd54 with catch @ 0516df74 */
                    /* catch() { ... } // from try @ 0516dd24 with catch @ 0516df78 */
    if (1 < *(uint *)(lVar3 + 0x18)) {
      if (unaff_w19 <= *(byte *)(lVar3 + 0x21)) {
        return 1;
      }
                    /* catch() { ... } // from try @ 0516dcec with catch @ 0516df8c */
      if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0516dd34 with catch @ 0516df90 */
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x20;
        plVar2 = *(long **)(lVar1 + 0xb8);
      }
      lVar3 = plVar2[1];
                    /* catch() { ... } // from try @ 0516dcc8 with catch @ 0516dfa0 */
      if (lVar3 == 0) goto LAB_0516e0e4;
                    /* catch() { ... } // from try @ 0516dc9c with catch @ 0516dfa4 */
                    /* catch() { ... } // from try @ 0516dc70 with catch @ 0516dfa8 */
      if (*(int *)(lVar3 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 0516dc58 with catch @ 0516dfac */
                    /* catch() { ... } // from try @ 0516dc6c with catch @ 0516dfb0
                       catch() { ... } // from try @ 0516dc88 with catch @ 0516dfb0 */
        if (*(byte *)(lVar3 + 0x20) <= unaff_w19) {
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar1 = *unaff_x20;
            plVar2 = *(long **)(lVar1 + 0xb8);
          }
          lVar3 = plVar2[1];
                    /* try { // try from 0516dfd0 to 0526dfd3 has its CatchHandler @ 0516dfe8 */
          if (lVar3 == 0) goto LAB_0516e0e4;
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0516e0e8;
          if (unaff_w19 <= *(byte *)(lVar3 + 0x21)) {
            return 2;
          }
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar1 = *unaff_x20;
        }
        lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_0516e0e4;
        if (*(int *)(lVar3 + 0x18) != 0) {
          if (*(byte *)(lVar3 + 0x20) <= unaff_w19) {
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar1 = *unaff_x20;
              lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
              if (lVar3 == 0) goto LAB_0516e0e4;
            }
            if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0516e0e8;
            if (unaff_w19 <= *(byte *)(lVar3 + 0x21)) {
              return 3;
            }
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar1 = *unaff_x20;
          }
          lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
          if (lVar3 == 0) goto LAB_0516e0e4;
          if (*(int *)(lVar3 + 0x18) != 0) {
            if (*(byte *)(lVar3 + 0x20) <= unaff_w19) {
              if (*(int *)(lVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                if (lVar3 == 0) goto LAB_0516e0e4;
              }
              if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0516e0e8;
              if (unaff_w19 <= *(byte *)(lVar3 + 0x21)) {
                return 4;
              }
            }
            return 0;
          }
        }
      }
    }
LAB_0516e0e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_0516e0e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


