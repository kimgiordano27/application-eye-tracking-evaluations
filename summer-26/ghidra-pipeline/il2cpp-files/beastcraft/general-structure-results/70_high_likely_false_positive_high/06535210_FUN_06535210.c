/*
FUNCTION_NAME: FUN_06535210
ENTRY_POINT: 06535210
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_06535210(long *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long *plStack_68;
  
  puVar3 = PTR_DAT_06a2ed80;
  if ((bRam0000000006e9d16d & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a5cf80);
    FUN_02e3ca1c(PTR_DAT_06a6d0f8);
    FUN_02e3ca1c(PTR_DAT_06a6d100);
    FUN_02e3ca1c(PTR_DAT_06a6d108);
    FUN_02e3ca1c(Method_Modules_Core_ComponentPool<DiamondPurchaseButton>_Get__);
    FUN_02e3ca1c(PTR_DAT_06a66670);
    FUN_02e3ca1c(PTR_DAT_06a6d120);
    FUN_02e3ca1c(PTR_DAT_06a6d128);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a3c0c8);
    bRam0000000006e9d16d = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar8 = FUN_062696b0(param_1,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (param_1 == (long *)0x0) {
VoxelPlay_VoxelPlayPostProcessing__OnDisable:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar9 = FUN_06264e10(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*(long *)puVar3);
  }
  uVar8 = FUN_062696b0(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_06a6d108 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar10 = FUN_04b9ab5c(*(undefined8 *)PTR_DAT_06a6d0f8);
  plVar11 = (long *)thunk_FUN_06277a10(param_1,0);
  puVar7 = Method_Modules_Core_ComponentPool<DiamondPurchaseButton>_Get__;
  puVar6 = PTR_DAT_06a6d128;
  puVar5 = PTR_DAT_06a5cf80;
  puVar4 = PTR_DAT_06a2f000;
  plStack_68 = param_1;
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)PTR_DAT_06a3c0c8) {
    plVar11 = (long *)0x0;
  }
LAB_065353c4:
  do {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_062696b0(plVar11,0,0);
    if ((uVar8 & 1) != 0) break;
    if (plVar11 == (long *)0x0) goto VoxelPlay_VoxelPlayPostProcessing__OnDisable;
    uVar9 = FUN_06264e10(plVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)puVar3);
    }
    uVar8 = FUN_062696b0(uVar9,0,0);
    if ((uVar8 & 1) != 0) break;
    uVar9 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar9 = FUN_05614e08(uVar9,0);
    thunk_FUN_062652f8(plVar11,uVar9,lVar10,0);
    if (lVar10 == 0) goto VoxelPlay_VoxelPlayPostProcessing__OnDisable;
    bVar1 = 0 < *(int *)(lVar10 + 0x18);
    plVar12 = plStack_68;
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar13 = 0;
      do {
        plVar12 = (long *)FUN_03f2b33c(lVar10,iVar13,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)puVar3);
        }
        uVar8 = FUN_06267b6c(plVar12,0,0);
        if (((uVar8 & 1) != 0) && (plVar12 != (long *)0x0)) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             ((*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5 &&
              (uVar8 = FUN_062645f8(plVar12,0), plVar12 = plVar11, (uVar8 & 1) != 0)))) break;
        }
        iVar13 = iVar13 + 1;
        bVar1 = iVar13 < *(int *)(lVar10 + 0x18);
        plVar12 = plStack_68;
      } while (iVar13 < *(int *)(lVar10 + 0x18));
    }
    plStack_68 = plVar12;
    plVar11 = (long *)thunk_FUN_06277a10(plVar11,0);
    if (plVar11 != (long *)0x0) {
      if (*plVar11 != *(long *)PTR_DAT_06a3c0c8) {
        plVar11 = (long *)0x0;
      }
      if (!bVar1) break;
      goto LAB_065353c4;
    }
    plVar11 = (long *)0x0;
  } while (bVar1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar8 = FUN_062696b0(plStack_68,param_1,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06a66670 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_0653a9b0(plStack_68,lVar10);
    if ((uVar8 & 1) == 0) goto LAB_065355b8;
  }
  if (*(int *)(*(long *)PTR_DAT_06a66670 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_0653ab98(plStack_68);
LAB_065355b8:
  if (*(int *)(*(long *)PTR_DAT_06a6d108 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_04b9acc4(lVar10,*(undefined8 *)PTR_DAT_06a6d100);
  return;
}


