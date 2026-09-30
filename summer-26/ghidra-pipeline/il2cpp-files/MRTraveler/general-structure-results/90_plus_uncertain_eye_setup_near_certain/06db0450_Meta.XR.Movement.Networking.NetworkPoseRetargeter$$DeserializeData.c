/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeter$$DeserializeData
ENTRY_POINT: 06db0450
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_Networking_NetworkPoseRetargeter__DeserializeData(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e7e268);
    FUN_03c8f898(PTR_DAT_08e90048);
    *(undefined1 *)(unaff_x20 + 0xb7c) = 1;
  }
  uVar1 = (**(code **)(*unaff_x19 + 0x338))();
  if ((uVar1 & 1) == 0) {
    plVar2 = unaff_x19 + 0x11;
    *(undefined1 *)(unaff_x19 + 8) = 1;
    *(undefined4 *)(unaff_x19 + 4) = unaff_w21;
    if (*plVar2 != 0) {
      FUN_085e03cc();
      unaff_x19[0x11] = 0;
      thunk_FUN_03d233cc(plVar2,0);
    }
    FUN_06db0578();
    lVar4 = FUN_085e0160();
    unaff_x19[0x11] = lVar4;
    thunk_FUN_03d233cc(plVar2,lVar4);
    return;
  }
  plVar2 = (long *)thunk_FUN_03d12a58();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
  }
  FUN_06dfde6c(uVar3,*(undefined8 *)PTR_DAT_08e90048,0,0);
  lVar4 = unaff_x19[10];
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06db0500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}


