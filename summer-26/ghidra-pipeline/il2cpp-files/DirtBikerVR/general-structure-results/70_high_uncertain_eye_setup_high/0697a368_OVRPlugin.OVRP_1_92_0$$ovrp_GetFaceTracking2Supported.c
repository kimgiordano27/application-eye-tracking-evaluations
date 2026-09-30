/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Supported
ENTRY_POINT: 0697a368
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

void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(undefined1 param_1 [16],float param_2)

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
  undefined8 *puVar10;
  long *plVar11;
  undefined1 in_w8;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  float fVar15;
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
  long *plStack0000000000000020;
  long *plStack0000000000000028;
  
  *(undefined1 *)(unaff_x20 + 0x132) = in_w8;
  plStack0000000000000020 = (long *)0x0;
  plStack0000000000000028 = (long *)0x0;
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
      uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_07c9e200(uVar14,0,0);
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
              fVar15 = (float)FUN_07d306c8(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07d27e2c(0);
              lVar8 = *(long *)(unaff_x19 + 0x20);
              if (lVar8 != 0) {
                fVar24 = 0.0;
                fVar16 = (-(param_2 * fVar15) / (float)iVar5) / *(float *)(lVar8 + 0x24);
                fVar15 = 1.0;
                if (fVar16 <= 1.0) {
                  fVar15 = fVar16;
                }
                fVar25 = 0.0;
                if (0.0 <= fVar16) {
                  fVar25 = fVar15;
                }
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar9 != 0)) {
                  fVar16 = *(float *)(lVar8 + 0x28);
                  FUN_07caea60(lVar9,0,0);
                  lVar8 = FUN_07c98f88();
                  if (lVar8 != 0) {
                    fVar17 = (float)FUN_07cac280(lVar8,0);
                    fVar22 = fVar15;
                    fVar20 = fVar24;
                    lVar8 = FUN_07c98f88();
                    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar9 != 0)) &&
                       (lVar9 = FUN_07caea60(lVar9,0,0), lVar9 != 0)) {
                      fVar18 = (float)FUN_07cac280(lVar9,0);
                      fVar21 = fVar22;
                      fVar23 = fVar20;
                      lVar6 = FUN_07c98f88(lVar6,0);
                      if (lVar6 != 0) {
                        fVar19 = (float)FUN_07cac824(lVar6,0);
                        if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar8 != 0)) {
                          fVar16 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - fVar16 * fVar25;
                          uVar7 = (ulong)(uint)(fVar20 + fVar23 * fVar16);
                          fVar22 = fVar22 + fVar21 * fVar16;
                          FUN_07cac358(fVar18 + fVar19 * fVar16,fVar22,uVar7,lVar8,0);
                          lVar6 = FUN_07c98f88();
                          if (lVar6 != 0) {
                            fVar16 = (float)FUN_07cac280(lVar6,0);
                            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar6 != 0))
                            {
                              fVar15 = fVar22 - fVar15;
                              fVar24 = (float)uVar7 - fVar24;
                              plStack0000000000000028 = (long *)FUN_07cae9b8(lVar6,0);
                              puVar4 = PTR_DAT_08488568;
                              puVar2 = PTR_DAT_08486ff8;
                              do {
                                plVar11 = plStack0000000000000028;
                                if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *plStack0000000000000028;
                                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                                      puVar10 = (undefined8 *)
                                                (lVar6 + (long)*piVar13 * 0x10 + 0x138);
                                      goto LAB_0697a6c8;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar10 = (undefined8 *)
                                          FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,0);
LAB_0697a6c8:
                                uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
                                plVar11 = plStack0000000000000028;
                                puVar3 = PTR_DAT_08488550;
                                fVar25 = (float)uVar7;
                                if ((uVar12 & 1) == 0) {
                                  plVar11 = (long *)thunk_FUN_03ac73c0(plStack0000000000000028,
                                                                       *(undefined8 *)
                                                                        PTR_DAT_08488550);
                                  plStack0000000000000020 = plVar11;
                                  if (plVar11 == (long *)0x0) goto LAB_0697a81c;
                                  lVar6 = *plVar11;
                                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                  if (uVar12 == 0) goto LAB_0697a7f4;
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  goto LAB_0697a7dc;
                                }
                                if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *plStack0000000000000028;
                                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar7 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                                      puVar10 = (undefined8 *)
                                                (lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                                      goto LAB_0697a730;
                                    }
                                    uVar7 = uVar7 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar7 != 0);
                                }
                                puVar10 = (undefined8 *)
                                          FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,1);
LAB_0697a730:
                                plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
                                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8a9c0();
                                }
                                lVar6 = *(long *)puVar2;
                                bVar1 = *(byte *)(lVar6 + 0x130);
                                if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                                    lVar6)) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03a8ad40(plVar11);
                                }
                                fVar20 = (float)FUN_07cac280(plVar11,0);
                                fVar22 = fVar22 - fVar15;
                                uVar7 = (ulong)(uint)(fVar25 - fVar24);
                                FUN_07cac358(fVar20 - (fVar16 - fVar17),fVar22,uVar7,plVar11,0);
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
        puVar10 = (undefined8 *)PTR_DAT_084b75a0;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar10 = (undefined8 *)PTR_DAT_084b75a0;
        }
      }
      else {
        puVar10 = (undefined8 *)PTR_DAT_084b75b0;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar10 = (undefined8 *)PTR_DAT_084b75b0;
        }
      }
      FUN_07c4fb40(*puVar10,0);
      return;
    }
  }
  goto LAB_0697aa28;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar10 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar10 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar6 != 0)) {
    plStack0000000000000028 = (long *)FUN_07cae9b8(lVar6,0);
    do {
      plVar11 = plStack0000000000000028;
      fVar25 = (float)uVar7;
      if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plStack0000000000000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,0);
LAB_0697a8a0:
      uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      plVar11 = plStack0000000000000028;
      if ((uVar7 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_03ac73c0(plStack0000000000000028,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        plStack0000000000000020 = plVar11;
        if (uVar7 == 0) goto LAB_0697a9c4;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plStack0000000000000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(plStack0000000000000028,*(long *)puVar4,1);
LAB_0697a908:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar11);
      }
      fVar20 = (float)FUN_07cac280(plVar11,0);
      fVar22 = fVar22 - fVar15;
      uVar7 = (ulong)(uint)(fVar25 - fVar24);
      FUN_07cac358(fVar20 - (fVar16 - fVar17),fVar22,uVar7,plVar11,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


