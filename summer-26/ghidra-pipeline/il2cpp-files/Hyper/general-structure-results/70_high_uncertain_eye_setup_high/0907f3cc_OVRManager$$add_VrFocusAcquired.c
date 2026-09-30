/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 0907f3cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__add_VrFocusAcquired
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 extraout_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  float local_14;
  
  fVar6 = 0.0;
  local_14 = 0.0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  uVar2 = FUN_0907f558(param_4,&local_80);
  if ((uVar2 & 1) != 0) {
    FUN_0a1f8a64(&local_80,0);
    uVar2 = FUN_0907f758(param_4);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_4 + 0x20) != 0) &&
         (lVar3 = FUN_0a17834c(*(long *)(param_4 + 0x20),0), lVar3 != 0)) {
        uVar4 = FUN_0a18a1a0(lVar3,0);
        uStack_a8 = uStack_78;
        local_b0 = local_80;
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        uStack_8c = uStack_5c;
        local_94 = local_64;
        uStack_90 = uStack_60;
        if (DAT_0b32d3e8 == '\0') {
          uVar4 = FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b32d3e8 = '\x01';
        }
        uStack_d8 = uStack_a8;
        local_e0 = local_b0;
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
        uStack_bc = uStack_8c;
        local_c4 = local_94;
        uStack_c0 = uStack_90;
        FUN_0907f8b4(extraout_s0,fVar6,param_3,*(undefined4 *)(lVar3 + 0x24),
                     *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c),uVar4,&local_e0,
                     &local_14);
        fVar1 = local_14;
        if (*(long *)(param_4 + 0x20) != 0) {
          fVar5 = (float)FUN_0a1ecf3c(*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) != 0) {
            fVar7 = *(float *)(param_4 + 0x28);
            lVar3 = FUN_0a17834c(*(long *)(param_4 + 0x20),0);
            if (lVar3 != 0) {
              FUN_0a18a274(extraout_s0,fVar7 + (fVar6 - fVar1) + fVar5 * 0.5,param_3,lVar3,0);
              *(undefined1 *)(param_4 + 0x7c) = 1;
              *(undefined8 *)(param_4 + 0x58) = uStack_78;
              *(undefined8 *)(param_4 + 0x50) = local_80;
              *(ulong *)(param_4 + 0x68) = CONCAT44(local_64,uStack_68);
              *(undefined8 *)(param_4 + 0x60) = uStack_70;
              *(undefined8 *)(param_4 + 0x74) = uStack_5c;
              *(ulong *)(param_4 + 0x6c) = CONCAT44(uStack_60,local_64);
              FUN_0907eda4(param_4);
              return 1;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  return 0;
}


