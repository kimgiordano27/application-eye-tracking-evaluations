/*
FUNCTION_NAME: FUN_029932ec
ENTRY_POINT: 029932ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029934cc) */

void FUN_029932ec(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char local_34 [4];
  
  if ((DAT_04127cdf & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07b68);
    FUN_01ab69ac(PTR_DAT_03d07ad8);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_04127cdf = 1;
  }
  local_34[0] = '\0';
  if ((*(long *)(param_1 + 0xc0) == 0) ||
     (uVar3 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0), param_2 == 0)) goto LAB_029934c8;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  if (*(int *)(param_2 + 0x44) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_029934c8;
    iVar4 = *(int *)(param_1 + 0x74);
    iVar5 = *(int *)(param_1 + 0x78);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x74);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0276c214(iVar4 + iVar5 * 4,uVar3,0);
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_029934c8;
    iVar4 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_029934c8;
    iVar5 = FUN_0299e92c(*(long *)(param_1 + 0x10),0);
    *(int *)(param_2 + 0x48) = iVar5 + iVar4;
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_029934c8;
    bVar1 = *(byte *)(param_2 + 0x40);
    bVar2 = FUN_0299e808(*(long *)(param_1 + 0x10),0);
    if (bVar1 <= bVar2) {
      if (*(long *)(param_1 + 0x128) == 0) goto LAB_029934c8;
      if (*(int *)(*(long *)(param_1 + 0x128) + 0x18) < 0x19) goto LAB_0299341c;
    }
    *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) << 1;
  }
LAB_0299341c:
  *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
  iVar4 = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x3c);
  if (iVar4 < *(int *)(param_1 + 200)) {
    *(int *)(param_1 + 200) = iVar4;
  }
  if ((param_3 & 1) == 0) {
    lVar6 = FUN_0298d23c(param_1,*(undefined1 *)(param_2 + 0x12));
    if (lVar6 == 0) {
LAB_029934c8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar6 + 0x6c) = *(int *)(lVar6 + 0x6c) + 1;
    uVar7 = *(undefined8 *)(param_1 + 0x128);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar7,local_34,0);
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(param_1 + 0x128),param_2,*(undefined8 *)PTR_DAT_03d07b68);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
  }
  return;
}


