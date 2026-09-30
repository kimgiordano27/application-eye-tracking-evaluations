/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 063ab8e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(long *param_1)

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
  
  if ((DAT_0825c6b0 & 1) == 0) {
                    /* try { // try from 063ab908 to 064ab97b has its CatchHandler @ 063ab908
                       catch() { ... } // from try @ 063ab908 with catch @ 063ab908
                       catch() { ... } // from try @ 063ab990 with catch @ 063ab908
                       catch() { ... } // from try @ 063aba04 with catch @ 063ab908 */
    FUN_0373b518(PTR_DAT_07d95b18);
    FUN_0373b518(PTR_DAT_07d867b8);
    FUN_0373b518(PTR_DAT_07d89e28);
    FUN_0373b518(PTR_DAT_07d88078);
    FUN_0373b518(PTR_DAT_07d95b58);
    FUN_0373b518(PTR_DAT_07db2100);
    FUN_0373b518(PTR_DAT_07d89f60);
    FUN_0373b518(PTR_DAT_07d91f30);
    FUN_0373b518(PTR_DAT_07db6d58);
    DAT_0825c6b0 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  uVar4 = 0;
  switch(uVar2) {
  case 7:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    puVar1 = PTR_DAT_07d95b18;
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_07d95b18)) {
      uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar10 = FUN_061d52c8(0);
      if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      }
      uVar4 = FUN_061b44a8(uVar4,uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07db6d58);
      }
      uVar4 = FUN_06a0f73c(uVar4,0);
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_03778a20();
      in_stack_00000018 = puVar8[1];
      in_stack_00000010 = *puVar8;
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar4 = FUN_061d52c8(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar1);
      }
      uVar4 = FUN_068156b0(&stack0x00000010,uVar4,0);
    }
    break;
  case 8:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_07d91f30)) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(PTR_DAT_07d86548 + 0x78))) {
        uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
        }
        uVar10 = FUN_061d52c8(0);
        if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
        }
        uVar4 = FUN_061b5284(uVar4,uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_06a0f988(uVar4,0);
      }
      else {
        puVar9 = (undefined4 *)thunk_FUN_03778a20();
        uVar2 = *puVar9;
        if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_06a0f818(uVar2,0);
      }
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_03778a20();
      uVar4 = *puVar8;
      uVar10 = puVar8[1];
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar4 = FUN_06a0f61c(uVar4,uVar10,0);
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
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
    }
    uVar10 = FUN_061d52c8(0);
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
    }
    uVar3 = FUN_061b1c0c(uVar4,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07db6d58);
    }
    uVar4 = FUN_06a0f578(uVar3 & 1,0);
    break;
  case 0xb:
    break;
  default:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar4 = FUN_061d52c8(0);
    FUN_031a5e18(param_1);
    uStack000000000000000c =
         (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
    uVar10 = thunk_FUN_037784fc(uVar10,&stack0x0000000c);
    uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6eb8);
    uVar4 = FUN_063349e4(uVar11,uVar4,uVar10,0);
    uVar4 = FUN_062d5fcc(param_1,uVar4,0);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ec0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar10);
  case 0x10:
    plVar5 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)PTR_DAT_07d95b58)) {
      uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar10 = FUN_061d52c8(0);
      if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      }
      uVar4 = FUN_061b5930(uVar4,uVar10,0);
      in_stack_00000028 = uVar4;
      if (*(int *)(*(long *)PTR_DAT_07d89f60 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89f60);
      }
      uVar2 = FUN_06220de0(&stack0x00000028,0);
      if (*(int *)(*(long *)PTR_DAT_07db2100 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07db2100);
      }
      uVar2 = FUN_06322678(uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07db6d58);
      }
      uVar4 = FUN_06a0fb80(uVar4,uVar2,0);
    }
    else {
      puVar8 = (undefined8 *)thunk_FUN_03778a20();
      uVar4 = *puVar8;
      uVar10 = puVar8[1];
      if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar4 = FUN_06a0ff68(uVar4,uVar10,0);
    }
    break;
  case 0x11:
    lVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      if (lVar6 != 0) goto LAB_063abda0;
LAB_063abdd4:
      lVar7 = 0;
    }
    else {
      if (lVar6 == 0) goto LAB_063abdd4;
LAB_063abda0:
      uVar4 = *(undefined8 *)PTR_DAT_07d867b8;
      lVar7 = thunk_FUN_037787d0(lVar6,uVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(lVar6,uVar4);
      }
    }
    uVar4 = FUN_061b684c(lVar7,0);
  }
  return uVar4;
}


