/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 027e02c8
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


long OVRManager__PassthroughInitializedOrPending(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = thunk_FUN_01a89e68();
  FUN_027b3d9c(lVar1,0);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 1;
    plVar2 = *(long **)(unaff_x20 + 0x10);
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    }
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar4 = FUN_027df9d8();
      if (lVar4 == 0) goto LAB_027e0390;
      plVar2 = (long *)FUN_0263ef9c(lVar4,0);
      if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_03cf2780)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar2);
      }
      *(long *)(lVar1 + 0x20) = (long)plVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar1 + 0x20),plVar2);
    }
    return lVar1;
  }
LAB_027e0390:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


