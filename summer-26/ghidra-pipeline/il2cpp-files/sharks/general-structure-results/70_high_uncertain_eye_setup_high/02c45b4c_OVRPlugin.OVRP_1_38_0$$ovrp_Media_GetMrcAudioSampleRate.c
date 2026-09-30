/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcAudioSampleRate
ENTRY_POINT: 02c45b4c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c45d3c) */
/* WARNING: Removing unreachable block (ram,0x02c4614c) */

void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcAudioSampleRate(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  uint uVar15;
  int iVar16;
  long *unaff_x27;
  char cStack000000000000000c;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_0380c718);
  FUN_017fc350(PTR_DAT_0380c648);
  FUN_017fc350(PTR_DAT_0380c720);
  FUN_017fc350(PTR_DAT_0380c728);
  FUN_017fc350(PTR_DAT_037f45f0);
  *(undefined1 *)(unaff_x20 + 0xc0) = 1;
  cStack000000000000000c = '\0';
  thunk_FUN_0181f594();
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar8 = *unaff_x27;
  }
  in_stack_00000018 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  in_stack_00000010 = (long *)0x0;
  FUN_01818450(unaff_x19 + 0x40,&stack0x00000018,&stack0x00000010);
  plVar7 = in_stack_00000010;
  puVar4 = PTR_DAT_037f8768;
  if (in_stack_00000010 == (long *)0x0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar3 = PTR_DAT_037f6ce0;
  uVar15 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_0181f594();
  if ((uVar15 >> 0x1b & 1) == 0) {
    uVar15 = *(uint *)(unaff_x19 + 0x38);
    thunk_FUN_0181f594();
    uVar15 = (uVar15 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar15 = 0;
  }
  puVar5 = PTR_DAT_0380c708;
  if (*plVar7 == *(long *)puVar3) {
    lVar8 = *unaff_x27;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar8 = *unaff_x27;
    }
    uVar12 = FUN_017fc368(lVar8);
    OVRPlugin_Ktx__TranscodeKtxTexture(plVar7,uVar15,uVar12);
  }
  else {
    plVar9 = (long *)thunk_FUN_01861ac0(plVar7,*(undefined8 *)PTR_DAT_0380c708);
    if (plVar9 == (long *)0x0) {
      lVar8 = *plVar7;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0380c728)) {
        if (lVar8 == *(long *)PTR_DAT_0380c638) {
          cStack000000000000000c = '\0';
          FUN_02c317e4(plVar7,&stack0x0000000c,0);
          if (cStack000000000000000c != '\0') {
            thunk_FUN_0184c01c(plVar7,0);
          }
          puVar6 = PTR_DAT_0380c720;
          puVar4 = PTR_DAT_0380c718;
          iVar1 = (int)plVar7[3];
          if (0 < iVar1) {
            iVar16 = 0;
            do {
              plVar9 = (long *)FUN_02826610(plVar7,iVar16,*(undefined8 *)puVar4);
              if (plVar9 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)
                    ) && ((*(byte *)((long)plVar9 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_02826680(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0380c648);
                  (**(code **)(*plVar9 + 0x178))(plVar9);
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar1 != iVar16);
            if (0 < iVar1) {
              iVar16 = 0;
              do {
                plVar9 = (long *)FUN_02826610(plVar7,iVar16,*(undefined8 *)puVar4);
                if (plVar9 != (long *)0x0) {
                  FUN_02826680(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0380c648);
                  lVar8 = *plVar9;
                  plVar11 = plVar9;
                  if (lVar8 != *(long *)puVar3) {
                    plVar11 = (long *)0x0;
                  }
                  if (plVar11 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
                    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0380c728)) {
                      uVar12 = *(undefined8 *)puVar5;
                      plVar11 = (long *)thunk_FUN_01861ac0(plVar9,uVar12);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(plVar9,uVar12);
                      }
                      if (uVar15 == 0) {
                        lVar8 = *plVar11;
                        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_02c45f54;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_0185dba8(plVar11,*(long *)puVar5,1);
LAB_02c45f54:
                        uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
                        if ((uVar13 & 1) != 0) {
                          uVar12 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
                          FUN_02c47c80(uVar12,plVar11);
                          FUN_02c3d66c(uVar12,0);
                          goto LAB_02c45ff0;
                        }
                      }
                      lVar8 = *plVar11;
                      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_02c45fe0;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_0185dba8(plVar11,*(long *)puVar5,0);
LAB_02c45fe0:
                      (*(code *)*puVar10)(plVar11);
                    }
                    else {
                      (**(code **)(lVar8 + 0x178))(plVar9);
                    }
                  }
                  else {
                    lVar8 = *unaff_x27;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                      lVar8 = *unaff_x27;
                    }
                    uVar12 = FUN_017fc368(lVar8);
                    OVRPlugin_Ktx__TranscodeKtxTexture(plVar11,uVar15,uVar12);
                  }
                }
LAB_02c45ff0:
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar1);
            }
          }
          if (DAT_03a26157 == '\0') {
            FUN_017fc350(PTR_DAT_037f8768);
            DAT_03a26157 = '\x01';
          }
          lVar8 = *(long *)PTR_DAT_037f8768;
          goto LAB_02c460fc;
        }
      }
      else {
        (**(code **)(lVar8 + 0x178))(plVar7);
      }
    }
    else {
      if (uVar15 == 0) {
        lVar8 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_02c4603c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_0185dba8(plVar9,*(long *)puVar5,1);
LAB_02c4603c:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) != 0) {
          uVar12 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
          FUN_02c47c80(uVar12,plVar9);
          FUN_02c3d66c(uVar12,0);
          goto LAB_02c460d8;
        }
      }
      lVar8 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02c460c8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0185dba8(plVar9,*(long *)puVar5,0);
LAB_02c460c8:
      (*(code *)*puVar10)(plVar9);
    }
  }
LAB_02c460d8:
  if (DAT_03a26157 == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a26157 = '\x01';
  }
  lVar8 = *(long *)puVar4;
LAB_02c460fc:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  return;
}


