/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 0693cbcc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_084b6148);
  FUN_03a8a718(PTR_DAT_084b6150);
  FUN_03a8a718(PTR_DAT_084b6158);
  *(undefined1 *)(unaff_x20 + 0xf76) = 1;
  FUN_069370cc();
  puVar2 = (undefined8 *)(unaff_x19 + 0xb0);
  uVar3 = *puVar2;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9e200(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = FUN_04717ed0(*(undefined8 *)PTR_DAT_084b6150,*(undefined8 *)PTR_DAT_084b6148);
    *puVar2 = uVar3;
    thunk_FUN_03afed3c(puVar2,uVar3);
    uVar3 = *puVar2;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_07c9e200(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6158,0);
      return;
    }
  }
  return;
}


