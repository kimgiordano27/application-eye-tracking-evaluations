/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01ea0838
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void System_Array__InternalArray__Insert<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long *unaff_x22;
  
  thunk_FUN_01dc4f30();
  uVar1 = FUN_03d749a8();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01ea0a60;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xb0);
    uVar2 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_ResourceRequest_m_Type);
    FUN_027586d8();
    if (lVar3 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar3,uVar2,
                 *(undefined8 *)Field_System_Reflection_RuntimeAssembly_resolve_event_holder);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_01ea0a60;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xb8);
    uVar2 = thunk_FUN_01de27b8(*(undefined8 *)Field_UnityEngine_UIElements_RuleMatcher_sheet);
    FUN_027586d8();
    if (lVar3 == 0) goto LAB_01ea0a60;
    FUN_0275ab9c(lVar3,uVar2,
                 *(undefined8 *)Field_UnityEngine_UIElements_StyleSheets_ScalableImage_normalImage);
  }
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


