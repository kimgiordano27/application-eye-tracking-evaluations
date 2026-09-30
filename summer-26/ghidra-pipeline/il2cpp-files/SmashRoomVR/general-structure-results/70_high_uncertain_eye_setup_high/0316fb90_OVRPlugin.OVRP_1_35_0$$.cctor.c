/*
FUNCTION_NAME: OVRPlugin.OVRP_1_35_0$$.cctor
ENTRY_POINT: 0316fb90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_35_0___cctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int in_w8;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01ac7298();
    param_1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__)
    ;
    FUN_02fd7524(lVar3,uVar4,*(undefined8 *)PTR_DAT_03d80a50,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_01b4f09c(plVar2,lVar3);
  }
  puVar1 = PTR_DAT_03d80a48;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x78) = lVar3;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x78),lVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_024e94d4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


