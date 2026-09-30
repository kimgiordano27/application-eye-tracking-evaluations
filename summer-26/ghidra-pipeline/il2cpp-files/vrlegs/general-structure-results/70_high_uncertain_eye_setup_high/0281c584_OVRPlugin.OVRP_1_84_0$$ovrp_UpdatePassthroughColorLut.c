/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 0281c584
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  if (unaff_x20 != (long *)0x0) {
    auVar3 = (**(code **)(*unaff_x20 + 0x168))();
    param_2 = auVar3._8_8_;
    param_3 = 0;
    if (auVar3._0_8_ != 0) goto LAB_0281c5b4;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cda080,param_2,param_3);
LAB_0281c5b4:
  uVar1 = FUN_0282f9d0(param_1);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar2 = thunk_FUN_01a89e68();
  FUN_026b274c(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cfe6b8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar1);
}


