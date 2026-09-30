/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 074a18d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceCreate(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f94d8);
    FUN_03d2d2b0(PTR_DAT_091a1120);
    FUN_03d2d2b0(PTR_DAT_09223d50);
    FUN_03d2d2b0(PTR_DAT_09223d58);
    *(undefined1 *)(unaff_x20 + 0xba3) = 1;
  }
  puVar1 = PTR_DAT_091f94d8;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_08a106ac(*(undefined8 *)PTR_DAT_09223d58,0);
      return;
    }
    lVar2 = *(long *)PTR_DAT_091f94d8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_06c4f680(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_2 + 0x18),param_2,
                   *(undefined8 *)PTR_DAT_09223d50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


