/*
FUNCTION_NAME: FUN_05135a64
ENTRY_POINT: 05135a64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05135a64(int *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_30 [16];
  
  if ((DAT_06b79c9d & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06781538);
    FUN_02d6084c(PTR_DAT_067609b8);
    FUN_02d6084c(PTR_DAT_06781298);
    FUN_02d6084c(PTR_DAT_067812a0);
    DAT_06b79c9d = 1;
  }
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  iVar1 = *param_1;
  lVar6 = *(long *)(param_1 + 10);
  if (iVar1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar1 == 1) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_05135c38;
    }
    if (iVar1 == 2) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto OVRPlugin__GetControllerState2;
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_30 = FUN_0507b064(*(long *)(param_1 + 8),0,0);
    uVar3 = FUN_04f2d31c(local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
      thunk_FUN_02dd37b4(param_1 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e8388(param_1 + 2,local_30,param_1,*(undefined8 *)PTR_DAT_06781538);
      return;
    }
  }
  FUN_04f2d338(local_30,0);
  iVar1 = param_1[0xc];
  while( true ) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar2 = FUN_04387650(*(long *)(lVar6 + 0x58),*(undefined8 *)PTR_DAT_06781298);
    if (iVar2 <= iVar1) break;
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar5 = (long *)FUN_043876e0(*(long *)(lVar6 + 0x58),param_1[0xc],
                                  *(undefined8 *)PTR_DAT_067812a0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = (**(code **)(*plVar5 + 0x1f8))
                      (plVar5,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)(param_1 + 0x12),*(undefined8 *)(*plVar5 + 0x200));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar7 = FUN_0507b064(lVar4,0,0);
    local_30 = auVar7;
    uVar3 = FUN_04f2d31c(local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
      thunk_FUN_02dd37b4(param_1 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e8388(param_1 + 2,local_30,param_1,*(undefined8 *)PTR_DAT_06781538);
      return;
    }
LAB_05135c38:
    FUN_04f2d338(local_30,0);
    iVar1 = param_1[0xc] + 1;
    param_1[0xc] = iVar1;
  }
  plVar5 = *(long **)(param_1 + 0xe);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = (**(code **)(*plVar5 + 0x228))
                    (plVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar5 + 0x230));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar7 = FUN_0507b064(lVar6,0,0);
  local_30 = auVar7;
  uVar3 = FUN_04f2d31c(local_30,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
    thunk_FUN_02dd37b4(param_1 + 0x14,0);
    if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e8388(param_1 + 2,local_30,param_1,*(undefined8 *)PTR_DAT_06781538);
    return;
  }
OVRPlugin__GetControllerState2:
  FUN_04f2d338(local_30,0);
  *param_1 = -2;
  if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_04f2db0c(param_1 + 2,0);
  return;
}


