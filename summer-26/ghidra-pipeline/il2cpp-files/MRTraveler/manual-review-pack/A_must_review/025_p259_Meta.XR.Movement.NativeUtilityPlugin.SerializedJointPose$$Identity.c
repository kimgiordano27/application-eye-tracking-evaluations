/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.SerializedJointPose$$Identity
ENTRY_POINT: 06dadce0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06dadc40) */

int Meta_XR_Movement_NativeUtilityPlugin_SerializedJointPose__Identity(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w27;
  int unaff_w29;
  undefined4 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar3 = thunk_FUN_03ce5214(*(undefined8 *)(param_1 + 0xb40));
  uVar4 = thunk_FUN_03ce0d60(uVar3,*(undefined8 *)*unaff_x24);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *unaff_x24;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_088de0a8,0);
  }
  __cxa_end_catch();
  plVar5 = *(long **)(unaff_x23 + 0x60);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  *(undefined8 *)(unaff_x23 + 0x58) = uVar3;
  iVar2 = *(int *)(unaff_x22 + 0x20);
  if (*(int *)(unaff_x22 + 0x20) < unaff_w27) {
    *(int *)(unaff_x22 + 0x20) = unaff_w27;
    iVar2 = unaff_w27;
  }
  if (iVar2 < unaff_w29) {
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_071016f0(0,iVar2 - unaff_w19,0);
    *in_stack_00000000 = uVar1;
  }
  else {
    lVar7 = *unaff_x25;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (iVar2 < *(int *)(lVar7 + 0x18)) {
      plVar5 = *(long **)(unaff_x23 + 0x60);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      iVar2 = (**(code **)(*plVar5 + 0x358))
                        (plVar5,lVar7,iVar2,*(int *)(lVar7 + 0x18) - iVar2,
                         *(undefined8 *)(*plVar5 + 0x360));
      *(int *)(unaff_x22 + 0x20) = *(int *)(unaff_x22 + 0x20) + iVar2;
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  return unaff_w19;
}


