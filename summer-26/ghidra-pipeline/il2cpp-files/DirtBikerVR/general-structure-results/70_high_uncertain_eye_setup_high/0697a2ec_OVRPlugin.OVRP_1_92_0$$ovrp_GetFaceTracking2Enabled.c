/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Enabled
ENTRY_POINT: 0697a2ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Enabled(undefined1 param_1 [16],float param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  FUN_03a8a718(PTR_DAT_084b7598);
  FUN_03a8a718(PTR_DAT_08486be8);
  FUN_03a8a718(PTR_DAT_08488550);
  FUN_03a8a718(PTR_DAT_08488568);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_08486c50);
  FUN_03a8a718(PTR_DAT_08486ff8);
  FUN_03a8a718(PTR_DAT_084b75a0);
  FUN_03a8a718(PTR_DAT_084b75a8);
  FUN_03a8a718(PTR_DAT_084b75b0);
  *(undefined1 *)(unaff_x20 + 0x132) = 1;
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar6 != 0)) {
    iVar5 = FUN_07cae120(lVar6,0);
    if (iVar5 == 0) {
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b75a8,0);
    }
    puVar2 = PTR_DAT_08486738;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_07c9e200(uVar15,0,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = FUN_0447b05c();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar7 = FUN_07c9e200(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          lVar8 = FUN_0447b05c();
          if ((lVar8 != 0) &&
             (lVar8 = FUN_0447b578(lVar8,*(undefined8 *)PTR_DAT_084b7598), lVar8 != 0)) {
            iVar5 = *(int *)(lVar8 + 0x18);
            if (iVar5 == 0) {
              return;
            }
            if (lVar6 != 0) {
              fVar16 = (float)FUN_07d306c8(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07d27e2c(0);
              lVar8 = *(long *)(unaff_x19 + 0x20);
              if (lVar8 != 0) {
                fVar25 = 0.0;
                fVar17 = (-(param_2 * fVar16) / (float)iVar5) / *(float *)(lVar8 + 0x24);
                fVar16 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar16 = fVar17;
                }
                fVar26 = 0.0;
                if (0.0 <= fVar17) {
                  fVar26 = fVar16;
                }
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar9 != 0)) {
                  fVar17 = *(float *)(lVar8 + 0x28);
                  FUN_07caea60(lVar9,0,0);
                  lVar8 = FUN_07c98f88();
                  if (lVar8 != 0) {
                    fVar18 = (float)FUN_07cac280(lVar8,0);
                    fVar23 = fVar16;
                    fVar21 = fVar25;
                    lVar8 = FUN_07c98f88();
                    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar9 != 0)) &&
                       (lVar9 = FUN_07caea60(lVar9,0,0), lVar9 != 0)) {
                      fVar19 = (float)FUN_07cac280(lVar9,0);
                      fVar22 = fVar23;
                      fVar24 = fVar21;
                      lVar6 = FUN_07c98f88(lVar6,0);
                      if (lVar6 != 0) {
                        fVar20 = (float)FUN_07cac824(lVar6,0);
                        if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar8 != 0)) {
                          fVar17 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - fVar17 * fVar26;
                          uVar7 = (ulong)(uint)(fVar21 + fVar24 * fVar17);
                          fVar23 = fVar23 + fVar22 * fVar17;
                          FUN_07cac358(fVar19 + fVar20 * fVar17,fVar23,uVar7,lVar8,0);
                          lVar6 = FUN_07c98f88();
                          if (lVar6 != 0) {
                            fVar17 = (float)FUN_07cac280(lVar6,0);
                            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar6 != 0))
                            {
                              fVar16 = fVar23 - fVar16;
                              fVar25 = (float)uVar7 - fVar25;
                              plVar10 = (long *)FUN_07cae9b8(lVar6,0);
                              puVar4 = PTR_DAT_08488568;
                              puVar2 = PTR_DAT_08486ff8;
                              do {
                                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *plVar10;
                                uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar13 != 0) {
                                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                                      puVar11 = (undefined8 *)
                                                (lVar6 + (long)*piVar14 * 0x10 + 0x138);
                                      goto LAB_0697a6c8;
                                    }
                                    uVar13 = uVar13 - 1;
                                    piVar14 = piVar14 + 4;
                                  } while (uVar13 != 0);
                                }
                                puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,0);
LAB_0697a6c8:
                                uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                                puVar3 = PTR_DAT_08488550;
                                fVar26 = (float)uVar7;
                                if ((uVar13 & 1) == 0) {
                                  plVar10 = (long *)thunk_FUN_03ac73c0(plVar10,*(undefined8 *)
                                                                                PTR_DAT_08488550);
                                  if (plVar10 == (long *)0x0) goto LAB_0697a81c;
                                  lVar6 = *plVar10;
                                  uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                  if (uVar13 == 0) goto LAB_0697a7f4;
                                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  goto LAB_0697a7dc;
                                }
                                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *plVar10;
                                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar7 != 0) {
                                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                                      puVar11 = (undefined8 *)
                                                (lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                                      goto LAB_0697a730;
                                    }
                                    uVar7 = uVar7 - 1;
                                    piVar14 = piVar14 + 4;
                                  } while (uVar7 != 0);
                                }
                                puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,1);
LAB_0697a730:
                                plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *(long *)puVar2;
                                bVar1 = *(byte *)(lVar6 + 0x130);
                                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                                    lVar6)) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8ad40(plVar12);
                                }
                                fVar21 = (float)FUN_07cac280(plVar12,0);
                                fVar23 = fVar23 - fVar16;
                                uVar7 = (ulong)(uint)(fVar26 - fVar25);
                                FUN_07cac358(fVar21 - (fVar17 - fVar18),fVar23,uVar7,plVar12,0);
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0697aa28;
        }
        puVar11 = (undefined8 *)PTR_DAT_084b75a0;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar11 = (undefined8 *)PTR_DAT_084b75a0;
        }
      }
      else {
        puVar11 = (undefined8 *)PTR_DAT_084b75b0;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar11 = (undefined8 *)PTR_DAT_084b75b0;
        }
      }
      FUN_07c4fb40(*puVar11,0);
      return;
    }
  }
  goto LAB_0697aa28;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar6 != 0)) {
    plVar10 = (long *)FUN_07cae9b8(lVar6,0);
    do {
      fVar26 = (float)uVar7;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,0);
LAB_0697a8a0:
      uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar7 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_03ac73c0(plVar10,*(undefined8 *)puVar3);
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0697a9c4;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,1);
LAB_0697a908:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar12);
      }
      fVar21 = (float)FUN_07cac280(plVar12,0);
      fVar23 = fVar23 - fVar16;
      uVar7 = (ulong)(uint)(fVar26 - fVar25);
      FUN_07cac358(fVar21 - (fVar17 - fVar18),fVar23,uVar7,plVar12,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


