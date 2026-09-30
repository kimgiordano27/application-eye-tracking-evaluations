/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 05681db0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05681e14) */
/* WARNING: Removing unreachable block (ram,0x05681e20) */
/* WARNING: Removing unreachable block (ram,0x05681e28) */
/* WARNING: Removing unreachable block (ram,0x05681e38) */
/* WARNING: Removing unreachable block (ram,0x05681e40) */
/* WARNING: Removing unreachable block (ram,0x05681e44) */
/* WARNING: Removing unreachable block (ram,0x05681e50) */
/* WARNING: Removing unreachable block (ram,0x05681e5c) */
/* WARNING: Removing unreachable block (ram,0x05681e74) */
/* WARNING: Removing unreachable block (ram,0x05681e78) */
/* WARNING: Removing unreachable block (ram,0x05681f20) */
/* WARNING: Removing unreachable block (ram,0x05681f54) */
/* WARNING: Removing unreachable block (ram,0x05681f58) */
/* WARNING: Removing unreachable block (ram,0x05681e90) */
/* WARNING: Removing unreachable block (ram,0x05681f6c) */
/* WARNING: Removing unreachable block (ram,0x05682018) */
/* WARNING: Removing unreachable block (ram,0x0568204c) */
/* WARNING: Removing unreachable block (ram,0x05682050) */
/* WARNING: Removing unreachable block (ram,0x05681f74) */
/* WARNING: Removing unreachable block (ram,0x05682064) */
/* WARNING: Removing unreachable block (ram,0x05682068) */
/* WARNING: Removing unreachable block (ram,0x0568209c) */
/* WARNING: Removing unreachable block (ram,0x056820a0) */
/* WARNING: Removing unreachable block (ram,0x05681f80) */
/* WARNING: Removing unreachable block (ram,0x05681fb4) */
/* WARNING: Removing unreachable block (ram,0x05681fb8) */
/* WARNING: Removing unreachable block (ram,0x05681e9c) */
/* WARNING: Removing unreachable block (ram,0x05681ea8) */
/* WARNING: Removing unreachable block (ram,0x05681eb4) */
/* WARNING: Removing unreachable block (ram,0x05681ebc) */
/* WARNING: Removing unreachable block (ram,0x05682120) */
/* WARNING: Removing unreachable block (ram,0x05681ec8) */
/* WARNING: Removing unreachable block (ram,0x05681fcc) */
/* WARNING: Removing unreachable block (ram,0x05682000) */
/* WARNING: Removing unreachable block (ram,0x05682004) */
/* WARNING: Removing unreachable block (ram,0x05681ed4) */
/* WARNING: Removing unreachable block (ram,0x05681edc) */
/* WARNING: Removing unreachable block (ram,0x05682134) */
/* WARNING: Removing unreachable block (ram,0x05681ef0) */
/* WARNING: Removing unreachable block (ram,0x05682124) */
/* WARNING: Removing unreachable block (ram,0x05681efc) */
/* WARNING: Removing unreachable block (ram,0x05682128) */
/* WARNING: Removing unreachable block (ram,0x05681f00) */
/* WARNING: Removing unreachable block (ram,0x05681f1c) */
/* WARNING: Removing unreachable block (ram,0x056820b0) */
/* WARNING: Removing unreachable block (ram,0x056820bc) */
/* WARNING: Removing unreachable block (ram,0x056820c4) */
/* WARNING: Removing unreachable block (ram,0x056820d0) */
/* WARNING: Removing unreachable block (ram,0x056820ec) */
/* WARNING: Removing unreachable block (ram,0x056820fc) */
/* WARNING: Removing unreachable block (ram,0x05682104) */
/* WARNING: Removing unreachable block (ram,0x05682138) */

void OVRPlugin__StartColocationSessionDiscovery(ulong param_1)

{
  long lVar1;
  undefined4 unaff_w20;
  long *unaff_x25;
  long in_stack_00000000;
  long *in_stack_00000008;
  
  if ((param_1 & 1) != 0) {
    lVar1 = *unaff_x25;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar1 = *unaff_x25;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),unaff_w20);
  }
  if (*in_stack_00000008 != 0) {
    FUN_062feba4(*in_stack_00000008,0);
  }
  if (in_stack_00000000 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


