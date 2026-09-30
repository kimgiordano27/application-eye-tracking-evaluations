/*
FUNCTION_NAME: FUN_029bf83c
ENTRY_POINT: 029bf83c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bfa68) */

bool FUN_029bf83c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  char local_5c [4];
  long local_58;
  
  if ((DAT_04127dd4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08848);
    FUN_01ab69ac(PTR_DAT_03d08850);
    FUN_01ab69ac(PTR_DAT_03d08858);
    FUN_01ab69ac(PTR_DAT_03d07920);
    DAT_04127dd4 = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_029bee74(param_1);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = FUN_02990cd8(*(long *)(param_1 + 0x28),0);
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_02990f60(param_1,0);
      uVar9 = *(undefined8 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0xd8) = uVar4;
      local_5c[0] = '\0';
      FUN_027e0bd8(uVar9,local_5c,0);
      puVar3 = PTR_DAT_03d08858;
      puVar2 = PTR_DAT_03d07920;
      lVar8 = *(long *)(param_1 + 0x128);
      if (lVar8 == 0) {
LAB_029bfa5c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar8 + 0x18) < 1) {
        uVar5 = 0;
        iVar11 = 0;
      }
      else {
        iVar12 = 0;
        iVar1 = 0;
        do {
          iVar11 = iVar1;
          FUN_02215a88(lVar8,iVar11,&local_58,*(undefined8 *)puVar3);
          lVar8 = local_58;
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar5 = FUN_029bfaf0(param_1,*(undefined8 *)(local_58 + 0x18),
                               *(undefined4 *)(local_58 + 0x14));
          if (uVar5 == 4) goto LAB_029bf9c8;
          iVar1 = *(int *)(lVar8 + 0x14);
          if (uVar5 != 5) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_02992f5c(lVar8,0);
          }
          iVar6 = FUN_0298d04c(param_1,0);
          if ((uVar5 == 5) || (iVar12 = iVar1 + iVar12, iVar6 <= iVar12)) break;
          lVar8 = *(long *)(param_1 + 0x128);
          if (lVar8 == 0) goto LAB_029bfa5c;
          iVar1 = iVar11 + 1;
        } while (iVar11 + 1 < *(int *)(lVar8 + 0x18));
        iVar11 = iVar11 + 1;
      }
LAB_029bf9c8:
      if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02219298(*(long *)(param_1 + 0x128),0,iVar11,*(undefined8 *)PTR_DAT_03d08848);
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) - iVar11;
      if ((uVar5 & 0xfffffffe) == 4) {
        bVar10 = false;
      }
      else {
        if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar10 = 0 < *(int *)(*(long *)(param_1 + 0x128) + 0x18);
      }
      if (local_5c[0] == '\0') {
        return bVar10;
      }
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      return bVar10;
    }
  }
  return false;
}


