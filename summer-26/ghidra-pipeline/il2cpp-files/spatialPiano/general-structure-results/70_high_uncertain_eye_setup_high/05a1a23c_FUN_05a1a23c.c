/*
FUNCTION_NAME: FUN_05a1a23c
ENTRY_POINT: 05a1a23c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a1a23c(long param_1,int *param_2,int param_3,long param_4,ulong param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if ((DAT_06bc206a & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc206a = 1;
  }
  iVar5 = 8;
  if ((param_5 & 1) != 0) {
    iVar5 = 9;
  }
  iVar2 = (param_6 << 0x10) >> 0x18;
  if (param_4 != 0) {
    iVar5 = 3;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if ((0 < iVar2) && (iVar6 = iVar2 - iVar5, iVar6 != 0 && iVar5 <= iVar2)) {
    do {
      iVar1 = *param_2;
      if (param_3 <= iVar1) {
        return;
      }
      iVar6 = iVar6 + -1;
      *param_2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + param_1) = 0x20;
    } while (iVar6 != 0);
  }
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      iVar6 = *param_2;
      if (param_3 <= iVar6) {
        return;
      }
      *param_2 = iVar6 + 1;
      *(undefined1 *)(iVar6 + param_1) = 0x2d;
    }
    uVar7 = 0;
    do {
      iVar6 = *param_2;
      if (param_3 <= iVar6) {
        return;
      }
      lVar4 = *(long *)puVar3;
      *param_2 = iVar6 + 1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 == 0) goto LAB_05a1a424;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_05a1a428;
      lVar4 = lVar4 + uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(param_1 + iVar6) = *(undefined1 *)(lVar4 + 0x20);
    } while (uVar7 != 8);
  }
  else {
    uVar7 = 0;
    do {
      iVar6 = *param_2;
      if (param_3 <= iVar6) {
        return;
      }
      lVar4 = *(long *)puVar3;
      *param_2 = iVar6 + 1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
      if (lVar4 == 0) {
LAB_05a1a424:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_05a1a428:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar4 = lVar4 + uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(iVar6 + param_1) = *(undefined1 *)(lVar4 + 0x20);
    } while (uVar7 != 3);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a162a0(param_1,param_2,param_3,iVar2,iVar5);
  return;
}


