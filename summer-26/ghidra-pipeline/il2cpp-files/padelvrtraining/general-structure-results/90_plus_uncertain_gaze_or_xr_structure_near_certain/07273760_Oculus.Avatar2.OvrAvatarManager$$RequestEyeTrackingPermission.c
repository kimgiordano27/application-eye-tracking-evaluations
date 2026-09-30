/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$RequestEyeTrackingPermission
ENTRY_POINT: 07273760
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Oculus_Avatar2_OvrAvatarManager__RequestEyeTrackingPermission(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_09203838);
  FUN_03d2d2b0(PTR_DAT_09203840);
  *(undefined1 *)(unaff_x21 + 0xa66) = 1;
  uVar2 = thunk_FUN_03d2ef40(*unaff_x22);
  System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar2,*unaff_x20);
  puVar1 = PTR_DAT_09217a48;
  if (unaff_x19 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x19 + 0x898))();
    FUN_04ebec4c(uVar2,uVar3,*(undefined8 *)puVar1);
    uVar3 = (**(code **)(*unaff_x19 + 0x708))();
    FUN_04ebec4c(uVar2,uVar3,*(undefined8 *)puVar1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


