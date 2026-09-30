/*
FUNCTION_NAME: VoxelBusters.EssentialKit.AddressBookCore.Android.NativeAddressBook$$RequestPermission
ENTRY_POINT: 03ed6e1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_AddressBookCore_Android_NativeAddressBook__RequestPermission
               (long param_1,undefined8 param_2,long param_3)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  uint in_w10;
  
  if ((in_w9 <= in_w10) &&
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) == param_3
     )) {
    FUN_03ed6e60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


