/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 02c4f7c0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics
               (ulong param_1,long *param_2,undefined8 param_3,int param_4,undefined8 param_5,
               int param_6,uint param_7)

{
  undefined *puVar1;
  long *unaff_x25;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_038009e8);
    FUN_017fc350(PTR_DAT_038009f0);
    FUN_017fc350(PTR_DAT_038009f8);
    FUN_017fc350(PTR_DAT_03800480);
    *(undefined1 *)(unaff_x26 + 0x121) = 1;
  }
  puVar1 = PTR_DAT_038009f0;
  if (*(long *)(*unaff_x25 + 0x38) == 0) {
    FUN_0185db00();
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0185db00();
  }
  if (param_4 == 0) {
    param_3 = 1;
  }
  if (param_6 == 0) {
    param_5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x02c4f878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1d8))
            (param_2,param_3,param_4,param_5,param_6,param_7 & 1,*(undefined8 *)(*param_2 + 0x1e0));
  return;
}


