/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionEnabled
ENTRY_POINT: 063b1a40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionEnabled(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_07db70b8;
                    /* try { // try from 063b1a44 to 064b1b73 has its CatchHandler @ 063b1a44
                       catch() { ... } // from try @ 063b1a44 with catch @ 063b1a44
                       catch() { ... } // from try @ 063b1c50 with catch @ 063b1a44
                       catch() { ... } // from try @ 063b1cd4 with catch @ 063b1a44
                       catch() { ... } // from try @ 063b1d18 with catch @ 063b1a44
                       catch() { ... } // from try @ 063b1d64 with catch @ 063b1a44 */
  if ((DAT_0825c6ce & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db70b8);
    DAT_0825c6ce = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *(long *)puVar1;
  }
  plVar3 = *(long **)(lVar2 + 0xb8);
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    if (1 < *(uint *)(lVar4 + 0x18)) {
      if (param_2 <= *(byte *)(lVar4 + 0x21)) {
        return 1;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar2 = *(long *)puVar1;
        plVar3 = *(long **)(lVar2 + 0xb8);
      }
      lVar4 = plVar3[1];
      if (lVar4 == 0) goto LAB_063b1c08;
      if (*(int *)(lVar4 + 0x18) != 0) {
        if (*(byte *)(lVar4 + 0x20) <= param_2) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar2 = *(long *)puVar1;
            plVar3 = *(long **)(lVar2 + 0xb8);
          }
          lVar4 = plVar3[1];
          if (lVar4 == 0) goto LAB_063b1c08;
          if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_063b1c0c;
          if (param_2 <= *(byte *)(lVar4 + 0x21)) {
            return 2;
          }
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar2 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if (lVar4 == 0) goto LAB_063b1c08;
        if (*(int *)(lVar4 + 0x18) != 0) {
          if (*(byte *)(lVar4 + 0x20) <= param_2) {
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar2 = *(long *)puVar1;
              lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
              if (lVar4 == 0) goto LAB_063b1c08;
            }
            if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_063b1c0c;
            if (param_2 <= *(byte *)(lVar4 + 0x21)) {
              return 3;
            }
          }
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar2 = *(long *)puVar1;
          }
          lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
          if (lVar4 == 0) goto LAB_063b1c08;
          if (*(int *)(lVar4 + 0x18) != 0) {
            if (*(byte *)(lVar4 + 0x20) <= param_2) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                if (lVar4 == 0) goto LAB_063b1c08;
              }
              if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_063b1c0c;
              if (param_2 <= *(byte *)(lVar4 + 0x21)) {
                return 4;
              }
            }
            return 0;
          }
        }
      }
    }
LAB_063b1c0c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_063b1c08:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


