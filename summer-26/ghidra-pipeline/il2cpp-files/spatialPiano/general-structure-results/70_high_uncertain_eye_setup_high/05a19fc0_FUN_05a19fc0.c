/*
FUNCTION_NAME: FUN_05a19fc0
ENTRY_POINT: 05a19fc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


int FUN_05a19fc0(undefined1 *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,int param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *__src;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int *local_70 [2];
  int local_44;
  
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if ((DAT_06bc2069 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2069 = 1;
  }
  local_44 = 0;
  if (param_7 < 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar5 = param_7 + 1;
    uVar6 = 1;
  }
  local_70[0] = &local_44;
  iVar5 = FUN_05a191e0(param_3,param_4,param_5,param_6 & 1,uVar6,iVar5,param_1,param_2);
  __src = param_1;
  if (1 < param_2) {
    uVar11 = param_2 - 1;
    __src = param_1 + 1;
    uVar10 = iVar5 - 1;
    if ((1 < uVar11) && (uVar10 != 0)) {
      if (param_2 - 3 <= uVar10) {
        uVar10 = param_2 - 3;
      }
      memcpy(param_1 + 2,__src,(ulong)uVar10);
      __src = __src + (int)(uVar10 + 1);
      uVar11 = uVar11 - (uVar10 + 1);
      param_1[1] = 0x2e;
    }
    uVar2 = param_7 - uVar10;
    if ((uVar2 != 0 && (int)uVar10 <= param_7) && (1 < uVar11)) {
      if (uVar10 == 0) {
        uVar11 = uVar11 - 1;
        *__src = 0x2e;
        __src = __src + 1;
      }
      uVar10 = uVar11 - 1;
      if (uVar2 <= uVar11 - 1) {
        uVar10 = uVar2;
      }
      uVar7 = (ulong)uVar10;
      puVar9 = __src;
      if (__src < __src + uVar7) {
        do {
          __src = puVar9 + 1;
          uVar7 = uVar7 - 1;
          *puVar9 = 0x30;
          puVar9 = __src;
        } while (uVar7 != 0);
      }
    }
    if (1 < uVar11) {
      puVar9 = (undefined1 *)((ulong)local_70 | 1);
      uVar7 = (ulong)local_70[0] >> 8;
      local_70[0] = (int *)CONCAT71((uint7)uVar7 & 0xffffff00000000,0x65);
      if (local_44 < 0) {
        local_44 = -local_44;
        *puVar9 = 0x2d;
      }
      else {
        *puVar9 = 0x2b;
      }
      lVar8 = (long)local_44 - (ulong)(uint)((local_44 / 100) * 100);
      auVar1 = SEXT816(lVar8) * SEXT816(0x6666666666666667);
      cVar3 = (char)(auVar1._8_8_ >> 2) - (auVar1[0xf] >> 7);
      *(char *)((ulong)local_70 | 2) = (char)(local_44 / 100) + '0';
      *(char *)((ulong)local_70 | 3) = cVar3 + '0';
      uVar10 = uVar11 - 1;
      if (6 < uVar11) {
        uVar10 = 5;
      }
      *(char *)((ulong)local_70 | 4) = (char)lVar8 + cVar3 * -10 + '0';
      memcpy(__src,local_70,(ulong)uVar10);
      __src = __src + uVar10;
    }
  }
  return (int)__src - (int)param_1;
}


