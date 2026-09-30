/*
FUNCTION_NAME: FUN_0359e0bc
ENTRY_POINT: 0359e0bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0359e0bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0df & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0df = 1;
  }
  uVar2 = FUN_0359d3d8(param_1);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar5);
  }
  uVar3 = FUN_036d35a8(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036d35a8(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_03693c3c(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),0);
        puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        lVar5 = *(long *)(param_1 + 0x38);
        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar5 != 0) {
          uVar3 = FUN_03699d80(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          plVar4 = (long *)FUN_0359d670(param_1);
          if (plVar4 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar4 + 0x538))(plVar4,*(undefined8 *)(*plVar4 + 0x540));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar1);
            }
            if (lVar5 != 0) {
              FUN_0369dff0(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
              if (*(long *)(param_1 + 0x38) != 0) {
                FUN_0369d098(*(long *)(param_1 + 0x38),
                             *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return;
}


