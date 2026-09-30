/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetPixelFromWorldPosition
ENTRY_POINT: 08a6dc1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetPixelFromWorldPosition(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x5da) = 1;
  if ((*(long *)(unaff_x19 + 0xe8) != 0) && (0 < *(int *)(*(long *)(unaff_x19 + 0xe8) + 0x18))) {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x20;
    }
    unaff_w21 = *(uint *)(*(long *)(lVar1 + 0xb8) + 0x20) | unaff_w21;
  }
  if ((DAT_0b32c5db & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac540c0);
    DAT_0b32c5db = 1;
  }
  if ((*(long *)(unaff_x19 + 0xf0) != 0) && (0 < *(int *)(*(long *)(unaff_x19 + 0xf0) + 0x18))) {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x20;
    }
    unaff_w21 = *(uint *)(*(long *)(lVar1 + 0xb8) + 0x28) | unaff_w21;
  }
  if ((DAT_0b32c5dc & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac540c8);
    DAT_0b32c5dc = 1;
  }
  if ((*(long *)(unaff_x19 + 0xf8) != 0) && (0 < *(int *)(*(long *)(unaff_x19 + 0xf8) + 0x18))) {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x20;
    }
    unaff_w21 = *(uint *)(*(long *)(lVar1 + 0xb8) + 0x2c) | unaff_w21;
  }
  if ((DAT_0b32c5d9 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac540d0);
    DAT_0b32c5d9 = 1;
  }
  if ((*(long *)(unaff_x19 + 0xe0) != 0) && (0 < *(int *)(*(long *)(unaff_x19 + 0xe0) + 0x18))) {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x20;
    }
    unaff_w21 = *(uint *)(*(long *)(lVar1 + 0xb8) + 0x24) | unaff_w21;
  }
  *(uint *)(unaff_x19 + 0x58) = unaff_w21;
  return;
}


