/*
FUNCTION_NAME: FUN_03557a08
ENTRY_POINT: 03557a08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03557a08(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0412df21 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d02a20);
    FUN_01ab69ac(OVRPlugin_OVRP_1_6_0_TypeInfo);
    DAT_0412df21 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    local_34 = param_2;
    uVar1 = FUN_0219c130(*(long *)(param_1 + 0x20),&local_34,
                         *(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (local_28 = param_2,
        FUN_0219b9a4(*(long *)(param_1 + 0x20),&local_28,param_3,
                     *(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo), param_3 != 0)) &&
       (*(long *)(param_1 + 0x10) != 0)) {
      local_24 = param_2;
      FUN_0219b9a4(*(long *)(param_1 + 0x10),&local_24,*(undefined8 *)(param_3 + 0x20),
                   *(undefined8 *)PTR_DAT_03d02a20);
      if (*(int *)(param_3 + 0x1c) != 0) {
        return;
      }
      *(undefined4 *)(param_3 + 0x1c) = param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


