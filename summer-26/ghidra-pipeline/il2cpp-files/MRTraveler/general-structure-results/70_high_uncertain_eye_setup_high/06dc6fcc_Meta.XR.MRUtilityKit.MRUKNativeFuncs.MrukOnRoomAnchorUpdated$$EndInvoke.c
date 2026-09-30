/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$EndInvoke
ENTRY_POINT: 06dc6fcc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__EndInvoke(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x21;
  
  uVar1 = FUN_045e0f40();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x21);
  }
  uVar2 = FUN_085e285c(uVar1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_085dbb98();
    if (lVar3 == 0) goto LAB_06dc7098;
    FUN_0469cb0c(lVar3,*(undefined8 *)PTR_DAT_08e90cf8);
  }
  uVar1 = FUN_045e0f40();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x21);
  }
  uVar2 = FUN_085e285c(uVar1,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = FUN_085dbb98();
  if (lVar3 != 0) {
    FUN_0469cb0c(lVar3,*(undefined8 *)PTR_DAT_08e90d00);
    return;
  }
LAB_06dc7098:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


