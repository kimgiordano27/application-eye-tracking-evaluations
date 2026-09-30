/*
FUNCTION_NAME: FUN_0702fe1c
ENTRY_POINT: 0702fe1c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0702fe1c(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_079f4e28;
  if ((DAT_07eebdcf & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_68_0_TypeInfo);
    DAT_07eebdcf = 1;
  }
  lVar9 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_079f4540;
  uVar4 = FUN_071c0684(lVar9,0,0);
  if ((uVar4 & 1) != 0) {
    if (*param_3 == 0) goto LAB_07030230;
    if (*(int *)(*param_3 + 0x2c) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07176120(*(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo,0);
      return;
    }
  }
  if ((param_2 == 0) || (plVar5 = (long *)FUN_07174e44(param_2,0), plVar5 == (long *)0x0))
  goto LAB_07030230;
  iVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
  if (iVar3 != 0) {
    plVar5 = (long *)FUN_07174e44(param_2,0);
    if (plVar5 == (long *)0x0) goto LAB_07030230;
    iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (((iVar3 != 0) && (iVar3 = FUN_07174cdc(param_2,0), iVar3 != 0)) &&
       (iVar3 = FUN_07174d90(param_2,0), iVar3 != 0)) {
      lVar9 = *param_3;
      if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar9 = FUN_07030244(param_2,lVar9);
      if (lVar9 != 0) {
        uVar6 = FUN_0703032c(*(undefined8 *)(lVar9 + 0x138),param_2,*param_3);
        FUN_07030898(param_2,*param_3,1,param_4 & 1,uVar6);
        FUN_070310a4(param_1,uVar6);
        return;
      }
      goto LAB_07030230;
    }
  }
  plVar5 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,5);
  lVar9 = thunk_FUN_071c6398(param_2,0);
  if (plVar5 == (long *)0x0) {
LAB_07030230:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((lVar9 != 0) &&
     (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_07030238;
  if ((int)plVar5[3] == 0) goto LAB_07030234;
  plVar5[4] = lVar9;
  thunk_FUN_036b7ad0(plVar5 + 4,lVar9);
  plVar8 = (long *)FUN_07174e44(param_2,0);
  if (plVar8 == (long *)0x0) goto LAB_07030230;
  local_34 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
  puVar2 = PTR_DAT_079f4610;
  lVar9 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_34);
  if ((lVar9 != 0) &&
     (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_07030238;
  if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_07030234;
  plVar5[5] = lVar9;
  thunk_FUN_036b7ad0(plVar5 + 5,lVar9);
  plVar8 = (long *)FUN_07174e44(param_2,0);
  if (plVar8 == (long *)0x0) goto LAB_07030230;
  local_38 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
  lVar9 = thunk_FUN_0367fa58(*(undefined8 *)(puVar2 + 0x48),&local_38);
  if ((lVar9 != 0) &&
     (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_07030238:
    uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar6,0);
  }
  if (2 < *(uint *)(plVar5 + 3)) {
    plVar5[6] = lVar9;
    thunk_FUN_036b7ad0(plVar5 + 6,lVar9);
    local_44 = FUN_07174cdc(param_2,0);
    lVar9 = thunk_FUN_0367fa58(*(undefined8 *)(puVar2 + 0x48),&local_44);
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_07030238;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
      plVar5[7] = lVar9;
      thunk_FUN_036b7ad0(plVar5 + 7,lVar9);
      local_48 = FUN_07174d90(param_2,0);
      lVar9 = thunk_FUN_0367fa58(*(undefined8 *)(puVar2 + 0x48),&local_48);
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_07030238;
      puVar2 = OVRPlugin_OVRP_1_68_0_TypeInfo;
      if (4 < *(uint *)(plVar5 + 3)) {
        plVar5[8] = lVar9;
        thunk_FUN_036b7ad0(plVar5 + 8,lVar9);
        uVar6 = FUN_05c98bb4(*(undefined8 *)puVar2,plVar5,0);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar9);
        }
        FUN_07176120(uVar6,0);
        return;
      }
    }
  }
LAB_07030234:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


