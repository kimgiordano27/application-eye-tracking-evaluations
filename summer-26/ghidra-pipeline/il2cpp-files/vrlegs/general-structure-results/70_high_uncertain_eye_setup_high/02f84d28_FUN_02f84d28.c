/*
FUNCTION_NAME: FUN_02f84d28
ENTRY_POINT: 02f84d28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f84fb4) */
/* WARNING: Removing unreachable block (ram,0x02f85460) */
/* WARNING: Removing unreachable block (ram,0x02f85308) */

void FUN_02f84d28(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int local_74;
  char local_70 [4];
  char local_6c [4];
  long *local_68;
  
  if ((DAT_0412ad2d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d255b0);
    FUN_01ab69ac(PTR_DAT_03d255b8);
    FUN_01ab69ac(PTR_DAT_03d255c0);
    FUN_01ab69ac(PTR_DAT_03d255c8);
    FUN_01ab69ac(PTR_DAT_03d255d0);
    FUN_01ab69ac(PTR_DAT_03d255d8);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03d254e0);
    FUN_01ab69ac(PTR_DAT_03d25118);
    FUN_01ab69ac(PTR_DAT_03cfce78);
    DAT_0412ad2d = 1;
  }
  local_70[0] = '\0';
  local_74 = 0;
  lVar11 = FUN_027df29c(0);
  puVar4 = PTR_DAT_03d25118;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027e3114(lVar11,1,0);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar4;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  local_6c[0] = '\0';
  FUN_027e0bd8(uVar12,local_6c,0);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar4;
  }
  iVar9 = thunk_FUN_01aa519c(*(long *)(lVar11 + 0xb8) + 0x10,1,1,0);
  puVar8 = PTR_DAT_03d255c8;
  puVar7 = PTR_DAT_03d255c0;
  puVar6 = PTR_DAT_03d255b8;
  puVar5 = PTR_DAT_03d255b0;
  puVar3 = PTR_DAT_03cfce78;
  if (iVar9 == 1) {
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar4;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de7f8(lVar11,0);
    do {
      do {
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar11 = *(long *)puVar4;
        }
        lVar16 = *(long *)(lVar11 + 0xb8);
        if (*(long *)(lVar16 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (0 < *(int *)(*(long *)(lVar16 + 8) + 0x18)) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          uVar17 = *(undefined8 *)(lVar16 + 8);
          local_70[0] = '\0';
          FUN_027e0bd8(uVar17,local_70,0);
          lVar11 = *(long *)puVar4;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar11 = *(long *)puVar4;
          }
          lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          while (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar11 = *(long *)puVar4;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02211adc(lVar11,lVar16,*(undefined8 *)puVar8);
            if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02210f18(**(long **)(*(long *)puVar4 + 0xb8),lVar16,*(undefined8 *)puVar7);
            lVar11 = *(long *)puVar4;
            lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
          }
          if (local_70[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar17,0);
          }
        }
        iVar9 = thunk_FUN_01a4a380(0);
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)puVar4;
        }
        if (**(long **)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar2 = false;
        iVar18 = 0;
        lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x10);
        while (lVar11 != 0) {
          FUN_01ea4674(lVar11,&local_68,*(undefined8 *)puVar6);
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar13 = (long *)(**(code **)(*local_68 + 0x198))
                                      (local_68,*(undefined8 *)(*local_68 + 0x1a0));
          if (plVar13 == (long *)0x0) {
            lVar16 = FUN_0220fecc(lVar11,*(undefined8 *)puVar5);
            lVar14 = *(long *)puVar4;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar4;
            }
            if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02211adc(**(long **)(lVar14 + 0xb8),lVar11,*(undefined8 *)puVar8);
            lVar11 = lVar16;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d254e0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0();
            }
            uVar15 = FUN_02f85510(plVar13,&local_74);
            iVar10 = local_74;
            if ((uVar15 & 1) != 0) {
              if (bVar2) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (iVar9 <= iVar18 == (iVar10 < iVar9 != iVar18 <= iVar10)) {
                  bVar2 = true;
                  goto LAB_02f850ec;
                }
              }
              bVar2 = true;
              iVar18 = iVar10;
            }
LAB_02f850ec:
            lVar11 = FUN_0220fecc(lVar11,*(undefined8 *)puVar5);
          }
        }
        iVar10 = thunk_FUN_01a4a380(0);
        if (bVar2) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (iVar9 <= iVar18 == (iVar10 < iVar9 != (iVar18 - iVar10 == 0 || iVar18 < iVar10))) {
            iVar9 = 0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar9 = FUN_0276c26c(iVar18 - iVar10,0x7ffffff0,0);
            iVar9 = iVar9 + 0xf;
          }
        }
        else {
          iVar9 = 30000;
        }
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)puVar4;
        }
        uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        iVar9 = FUN_027e6630(uVar17,iVar9,0,0);
        if (iVar9 == 0) goto LAB_02f853fc;
      } while (bVar2 || iVar9 != 0x102);
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      thunk_FUN_01aa519c(*(long *)(lVar11 + 0xb8) + 0x10,0,1,0);
      plVar13 = *(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar15 = (**(code **)(*plVar13 + 0x1b8))(plVar13,0,0,*(undefined8 *)(*plVar13 + 0x1c0));
      if ((uVar15 & 1) == 0) break;
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      iVar9 = thunk_FUN_01aa519c(*(long *)(lVar11 + 0xb8) + 0x10,1,0,0);
    } while (iVar9 == 0);
  }
LAB_02f853fc:
  if (local_6c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
  }
  return;
}


