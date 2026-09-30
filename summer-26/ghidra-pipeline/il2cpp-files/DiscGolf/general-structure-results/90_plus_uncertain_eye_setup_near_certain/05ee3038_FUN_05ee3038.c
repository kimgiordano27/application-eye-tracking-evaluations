/*
FUNCTION_NAME: FUN_05ee3038
ENTRY_POINT: 05ee3038
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05ee3038(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_06dc3f86 & 1) == 0) {
    FUN_02d965b8(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
    DAT_06dc3f86 = 1;
  }
  uStack_e8 = param_3[1];
  local_f0 = *param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  local_d0 = param_3[4];
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_c8 = 0;
  LeanTween__value(&local_f0,0);
  uStack_c0 = param_2[1];
  uStack_c8 = *param_2;
  local_b8 = param_2[2];
  LeanTween__value(&uStack_c0,0);
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 0x10);
    uStack_a8 = uStack_e8;
    local_b0 = local_f0;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    lVar3 = *(long *)
             Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uStack_88 = uStack_c8;
    local_90 = local_d0;
    uStack_78 = local_b8;
    uStack_80 = uStack_c0;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + 0x28) = uStack_e8;
        *(undefined8 *)(lVar2 + 0x20) = local_f0;
        *(undefined8 *)(lVar2 + 0x38) = uStack_d8;
        *(undefined8 *)(lVar2 + 0x30) = uStack_e0;
        *(undefined8 *)(lVar2 + 0x48) = uStack_c8;
        *(undefined8 *)(lVar2 + 0x40) = local_d0;
        *(undefined8 *)(lVar2 + 0x58) = local_b8;
        *(undefined8 *)(lVar2 + 0x50) = uStack_c0;
        LeanTween__value(lVar2 + 0x20,0);
      }
      else {
        uStack_68 = uStack_e8;
        local_70 = local_f0;
        uStack_58 = uStack_d8;
        uStack_60 = uStack_e0;
        uStack_48 = uStack_c8;
        local_50 = local_d0;
        uStack_38 = local_b8;
        uStack_40 = uStack_c0;
        FUN_0411b1ac(lVar4,&local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


