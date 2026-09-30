/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 0697a3e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x21;
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
  
  uVar6 = FUN_07c9e200(param_3,param_4,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = FUN_0447b05c();
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x21);
    }
    uVar6 = FUN_07c9e200(lVar7,0,0);
    if ((uVar6 & 1) == 0) {
      lVar8 = FUN_0447b05c();
      if ((lVar8 != 0) && (lVar8 = FUN_0447b578(lVar8,*(undefined8 *)PTR_DAT_084b7598), lVar8 != 0))
      {
        iVar1 = *(int *)(lVar8 + 0x18);
        if (iVar1 == 0) {
          return;
        }
        if (lVar7 != 0) {
          fVar15 = (float)FUN_07d306c8(lVar7,0);
          if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d27e2c(0);
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if (lVar8 != 0) {
            fVar24 = 0.0;
            fVar16 = (-(param_2 * fVar15) / (float)iVar1) / *(float *)(lVar8 + 0x24);
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
                  lVar7 = FUN_07c98f88(lVar7,0);
                  if (lVar7 != 0) {
                    fVar19 = (float)FUN_07cac824(lVar7,0);
                    if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar8 != 0)) {
                      fVar16 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - fVar16 * fVar25;
                      uVar6 = (ulong)(uint)(fVar20 + fVar23 * fVar16);
                      fVar22 = fVar22 + fVar21 * fVar16;
                      FUN_07cac358(fVar18 + fVar19 * fVar16,fVar22,uVar6,lVar8,0);
                      lVar7 = FUN_07c98f88();
                      if (lVar7 != 0) {
                        fVar16 = (float)FUN_07cac280(lVar7,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar7 != 0)) {
                          fVar15 = fVar22 - fVar15;
                          fVar24 = (float)uVar6 - fVar24;
                          plVar10 = (long *)FUN_07cae9b8(lVar7,0);
                          puVar5 = PTR_DAT_08488568;
                          puVar3 = PTR_DAT_08486ff8;
                          do {
                            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8a9c0();
                            }
                            lVar7 = *plVar10;
                            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                            if (uVar13 != 0) {
                              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                                  goto LAB_0697a6c8;
                                }
                                uVar13 = uVar13 - 1;
                                piVar14 = piVar14 + 4;
                              } while (uVar13 != 0);
                            }
                            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar5,0);
LAB_0697a6c8:
                            uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                            puVar4 = PTR_DAT_08488550;
                            fVar25 = (float)uVar6;
                            if ((uVar13 & 1) == 0) {
                              plVar10 = (long *)thunk_FUN_03ac73c0(plVar10,*(undefined8 *)
                                                                            PTR_DAT_08488550);
                              if (plVar10 == (long *)0x0) goto LAB_0697a81c;
                              lVar7 = *plVar10;
                              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                              if (uVar13 == 0) goto LAB_0697a7f4;
                              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                              goto LAB_0697a7dc;
                            }
                            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8a9c0();
                            }
                            lVar7 = *plVar10;
                            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                            if (uVar6 != 0) {
                              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                                  puVar11 = (undefined8 *)
                                            (lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                                  goto LAB_0697a730;
                                }
                                uVar6 = uVar6 - 1;
                                piVar14 = piVar14 + 4;
                              } while (uVar6 != 0);
                            }
                            puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar5,1);
LAB_0697a730:
                            plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8a9c0();
                            }
                            lVar7 = *(long *)puVar3;
                            bVar2 = *(byte *)(lVar7 + 0x130);
                            if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                                lVar7)) {
                    /* WARNING: Subroutine does not return */
                              FUN_03a8ad40(plVar12);
                            }
                            fVar20 = (float)FUN_07cac280(plVar12,0);
                            fVar22 = fVar22 - fVar15;
                            uVar6 = (ulong)(uint)(fVar25 - fVar24);
                            FUN_07cac358(fVar20 - (fVar16 - fVar17),fVar22,uVar6,plVar12,0);
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
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar14 = piVar14 + 4;
    if (uVar6 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,0);
LAB_0697a9e0:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar4,0);
LAB_0697a810:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar7 != 0)) {
    plVar10 = (long *)FUN_07cae9b8(lVar7,0);
    do {
      fVar25 = (float)uVar6;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar7 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar5,0);
LAB_0697a8a0:
      uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar6 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_03ac73c0(plVar10,*(undefined8 *)puVar4);
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar7 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 == 0) goto LAB_0697a9c4;
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar7 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar5,1);
LAB_0697a908:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar7 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar7 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar12);
      }
      fVar20 = (float)FUN_07cac280(plVar12,0);
      fVar22 = fVar22 - fVar15;
      uVar6 = (ulong)(uint)(fVar25 - fVar24);
      FUN_07cac358(fVar20 - (fVar16 - fVar17),fVar22,uVar6,plVar12,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


