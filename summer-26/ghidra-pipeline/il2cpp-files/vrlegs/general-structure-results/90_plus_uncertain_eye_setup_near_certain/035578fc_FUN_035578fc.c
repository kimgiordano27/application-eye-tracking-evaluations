/*
FUNCTION_NAME: FUN_035578fc
ENTRY_POINT: 035578fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_035578fc(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0412df20 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d02a20);
    FUN_01ab69ac(OVRPlugin_OVRP_1_68_0_TypeInfo);
    DAT_0412df20 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    local_2c = *(undefined4 *)(param_2 + 0x1c);
    uVar1 = FUN_0219c130(*(long *)(param_1 + 0x18),&local_2c,
                         *(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      local_28 = *(undefined4 *)(param_2 + 0x1c);
      FUN_0219b9a4(*(long *)(param_1 + 0x18),&local_28,param_2,
                   *(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo);
      if (*(long *)(param_1 + 0x10) != 0) {
        local_24 = *(undefined4 *)(param_2 + 0x28);
        FUN_0219b9a4(*(long *)(param_1 + 0x10),&local_24,*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)PTR_DAT_03d02a20);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


