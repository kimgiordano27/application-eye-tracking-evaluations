/*
FUNCTION_NAME: FUN_02d85e58
ENTRY_POINT: 02d85e58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02d8610c) */

long FUN_02d85e58(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined4 local_44;
  undefined4 local_38;
  char local_34 [4];
  
  if ((DAT_04129cee & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    DAT_04129cee = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar3 = thunk_FUN_01a89e68();
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d151c0);
    FUN_026a44fc(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d1b748);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,uVar4);
  }
  uVar3 = FUN_02d82234(param_1);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar3,local_34,0);
  plVar9 = *(long **)(param_1 + 0x20);
  local_38 = FUN_02d77f98(param_2,0);
  puVar1 = PTR_DAT_03cbeda8;
  uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_38);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar4,uVar4);
  }
  uVar5 = (**(code **)(*plVar9 + 0x348))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x350));
  if ((uVar5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      FUN_02d86ec8(param_1,param_2);
      FUN_02d87958(param_1,param_2);
    }
    plVar9 = *(long **)(param_1 + 0x20);
    local_44 = FUN_02d77f98(param_2,0);
    uVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_44);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar4,uVar4);
    }
    (**(code **)(*plVar9 + 0x418))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x420));
    uVar4 = *(undefined8 *)(param_2 + 0xd0);
    if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_02e9fa38(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = (**(code **)(*plVar9 + 0x3a8))
                        (plVar9,*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(*plVar9 + 0x3b0));
    }
    uVar4 = FUN_02d85d5c(uVar5,param_2);
    plVar9 = (long *)FUN_02d87f8c(param_1,uVar4);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ccbd08) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02d86048;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03ccbd08,1);
LAB_02d86048:
    iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if (iVar2 == 0) {
      plVar9 = *(long **)(param_1 + 0x50);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar9 + 0x3a8))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x3b0));
    }
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return param_2;
}


