/*
FUNCTION_NAME: HubModeHelper.<Start>d__27$$System.IDisposable.Dispose
ENTRY_POINT: 02055424
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void HubModeHelper_<Start>d__27__System_IDisposable_Dispose
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  float fVar5;
  
  FUN_01c5d288(System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x1ea) = 1;
  lVar2 = FUN_03d468e8();
  puVar1 = PTR_DAT_0422f9e8;
  if (lVar2 != 0) {
    uVar3 = FUN_02362b68(lVar2,*(undefined8 *)PTR_DAT_042343c8);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03d4dc54(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d046d0(*(undefined8 *)
                    System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,0);
    }
    lVar2 = FUN_03d468ac();
    if (lVar2 != 0) {
      FUN_03d53b84(lVar2,0);
      fVar5 = (float)FUN_03d3e0f0(0);
      param_2 = param_2 * DAT_00b9350c;
      FUN_03d3e718(fVar5 * DAT_00b9350c,param_2,param_3 * DAT_00b9350c,0);
      *(float *)(unaff_x19 + 0x94) = param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


