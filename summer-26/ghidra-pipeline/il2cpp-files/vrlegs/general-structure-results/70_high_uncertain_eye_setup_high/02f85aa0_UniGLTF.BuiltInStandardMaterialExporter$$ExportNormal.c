/*
FUNCTION_NAME: UniGLTF.BuiltInStandardMaterialExporter$$ExportNormal
ENTRY_POINT: 02f85aa0
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


/* WARNING: Removing unreachable block (ram,0x02f85b60) */

void UniGLTF_BuiltInStandardMaterialExporter__ExportNormal(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x23;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x40) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x40);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x38) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x21 + 0x20) != 0) {
      *(long *)(*(long *)(unaff_x21 + 0x20) + 0x40) = unaff_x19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      if ((unaff_x23 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03d25118 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02f84c18();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


