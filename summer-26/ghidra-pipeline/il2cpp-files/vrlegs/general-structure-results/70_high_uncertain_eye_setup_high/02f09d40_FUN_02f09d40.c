/*
FUNCTION_NAME: FUN_02f09d40
ENTRY_POINT: 02f09d40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0a13c) */

void FUN_02f09d40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  char local_54 [4];
  long *local_48;
  
  puVar4 = PTR_DAT_03d22248;
  if ((DAT_0412a8ff & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    FUN_01ab69ac(PTR_DAT_03d22260);
    FUN_01ab69ac(PTR_DAT_03d139c0);
    FUN_01ab69ac(PTR_DAT_03d22268);
    FUN_01ab69ac(PTR_DAT_03d22270);
    FUN_01ab69ac(PTR_DAT_03d22278);
    FUN_01ab69ac(PTR_DAT_03d139d0);
    FUN_01ab69ac(PTR_DAT_03d139d8);
    FUN_01ab69ac(PTR_DAT_03d13a08);
    FUN_01ab69ac(PTR_DAT_03d22248);
    DAT_0412a8ff = 1;
  }
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar4;
  }
  uVar11 = **(undefined8 **)(lVar7 + 0xb8);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar11,local_54,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_03cc4f10;
  iVar12 = *(int *)(*(long *)(lVar7 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_03cc4f10 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4f10);
  }
  iVar5 = FUN_027a9460(2,0);
  if (iVar12 != iVar5) {
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined4 *)(**(long **)(lVar7 + 0xb8) + 0x18);
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d13a08);
    FUN_02215594(lVar7,uVar6,*(undefined8 *)PTR_DAT_03d22278);
    puVar3 = PTR_DAT_03d139d8;
    puVar2 = PTR_DAT_03d139c0;
    iVar12 = 0;
    while( true ) {
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar10 = *(long *)puVar4;
      }
      lVar13 = **(long **)(lVar10 + 0xb8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar13 + 0x18) <= iVar12) break;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      FUN_02215a88(lVar13,iVar12,&local_48,*(undefined8 *)puVar3);
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar8 = (long *)(**(code **)(*local_48 + 0x198))(local_48,*(undefined8 *)(*local_48 + 0x1a0))
      ;
      if (plVar8 != (long *)0x0) {
        lVar10 = *(long *)puVar4;
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
            lVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)puVar4;
        }
        if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(**(long **)(lVar10 + 0xb8),iVar12,&local_48,*(undefined8 *)puVar3);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01b5f01c(lVar7,local_48,*(undefined8 *)puVar2);
      }
      iVar12 = iVar12 + 1;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar12 = *(int *)(lVar7 + 0x18);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
      lVar10 = *(long *)puVar4;
      lVar13 = **(long **)(lVar10 + 0xb8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    if (iVar12 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar10);
        lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      lVar10 = *(long *)PTR_DAT_03d22268;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
      }
      else {
        iVar12 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        if (0 < iVar12) {
          FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar12,0);
        }
      }
      if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02216540(**(long **)(*(long *)puVar4 + 0xb8),lVar7,*(undefined8 *)PTR_DAT_03d22260);
      if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02219654(**(long **)(*(long *)puVar4 + 0xb8),*(undefined8 *)PTR_DAT_03d22270);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_027a9460(2,0);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar6;
  }
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  return;
}


