/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetBestPoseFromRaycastDebugger>b__81_1
ENTRY_POINT: 06dd0e34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetBestPoseFromRaycastDebugger>b__81_1(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_03cf1244();
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a88);
  FUN_06e40ce0(lVar2,uVar4,0);
  puVar1 = PTR_DAT_08e7a650;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x48) != -1) {
      lVar5 = *(long *)(lVar2 + 0x20);
      uVar4 = FUN_070fde54((int *)(lVar2 + 0x48),0);
      if (lVar5 == 0) goto LAB_06dd0f20;
      FUN_06a4e36c(lVar5,*(undefined8 *)PTR_DAT_08e91180,uVar4,*(undefined8 *)puVar1);
    }
    if (unaff_x20 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar3 = FUN_06f74e14(uVar4,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(lVar2 + 0x20) == 0) goto LAB_06dd0f20;
        FUN_06a4e36c(*(long *)(lVar2 + 0x20),*(undefined8 *)PTR_DAT_08e91188,uVar4,
                     *(undefined8 *)puVar1);
      }
      FUN_06dcfea0(lVar2);
      return lVar2;
    }
  }
LAB_06dd0f20:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


