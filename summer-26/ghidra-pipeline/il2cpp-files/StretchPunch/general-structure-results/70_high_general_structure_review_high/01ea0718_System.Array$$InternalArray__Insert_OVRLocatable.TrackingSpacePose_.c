/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 01ea0718
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__InternalArray__Insert<OVRLocatable_TrackingSpacePose>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_92);
                    /* try { // try from 01ea0730 to 01fa073f has its CatchHandler @ 01ea0754 */
  FUN_01d7d918(StringLiteral_93);
  FUN_01d7d918(StringLiteral_94);
                    /* try { // try from 01ea0740 to 01fa0743 has its CatchHandler @ 01ea0748 */
                    /* catch(type#1 @ 041f8020) { ... } // from try @ 01ea0740 with catch @ 01ea0748
                        */
  FUN_01d7d918(Field_TMPro_FloatTween_m_Target);
                    /* catch(type#1 @ 041f8020) { ... } // from try @ 01ea0730 with catch @ 01ea0754
                        */
  FUN_01d7d918(
              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              );
                    /* try { // try from 01ea075c to 01fa075f has its CatchHandler @ 01ea07d8 */
  FUN_01d7d918(Field_UnityEngine_ResourceRequest_m_Type);
  FUN_01d7d918(Field_UnityEngine_UIElements_RuleMatcher_sheet);
  FUN_01d7d918(StringLiteral_95);
  FUN_01d7d918(Field_System_Reflection_RuntimeAssembly_resolve_event_holder);
  FUN_01d7d918(Field_UnityEngine_UIElements_StyleSheets_ScalableImage_normalImage);
  FUN_01d7d918(StringLiteral_96);
  *(undefined1 *)(unaff_x20 + 0xe14) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d749a8(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01ea0a60;
    lVar2 = FUN_020914e4(*(long *)(unaff_x19 + 0x20),*(undefined8 *)Field_TMPro_FloatTween_m_Target)
    ;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x22);
    }
    uVar1 = FUN_03d749a8(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_01ea0a60;
      FUN_03dc2320(lVar2,1,0);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d749a8(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01ea0a60;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xb0);
    uVar3 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_ResourceRequest_m_Type);
    FUN_027586d8();
    if (lVar2 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar2,uVar3,
                 *(undefined8 *)Field_System_Reflection_RuntimeAssembly_resolve_event_holder);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01ea0a60;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xb8);
    uVar3 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_UIElements_RuleMatcher_sheet);
    FUN_027586d8();
    if (lVar2 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar2,uVar3,
                 *(undefined8 *)Field_UnityEngine_UIElements_StyleSheets_ScalableImage_normalImage);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d749a8(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01ea0a60;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0xe0);
    uVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_95);
    FUN_027586d8();
    if (lVar2 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar2,uVar3,*(undefined8 *)StringLiteral_96);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d749a8(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0xe0);
    uVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_95);
    FUN_027586d8();
    if (lVar2 != 0) {
      FUN_0275ab9c(lVar2,uVar3,*(undefined8 *)StringLiteral_96);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0xb8);
        uVar3 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_UIElements_RuleMatcher_sheet);
        FUN_027586d8();
        if (lVar2 != 0) {
          FUN_0275ab9c(lVar2,uVar3,
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


