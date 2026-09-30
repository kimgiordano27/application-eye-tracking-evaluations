/*
FUNCTION_NAME: FUN_05507c34
ENTRY_POINT: 05507c34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05507c34(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((DAT_06bbf571 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo);
    DAT_06bbf571 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_0_1_0_TypeInfo)) {
      lVar5 = FUN_054d669c(param_2,0);
      if (lVar5 == 0) {
LAB_05507d64:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar4 = FUN_040bc85c(lVar5,*(undefined8 *)
                                  OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
      puVar3 = OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo;
      puVar2 = OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo;
      if (0 < iVar4) {
        iVar7 = 0;
        do {
          lVar5 = FUN_054d669c(param_2,0);
          if (lVar5 == 0) goto LAB_05507d64;
          plVar6 = (long *)FUN_040bc8e8(lVar5,iVar7,*(undefined8 *)puVar2);
          if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)puVar3)) {
            FUN_055063a8(param_1,plVar6[2]);
          }
          iVar7 = iVar7 + 1;
        } while (iVar4 != iVar7);
      }
    }
  }
  return;
}


