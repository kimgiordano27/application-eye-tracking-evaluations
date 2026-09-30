/*
FUNCTION_NAME: UniGLTF.BuiltInStandardMaterialExporter$$ExportMainTextureTransform
ENTRY_POINT: 02f8604c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f86108) */

undefined4 UniGLTF_BuiltInStandardMaterialExporter__ExportMainTextureTransform(void)

{
  int in_w8;
  undefined4 uVar1;
  long unaff_x20;
  long *plVar2;
  long *plVar3;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    plVar3 = (long *)(unaff_x20 + 0x38);
    plVar2 = (long *)(unaff_x20 + 0x40);
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(long *)(*plVar3 + 0x40) = *plVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(long *)(*plVar2 + 0x38) = *plVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *plVar3 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,0);
    *plVar2 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x20 + 0x20),0);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x20 + 0x28),0);
    *(undefined4 *)(unaff_x20 + 0x18) = 2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar1;
}


