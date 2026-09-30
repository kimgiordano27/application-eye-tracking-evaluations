/*
FUNCTION_NAME: FUN_01972a34
ENTRY_POINT: 01972a34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01972a34(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  if ((DAT_0377a330 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6259);
    DAT_0377a330 = 1;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_60 = 0;
  local_48 = 0;
  lVar8 = *(long *)(param_1 + 0x68);
  uVar4 = FUN_019729c0(param_1);
  puVar3 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  if (lVar8 == 0) goto LAB_01972d74;
  *(undefined8 *)(lVar8 + 0x38) = uVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01aaac90(0);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_02689fe0(param_1,0);
    uVar5 = uVar5 & 0xffffffff;
  }
  puVar2 = System_Data_DataColumnCollection_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) goto LAB_01972d74;
  if (*(char *)(param_1 + 0x51) == '\0') {
    if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02666fdc(&local_80,0);
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_4c = (undefined4)uStack_6c;
    local_48 = (undefined4)((ulong)uStack_6c >> 0x20);
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) goto LAB_01972d74;
    if (*(char *)(lVar6 + 0x2c) != '\0') {
      local_60 = *(undefined8 *)(lVar6 + 0x10);
      uStack_4c = (undefined4)*(undefined8 *)(lVar6 + 0x24);
      local_48 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x24) >> 0x20);
      uStack_50 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x1c) >> 0x20);
      uStack_58 = (undefined4)*(undefined8 *)(lVar6 + 0x18);
      uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
    }
    puVar1 = (undefined8 *)(lVar8 + 0x10);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01aa0670(2,4,2,0xffffffff,puVar1,0);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = uStack_58;
        *puVar1 = local_60;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01aa099c(2,5,2,0xffffffff,(undefined8 *)(lVar8 + 0x1c),0);
      if ((uVar5 & 1) == 0) {
        local_80 = local_60;
        uStack_6c = CONCAT44(local_48,uStack_4c);
        uStack_78 = uStack_58;
        uStack_74 = uStack_54;
        uStack_70 = uStack_50;
        *(undefined8 *)(lVar8 + 0x24) = uStack_6c;
        *(undefined8 *)(lVar8 + 0x1c) = CONCAT44(uStack_50,uStack_54);
      }
      goto LAB_01972c3c;
    }
    uVar7 = 0;
    *(ulong *)(lVar8 + 0x24) = CONCAT44(local_48,uStack_4c);
    *(ulong *)(lVar8 + 0x1c) = CONCAT44(uStack_50,uStack_54);
    *(ulong *)(lVar8 + 0x18) = CONCAT44(uStack_54,uStack_58);
    *puVar1 = local_60;
  }
  else {
    if (*(int *)(*(long *)System_Data_DataColumnCollection_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377a363 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_01972d74;
    fVar12 = *(float *)(**(long **)(lVar6 + 0xb8) + 0x50);
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(puVar2);
      lVar6 = *(long *)puVar2;
      DAT_0377a363 = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_01972d74;
    fVar13 = *(float *)(**(long **)(lVar6 + 0xb8) + 0x54);
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(puVar2);
      lVar6 = *(long *)puVar2;
      DAT_0377a363 = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_01972d74;
    fVar13 = fVar13 * DAT_028aa4f0;
    fVar10 = *(float *)(**(long **)(lVar6 + 0xb8) + 0x58) * DAT_028aa044;
    fVar11 = DAT_028aa044;
    uVar9 = FUN_02698b6c(fVar12 * DAT_028aa4f0,0);
    *(undefined4 *)(lVar8 + 0x1c) = uVar9;
    *(float *)(lVar8 + 0x20) = fVar13;
    *(float *)(lVar8 + 0x24) = fVar10;
    *(float *)(lVar8 + 0x28) = fVar11;
    if (DAT_0377a363 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377a363 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_01972d74;
    uVar9 = *(undefined4 *)(lVar6 + 100);
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar6 + 0x5c);
    *(undefined4 *)(lVar8 + 0x18) = uVar9;
LAB_01972c3c:
    uVar7 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x2c) = uVar7;
    uVar9 = FUN_026892d8(0);
    *(undefined4 *)(lVar8 + 0x30) = uVar9;
    return;
  }
LAB_01972d74:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


