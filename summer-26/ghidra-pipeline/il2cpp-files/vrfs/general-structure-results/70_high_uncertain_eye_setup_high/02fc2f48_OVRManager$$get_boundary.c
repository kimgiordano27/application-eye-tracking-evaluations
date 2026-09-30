/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 02fc2f48
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_boundary(long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(3);
  }
  if (*(uint *)(param_2 + 0x18) < param_3) {
    FUN_031dbd14(0);
  }
  iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8) + 8))(param_1);
  if ((int)(*(int *)(param_2 + 0x18) - param_3) < iVar2) {
    FUN_031db448(5,0);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02fc309c:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < *(int *)((long)puVar6 + -0xc)) {
        uStack_5c = *(undefined8 *)((long)puVar6 + 0x24);
        uStack_78 = puVar6[1];
        uStack_80 = *puVar6;
        uStack_70 = puVar6[2];
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x1c) >> 0x20);
        uStack_c8 = (undefined4)puVar6[3];
        uStack_c4 = (undefined4)((ulong)puVar6[3] >> 0x20);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_64 = uStack_c4;
        uStack_60 = uStack_c0;
        uStack_68 = uStack_c8;
        FUN_0517a924(&uStack_b0,*(undefined4 *)((long)puVar6 + -4),&uStack_80,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf8));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02fc309c;
        lVar3 = param_2 + (long)(int)param_3 * 0x30;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar3 + 0x38) = uStack_98;
        *(undefined8 *)(lVar3 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar3 + 0x48) = uStack_88;
        *(undefined8 *)(lVar3 + 0x40) = uStack_90;
        *(undefined8 *)(lVar3 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar3 + 0x20) = uStack_b0;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 7;
    } while (uVar1 != uVar5);
  }
  return;
}


