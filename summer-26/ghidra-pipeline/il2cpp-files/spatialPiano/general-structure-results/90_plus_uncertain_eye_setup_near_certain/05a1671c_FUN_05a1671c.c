/*
FUNCTION_NAME: FUN_05a1671c
ENTRY_POINT: 05a1671c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05a1671c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *__s;
  ulong uVar10;
  int iVar11;
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_7c;
  long local_78;
  
  puVar6 = auStack_c0;
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc206c & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc206c = 1;
  }
  local_7c = 0;
  local_90 = 0;
  local_98 = (undefined1 *)0x0;
  uVar9 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar10 = param_1 & 0xfffffffffffff;
  local_88 = 0;
  if (uVar9 == 0) {
    local_b0 = param_2;
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    local_a8 = param_3;
    local_b8 = FUN_05a182f8(param_1 & 0xffffffff);
    iVar11 = -0x432;
    uStack_b4 = 0;
  }
  else {
    if (uVar9 == 0x7ff) {
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(lVar2 + 0x28) == local_78) {
        FUN_05a1a23c(param_2,param_3,param_4,uVar10,param_1 >> 0x3f,param_5);
        return;
      }
      goto LAB_05a169b8;
    }
    bVar7 = uVar10 == 0;
    iVar11 = uVar9 - 0x433;
    uVar10 = uVar10 | 0x10000000000000;
    uStack_b4 = (uint)(bVar7 && uVar9 != 1);
    local_b8 = 0x34;
    local_b0 = param_2;
    local_a8 = param_3;
  }
  uVar9 = param_5 >> 0x10 & 0xff;
  local_9c = param_4;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar8 = 0;
  if ((param_5 & 0xff0000) != 0) {
    iVar8 = uVar9 + 1;
  }
  iVar8 = FUN_050d645c(0x12,iVar8,0);
  if (iVar8 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    puVar6 = auStack_c0 + -((long)iVar8 + 0xfU & 0xfffffffffffffff0);
    __s = puVar6;
  }
  memset(__s,0,(long)iVar8);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar1 = 0xf;
  if ((param_5 & 0xff0000) != 0) {
    uVar1 = uVar9;
  }
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar9 = uStack_b4;
  uVar4 = local_b8;
  *(int **)(puVar6 + -0x10) = &local_7c;
  uVar9 = FUN_05a191e0(uVar10,iVar11,uVar4,uVar9,1,uVar1,__s,iVar8 + -1);
  __s[uVar9] = 0;
  uVar5 = local_a8;
  local_90 = CONCAT44(uVar9,1);
  local_88._0_5_ = CONCAT14(0x8000000000000000 < param_1,local_7c + 1);
  local_98 = __s;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a17648(local_b0,uVar5,local_9c,&local_98,uVar1,param_5);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
LAB_05a169b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


