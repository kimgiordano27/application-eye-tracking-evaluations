/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetSystemProductName
ENTRY_POINT: 02813658
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if (5 < *(uint *)(unaff_x21 + -0x28)) {
    *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x48));
    uVar2 = FUN_01ab6a94(*unaff_x22,10);
    FUN_0267b194(uVar2,*unaff_x23,0);
    puVar1 = PTR_DAT_03cfe3d0;
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x50),uVar2);
      uVar2 = FUN_01ab6a94(*unaff_x22,10);
      FUN_0267b194(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_03cfdb78;
      if (7 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x19 + 0x58),uVar2);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = unaff_x19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar2 = FUN_02813164();
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


