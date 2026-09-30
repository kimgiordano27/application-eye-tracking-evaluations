/*
FUNCTION_NAME: FUN_029bf194
ENTRY_POINT: 029bf194
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bf31c) */
/* WARNING: Removing unreachable block (ram,0x029bf3f8) */

undefined4 FUN_029bf194(long param_1,undefined4 param_2,long param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 local_44;
  char local_38 [4];
  undefined4 local_34;
  
  if ((DAT_04127dd5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08828);
    FUN_01ab69ac(PTR_DAT_03cca318);
    DAT_04127dd5 = 1;
  }
  local_34 = 0;
  local_38[0] = '\0';
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x148) != '\0') {
      lVar9 = *(long *)(param_3 + 0x18);
      local_34 = 1;
      uVar8 = *(undefined4 *)(param_3 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_029a25d0(uVar8,lVar9,&local_34,0);
      if (lVar9 == 0) goto LAB_029bf3f4;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < 6) {
LAB_029bf3f0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined1 *)(lVar9 + 0x25) = param_4;
      switch(param_2) {
      case 0:
        if (uVar1 < 7) goto LAB_029bf3f0;
        uVar7 = 0;
        break;
      case 1:
        if (uVar1 < 7) goto LAB_029bf3f0;
        uVar7 = 1;
        break;
      case 2:
        if (uVar1 < 7) goto LAB_029bf3f0;
        uVar7 = 2;
        break;
      case 3:
        if (uVar1 < 7) goto LAB_029bf3f0;
        uVar7 = 3;
        break;
      default:
        local_44 = param_2;
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d08830);
        uVar4 = thunk_FUN_01a89a98(uVar4,&local_44);
        thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
        uVar5 = thunk_FUN_01a89e68();
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d08838);
        FUN_026af104(uVar5,uVar6,uVar4,0,0);
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d08840);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar4);
      }
      *(undefined1 *)(lVar9 + 0x26) = uVar7;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    local_38[0] = '\0';
    FUN_027e0bd8(uVar4,local_38,0);
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(param_1 + 0x128),param_3,*(undefined8 *)PTR_DAT_03d08828);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    if (local_38[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    iVar2 = *(int *)(param_3 + 0x14);
    *(int *)(param_1 + 0x44) = iVar2;
    uVar3 = FUN_0298d310(param_1,0);
    if ((uVar3 & 1) != 0) {
      switch(param_2) {
      case 0:
      case 2:
        lVar9 = FUN_0298d32c(param_1,0);
        if (lVar9 == 0) goto LAB_029bf3f4;
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + iVar2;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
        break;
      case 1:
      case 3:
        lVar9 = FUN_0298d32c(param_1,0);
        if (lVar9 == 0) goto LAB_029bf3f4;
        *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + iVar2;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      }
      lVar9 = FUN_02992bcc(param_1,0);
      if (lVar9 == 0) {
LAB_029bf3f4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + iVar2;
      *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    }
    uVar8 = 1;
  }
  return uVar8;
}


