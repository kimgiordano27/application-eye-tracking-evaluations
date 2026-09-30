/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayFrequency2
ENTRY_POINT: 07a67fb4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a68090) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayFrequency2(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  char cStack000000000000001c;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092f0d40);
  FUN_04077588(PTR_DAT_092f0df8);
  *(undefined1 *)(unaff_x20 + 0x5d2) = 1;
  cStack000000000000001c = '\0';
  FUN_076e7928();
  iVar1 = *(int *)(unaff_x19 + 0x38);
  if (iVar1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_092f0d40 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar1 = FUN_07a66758(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0897e8f4(*(undefined8 *)PTR_DAT_092f0df8,0);
    }
  }
  if (cStack000000000000001c != '\0') {
    thunk_FUN_0408541c(unaff_x19,0);
  }
  return;
}


