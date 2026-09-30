/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01ea08c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_BodyJointLocation>(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  FUN_027586d8();
  if (unaff_x20 == 0) goto LAB_01ea0a60;
  FUN_0275ab9c();
                    /* try { // try from 01ea08f8 to 01fa091b has its CatchHandler @ 01ea091c */
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d749a8(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01ea0a60;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0xe0);
    uVar2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_95);
    FUN_027586d8();
    if (lVar3 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar3,uVar2,*(undefined8 *)StringLiteral_96);
  }
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
LAB_01ea0a60:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


