/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraName
ENTRY_POINT: 05167dc8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraName(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((DAT_06b79e72 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067677e0);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067657d0);
    FUN_02d6084c(PTR_DAT_0677d878);
    FUN_02d6084c(PTR_DAT_067616f8);
    FUN_02d6084c(PTR_DAT_06767820);
    FUN_02d6084c(PTR_DAT_06782548);
    DAT_06b79e72 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  uVar4 = 0;
  switch(uVar2) {
  case 7:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    puVar1 = PTR_DAT_067677e0;
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_067677e0)) {
      uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      uVar4 = FUN_04f898a8(uVar4,uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
      }
      uVar4 = FUN_0566fcd8(uVar4,0);
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_02d9d688();
      in_stack_00000018 = puVar8[1];
      in_stack_00000010 = *puVar8;
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
      uVar4 = FUN_05475c4c(&stack0x00000010,uVar4,0);
    }
    break;
  case 8:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_06767820)) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(PTR_DAT_0675e258 + 0x78))) {
        uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
        }
        uVar10 = FUN_04f8e414(0);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
        }
        uVar4 = FUN_04f8a60c(uVar4,uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0566ff24(uVar4,0);
      }
      else {
        puVar9 = (undefined4 *)thunk_FUN_02d9d688();
        uVar2 = *puVar9;
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0566fdb4(uVar2,0);
      }
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_02d9d688();
      uVar4 = *puVar8;
      uVar10 = puVar8[1];
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_0566fbb8(uVar4,uVar10,0);
    }
    break;
  case 9:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    break;
  case 10:
    uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar10 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar3 = FUN_04f87018(uVar4,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    uVar4 = FUN_0566fb14(uVar3 & 1,0);
    break;
  case 0xb:
    break;
  default:
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar4 = FUN_04f8e414(0);
    FUN_028f4e40(param_1);
    uStack000000000000000c =
         (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
    uVar10 = thunk_FUN_02d9d164(uVar10,&stack0x0000000c);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_067826d8);
    uVar4 = FUN_050f0ec0(uVar11,uVar4,uVar10,0);
    uVar4 = FUN_050924a8(param_1,uVar4,0);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067826e0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar10);
  case 0x10:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_067657d0)) {
      uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
      }
      uVar10 = FUN_04f8e414(0);
      if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      }
      uVar4 = FUN_04f8acb8(uVar4,uVar10,0);
      in_stack_00000028 = uVar4;
      if (*(int *)(*(long *)PTR_DAT_067616f8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067616f8);
      }
      uVar2 = FUN_04fe58d0(&stack0x00000028,0);
      if (*(int *)(*(long *)PTR_DAT_0677d878 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d878);
      }
      uVar2 = FUN_050deb54(uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
      }
      uVar4 = FUN_0567011c(uVar4,uVar2,0);
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_02d9d688();
      uVar4 = *puVar8;
      uVar10 = puVar8[1];
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = System_Net_CommandStream__ReceiveCommandResponse(uVar4,uVar10,0);
    }
    break;
  case 0x11:
    lVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
      if (lVar6 != 0) goto LAB_0516827c;
LAB_051682b0:
      lVar7 = 0;
    }
    else {
      if (lVar6 == 0) goto LAB_051682b0;
LAB_0516827c:
      uVar4 = *(undefined8 *)PTR_DAT_0675e1c0;
      lVar7 = thunk_FUN_02d9d438(lVar6,uVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(lVar6,uVar4);
      }
    }
    uVar4 = FUN_04f8ba5c(lVar7,0);
  }
  return uVar4;
}


