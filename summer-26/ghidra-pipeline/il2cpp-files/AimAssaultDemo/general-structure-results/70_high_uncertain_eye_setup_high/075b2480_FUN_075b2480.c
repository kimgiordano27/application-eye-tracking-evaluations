/*
FUNCTION_NAME: FUN_075b2480
ENTRY_POINT: 075b2480
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075b25c4) */

void FUN_075b2480(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_24 [4];
  
  if ((DAT_0826e0e3 & 1) == 0) {
    FUN_0373b518(OVRManager_SystemHeadsetType_TypeInfo);
    DAT_0826e0e3 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  local_24[0] = '\0';
  FUN_062a77c0(uVar4,local_24,0);
  lVar5 = *(long *)(param_1 + 0x18);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_075b2424(&local_88,param_2,param_3,0);
  if (lVar5 != 0) {
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    lVar2 = *(long *)(lVar5 + 0x10);
    lVar3 = *(long *)OVRManager_SystemHeadsetType_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar2 + 0x30) = local_78;
        *(undefined8 *)(lVar2 + 0x28) = uStack_80;
        *(undefined8 *)(lVar2 + 0x20) = local_88;
        thunk_FUN_037aeb94(lVar2 + 0x20,0);
      }
      else {
        uStack_48 = uStack_80;
        local_50 = local_88;
        local_40 = local_78;
        FUN_04b9a80c(lVar5,&local_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      if (local_24[0] != '\0') {
        thunk_FUN_03749964(uVar4,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


