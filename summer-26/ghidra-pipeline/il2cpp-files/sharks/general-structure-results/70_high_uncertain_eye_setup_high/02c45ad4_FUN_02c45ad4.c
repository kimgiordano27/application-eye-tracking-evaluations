/*
FUNCTION_NAME: FUN_02c45ad4
ENTRY_POINT: 02c45ad4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c45d3c) */
/* WARNING: Removing unreachable block (ram,0x02c4614c) */

void FUN_02c45ad4(long param_1)

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
  
  puVar3 = PTR_DAT_037f45f0;
  if ((DAT_03a260c0 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f6ce0);
    FUN_017fc350(PTR_DAT_0380c700);
    FUN_017fc350(PTR_DAT_037f8768);
    FUN_017fc350(PTR_DAT_0380c708);
    FUN_017fc350(PTR_DAT_0380c638);
    FUN_017fc350(PTR_DAT_0380c710);
    FUN_017fc350(PTR_DAT_0380c718);
    FUN_017fc350(PTR_DAT_0380c648);
    FUN_017fc350(PTR_DAT_0380c720);
    FUN_017fc350(PTR_DAT_0380c728);
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a260c0 = 1;
  }
  local_74[0] = '\0';
  thunk_FUN_0181f594();
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar9 = *(long *)puVar3;
  }
  uStack_68 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
  local_70 = (long *)0x0;
  FUN_01818450(param_1 + 0x40,&uStack_68,&local_70);
  plVar8 = local_70;
  puVar5 = PTR_DAT_037f8768;
  if (local_70 == (long *)0x0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar4 = PTR_DAT_037f6ce0;
  uVar16 = *(uint *)(param_1 + 0x38);
  thunk_FUN_0181f594();
  if ((uVar16 >> 0x1b & 1) == 0) {
    uVar16 = *(uint *)(param_1 + 0x38);
    thunk_FUN_0181f594();
    uVar16 = (uVar16 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar16 = 0;
  }
  puVar6 = PTR_DAT_0380c708;
  if (*plVar8 == *(long *)puVar4) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar9 = *(long *)puVar3;
    }
    uVar13 = FUN_017fc368(lVar9);
    OVRPlugin_Ktx__TranscodeKtxTexture(plVar8,uVar16,uVar13);
  }
  else {
    plVar10 = (long *)thunk_FUN_01861ac0(plVar8,*(undefined8 *)PTR_DAT_0380c708);
    if (plVar10 == (long *)0x0) {
      lVar9 = *plVar8;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0380c728)) {
        if (lVar9 == *(long *)PTR_DAT_0380c638) {
          local_74[0] = '\0';
          FUN_02c317e4(plVar8,local_74,0);
          if (local_74[0] != '\0') {
            thunk_FUN_0184c01c(plVar8,0);
          }
          puVar7 = PTR_DAT_0380c720;
          puVar5 = PTR_DAT_0380c718;
          iVar1 = (int)plVar8[3];
          if (0 < iVar1) {
            iVar17 = 0;
            do {
              plVar10 = (long *)FUN_02826610(plVar8,iVar17,*(undefined8 *)puVar5);
              if (plVar10 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar10 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar7
                    )) && ((*(byte *)((long)plVar10 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_02826680(plVar8,iVar17,0,*(undefined8 *)PTR_DAT_0380c648);
                  (**(code **)(*plVar10 + 0x178))
                            (plVar10,param_1,uVar16,*(undefined8 *)(*plVar10 + 0x180));
                }
              }
              iVar17 = iVar17 + 1;
            } while (iVar1 != iVar17);
            if (0 < iVar1) {
              iVar17 = 0;
              do {
                plVar10 = (long *)FUN_02826610(plVar8,iVar17,*(undefined8 *)puVar5);
                if (plVar10 != (long *)0x0) {
                  FUN_02826680(plVar8,iVar17,0,*(undefined8 *)PTR_DAT_0380c648);
                  lVar9 = *plVar10;
                  plVar12 = plVar10;
                  if (lVar9 != *(long *)puVar4) {
                    plVar12 = (long *)0x0;
                  }
                  if (plVar12 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
                    if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0380c728)) {
                      uVar13 = *(undefined8 *)puVar6;
                      plVar12 = (long *)thunk_FUN_01861ac0(plVar10,uVar13);
                      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(plVar10,uVar13);
                      }
                      if (uVar16 == 0) {
                        lVar9 = *plVar12;
                        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                              puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                              goto LAB_02c45f54;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_0185dba8(plVar12,*(long *)puVar6,1);
LAB_02c45f54:
                        uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                        if ((uVar14 & 1) != 0) {
                          uVar13 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
                          FUN_02c47c80(uVar13,plVar12,param_1);
                          FUN_02c3d66c(uVar13,0);
                          goto LAB_02c45ff0;
                        }
                      }
                      lVar9 = *plVar12;
                      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                            goto LAB_02c45fe0;
                          }
                          uVar14 = uVar14 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0185dba8(plVar12,*(long *)puVar6,0);
LAB_02c45fe0:
                      (*(code *)*puVar11)(plVar12,param_1,puVar11[1]);
                    }
                    else {
                      (**(code **)(lVar9 + 0x178))
                                (plVar10,param_1,uVar16,*(undefined8 *)(lVar9 + 0x180));
                    }
                  }
                  else {
                    lVar9 = *(long *)puVar3;
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                      lVar9 = *(long *)puVar3;
                    }
                    uVar13 = FUN_017fc368(lVar9);
                    OVRPlugin_Ktx__TranscodeKtxTexture(plVar12,uVar16,uVar13);
                  }
                }
LAB_02c45ff0:
                iVar17 = iVar17 + 1;
              } while (iVar17 != iVar1);
            }
          }
          if (DAT_03a26157 == '\0') {
            FUN_017fc350(PTR_DAT_037f8768);
            DAT_03a26157 = '\x01';
          }
          lVar9 = *(long *)PTR_DAT_037f8768;
          goto LAB_02c460fc;
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
              goto LAB_02c4603c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar6,1);
LAB_02c4603c:
        uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar14 & 1) != 0) {
          uVar13 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
          FUN_02c47c80(uVar13,plVar10,param_1);
          FUN_02c3d66c(uVar13,0);
          goto LAB_02c460d8;
        }
      }
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02c460c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar6,0);
LAB_02c460c8:
      (*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
    }
  }
LAB_02c460d8:
  if (DAT_03a26157 == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a26157 = '\x01';
  }
  lVar9 = *(long *)puVar5;
LAB_02c460fc:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  return;
}


