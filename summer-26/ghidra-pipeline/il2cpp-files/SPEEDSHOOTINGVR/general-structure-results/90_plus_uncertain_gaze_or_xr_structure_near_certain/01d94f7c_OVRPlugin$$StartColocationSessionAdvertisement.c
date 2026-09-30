/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 01d94f7c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionAdvertisement(undefined8 param_1)

{
  bool in_ZR;
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint in_w8;
  uint uVar4;
  uint in_w9;
  long *unaff_x19;
  long *unaff_x21;
  
  if (in_ZR) {
    in_w9 = in_w8;
  }
  uVar1 = FUN_01cc8510(param_1,0);
  uVar4 = 8;
  if ((uVar1 & 1) == 0) {
    uVar4 = 4;
  }
  if (unaff_x21 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*unaff_x21 + 0x1b8))();
    uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d94fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x638))(plVar2,uVar3,uVar4 | in_w9,*(undefined8 *)(*plVar2 + 0x640));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


