/*
FUNCTION_NAME: FUN_05a163f0
ENTRY_POINT: 05a163f0
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


void FUN_05a163f0(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,uint param_5
                 )

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *__s;
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_7c;
  long local_78;
  
  puVar6 = auStack_c0;
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((DAT_06bc206b & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc206b = 1;
  }
  local_7c = 0;
  local_90 = 0;
  local_98 = (undefined1 *)0x0;
  uVar2 = param_1 >> 0x17 & 0xff;
  uVar9 = param_1 & 0x7fffff;
  local_88 = 0;
  if (uVar2 == 0) {
    local_b0 = param_2;
    uStack_a8 = param_3;
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    local_9c = param_4;
    local_b8 = FUN_05a182f8(uVar9);
    iVar10 = -0x95;
    uStack_b4 = 0;
  }
  else {
    if (uVar2 == 0xff) {
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(lVar3 + 0x28) == local_78) {
        FUN_05a1a23c(param_2,param_3,param_4,uVar9,param_1 >> 0x1f,param_5);
        return;
      }
      goto LAB_05a1668c;
    }
    bVar7 = uVar9 == 0;
    uVar9 = uVar9 | 0x800000;
    iVar10 = uVar2 - 0x96;
    uStack_b4 = (uint)(bVar7 && uVar2 != 1);
    local_b8 = 0x17;
    local_b0 = param_2;
    uStack_a8 = param_3;
    local_9c = param_4;
  }
  uVar2 = param_5 >> 0x10 & 0xff;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar8 = 0;
  if ((param_5 & 0xff0000) != 0) {
    iVar8 = uVar2 + 1;
  }
  iVar8 = FUN_050d645c(10,iVar8,0);
  if (iVar8 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    puVar6 = auStack_c0 + -((long)iVar8 + 0xfU & 0xfffffffffffffff0);
    __s = puVar6;
  }
  memset(__s,0,(long)iVar8);
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar1 = 7;
  if ((param_5 & 0xff0000) != 0) {
    uVar1 = uVar2;
  }
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = uStack_b4;
  uVar5 = local_b8;
  *(int **)(puVar6 + -0x10) = &local_7c;
  uVar9 = FUN_05a191e0(uVar9,iVar10,uVar5,uVar2,1,uVar1,__s,iVar8 + -1);
  __s[uVar9] = 0;
  uVar5 = local_9c;
  local_90 = CONCAT44(uVar9,1);
  local_88._0_5_ = CONCAT14(0x80000000 < param_1,local_7c + 1);
  local_98 = __s;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a17648(local_b0,uStack_a8,uVar5,&local_98,uVar1,param_5);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_05a1668c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


