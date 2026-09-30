/*
FUNCTION_NAME: FUN_066b88c4
ENTRY_POINT: 066b88c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_066b88c4(long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0897b551 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a5a50);
    FUN_03a8a718(PTR_DAT_084a5a58);
    FUN_03a8a718(PTR_DAT_084a5a60);
    FUN_03a8a718(PTR_DAT_084a5a68);
    FUN_03a8a718(PTR_DAT_084a5a70);
    DAT_0897b551 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(0xf,0);
  }
  if (-1 < param_2) {
    iVar7 = *(int *)(param_1 + 0x18);
    if ((param_2 == 0) || (param_2 < iVar7)) {
      if ((int)param_3 < 0) goto System_Threading_SemaphoreSlim__Dispose;
      goto LAB_066b896c;
    }
  }
  FUN_06771e08(0xe,0x16,0);
  if ((int)param_3 < 0) {
System_Threading_SemaphoreSlim__Dispose:
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar5 = thunk_FUN_03ac74bc();
    uVar6 = thunk_FUN_03af1434(PTR_DAT_084914a0);
    uVar10 = thunk_FUN_03af1434(PTR_DAT_0849fc78);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar5,uVar6,uVar10);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_084a5a78);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5,uVar6);
  }
  iVar7 = *(int *)(param_1 + 0x18);
LAB_066b896c:
  if ((int)(iVar7 - param_3) < param_2) {
    FUN_06771c2c(5,0xf,0);
  }
  puVar2 = PTR_DAT_084a5a68;
  if (param_3 == 0) {
    uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_08486760 + 0x90) + 0xb8);
  }
  else {
    if (0x2aaaaaaa < param_3) {
      local_50 = CONCAT44(local_50._4_4_,0x2aaaaaaa);
      uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&local_50);
      uVar6 = thunk_FUN_03af1434(PTR_DAT_084a5a80);
      uVar5 = FUN_065adf54(uVar6,uVar5,0);
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar6 = thunk_FUN_03ac74bc();
      uVar10 = thunk_FUN_03af1434(PTR_DAT_084914a0);
      System_Threading_CancellationToken__get_IsCancellationRequested(uVar6,uVar10,uVar5);
      uVar5 = thunk_FUN_03af1434(PTR_DAT_084a5a78);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar5);
    }
    local_50 = 0;
    uStack_48 = 0;
    FUN_05b8139c(&local_50,param_1,param_2,param_3,*(undefined8 *)PTR_DAT_084a5a70);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = uStack_48;
    uVar5 = local_50;
    puVar1 = PTR_DAT_084a5a58;
    puVar8 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar8[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a5a50);
      FUN_05786764(lVar9,uVar10,*(undefined8 *)PTR_DAT_084a5a60,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar9;
      thunk_FUN_03afed3c(plVar4,lVar9);
    }
    uVar5 = FUN_0475e2e8(param_3 * 3 + -1,uVar5,uVar6,lVar9,*(undefined8 *)puVar1);
  }
  return uVar5;
}


