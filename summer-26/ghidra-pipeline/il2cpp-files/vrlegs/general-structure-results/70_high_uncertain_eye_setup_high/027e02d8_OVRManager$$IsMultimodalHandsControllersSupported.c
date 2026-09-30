/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 027e02d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsMultimodalHandsControllersSupported(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x19 != 0) {
    *(uint *)(unaff_x19 + 0x30) = *(uint *)(unaff_x19 + 0x30) | 1;
    plVar1 = *(long **)(unaff_x20 + 0x10);
    if (plVar1 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    }
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar3 = FUN_027df9d8();
      if (lVar3 == 0) goto LAB_027e0390;
      plVar1 = (long *)FUN_0263ef9c(lVar3,0);
      if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)PTR_DAT_03cf2780)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar1);
      }
      *(long *)(unaff_x19 + 0x20) = (long)plVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x20),plVar1);
    }
    return;
  }
LAB_027e0390:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


