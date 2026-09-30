/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 05166e58
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x23;
  
  uVar1 = FUN_050f1be4(param_1,param_2,0);
  if ((uVar1 & 1) != 0) {
    if (unaff_x23 != 0) {
      uVar2 = FUN_04e9195c();
      FUN_050eb21c(uVar2,0);
LAB_05166e84:
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d900);
      }
      FUN_05169768();
      return;
    }
    goto LAB_05167050;
  }
  uVar1 = FUN_050f1be4();
  if ((uVar1 & 1) != 0) {
    uVar1 = thunk_FUN_04e8bd3c();
    if ((uVar1 & 1) == 0) {
      uVar1 = thunk_FUN_04e8bd3c();
      if (((((uVar1 & 1) != 0) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) != 0)) ||
          (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) != 0)) ||
         (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) != 0)) {
        if ((unaff_x23 != 0) && (FUN_04e9195c(), unaff_x19 != (long *)0x0)) {
          (**(code **)(*unaff_x19 + 0x248))();
          goto LAB_05166e84;
        }
LAB_05167050:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
    else {
      if ((unaff_x23 == 0) || (FUN_04e9195c(), unaff_x19 == (long *)0x0)) goto LAB_05167050;
      (**(code **)(*unaff_x19 + 0x248))();
    }
  }
  FUN_05169ae4();
  return;
}


