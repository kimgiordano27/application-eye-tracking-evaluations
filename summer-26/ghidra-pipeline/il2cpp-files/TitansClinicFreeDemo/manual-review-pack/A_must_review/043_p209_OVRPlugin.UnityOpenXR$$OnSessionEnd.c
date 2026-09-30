/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 01f9406c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w20;
  long *unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  uint unaff_w29;
  
  FUN_01230af8();
  lVar1 = thunk_FUN_01f894b8();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_0124baac(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,0);
  }
  if (unaff_w20 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_01286abc(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
    *unaff_x28 = unaff_x22;
    thunk_FUN_01286abc();
    if (unaff_w29 < *(uint *)(unaff_x24 + 0x18)) {
      return *unaff_x26;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


