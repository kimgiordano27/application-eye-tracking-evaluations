/*
FUNCTION_NAME: FUN_03563c48
ENTRY_POINT: 03563c48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03563c48(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412df8f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df8f = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x728);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x110);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036d35a8(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x728) != 0) {
        iVar2 = FUN_039117fc(*(long *)(param_1 + 0x728),0);
        puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        if ((iVar2 == 0) || (*(char *)(param_1 + 0x304) != '\0')) {
          lVar5 = *(long *)(param_1 + 0x110);
          if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar5 == 0) goto LAB_03563d70;
          lVar4 = *(long *)puVar1;
          uVar7 = 0;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x110);
          if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar5 == 0) goto LAB_03563d70;
          lVar4 = *(long *)puVar1;
          uVar7 = 0x40800000;
        }
        FUN_0369d098(uVar7,lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x118),0);
        return;
      }
LAB_03563d70:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return;
}


