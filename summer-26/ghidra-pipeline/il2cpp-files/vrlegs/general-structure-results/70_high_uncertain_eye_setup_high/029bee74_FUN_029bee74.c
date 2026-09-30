/*
FUNCTION_NAME: FUN_029bee74
ENTRY_POINT: 029bee74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bf104) */
/* WARNING: Type propagation algorithm not settling */

void FUN_029bee74(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint local_3c;
  undefined4 local_38;
  char local_34 [4];
  
  if ((DAT_04127dd6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d07920);
    FUN_01ab69ac(PTR_DAT_03d07e10);
    FUN_01ab69ac(PTR_DAT_03cca318);
    DAT_04127dd6 = 1;
  }
  local_34[0] = '\0';
  local_38 = 0;
  iVar2 = FUN_02990f60(param_1,0);
  iVar5 = *(int *)(param_1 + 0x130);
  iVar3 = FUN_029922bc(param_1,0);
  if ((iVar3 <= iVar2 - iVar5) &&
     ((*(char *)(param_1 + 0x40) == '\x03' ||
      ((*(char *)(param_1 + 0x40) == '\x01' && (*(char *)(param_1 + 0x149) == '\0')))))) {
    uVar4 = FUN_02990f60(param_1,0);
    *(uint *)(param_1 + 0x130) = uVar4;
    if (*(char *)(param_1 + 0x148) == '\0') {
      uVar10 = *(undefined8 *)(param_1 + 0x140);
      local_34[0] = '\0';
      FUN_027e0bd8(uVar10,local_34,0);
      lVar6 = *(long *)(param_1 + 0x140);
      local_3c = uVar4;
      uVar9 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_3c);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02999124(lVar6,1,uVar9,0);
      puVar1 = PTR_DAT_03d07e10;
      lVar6 = *(long *)PTR_DAT_03d07e10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = FUN_0299a22c(param_1,*(undefined1 *)(*(long *)(lVar6 + 0xb8) + 4),
                           *(undefined8 *)(param_1 + 0x140),6,0,0);
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
      }
    }
    else {
      local_38 = 1;
      uVar9 = *(undefined8 *)(param_1 + 0x138);
      if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_029a25d0(uVar4,uVar9,&local_38,0);
      if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar6 = FUN_02992d88(0);
      lVar8 = *(long *)(param_1 + 0x138);
      if ((lVar8 == 0) || (lVar6 == 0)) goto LAB_029bf100;
      FUN_029b3ef8(lVar6,lVar8,0,*(undefined4 *)(lVar8 + 0x18));
    }
    uVar7 = FUN_0298d310(param_1,0);
    if ((uVar7 & 1) == 0) {
      if (lVar6 == 0) goto LAB_029bf100;
    }
    else {
      lVar8 = FUN_0298d32c(param_1,0);
      if ((lVar6 == 0) || (lVar8 == 0)) {
LAB_029bf100:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + *(int *)(lVar6 + 0x14);
      *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
    }
    iVar5 = FUN_029bfaf0(param_1,*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x14));
    if (iVar5 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02992f5c(lVar6,0);
    }
  }
  return;
}


