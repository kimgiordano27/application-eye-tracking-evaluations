/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 02c45bc8
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

void OVRPlugin_Media__SetMrcFrameImageFlipped(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  uint uVar15;
  int iVar16;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  long *plStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  plStack0000000000000010 = (long *)0x0;
  uStack0000000000000018 = param_1;
  FUN_01818450();
  plVar7 = plStack0000000000000010;
  puVar4 = PTR_DAT_037f8768;
  if (plStack0000000000000010 == (long *)0x0) {
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
    lVar12 = *unaff_x27;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar12 = *unaff_x27;
    }
    uVar11 = FUN_017fc368(lVar12);
    OVRPlugin_Ktx__TranscodeKtxTexture(plVar7,uVar15,uVar11);
  }
  else {
    plVar8 = (long *)thunk_FUN_01861ac0(plVar7,*(undefined8 *)PTR_DAT_0380c708);
    if (plVar8 == (long *)0x0) {
      lVar12 = *plVar7;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0380c728))
      {
        if (lVar12 == *(long *)PTR_DAT_0380c638) {
          in_stack_00000008._4_1_ = '\0';
          FUN_02c317e4(plVar7,(long)&stack0x00000008 + 4,0);
          if (in_stack_00000008._4_1_ != '\0') {
            thunk_FUN_0184c01c(plVar7,0);
          }
          puVar6 = PTR_DAT_0380c720;
          puVar4 = PTR_DAT_0380c718;
          iVar1 = (int)plVar7[3];
          if (0 < iVar1) {
            iVar16 = 0;
            do {
              plVar8 = (long *)FUN_02826610(plVar7,iVar16,*(undefined8 *)puVar4);
              if (plVar8 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)
                    ) && ((*(byte *)((long)plVar8 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_02826680(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0380c648);
                  (**(code **)(*plVar8 + 0x178))(plVar8);
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar1 != iVar16);
            if (0 < iVar1) {
              iVar16 = 0;
              do {
                plVar8 = (long *)FUN_02826610(plVar7,iVar16,*(undefined8 *)puVar4);
                if (plVar8 != (long *)0x0) {
                  FUN_02826680(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0380c648);
                  lVar12 = *plVar8;
                  plVar10 = plVar8;
                  if (lVar12 != *(long *)puVar3) {
                    plVar10 = (long *)0x0;
                  }
                  if (plVar10 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
                    if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0380c728)) {
                      uVar11 = *(undefined8 *)puVar5;
                      plVar10 = (long *)thunk_FUN_01861ac0(plVar8,uVar11);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(plVar8,uVar11);
                      }
                      if (uVar15 == 0) {
                        lVar12 = *plVar10;
                        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_02c45f54;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar5,1);
LAB_02c45f54:
                        uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                        if ((uVar13 & 1) != 0) {
                          uVar11 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
                          FUN_02c47c80(uVar11,plVar10);
                          FUN_02c3d66c(uVar11,0);
                          goto LAB_02c45ff0;
                        }
                      }
                      lVar12 = *plVar10;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_02c45fe0;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar5,0);
LAB_02c45fe0:
                      (*(code *)*puVar9)(plVar10);
                    }
                    else {
                      (**(code **)(lVar12 + 0x178))(plVar8);
                    }
                  }
                  else {
                    lVar12 = *unaff_x27;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                      lVar12 = *unaff_x27;
                    }
                    uVar11 = FUN_017fc368(lVar12);
                    OVRPlugin_Ktx__TranscodeKtxTexture(plVar10,uVar15,uVar11);
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
          lVar12 = *(long *)PTR_DAT_037f8768;
          goto LAB_02c460fc;
        }
      }
      else {
        (**(code **)(lVar12 + 0x178))(plVar7);
      }
    }
    else {
      if (uVar15 == 0) {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_02c4603c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0185dba8(plVar8,*(long *)puVar5,1);
LAB_02c4603c:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) != 0) {
          uVar11 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
          FUN_02c47c80(uVar11,plVar8);
          FUN_02c3d66c(uVar11,0);
          goto LAB_02c460d8;
        }
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02c460c8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0185dba8(plVar8,*(long *)puVar5,0);
LAB_02c460c8:
      (*(code *)*puVar9)(plVar8);
    }
  }
LAB_02c460d8:
  if (DAT_03a26157 == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a26157 = '\x01';
  }
  lVar12 = *(long *)puVar4;
LAB_02c460fc:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  return;
}


