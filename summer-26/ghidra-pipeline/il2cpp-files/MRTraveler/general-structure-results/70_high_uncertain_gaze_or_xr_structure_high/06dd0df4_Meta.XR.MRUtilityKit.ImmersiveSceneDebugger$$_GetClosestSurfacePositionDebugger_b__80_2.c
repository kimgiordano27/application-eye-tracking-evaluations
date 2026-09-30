/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__80_2
ENTRY_POINT: 06dd0df4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__80_2
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x188));
  *(undefined1 *)(unaff_x22 + 0xc9c) = 1;
  if (unaff_x21 == 0) {
    lVar4 = *(long *)PTR_DAT_08e90a70;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_03cf12a0(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    unaff_x21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a88);
    FUN_06e40ce0(unaff_x21,uVar5,0);
    if (unaff_x21 == 0) goto LAB_06dd0f20;
  }
  puVar1 = PTR_DAT_08e7a650;
  if (*(int *)(unaff_x21 + 0x48) != -1) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    uVar5 = FUN_070fde54((int *)(unaff_x21 + 0x48),0);
    if (lVar3 == 0) goto LAB_06dd0f20;
    FUN_06a4e36c(lVar3,*(undefined8 *)PTR_DAT_08e91180,uVar5,*(undefined8 *)puVar1);
  }
  if (unaff_x20 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = FUN_06f74e14(uVar5,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_06dd0f20;
      FUN_06a4e36c(*(long *)(unaff_x21 + 0x20),*(undefined8 *)PTR_DAT_08e91188,uVar5,
                   *(undefined8 *)puVar1);
    }
    FUN_06dcfea0(unaff_x21);
    return unaff_x21;
  }
LAB_06dd0f20:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


