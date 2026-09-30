/*
FUNCTION_NAME: FUN_029bf4d0
ENTRY_POINT: 029bf4d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x029bf798) */

uint FUN_029bf4d0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char local_50 [4];
  char local_4c [4];
  long local_48;
  long local_38;
  
  if ((DAT_04127dd3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079d8);
    FUN_01ab69ac(PTR_DAT_03d07920);
    FUN_01ab69ac(PTR_DAT_03d07b50);
    FUN_01ab69ac(PTR_DAT_03d07a50);
    FUN_01ab69ac(PTR_DAT_03d07a60);
    FUN_01ab69ac(PTR_DAT_03d07b58);
    DAT_04127dd3 = 1;
  }
  local_50[0] = '\0';
  if ((char)param_1[8] == '\x03') {
    iVar2 = FUN_02990f60(param_1,0);
    lVar8 = param_1[0x11];
    iVar3 = FUN_02993cf8(param_1,0);
    if (iVar3 < iVar2 - (int)lVar8) {
      FUN_0298e1e4(param_1,0x410,0);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d079d8);
      FUN_0299c3f0(uVar4,param_1,*(undefined8 *)(*param_1 + 0x1d0),0);
      FUN_02994f0c(param_1,uVar4,0);
    }
  }
  puVar1 = PTR_DAT_03d07a50;
  lVar8 = 0;
  while( true ) {
    lVar7 = param_1[0xc];
    local_4c[0] = '\0';
    FUN_027e0bd8(lVar7,local_4c,0);
    lVar5 = param_1[0xc];
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar5 + 0x20) < 1) {
      iVar2 = 8;
    }
    else {
      FUN_022661a4(lVar5,&local_48,*(undefined8 *)puVar1);
      iVar2 = 9;
      lVar8 = local_48;
    }
    if (local_4c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
    }
    if ((iVar2 != 0) && (iVar2 != 9)) break;
    if (lVar8 == 0) {
LAB_029bf7a0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  }
  if (iVar2 == 8) {
    lVar5 = param_1[0x24];
    local_50[0] = '\0';
    FUN_027e0bd8(lVar5,local_50,0);
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar8 + 0x20) < 1) {
      lVar8 = 0;
      iVar2 = 0xb;
    }
    else {
      FUN_022661a4(lVar8,&local_38,*(undefined8 *)PTR_DAT_03d07b50);
      iVar2 = 0xc;
      lVar8 = local_38;
    }
    if (local_50[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
    }
    if ((iVar2 == 0xc) || (iVar2 == 0)) {
      if (lVar8 == 0) goto LAB_029bf7a0;
      *(int *)(param_1 + 9) = *(int *)(lVar8 + 0x14) + 3;
      uVar6 = (**(code **)(*param_1 + 600))(param_1,lVar8,*(undefined8 *)(*param_1 + 0x260));
      param_1 = (long *)(uVar6 & 0xffffffff);
      if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d07920);
      }
      FUN_02992f5c(lVar8,0);
    }
    else {
      param_1 = (long *)0x0;
    }
  }
  return (uint)param_1 & 1;
}


