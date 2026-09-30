/*
FUNCTION_NAME: FUN_0355a0ec
ENTRY_POINT: 0355a0ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355a0ec(long param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412df40 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df40 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  cVar1 = *(char *)(param_1 + 0x300);
  cVar2 = *(char *)(param_1 + 0x26a);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = FUN_035993e8(uVar7,cVar1 != '\0',cVar2 != '\0',0);
  *(undefined4 *)(param_1 + 0x618) = uVar9;
  bVar4 = FUN_0359924c(*(undefined8 *)(param_1 + 0x110),0);
  lVar6 = *(long *)(param_1 + 0x368);
  *(byte *)(param_1 + 0x307) = bVar4 & 1;
  *(undefined1 *)(param_1 + 0x370) = 1;
  *(undefined1 *)(param_1 + 0x301) = 0;
  if (lVar6 == 0) {
    return;
  }
  lVar8 = 5;
  do {
    uVar5 = (int)lVar8 - 4;
    if (*(int *)(lVar6 + 0x34) <= (int)uVar5) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x708);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar6 = *(long *)(lVar6 + lVar8 * 8);
    if (lVar6 == 0) break;
    FUN_0359e048(lVar6,*(undefined1 *)(param_1 + 0x300),*(undefined1 *)(param_1 + 0x26a),0);
    lVar6 = *(long *)(param_1 + 0x368);
    lVar8 = lVar8 + 1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


