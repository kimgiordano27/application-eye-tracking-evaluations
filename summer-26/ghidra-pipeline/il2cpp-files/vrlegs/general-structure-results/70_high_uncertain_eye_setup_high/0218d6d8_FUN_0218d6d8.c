/*
FUNCTION_NAME: FUN_0218d6d8
ENTRY_POINT: 0218d6d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0218d8b8) */
/* WARNING: Removing unreachable block (ram,0x0218d954) */

void FUN_0218d6d8(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  char local_34 [4];
  
  if ((DAT_041220db & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb478);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03cdb480);
    FUN_01ab69ac(PTR_DAT_03cdb488);
    DAT_041220db = 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar9,local_34,0);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar5 = (long *)FUN_0218d024(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30))
  ;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(plVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_0218d81c:
    bVar1 = false;
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar2 = FUN_036d3364(plVar5,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = FUN_036d3364(param_1,0);
    if (iVar2 == iVar3) goto LAB_0218d81c;
    lVar4 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cdb478) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0218d87c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cdb478,0);
LAB_0218d87c:
    (*(code *)*puVar7)(plVar5,param_1,puVar7[1]);
    bVar1 = true;
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  if (bVar1) {
    if (param_1 == 0) {
LAB_0218d95c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar9 = FUN_036cbbbc(param_1,0);
    uVar6 = FUN_01cc0870(uVar9,0,1,0);
    if ((uVar6 & 1) == 0) {
      lVar4 = FUN_036cbbbc(param_1,0);
      if (lVar4 == 0) goto LAB_0218d95c;
      uVar9 = FUN_036d3824(lVar4,0);
      uVar9 = FUN_025bdc88(*(undefined8 *)PTR_DAT_03cdb480,uVar9,*(undefined8 *)PTR_DAT_03cdb488,0);
      FUN_01cbdf68(uVar9,0);
      FUN_01cc0870(param_1,0,0,0);
    }
  }
  return;
}


