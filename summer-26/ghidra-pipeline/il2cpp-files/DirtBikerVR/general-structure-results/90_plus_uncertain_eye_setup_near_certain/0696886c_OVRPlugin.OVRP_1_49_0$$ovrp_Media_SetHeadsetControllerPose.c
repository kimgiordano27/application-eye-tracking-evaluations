/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 0696886c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x23;
  
  *(undefined4 *)(unaff_x19 + 0x148) = 0;
  if (*(long *)(unaff_x19 + 0x150) != 0) {
    FUN_054c57ac(*(long *)(unaff_x19 + 0x150),*(undefined8 *)(unaff_x19 + 0x158),
                 *(undefined8 *)PTR_DAT_084b2ef8);
    lVar1 = *(long *)(unaff_x19 + 0x150);
    if (lVar1 != 0) {
      if (1 < *(int *)(lVar1 + 0x20)) {
        lVar3 = *(long *)(unaff_x19 + 0x160);
        if (lVar3 == 0) goto LAB_0696895c;
        if (*(int *)(lVar3 + 0x34) < *(int *)(lVar3 + 0x30) * *(int *)(lVar1 + 0x20)) {
          lVar1 = FUN_054c593c(lVar1,*(undefined8 *)PTR_DAT_084b2f18);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*unaff_x23);
          }
          uVar2 = FUN_07c9c218(lVar1,0,0);
          if ((uVar2 & 1) != 0) {
            if (lVar1 == 0) goto LAB_0696895c;
            lVar1 = FUN_04561560(lVar1,*(undefined8 *)PTR_DAT_084b6fa0);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x23);
            }
            uVar2 = FUN_07c9c218(lVar1,0,0);
            if ((uVar2 & 1) != 0) {
              if (lVar1 == 0) goto LAB_0696895c;
              *(undefined1 *)(lVar1 + 0x38) = 1;
            }
          }
        }
      }
      return;
    }
  }
LAB_0696895c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


