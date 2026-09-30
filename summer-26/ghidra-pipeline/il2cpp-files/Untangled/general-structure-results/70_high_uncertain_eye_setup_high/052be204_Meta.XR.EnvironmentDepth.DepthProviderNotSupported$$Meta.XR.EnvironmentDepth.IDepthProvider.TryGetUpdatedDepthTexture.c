/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture
ENTRY_POINT: 052be204
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = FUN_066c67b0();
  if ((unaff_x19 != 0) && (lVar1 != 0)) {
    FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x14),
                 *(undefined4 *)(unaff_x19 + 0x18),lVar1,0);
    lVar1 = FUN_066c67b0();
    if (lVar1 != 0) {
      uVar2 = FUN_066d4bec(*(undefined4 *)(unaff_x19 + 0x1c),*(undefined4 *)(unaff_x19 + 0x20),
                           *(undefined4 *)(unaff_x19 + 0x24),*(undefined4 *)(unaff_x19 + 0x28),lVar1
                           ,0);
      uVar2 = FUN_052c396c(uVar2,*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x19 + 0x30)
                          );
      uVar2 = FUN_052c396c(uVar2,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x19 + 0x38)
                          );
      uVar2 = FUN_052c396c(uVar2,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x19 + 0x40)
                          );
      uVar2 = FUN_052c396c(uVar2,*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x19 + 0x48)
                          );
      FUN_052c396c(uVar2,*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x19 + 0x50));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


