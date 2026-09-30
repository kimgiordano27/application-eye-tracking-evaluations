/*
FUNCTION_NAME: FUN_0355c778
ENTRY_POINT: 0355c778
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355c778(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412df59 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df59 = 1;
  }
  lVar3 = *(long *)puVar2;
  cVar1 = *(char *)(param_1 + 0x304);
  lVar5 = *(long *)(param_1 + 0x110);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x118);
    if (cVar1 == '\0') {
      FUN_0369d098(0x40800000,lVar5,uVar4,0);
      if ((*(long *)(param_1 + 0x6e8) == 0) ||
         (lVar3 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0), lVar3 == 0)) goto LAB_0355c868;
      uVar4 = 0xffffffff;
    }
    else {
      FUN_0369d098(0,lVar5,uVar4,0);
      if ((*(long *)(param_1 + 0x6e8) == 0) ||
         (lVar3 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0), lVar3 == 0)) goto LAB_0355c868;
      uVar4 = 4000;
    }
    FUN_0369a65c(lVar3,uVar4,0);
    if (*(long *)(param_1 + 0x6e8) != 0) {
      uVar4 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0);
      *(undefined8 *)(param_1 + 0x110) = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x110),uVar4);
      return;
    }
  }
LAB_0355c868:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


