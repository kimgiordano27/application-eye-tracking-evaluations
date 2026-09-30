/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 0566a7c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0566a8dc) */

void OVRPlugin__set_occlusionMesh(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000068;
  long *in_stack_000000a8;
  
  if (((param_1 & 1) != 0) && (uVar1 = FUN_0566cc78(), (uVar1 & 1) != 0)) {
    if (*(int *)(unaff_x19 + 0x200) == in_stack_00000068._4_4_) {
      if (*(int *)(unaff_x19 + 0x208) == in_stack_00000040._4_4_) {
        FUN_0566cef0();
        FUN_0566d300();
      }
      else if ((*(int *)(unaff_x19 + 0x214) != in_stack_00000040._4_4_) &&
              (*(char *)(unaff_x19 + 0x20) == '\0')) {
        OVRPlugin__GetTrackingTransformRawPose();
      }
    }
    else if ((*(int *)(unaff_x19 + 0x20c) != in_stack_00000068._4_4_) &&
            (*(char *)(unaff_x19 + 0x20) == '\0')) {
      FUN_0566cd08();
    }
  }
  if (in_stack_000000a8 != (long *)0x0) {
    lVar3 = *in_stack_000000a8;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0566a8b8;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_000000a8,*(long *)PTR_DAT_069fbff0,0);
LAB_0566a8b8:
    (*(code *)*puVar2)(in_stack_000000a8,puVar2[1]);
  }
  return;
}


