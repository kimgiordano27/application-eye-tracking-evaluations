/*
FUNCTION_NAME: FUN_05578aa4
ENTRY_POINT: 05578aa4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_11;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05578aa4(long *param_1)

{
  undefined *puVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((bRam0000000006e8d293 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2f358);
    FUN_02e3ca1c(PTR_DAT_06a80478);
    bRam0000000006e8d293 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(int *)((long)param_1 + 0xc) == 3) {
    return 0;
  }
  iVar4 = (int)param_1[1];
  if (iVar4 < 0) goto LAB_05578da8;
  lVar5 = *param_1;
  if (lVar5 == 0) goto System_Threading_Timer__Dispose;
  if (*(int *)(lVar5 + 0x10) <= iVar4) goto LAB_05578da8;
  sVar2 = FUN_05487524(lVar5,iVar4,0);
  if (sVar2 == 0x3b) {
    return 0;
  }
  if (*param_1 == 0) goto System_Threading_Timer__Dispose;
  sVar2 = FUN_05487524(*param_1,(int)param_1[1],0);
  puVar1 = PTR_DAT_06a80478;
  if (sVar2 != 0x5b) goto LAB_05578da8;
  uVar8 = *(undefined8 *)PTR_DAT_06a80478;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar8 = System_Threading_Timer__get_scheduler(param_1,uVar8);
  uVar6 = System_Threading_Timer__get_scheduler(param_1,*(undefined8 *)puVar1);
  uVar7 = FUN_05578420(param_1);
  FUN_05578eac(&local_58,param_1);
  FUN_05578eac(&local_70,param_1);
  puVar1 = PTR_DAT_06a2f358;
  lVar5 = *(long *)PTR_DAT_06a2f358;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *(long *)puVar1;
  }
  if (*(int *)((long)param_1 + 0xc) == 3) goto LAB_05578da8;
  lVar10 = *param_1;
  if (lVar10 == 0) goto System_Threading_Timer__Dispose;
  if (*(int *)(lVar10 + 0x10) <= (int)param_1[1]) goto LAB_05578da8;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar3 = FUN_05487524(lVar10,(int)param_1[1],0);
  if (uVar3 < 0x30) {
LAB_05578c34:
    if (*param_1 == 0) goto System_Threading_Timer__Dispose;
    sVar2 = FUN_05487524(*param_1,(int)param_1[1],0);
    if (sVar2 == 0x2d) goto LAB_05578c74;
    if (*param_1 == 0) goto System_Threading_Timer__Dispose;
    sVar2 = FUN_05487524(*param_1,(int)param_1[1],0);
    if (sVar2 == 0x2b) goto LAB_05578c74;
  }
  else {
    if (*param_1 == 0) goto System_Threading_Timer__Dispose;
    uVar3 = FUN_05487524(*param_1,(int)param_1[1],0);
    if (0x39 < uVar3) goto LAB_05578c34;
LAB_05578c74:
    uVar11 = FUN_05578420(param_1);
  }
  if (*param_1 == 0) goto System_Threading_Timer__Dispose;
  uVar3 = FUN_05487524(*param_1,(int)param_1[1],0);
  if (uVar3 < 0x30) {
LAB_05578cc0:
    bVar12 = false;
  }
  else {
    if (*param_1 == 0) goto System_Threading_Timer__Dispose;
    uVar3 = FUN_05487524(*param_1,(int)param_1[1],0);
    if (0x31 < uVar3) goto LAB_05578cc0;
    iVar4 = FUN_055789c8(param_1);
    bVar12 = 0 < iVar4;
  }
  if (*(int *)((long)param_1 + 0xc) == 3) {
LAB_05578da8:
    thunk_FUN_02ea289c(PTR_DAT_06a6ec30);
    uVar8 = thunk_FUN_02e78ab8();
    uVar6 = thunk_FUN_02ea289c(PTR_DAT_06a80468);
    FUN_055072a0(uVar8,uVar6,0);
    uVar6 = thunk_FUN_02ea289c(PTR_DAT_06a805f0);
                    /* WARNING: Subroutine does not return */
    FUN_02e3cb88(uVar8,uVar6);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) <= (int)param_1[1]) goto LAB_05578da8;
    sVar2 = FUN_05487524(lVar5,(int)param_1[1],0);
    if (sVar2 == 0x5d) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    else {
      FUN_05578790(param_1,1);
    }
    uStack_88 = uStack_50;
    local_90 = local_58;
    local_80 = local_48;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    local_a0 = local_60;
    uVar8 = FUN_0556f630(uVar8,uVar6,uVar7,&local_90,&local_b0,uVar11,bVar12);
    if (*param_1 != 0) {
      uVar9 = 2;
      if (*(int *)(*param_1 + 0x10) <= (int)param_1[1]) {
        uVar9 = 3;
      }
      *(undefined4 *)((long)param_1 + 0xc) = uVar9;
      return uVar8;
    }
  }
System_Threading_Timer__Dispose:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


