/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01ea0958
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_BoneCapsule>(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  if (unaff_x20 != 0) {
    FUN_0275ab9c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar1 = FUN_03d749a8(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0xe0);
      uVar2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_95);
      FUN_027586d8();
      if (lVar3 != 0) {
        FUN_0275ab9c(lVar3,uVar2,*(undefined8 *)StringLiteral_96);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0xb8);
          uVar2 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_UIElements_RuleMatcher_sheet);
          FUN_027586d8();
          if (lVar3 != 0) {
            FUN_0275ab9c(lVar3,uVar2,
                         *(undefined8 *)
                          Field_UnityEngine_UIElements_StyleSheets_ScalableImage_normalImage);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


