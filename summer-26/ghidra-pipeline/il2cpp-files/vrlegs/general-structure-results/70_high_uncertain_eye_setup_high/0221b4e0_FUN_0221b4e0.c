/*
FUNCTION_NAME: FUN_0221b4e0
ENTRY_POINT: 0221b4e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221b7e4) */
/* WARNING: Removing unreachable block (ram,0x0221b968) */

void FUN_0221b4e0(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int local_38;
  char local_34 [4];
  
  if ((DAT_04122257 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03cc1c00);
    FUN_01ab69ac(PTR_DAT_03cc1c08);
    FUN_01ab69ac(PTR_DAT_03cdbd88);
    FUN_01ab69ac(PTR_DAT_03cdbd90);
    FUN_01ab69ac(PTR_DAT_03cdbd98);
    DAT_04122257 = 1;
  }
  local_34[0] = '\0';
  local_38 = 0;
  cVar1 = *(char *)(param_1 + 0xb0);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x98) == '\0') {
      FUN_0221be04(param_1,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
      if ((param_2 != 0) && (*(long *)(param_1 + 0x120) != 0)) {
        FUN_021c7ff8(*(long *)(param_1 + 0x120),param_2,*(undefined4 *)(param_2 + 0x18),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8));
        return;
      }
      goto LAB_0221b964;
    }
    if (*(char *)(param_1 + 0x108) == '\0') {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_0221b964;
      plVar8 = *(long **)(*(long *)(param_1 + 0x90) + 0x18);
      uVar2 = FUN_029e5e84(param_1,0);
      uVar2 = FUN_025b1328(uVar2,*(undefined8 *)PTR_DAT_03cdbd90,0);
      lVar9 = *(long *)PTR_DAT_03cbec30;
      lVar5 = *(long *)(lVar9 + 0x38);
      if (lVar5 == 0) {
        FUN_01a47054(lVar9);
        lVar5 = *(long *)(lVar9 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (plVar8 == (long *)0x0) goto LAB_0221b964;
      lVar9 = *plVar8;
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0221b6c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03ccf278,2);
LAB_0221b6c0:
      (*(code *)*puVar3)(plVar8,uVar2,uVar10,puVar3[1]);
      uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
      FUN_027d737c(uVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0)
                   ,0);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
      FUN_027e22f4(lVar5,uVar2,0);
      if (lVar5 == 0) goto LAB_0221b964;
      FUN_027e2600(lVar5,0);
      uVar2 = FUN_029e5edc(param_1,0);
      uVar2 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cdbd98,uVar2,0);
      FUN_029e4c9c(lVar5,uVar2,0);
      *(undefined1 *)(param_1 + 0x108) = 1;
    }
    uVar6 = FUN_0221b408(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200))
    ;
    if ((uVar6 & 1) == 0) {
      if ((param_2 == 0) || (*(long *)(param_1 + 0x120) == 0)) goto LAB_0221b964;
      FUN_021c7ff8(*(long *)(param_1 + 0x120),param_2,*(undefined4 *)(param_2 + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8));
      iVar4 = *(int *)(param_1 + 300);
      if (iVar4 == *(int *)(param_1 + 0x128)) {
        if (*(long *)(param_1 + 0x90) == 0) {
LAB_0221b964:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar8 = *(long **)(*(long *)(param_1 + 0x90) + 0x18);
        uVar2 = FUN_029e5e84(param_1,0);
        local_38 = *(int *)(param_1 + 300) + 1;
        uVar10 = FUN_0276793c(&local_38,0);
        uVar2 = FUN_025bdc88(uVar2,*(undefined8 *)PTR_DAT_03cdbd88,uVar10,0);
        lVar9 = *(long *)PTR_DAT_03cbec30;
        lVar5 = *(long *)(lVar9 + 0x38);
        if (lVar5 == 0) {
          FUN_01a47054(lVar9);
          lVar5 = *(long *)(lVar9 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01a46ff8();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01a46ff8();
        }
        if (plVar8 == (long *)0x0) goto LAB_0221b964;
        lVar9 = *plVar8;
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03ccf278) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0221b938;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03ccf278,1);
LAB_0221b938:
        (*(code *)*puVar3)(plVar8,uVar2,uVar10,puVar3[1]);
        iVar4 = *(int *)(param_1 + 300);
        *(int *)(param_1 + 0x128) = iVar4 + 10;
      }
      *(int *)(param_1 + 300) = iVar4 + 1;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x110);
      local_34[0] = '\0';
      FUN_027e0bd8(uVar2,local_34,0);
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02265dfc(*(long *)(param_1 + 0x110),param_2,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0));
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
      }
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_0221b964;
      FUN_027de940(*(long *)(param_1 + 0x118),0);
    }
  }
  return;
}


