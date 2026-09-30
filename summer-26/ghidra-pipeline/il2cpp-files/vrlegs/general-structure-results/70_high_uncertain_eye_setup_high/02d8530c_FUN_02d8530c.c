/*
FUNCTION_NAME: FUN_02d8530c
ENTRY_POINT: 02d8530c
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


/* WARNING: Removing unreachable block (ram,0x02d85c20) */
/* WARNING: Removing unreachable block (ram,0x02d85b98) */

byte FUN_02d8530c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  byte bVar17;
  long *plVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 local_6c;
  undefined4 local_68;
  char local_64 [4];
  
  if ((DAT_04129ce3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf900);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03d1a260);
    FUN_01ab69ac(PTR_DAT_03d15248);
    FUN_01ab69ac(PTR_DAT_03d1b728);
    DAT_04129ce3 = 1;
  }
  puVar1 = PTR_DAT_03cbeda8;
  local_64[0] = '\0';
  if (param_2 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1b730);
    FUN_026a44fc(uVar5,uVar7,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1b738);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar7);
  }
  plVar18 = *(long **)(param_1 + 0x20);
  local_68 = FUN_02d77f98(param_2,0);
  uVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_68);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = (**(code **)(*plVar18 + 0x348))(plVar18,uVar5,*(undefined8 *)(*plVar18 + 0x350));
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_02d82234(param_1);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar5,local_64,0);
  plVar18 = *(long **)(param_1 + 0x20);
  local_6c = FUN_02d77f98(param_2,0);
  uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&local_6c);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar7,uVar7);
  }
  uVar6 = (**(code **)(*plVar18 + 0x348))(plVar18,uVar7,*(undefined8 *)(*plVar18 + 0x350));
  if ((uVar6 & 1) != 0) {
    plVar18 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    uVar7 = FUN_02733e6c(plVar18,0);
    uVar7 = FUN_02d85d5c(uVar7,param_2);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar7,uVar7);
    }
    (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar7,param_2,*(undefined8 *)(*plVar18 + 0x2b0));
    puVar1 = PTR_DAT_03cbebc0;
    iVar19 = 0;
    while( true ) {
      plVar8 = (long *)FUN_02d79184(param_2,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
      if (iVar4 <= iVar19) break;
      plVar8 = (long *)FUN_02d79184(param_2,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                 (plVar8,iVar19,*(undefined8 *)(*plVar8 + 0x2f0));
      if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar8);
      }
      lVar9 = (**(code **)(*plVar18 + 0x308))(plVar18,plVar8,*(undefined8 *)(*plVar18 + 0x310));
      if (lVar9 == 0) {
        (**(code **)(*plVar18 + 0x2a8))(plVar18,plVar8,plVar8,*(undefined8 *)(*plVar18 + 0x2b0));
      }
      iVar19 = iVar19 + 1;
    }
    plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
    FUN_02730070(plVar8,0);
    puVar3 = PTR_DAT_03d15248;
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 != (long *)0x0) {
      iVar19 = 0;
      do {
        iVar4 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        puVar2 = PTR_DAT_03cbed20;
        if (iVar4 <= iVar19) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar19 = 0;
          goto LAB_02d85684;
        }
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x378))
                                    (plVar10,iVar19,*(undefined8 *)(*plVar10 + 0x380));
        if (plVar10 != (long *)0x0) {
          bVar17 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar17) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar17 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar10);
          }
        }
        if (plVar10 != param_2) {
          plVar11 = (long *)FUN_02d79114(param_2,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar6 = (**(code **)(*plVar11 + 0x348))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x350))
          ;
          if ((uVar6 & 1) == 0) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            (**(code **)(*plVar8 + 0x308))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x310));
          }
        }
        plVar10 = *(long **)(param_1 + 0x20);
        iVar19 = iVar19 + 1;
      } while (plVar10 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  bVar17 = 0;
  iVar4 = 0x15;
LAB_02d85aa0:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return iVar4 == 0x12 & bVar17;
LAB_02d85684:
  iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  if (iVar4 <= iVar19) goto LAB_02d859d4;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x2e8))(plVar8,iVar19,*(undefined8 *)(*plVar8 + 0x2f0));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  bVar17 = *(byte *)(*(long *)puVar3 + 0x130);
  if ((*(byte *)(*plVar10 + 0x130) < bVar17) ||
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar17 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(plVar10);
  }
  plVar11 = (long *)FUN_02d79184(plVar10,0);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar4 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
  if (0 < iVar4) {
    plVar11 = (long *)(**(code **)(*plVar18 + 0x388))(plVar18,*(undefined8 *)(*plVar18 + 0x390));
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02d85784;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03cc6e60,0);
LAB_02d85784:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar15 = *plVar11;
      lVar9 = *(long *)puVar2;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02d857e4;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar11,lVar9,0);
LAB_02d857e4:
      uVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar6 & 1) == 0) {
        iVar4 = 0xf;
        goto LAB_02d858ec;
      }
      lVar15 = *plVar11;
      lVar9 = *(long *)puVar2;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_02d85844;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar11,lVar9,1);
LAB_02d85844:
      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar13);
      }
      plVar14 = (long *)FUN_02d79184(plVar10,0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = (**(code **)(*plVar14 + 0x348))(plVar14,plVar13,*(undefined8 *)(*plVar14 + 0x350));
    } while ((uVar6 & 1) == 0);
    uVar20 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1a260);
    FUN_02d76210(uVar7,*(undefined8 *)PTR_DAT_03d1b728,uVar20,0);
    FUN_02d85db8(param_1,uVar7,1);
    iVar4 = 0x12;
LAB_02d858ec:
    plVar10 = (long *)thunk_FUN_01a89d6c(plVar11,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02d8595c;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_02d8595c:
      (*(code *)*puVar12)(plVar10,puVar12[1]);
    }
    if ((iVar4 != 0xf) && (iVar4 != 0)) {
      bVar17 = 0;
      goto LAB_02d85aa0;
    }
  }
  iVar19 = iVar19 + 1;
  goto LAB_02d85684;
LAB_02d859d4:
  FUN_02d85e58(param_1,param_2,1);
  iVar19 = 0;
  while( true ) {
    plVar18 = (long *)FUN_02d79114(param_2,0);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar4 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
    if (iVar4 <= iVar19) break;
    plVar18 = (long *)FUN_02d79114(param_2,0);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x2e8))
                                (plVar18,iVar19,*(undefined8 *)(*plVar18 + 0x2f0));
    if (plVar18 != (long *)0x0) {
      bVar17 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar17) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar17 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar18);
      }
    }
    FUN_02d85e58(param_1,plVar18,1);
    iVar19 = iVar19 + 1;
  }
  bVar17 = 1;
  iVar4 = 0x12;
  goto LAB_02d85aa0;
}


