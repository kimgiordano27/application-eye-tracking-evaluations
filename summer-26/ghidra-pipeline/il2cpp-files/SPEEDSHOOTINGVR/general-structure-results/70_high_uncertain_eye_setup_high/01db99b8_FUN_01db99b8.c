/*
FUNCTION_NAME: FUN_01db99b8
ENTRY_POINT: 01db99b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db9c18) */
/* WARNING: Removing unreachable block (ram,0x01dba028) */

void FUN_01db99b8(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  char local_74 [4];
  long *local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_0234bca8;
  if ((DAT_0247da4e & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbf8);
    FUN_00fdc2e4(PTR_DAT_0235a768);
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0235a770);
    FUN_00fdc2e4(PTR_DAT_0235a6b0);
    FUN_00fdc2e4(PTR_DAT_0235a778);
    FUN_00fdc2e4(PTR_DAT_0235a780);
    FUN_00fdc2e4(PTR_DAT_0235a6c0);
    FUN_00fdc2e4(PTR_DAT_0235a788);
    FUN_00fdc2e4(PTR_DAT_0235a790);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247da4e = 1;
  }
  local_74[0] = '\0';
  thunk_FUN_00ffe618();
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar9 = *(long *)puVar5;
  }
  uStack_68 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
  local_70 = (long *)0x0;
  FUN_00ff7744(param_1 + 0x40,&uStack_68,&local_70);
  plVar8 = local_70;
  puVar4 = PTR_DAT_0234bc90;
  if (local_70 == (long *)0x0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar3 = PTR_DAT_0234bbf8;
  uVar16 = *(uint *)(param_1 + 0x38);
  thunk_FUN_00ffe618();
  if ((uVar16 >> 0x1b & 1) == 0) {
    uVar16 = *(uint *)(param_1 + 0x38);
    thunk_FUN_00ffe618();
    uVar16 = (uVar16 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar16 = 0;
  }
  puVar6 = PTR_DAT_0235a770;
  if (*plVar8 == *(long *)puVar3) {
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar9 = *(long *)puVar5;
    }
    uVar13 = FUN_00fdc2fc(lVar9);
    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar8,uVar16,uVar13);
  }
  else {
    plVar10 = (long *)thunk_FUN_0103ffe0(plVar8,*(undefined8 *)PTR_DAT_0235a770);
    if (plVar10 == (long *)0x0) {
      lVar9 = *plVar8;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790)) {
        if (lVar9 == *(long *)PTR_DAT_0235a6b0) {
          local_74[0] = '\0';
          FUN_01da75d8(plVar8,local_74);
          if (local_74[0] != '\0') {
            FUN_0102a860(plVar8);
          }
          puVar7 = PTR_DAT_0235a788;
          puVar4 = PTR_DAT_0235a780;
          iVar1 = (int)plVar8[3];
          if (0 < iVar1) {
            iVar17 = 0;
            do {
              plVar10 = (long *)FUN_018985f8(plVar8,iVar17,*(undefined8 *)puVar4);
              if (plVar10 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar10 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar7
                    )) && ((*(byte *)((long)plVar10 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_01898668(plVar8,iVar17,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  (**(code **)(*plVar10 + 0x178))
                            (plVar10,param_1,uVar16,*(undefined8 *)(*plVar10 + 0x180));
                }
              }
              iVar17 = iVar17 + 1;
            } while (iVar1 != iVar17);
            if (0 < iVar1) {
              iVar17 = 0;
              do {
                plVar10 = (long *)FUN_018985f8(plVar8,iVar17,*(undefined8 *)puVar4);
                if (plVar10 != (long *)0x0) {
                  FUN_01898668(plVar8,iVar17,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  lVar9 = *plVar10;
                  plVar12 = plVar10;
                  if (lVar9 != *(long *)puVar3) {
                    plVar12 = (long *)0x0;
                  }
                  if (plVar12 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
                    if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0235a790)) {
                      uVar13 = *(undefined8 *)puVar6;
                      plVar12 = (long *)thunk_FUN_0103ffe0(plVar10,uVar13);
                      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(plVar10,uVar13);
                      }
                      if (uVar16 == 0) {
                        lVar9 = *plVar12;
                        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                              puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                              goto LAB_01db9e30;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar6,1);
LAB_01db9e30:
                        uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                        if ((uVar14 & 1) != 0) {
                          uVar13 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
                          FUN_01dbb700(uVar13,plVar12,param_1);
                          FUN_01dab44c(uVar13,0);
                          goto LAB_01db9ecc;
                        }
                      }
                      lVar9 = *plVar12;
                      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                            goto LAB_01db9ebc;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar6,0);
LAB_01db9ebc:
                      (*(code *)*puVar11)(plVar12,param_1,puVar11[1]);
                    }
                    else {
                      (**(code **)(lVar9 + 0x178))
                                (plVar10,param_1,uVar16,*(undefined8 *)(lVar9 + 0x180));
                    }
                  }
                  else {
                    lVar9 = *(long *)puVar5;
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01022c14();
                      lVar9 = *(long *)puVar5;
                    }
                    uVar13 = FUN_00fdc2fc(lVar9);
                    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar12,uVar16,uVar13);
                  }
                }
LAB_01db9ecc:
                iVar17 = iVar17 + 1;
              } while (iVar17 != iVar1);
            }
          }
          if (DAT_0247da80 == '\0') {
            FUN_00fdc2e4(PTR_DAT_0234bc90);
            DAT_0247da80 = '\x01';
          }
          lVar9 = *(long *)PTR_DAT_0234bc90;
          goto LAB_01db9fd8;
        }
      }
      else {
        (**(code **)(lVar9 + 0x178))(plVar8,param_1,uVar16,*(undefined8 *)(lVar9 + 0x180));
      }
    }
    else {
      if (uVar16 == 0) {
        lVar9 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01db9f18;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_0103c348(plVar10,*(long *)puVar6,1);
LAB_01db9f18:
        uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar14 & 1) != 0) {
          uVar13 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
          FUN_01dbb700(uVar13,plVar10,param_1);
          FUN_01dab44c(uVar13,0);
          goto LAB_01db9fb4;
        }
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01db9fa4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_0103c348(plVar10,*(long *)puVar6,0);
LAB_01db9fa4:
      (*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
    }
  }
LAB_01db9fb4:
  if (DAT_0247da80 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    DAT_0247da80 = '\x01';
  }
  lVar9 = *(long *)puVar4;
LAB_01db9fd8:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  return;
}


