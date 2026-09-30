/*
FUNCTION_NAME: FUN_05a16f90
ENTRY_POINT: 05a16f90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a16f90(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
                 ulong param_5)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  char cVar11;
  ulong uVar12;
  void *__s;
  undefined8 local_90;
  undefined4 local_84;
  void *local_80;
  long local_78;
  uint5 local_70;
  undefined3 uStack_6b;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_90 = param_2;
  local_84 = param_3;
  if ((DAT_06bc2058 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2058 = 1;
  }
  puVar8 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  uVar3 = 0x10;
  if ((param_5 & 0xff) != 3) {
    uVar3 = 10;
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  _local_70 = 0;
  uVar12 = param_4;
  uVar1 = 1;
  do {
    uVar10 = uVar1;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar12 / uVar3;
    }
    bVar9 = uVar3 <= uVar12;
    uVar1 = uVar10 + 1;
    uVar12 = uVar5;
  } while (bVar9);
  if (uVar1 == 0) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)((long)&local_90 - ((long)(int)uVar1 + 0xfU & 0xfffffffffffffff0));
  }
  memset(__s,0,(long)(int)uVar1);
  cVar11 = '7';
  uVar1 = uVar10;
  if ((param_5 & 0xff000000) != 0) {
    cVar11 = 'W';
  }
  do {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = 0;
    if (uVar3 != 0) {
      uVar12 = param_4 / uVar3;
    }
    uVar4 = (int)param_4 - (int)uVar12 * (int)uVar3;
    cVar7 = (char)uVar4;
    cVar2 = cVar11 + cVar7;
    if (uVar4 < 10) {
      cVar2 = cVar7 + '0';
    }
    bVar9 = uVar3 <= param_4;
    *(char *)((long)__s + (long)(int)(uVar1 - 1)) = cVar2;
    param_4 = uVar12;
    uVar1 = uVar1 - 1;
  } while (bVar9);
  *(undefined1 *)((long)__s + (long)(int)uVar10) = 0;
  local_78 = (ulong)uVar10 << 0x20;
  local_70 = (uint5)uVar10;
  local_80 = __s;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = (uint)param_5;
  FUN_05a17648(param_1,local_90,local_84,&local_80,uVar1 >> 0x10 & 0xff,
               uVar1 & 0xff000000 | uVar1 & 0xffff | ((uint)(param_5 >> 0x10) & 0xff) << 0x10);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


