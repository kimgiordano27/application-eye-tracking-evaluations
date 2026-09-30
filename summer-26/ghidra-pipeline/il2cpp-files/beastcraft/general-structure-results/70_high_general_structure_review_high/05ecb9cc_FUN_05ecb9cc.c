/*
FUNCTION_NAME: FUN_05ecb9cc
ENTRY_POINT: 05ecb9cc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_10;telemetry_or_network_hits_9
*/


void FUN_05ecb9cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,uint param_8,int param_9,
                 int param_10)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  puVar4 = MemoryPack_Formatters_ArraySegmentFormatter<T>_var;
  if ((DAT_06e94290 & 1) == 0) {
    FUN_02e3ca1c(MemoryPack_Formatters_ArraySegmentFormatter<T>_var);
    DAT_06e94290 = 1;
  }
  lVar5 = *(long *)puVar4;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *(long *)puVar4;
  }
  plVar11 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (plVar11 == (long *)0x0) {
Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if ((param_6 != 0) &&
     (lVar5 = thunk_FUN_02e789bc(param_6,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
    uVar7 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
    FUN_02e3cb88(uVar7,0);
  }
  if ((int)plVar11[3] != 0) {
    plVar11[4] = param_6;
    thunk_FUN_02ee2be8(plVar11 + 4,param_6);
    uVar12 = 1;
    lVar5 = 0x28;
    while( true ) {
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar6 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (lVar8 == 0)
      goto 
      Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
      if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar12) {
        uVar12 = 0;
        lVar5 = 0x20;
        goto LAB_05ecbb1c;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        if (lVar8 == 0)
        goto 
        Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
      *(undefined8 *)(lVar8 + lVar5) = 0;
      thunk_FUN_02ee2be8(lVar8 + lVar5,0);
      uVar12 = uVar12 + 1;
      lVar5 = lVar5 + 8;
    }
  }
LAB_05ecbd38:
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
LAB_05ecbb1c:
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar6 = *(long *)puVar4;
  }
  lVar8 = *(long *)(lVar6 + 0xb8);
  lVar9 = *(long *)(lVar8 + 0x20);
  if (lVar9 == 0)
  goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar12) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar6 = *(long *)puVar4;
      lVar8 = *(long *)(lVar6 + 0xb8);
    }
    lVar5 = *(long *)(lVar8 + 0x30);
    if (lVar5 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(int *)(lVar5 + 0x20) = param_9;
      lVar5 = 9;
      *(int *)(lVar8 + 0x38) = param_10;
      goto LAB_05ecbc08;
    }
    goto LAB_05ecbd38;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    lVar9 = *(long *)(lVar8 + 0x20);
    if (lVar9 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_05ecbd38;
  lVar8 = *(long *)(lVar8 + 0x18);
  lVar6 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
  if (lVar6 == 0) {
    FUN_062859bc(&local_b0,0,0);
  }
  else {
    uStack_a8 = *(undefined8 *)(lVar6 + 0x30);
    local_b0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_98 = *(undefined8 *)(lVar6 + 0x40);
    uStack_a0 = *(undefined8 *)(lVar6 + 0x38);
    local_90 = *(undefined8 *)(lVar6 + 0x48);
  }
  if (lVar8 == 0)
  goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_05ecbd38;
  puVar1 = (undefined8 *)(lVar8 + lVar5);
  uVar12 = uVar12 + 1;
  lVar5 = lVar5 + 0x28;
  puVar1[4] = local_90;
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  lVar6 = *(long *)puVar4;
  goto LAB_05ecbb1c;
LAB_05ecbc08:
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar6 = *(long *)puVar4;
  }
  lVar8 = *(long *)(lVar6 + 0xb8);
  lVar9 = *(long *)(lVar8 + 0x30);
  if (lVar9 == 0)
  goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  if ((long)*(int *)(lVar9 + 0x18) <= (long)(lVar5 - 8U)) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    *(undefined8 *)(lVar8 + 0x28) = param_7;
    thunk_FUN_02ee2be8((undefined8 *)(lVar8 + 0x28),param_7);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      cVar10 = *(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
    }
    else {
      cVar10 = *(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    }
    iVar2 = (uint)(param_9 == 2) << 1;
    if (cVar10 != '\0') {
      iVar2 = param_9;
    }
    iVar3 = (uint)(param_10 == 2) << 1;
    if (cVar10 != '\0') {
      iVar3 = param_10;
    }
    FUN_05ecbd48(param_1,param_2,param_3,param_4,param_5,param_6,(param_8 & 1) << 1,iVar2,param_7,
                 param_8 & 2,iVar3,param_8);
    return;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar6 = *(long *)puVar4;
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar9 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  }
  if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar5 - 8U) goto LAB_05ecbd38;
  *(undefined4 *)(lVar9 + lVar5 * 4) = 0;
  lVar5 = lVar5 + 1;
  goto LAB_05ecbc08;
}


