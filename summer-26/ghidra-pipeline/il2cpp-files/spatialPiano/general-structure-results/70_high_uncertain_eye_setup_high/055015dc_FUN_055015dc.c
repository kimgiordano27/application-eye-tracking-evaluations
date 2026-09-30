/*
FUNCTION_NAME: FUN_055015dc
ENTRY_POINT: 055015dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_055015dc(undefined8 param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_06bbf555 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo);
    DAT_06bbf555 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_0_TypeInfo + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_0_1_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    iVar2 = (**(code **)(lVar6 + 0x1e8))(param_2,*(undefined8 *)(lVar6 + 0x1f0));
    if (iVar2 == 0) {
      return;
    }
    uVar3 = FUN_0550171c(param_1,param_2);
    lVar6 = FUN_054d669c(param_2,0);
    lVar4 = FUN_054d669c(param_2,0);
    if ((lVar4 != 0) &&
       (iVar2 = FUN_040bc85c(lVar4,*(undefined8 *)
                                    OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo),
       lVar6 != 0)) {
      uVar5 = FUN_040bc8e8(lVar6,iVar2 + -1,
                           *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo);
      if ((param_3 & 1) == 0) {
        FUN_05500c08(param_1,uVar5);
      }
      else {
        FUN_05501c04();
      }
      FUN_05501b68(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


