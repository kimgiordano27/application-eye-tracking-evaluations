/*
FUNCTION_NAME: FUN_058a1334
ENTRY_POINT: 058a1334
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


long FUN_058a1334(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [720];
  undefined1 auStack_300 [720];
  
  puVar3 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__;
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_From__;
  if ((DAT_066d3196 & 1) == 0) {
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
    DAT_066d3196 = 1;
  }
  local_5e0 = 0;
  uStack_5d8 = 0;
  lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_037958f0(lVar4,*(undefined8 *)puVar3);
  uStack_5d8 = 0xffffffff;
  local_5e0 = param_1;
  uVar5 = FUN_058a14e4(&local_5e0);
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__;
  while( true ) {
    if ((uVar5 & 1) == 0) {
      return lVar4;
    }
    __src = (void *)FUN_058a148c(&local_5e0);
    if (lVar4 == 0) break;
    memcpy(auStack_5d0,__src,0x2d0);
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)puVar2;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar6 + (long)(int)uVar1 * 0x2d0 + 0x20),auStack_5d0,0x2d0);
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
      memcpy(auStack_300,auStack_5d0,0x2d0);
      FUN_03796208(lVar4,auStack_300,uVar8);
    }
    uVar5 = FUN_058a14e4(&local_5e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


