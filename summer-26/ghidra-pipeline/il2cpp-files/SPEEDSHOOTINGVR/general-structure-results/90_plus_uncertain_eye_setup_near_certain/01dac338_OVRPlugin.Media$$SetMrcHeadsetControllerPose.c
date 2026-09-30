/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 01dac338
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int unaff_w19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000010;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000008;
    thunk_FUN_0106e12c(unaff_x20 + 0x60,0);
    puVar1 = PTR_DAT_0235a1d0;
    if (unaff_w19 == -1) {
      return;
    }
    lVar2 = *(long *)PTR_DAT_0235a1d0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar2 = *(long *)puVar1;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar4 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02351f50);
      FUN_01da9ba8(lVar4,uVar5,*(undefined8 *)PTR_DAT_0235a1c8);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar4;
      thunk_FUN_0106e12c(plVar3,lVar4);
    }
    lVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02351f60);
    FUN_01d912d0(lVar2,0);
    FUN_01db5040(lVar2,lVar4);
    if (unaff_x20 != 0) {
      plVar3 = (long *)(unaff_x20 + 0x78);
      *plVar3 = lVar2;
      thunk_FUN_0106e12c(plVar3,lVar2);
      if (*plVar3 != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


