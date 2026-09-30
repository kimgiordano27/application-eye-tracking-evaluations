/*
FUNCTION_NAME: FUN_05a171f0
ENTRY_POINT: 05a171f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a171f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 ulong param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  char cVar10;
  long lVar11;
  undefined1 *__s;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_98 = param_1;
  local_90 = param_2;
  local_84 = param_3;
  if ((DAT_06bc2059 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2059 = 1;
  }
  puVar8 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  lVar4 = 0x10;
  if ((param_5 & 0xff) != 3) {
    lVar4 = 10;
  }
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_70 = 0;
  lVar11 = param_4;
  uVar1 = 1;
  do {
    uVar9 = uVar1;
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar6 = lVar11 / lVar4;
    }
    uVar1 = uVar9 + 1;
    lVar11 = lVar6;
  } while (lVar6 != 0);
  if (uVar1 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    __s = auStack_a0 + -((long)(int)uVar1 + 0xfU & 0xfffffffffffffff0);
  }
  memset(__s,0,(long)(int)uVar1);
  cVar10 = '7';
  lVar11 = param_4;
  uVar1 = uVar9;
  if ((param_5 & 0xff000000) != 0) {
    cVar10 = 'W';
  }
  do {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar6 = lVar11 / lVar4;
    }
    iVar5 = (int)lVar11 - (int)lVar6 * (int)lVar4;
    iVar2 = -iVar5;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    cVar3 = cVar10 + (char)iVar2;
    if (iVar2 < 10) {
      cVar3 = (char)iVar2 + '0';
    }
    __s[(int)(uVar1 - 1)] = cVar3;
    lVar11 = lVar6;
    uVar1 = uVar1 - 1;
  } while (lVar6 != 0);
  __s[(int)uVar9] = 0;
  local_78 = (ulong)uVar9 << 0x20;
  local_70._0_5_ = CONCAT14((byte)((ulong)param_4 >> 0x3f),uVar9);
  local_80 = __s;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = (uint)param_5;
  FUN_05a17648(local_98,local_90,local_84,&local_80,uVar1 >> 0x10 & 0xff,
               uVar1 & 0xff000000 | uVar1 & 0xffff | ((uint)(param_5 >> 0x10) & 0xff) << 0x10);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


