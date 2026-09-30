/*
FUNCTION_NAME: FUN_05a17648
ENTRY_POINT: 05a17648
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a17648(long param_1,int *param_2,int param_3,long param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  
  uVar11 = param_6 & 0xff;
  if ((DAT_06bc205a & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205a = 1;
  }
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  iVar7 = *(int *)(param_4 + 8);
  cVar4 = (char)(param_6 >> 8);
  if (((iVar7 == 0) && ((param_6 & 0xff) == 0)) && ((param_6 & 0xff0000) == 0)) {
    uVar11 = 1;
  }
  else if (((param_6 & 0xff) == 0) || (2 < (param_6 & 0xff) - 1)) {
    if (param_5 < 1) {
      param_5 = *(int *)(param_4 + 0xc);
    }
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a1796c(param_4,param_5,iVar7 == 1);
    iVar7 = FUN_05a17a9c(param_4,param_5);
    if ((0 < (int)(param_6 << 0x10) >> 0x18) &&
       (iVar9 = cVar4 - iVar7, iVar9 != 0 && iVar7 <= cVar4)) {
      do {
        iVar8 = *param_2;
        if (param_3 <= iVar8) {
          return;
        }
        iVar9 = iVar9 + -1;
        *param_2 = iVar8 + 1;
        *(undefined1 *)(iVar8 + param_1) = 0x20;
      } while (iVar9 != 0);
    }
    uVar10 = 0x45;
    if ((param_6 & 0xff000000) != 0) {
      uVar10 = 0x65;
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a17bf0(param_1,param_2,param_3,param_4,param_5,uVar10);
    goto LAB_05a17868;
  }
  uVar1 = *(uint *)(param_4 + 0xc);
  uVar5 = param_6 >> 0x10 & 0xff;
  iVar9 = uVar5 - uVar1;
  if (iVar9 == 0 || (int)uVar5 < (int)uVar1) {
    iVar9 = 0;
  }
  if ((int)uVar1 <= (int)(param_6 >> 0x10 & 0xff)) {
    uVar1 = uVar5;
  }
  bVar2 = *(byte *)(param_4 + 0x14);
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar7 = uVar1 + (bVar2 | uVar11 == 2);
  if ((0 < (int)(param_6 << 0x10) >> 0x18) && (iVar8 = cVar4 - iVar7, iVar8 != 0 && iVar7 <= cVar4))
  {
    do {
      iVar3 = *param_2;
      if (param_3 <= iVar3) {
        return;
      }
      iVar8 = iVar8 + -1;
      *param_2 = iVar3 + 1;
      *(undefined1 *)(iVar3 + param_1) = 0x20;
    } while (iVar8 != 0);
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a178cc(param_1,param_2,param_3,param_4,iVar9,uVar11 == 2);
LAB_05a17868:
  FUN_05a162a0(param_1,param_2,param_3,(int)cVar4,iVar7);
  return;
}


