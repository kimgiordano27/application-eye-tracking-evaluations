/*
FUNCTION_NAME: FUN_02d82a3c
ENTRY_POINT: 02d82a3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02d830ac) */
/* WARNING: Removing unreachable block (ram,0x02d83120) */
/* WARNING: Removing unreachable block (ram,0x02d82e44) */
/* WARNING: Removing unreachable block (ram,0x02d83134) */

void FUN_02d82a3c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68 [4];
  char local_64 [4];
  
  if ((DAT_04129ce1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03d15248);
    DAT_04129ce1 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d1b710);
    FUN_026a44fc(uVar6,uVar10,0);
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d1b718);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar10);
  }
  if (param_1 == param_2) {
    return;
  }
  local_64[0] = '\0';
  local_68[0] = '\0';
  while( true ) {
    do {
      uVar6 = FUN_02d82234(param_1);
      FUN_027e0cac(uVar6,local_64,0);
    } while (local_64[0] == '\0');
    uVar6 = FUN_02d82234(param_2);
    FUN_027e0cac(uVar6,local_68,0);
    if (local_68[0] != '\0') break;
    uVar6 = FUN_02d82234(param_1);
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    local_64[0] = '\0';
    thunk_FUN_01a60708(0);
  }
  if (*(char *)(param_2 + 0x38) == '\0') {
    plVar7 = *(long **)(param_2 + 0x20);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02d82c08;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cc6e60,0);
LAB_02d82c08:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = PTR_DAT_03d15248;
    puVar4 = PTR_DAT_03cbeda8;
    puVar3 = PTR_DAT_03cbed20;
    puVar2 = PTR_DAT_03cbebc0;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar12 = *plVar7;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02d82c88;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar11,0);
LAB_02d82c88:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar15 = uVar13 & 0xffffffff;
      if ((uVar13 & 1) == 0) {
        uVar15 = 0;
        break;
      }
      lVar12 = *plVar7;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_02d82cec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar11,1);
LAB_02d82cec:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar9);
      }
      lVar11 = plVar9[9];
      if (lVar11 == 0) {
        lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
      }
      plVar16 = *(long **)(param_1 + 0x20);
      local_6c = FUN_02d77f98(plVar9,0);
      uVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_6c);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar6,uVar6);
      }
      uVar13 = (**(code **)(*plVar16 + 0x348))(plVar16,uVar6,*(undefined8 *)(*plVar16 + 0x350));
    } while ((((uVar13 & 1) != 0) ||
             (lVar11 = FUN_02d84e90(param_1,plVar9[0x1a],lVar11,0), lVar11 != 0)) ||
            (lVar11 = FUN_02d85110(param_1,plVar9[9],plVar9), lVar11 != 0));
    puVar2 = PTR_DAT_03cbed08;
    plVar7 = (long *)thunk_FUN_01a89d6c(plVar7,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02d82e2c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_02d82e2c:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    if ((uVar15 & 1) != 0) {
      plVar7 = *(long **)(param_2 + 0x20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02d82ec0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cc6e60,0);
LAB_02d82ec0:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = PTR_DAT_03d15248;
      puVar4 = PTR_DAT_03cbeda8;
      puVar3 = PTR_DAT_03cbed20;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar12 = *plVar7;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02d82f38;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar11,0);
LAB_02d82f38:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01a89d6c(plVar7,*(undefined8 *)puVar2);
          if (plVar7 == (long *)0x0) break;
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_02d83080;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_02d83068;
        }
        lVar12 = *plVar7;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_02d82f98;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar11,1);
LAB_02d82f98:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar9);
        }
        plVar16 = *(long **)(param_1 + 0x20);
        local_70 = FUN_02d77f98(plVar9,0);
        uVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_70);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar6,uVar6);
        }
        (**(code **)(*plVar16 + 0x418))(plVar16,uVar6,*(undefined8 *)(*plVar16 + 0x420));
        plVar16 = *(long **)(param_1 + 0x40);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar16 + 0x3a8))(plVar16,plVar9[0x1a],*(undefined8 *)(*plVar16 + 0x3b0));
      } while( true );
    }
  }
  else {
    FUN_02d833ac(param_1,param_2);
  }
  goto LAB_02d82b3c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02d83068:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02d8309c;
    }
  }
LAB_02d83080:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_02d8309c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_02d82b3c:
  if (local_64[0] != '\0') {
    uVar6 = FUN_02d82234(param_1);
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if (local_68[0] != '\0') {
    uVar6 = FUN_02d82234(param_2);
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return;
}


