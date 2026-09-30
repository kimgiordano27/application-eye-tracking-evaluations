/*
FUNCTION_NAME: FUN_02f44be8
ENTRY_POINT: 02f44be8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f44f38) */
/* WARNING: Removing unreachable block (ram,0x02f45200) */

long FUN_02f44be8(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  char local_54 [4];
  undefined *puVar11;
  
  puVar11 = PTR_DAT_03cbe5e8;
  if ((DAT_0412ab46 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    FUN_01ab69ac(PTR_DAT_03d229e0);
    FUN_01ab69ac(PTR_DAT_03d21130);
    FUN_01ab69ac(PTR_DAT_03d21138);
    FUN_01ab69ac(PTR_DAT_03cd85f0);
    FUN_01ab69ac(PTR_DAT_03d239e8);
    FUN_01ab69ac(PTR_DAT_03d229e8);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cf21b8);
    DAT_0412ab46 = 1;
  }
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02786d28(param_1,0,0);
  if ((uVar6 & 1) == 0) {
    if (param_2 != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = (**(code **)(*param_1 + 0xb98))(param_1,param_2,*(undefined8 *)(*param_1 + 0xba0));
      puVar3 = PTR_DAT_03cfe690;
      lVar15 = param_2;
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)PTR_DAT_03cfe690;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *(long *)puVar3;
        }
        plVar14 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x18);
        thunk_FUN_01a4b338();
        if ((plVar14 != (long *)0x0) &&
           (lVar7 = (**(code **)(*plVar14 + 0x308))
                              (plVar14,param_2,*(undefined8 *)(*plVar14 + 0x310)),
           puVar3 = PTR_DAT_03cd85f0, lVar7 != 0)) {
          uVar16 = *(undefined8 *)PTR_DAT_03cd85f0;
          plVar14 = (long *)thunk_FUN_01a89d6c(lVar7,uVar16);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar7,uVar16);
          }
          local_54[0] = '\0';
          FUN_027e0bd8(plVar14,local_54,0);
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03ccbd08) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_02f44db8;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03ccbd08,1);
LAB_02f44db8:
          iVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
          puVar4 = PTR_DAT_03cf21b8;
          lVar7 = param_2;
          while (lVar2 = lVar7, iVar5 = iVar5 + -1, -1 < iVar5) {
            lVar12 = *plVar14;
            lVar7 = *(long *)puVar3;
            uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar7) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02f44e24;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_01a472ec(plVar14,lVar7,0);
LAB_02f44e24:
            plVar9 = (long *)(*(code *)*puVar8)(plVar14,iVar5,puVar8[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar7 = *plVar9;
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0();
            }
            lVar7 = (**(code **)(lVar7 + 0x198))(plVar9,*(undefined8 *)(lVar7 + 0x1a0));
            if (lVar7 == 0) {
              lVar12 = *plVar14;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar7) {
                    puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                    goto LAB_02f44ee8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_01a472ec(plVar14,lVar7,10);
LAB_02f44ee8:
              (*(code *)*puVar8)(plVar14,iVar5,puVar8[1]);
              lVar7 = lVar2;
            }
            else {
              uVar6 = (**(code **)(*param_1 + 0xb98))
                                (param_1,lVar7,*(undefined8 *)(*param_1 + 0xba0));
              if ((uVar6 & 1) == 0) {
                lVar7 = lVar2;
              }
            }
          }
          if (local_54[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(plVar14,0);
          }
          if (lVar2 != param_2) {
            return lVar2;
          }
        }
        puVar3 = PTR_DAT_03d229e0;
        plVar14 = (long *)thunk_FUN_01a89d6c(param_2,*(undefined8 *)PTR_DAT_03d229e0);
        if (plVar14 != (long *)0x0) {
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02f44fac;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)puVar3,0);
LAB_02f44fac:
          plVar9 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
          if (plVar9 != (long *)0x0) {
            lVar7 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03d229e8) {
                  puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_02f45018;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03d229e8,1);
LAB_02f45018:
            uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
            if ((uVar6 & 1) != 0) {
              uVar16 = *(undefined8 *)PTR_DAT_03d21130;
              if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_0277b678(uVar16,0);
              lVar7 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03d239e8) {
                    puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_02f450a8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03d239e8,0);
LAB_02f450a8:
              uVar16 = (*(code *)*puVar8)(plVar9,uVar16,puVar8[1]);
              puVar11 = PTR_DAT_03d21138;
              plVar9 = (long *)thunk_FUN_01a89d6c(uVar16,*(undefined8 *)PTR_DAT_03d21138);
              if (plVar9 != (long *)0x0) {
                lVar7 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar11) {
                      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_02f45120;
                    }
                    uVar6 = uVar6 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar6 != 0);
                }
                puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar11,1);
LAB_02f45120:
                lVar7 = (*(code *)*puVar8)(plVar9,plVar14,puVar8[1]);
                if ((lVar7 != 0) &&
                   (uVar6 = (**(code **)(*param_1 + 0xb98))
                                      (param_1,lVar7,*(undefined8 *)(*param_1 + 0xba0)),
                   lVar15 = lVar7, (uVar6 & 1) == 0)) {
                  lVar15 = param_2;
                }
              }
            }
          }
        }
      }
      return lVar15;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar16 = thunk_FUN_01a89e68();
    puVar11 = PTR_DAT_03d23e58;
  }
  else {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar16 = thunk_FUN_01a89e68();
    puVar11 = PTR_DAT_03cbec78;
  }
  uVar10 = thunk_FUN_01a6ca08(puVar11);
  FUN_026a44fc(uVar16,uVar10,0);
  uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d23e60);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar16,uVar10);
}


