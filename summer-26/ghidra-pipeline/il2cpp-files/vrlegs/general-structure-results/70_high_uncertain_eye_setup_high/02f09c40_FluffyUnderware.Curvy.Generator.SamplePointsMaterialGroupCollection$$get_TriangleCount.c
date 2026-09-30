/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroupCollection$$get_TriangleCount
ENTRY_POINT: 02f09c40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f09ca8) */
/* WARNING: Removing unreachable block (ram,0x02f09cd4) */

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroupCollection__get_TriangleCount
               (long param_1)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 in_stack_00000008;
  
  lVar2 = **(long **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_01a89e68(**(undefined8 **)(in_x9 + 0x1b8));
  FUN_027ce35c();
  if (lVar2 != 0) {
    FUN_01b5f01c(lVar2,uVar1,*(undefined8 *)PTR_DAT_03d139c0);
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x20 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


