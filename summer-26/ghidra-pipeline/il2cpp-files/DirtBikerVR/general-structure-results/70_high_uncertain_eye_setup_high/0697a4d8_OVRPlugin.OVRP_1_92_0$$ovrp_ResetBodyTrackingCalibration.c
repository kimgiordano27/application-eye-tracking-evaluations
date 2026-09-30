/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_ResetBodyTrackingCalibration
ENTRY_POINT: 0697a4d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_ResetBodyTrackingCalibration
               (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  int unaff_w21;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar13 = (float)FUN_07d306c8(param_3,0);
  if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 != 0) {
    fVar22 = 0.0;
    fVar14 = (-(param_2 * fVar13) / (float)unaff_w21) / *(float *)(lVar9 + 0x24);
    fVar13 = 1.0;
    if (fVar14 <= 1.0) {
      fVar13 = fVar14;
    }
    fVar23 = 0.0;
    if (0.0 <= fVar14) {
      fVar23 = fVar13;
    }
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar5 != 0)) {
      fVar14 = *(float *)(lVar9 + 0x28);
      FUN_07caea60(lVar5,0,0);
      lVar9 = FUN_07c98f88();
      if (lVar9 != 0) {
        fVar15 = (float)FUN_07cac280(lVar9,0);
        fVar20 = fVar13;
        fVar18 = fVar22;
        lVar9 = FUN_07c98f88();
        if (((*(long *)(unaff_x19 + 0x30) != 0) &&
            (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar5 != 0)) &&
           (lVar5 = FUN_07caea60(lVar5,0,0), lVar5 != 0)) {
          fVar16 = (float)FUN_07cac280(lVar5,0);
          fVar19 = fVar20;
          fVar21 = fVar18;
          lVar5 = FUN_07c98f88();
          if (lVar5 != 0) {
            fVar17 = (float)FUN_07cac824(lVar5,0);
            if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar9 != 0)) {
              fVar14 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - fVar14 * fVar23;
              uVar11 = (ulong)(uint)(fVar18 + fVar21 * fVar14);
              fVar20 = fVar20 + fVar19 * fVar14;
              FUN_07cac358(fVar16 + fVar17 * fVar14,fVar20,uVar11,lVar9,0);
              lVar9 = FUN_07c98f88();
              if (lVar9 != 0) {
                fVar14 = (float)FUN_07cac280(lVar9,0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar9 != 0)) {
                  fVar13 = fVar20 - fVar13;
                  fVar22 = (float)uVar11 - fVar22;
                  plVar6 = (long *)FUN_07cae9b8(lVar9,0);
                  puVar4 = PTR_DAT_08488568;
                  puVar2 = PTR_DAT_08486ff8;
                  do {
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    lVar9 = *plVar6;
                    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar10 != 0) {
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                          goto LAB_0697a6c8;
                        }
                        uVar10 = uVar10 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,0);
LAB_0697a6c8:
                    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    puVar3 = PTR_DAT_08488550;
                    fVar23 = (float)uVar11;
                    if ((uVar10 & 1) == 0) {
                      plVar6 = (long *)thunk_FUN_03ac73c0(plVar6,*(undefined8 *)PTR_DAT_08488550);
                      if (plVar6 == (long *)0x0) goto LAB_0697a81c;
                      lVar9 = *plVar6;
                      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar10 == 0) goto LAB_0697a7f4;
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      goto LAB_0697a7dc;
                    }
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    lVar9 = *plVar6;
                    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                          goto LAB_0697a730;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,1);
LAB_0697a730:
                    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    lVar9 = *(long *)puVar2;
                    bVar1 = *(byte *)(lVar9 + 0x130);
                    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8ad40(plVar8);
                    }
                    fVar18 = (float)FUN_07cac280(plVar8,0);
                    fVar20 = fVar20 - fVar13;
                    uVar11 = (ulong)(uint)(fVar23 - fVar22);
                    FUN_07cac358(fVar18 - (fVar14 - fVar15),fVar20,uVar11,plVar8,0);
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0697aa28;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar9 != 0)) {
    plVar6 = (long *)FUN_07cae9b8(lVar9,0);
    do {
      fVar23 = (float)uVar11;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,0);
LAB_0697a8a0:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03ac73c0(plVar6,*(undefined8 *)puVar3);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_0697a9c4;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar4,1);
LAB_0697a908:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar9 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar8);
      }
      fVar18 = (float)FUN_07cac280(plVar8,0);
      fVar20 = fVar20 - fVar13;
      uVar11 = (ulong)(uint)(fVar23 - fVar22);
      FUN_07cac358(fVar18 - (fVar14 - fVar15),fVar20,uVar11,plVar8,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


