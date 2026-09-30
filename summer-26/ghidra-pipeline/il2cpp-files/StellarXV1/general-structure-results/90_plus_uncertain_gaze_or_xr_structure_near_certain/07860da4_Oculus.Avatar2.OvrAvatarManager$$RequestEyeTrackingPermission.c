/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$RequestEyeTrackingPermission
ENTRY_POINT: 07860da4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Avatar2_OvrAvatarManager__RequestEyeTrackingPermission
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_074d875c(param_1,param_2,0);
  FUN_03b089e0();
  FUN_03b08cc0();
  uVar1 = thunk_FUN_040dedf8(PTR_DAT_092e6000);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  plVar2 = (long *)FUN_0768890c(uVar1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
  FUN_03b089e0();
  FUN_03b08cc0();
  uVar1 = FUN_074e752c();
  thunk_FUN_040dedf8(PTR_DAT_092bbaa8);
  uVar3 = thunk_FUN_040b4efc();
  FUN_0787a7f0(uVar3,uVar1);
  uVar1 = thunk_FUN_040dedf8(PTR_DAT_092e6008);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar3,uVar1);
}


