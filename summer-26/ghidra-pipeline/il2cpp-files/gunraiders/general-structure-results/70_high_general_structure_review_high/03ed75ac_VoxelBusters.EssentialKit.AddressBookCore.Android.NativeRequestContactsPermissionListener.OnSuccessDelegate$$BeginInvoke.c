/*
FUNCTION_NAME: VoxelBusters.EssentialKit.AddressBookCore.Android.NativeRequestContactsPermissionListener.OnSuccessDelegate$$BeginInvoke
ENTRY_POINT: 03ed75ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_OnSuccessDelegate__BeginInvoke
               (long param_1)

{
  long *unaff_x19;
  long *unaff_x21;
  
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
       *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8);
  if (DAT_04542ae1 == '\0') {
    FUN_01c5d288();
    param_1 = *unaff_x19;
    DAT_04542ae1 = '\x01';
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    param_1 = *unaff_x19;
  }
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28) = **(undefined8 **)(param_1 + 0xb8);
  return;
}


