/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 07cae958
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0a526abf & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
    DAT_0a526abf = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_07caea0c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar1 = FUN_094ad620(*(long *)(param_1 + 0x20),0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar3 = *(long *)(param_1 + 0x40);
        FUN_094accac(*(long *)(param_1 + 0x20),0);
        if (lVar3 != 0) {
          uVar2 = FUN_07caea10(lVar3);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_07cad454(*(long *)(param_1 + 0x30),uVar2);
            return;
          }
        }
      }
      goto LAB_07caea0c;
    }
  }
  return;
}


