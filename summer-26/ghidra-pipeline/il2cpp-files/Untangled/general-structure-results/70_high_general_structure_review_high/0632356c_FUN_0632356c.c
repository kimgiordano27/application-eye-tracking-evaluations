/*
FUNCTION_NAME: FUN_0632356c
ENTRY_POINT: 0632356c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0632356c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsRequest_var;
  if ((bRam00000000071cd0d4 & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsRequest_var);
    FUN_02f07e70(HurricaneVR_Framework_Core_Player_HVRHeadCollision_var);
    bRam00000000071cd0d4 = 1;
  }
  lVar3 = *(long *)puVar2;
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= (uint)((int)uVar1 >> 2)) {
LAB_063236ec:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = lVar3 + (long)((int)uVar1 >> 2) * 0x28;
    uStack_50 = *(undefined8 *)(lVar3 + 0x40);
    uStack_68 = *(undefined8 *)(lVar3 + 0x28);
    uStack_70 = *(undefined8 *)(lVar3 + 0x20);
    uStack_58 = *(undefined8 *)(lVar3 + 0x38);
    uStack_60 = *(undefined8 *)(lVar3 + 0x30);
    if (param_1 != 0) {
      uStack_a0 = uStack_70;
      uStack_98 = uStack_68;
      uStack_90 = uStack_60;
      uStack_88 = uStack_58;
      uStack_80 = uStack_50;
      FUN_066e76f4(param_1,*(undefined8 *)HurricaneVR_Framework_Core_Player_HVRHeadCollision_var,
                   &uStack_a0,0);
      lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
      if (lVar3 != 0) {
        param_3 = param_3 - (uVar1 & 0xfffffffc);
        if (*(uint *)(lVar3 + 0x18) <= param_3) goto LAB_063236ec;
        lVar3 = lVar3 + (long)(int)param_3 * 0x10;
        FUN_066e4174(*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                     *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c),param_1,
                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
        if (param_2 != 0) {
          FUN_066e3fc8(1.0 - *(float *)(param_2 + 0x80),param_1,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0);
          FUN_066e3fc8(1.0 - *(float *)(param_2 + 0x88),param_1,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


