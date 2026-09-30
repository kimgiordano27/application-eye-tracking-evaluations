/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetBodyState4
ENTRY_POINT: 0697a53c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697aa4c) */
/* WARNING: Removing unreachable block (ram,0x0697aa44) */

void OVRPlugin_OVRP_1_92_0__ovrp_GetBodyState4
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s14;
  float fVar19;
  
  if ((in_x9 != 0) && (*(long *)(in_x9 + 0x20) != 0)) {
    fVar19 = *(float *)(param_1 + 0x28);
    FUN_07caea60(*(long *)(in_x9 + 0x20),0,0);
    lVar5 = FUN_07c98f88();
    if (lVar5 != 0) {
      fVar12 = (float)FUN_07cac280(lVar5,0);
      fVar16 = param_3;
      fVar18 = param_4;
      lVar5 = FUN_07c98f88();
      if (((*(long *)(unaff_x19 + 0x30) != 0) &&
          (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar6 != 0)) &&
         (lVar6 = FUN_07caea60(lVar6,0,0), lVar6 != 0)) {
        fVar13 = (float)FUN_07cac280(lVar6,0);
        fVar15 = fVar16;
        fVar17 = fVar18;
        lVar6 = FUN_07c98f88();
        if (lVar6 != 0) {
          fVar14 = (float)FUN_07cac824(lVar6,0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar5 != 0)) {
            fVar19 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28) - fVar19 * unaff_s14;
            fVar18 = fVar18 + fVar17 * fVar19;
            fVar16 = fVar16 + fVar15 * fVar19;
            FUN_07cac358(fVar13 + fVar14 * fVar19,fVar16,fVar18,lVar5,0);
            lVar5 = FUN_07c98f88();
            if (lVar5 != 0) {
              fVar19 = (float)FUN_07cac280(lVar5,0);
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar5 != 0)) {
                param_3 = fVar16 - param_3;
                param_4 = fVar18 - param_4;
                plVar7 = (long *)FUN_07cae9b8(lVar5,0);
                puVar4 = PTR_DAT_08488568;
                puVar2 = PTR_DAT_08486ff8;
                do {
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  lVar5 = *plVar7;
                  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_0697a6c8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar4,0);
LAB_0697a6c8:
                  uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  puVar3 = PTR_DAT_08488550;
                  if ((uVar10 & 1) == 0) {
                    plVar7 = (long *)thunk_FUN_03ac73c0(plVar7,*(undefined8 *)PTR_DAT_08488550);
                    if (plVar7 == (long *)0x0) goto LAB_0697a81c;
                    lVar5 = *plVar7;
                    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar10 == 0) goto LAB_0697a7f4;
                    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_0697a7dc;
                  }
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  lVar5 = *plVar7;
                  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_0697a730;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar4,1);
LAB_0697a730:
                  plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  lVar5 = *(long *)puVar2;
                  bVar1 = *(byte *)(lVar5 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8ad40(plVar9);
                  }
                  fVar15 = (float)FUN_07cac280(plVar9,0);
                  fVar16 = fVar16 - param_3;
                  fVar18 = fVar18 - param_4;
                  FUN_07cac358(fVar15 - (fVar19 - fVar12),fVar16,fVar18,plVar9,0);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0697aa28;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0697a9ac:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0697a9e0;
    }
  }
LAB_0697a9c4:
  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
LAB_0697a9e0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0697a7dc:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0697a810;
    }
  }
LAB_0697a7f4:
  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar3,0);
LAB_0697a810:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0697a81c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar5 != 0)) {
    plVar7 = (long *)FUN_07cae9b8(lVar5,0);
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0697a8a0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar4,0);
LAB_0697a8a0:
      uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar10 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03ac73c0(plVar7,*(undefined8 *)puVar3);
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_0697a9c4;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0697a9ac;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0697a908;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar4,1);
LAB_0697a908:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar5 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar9);
      }
      fVar15 = (float)FUN_07cac280(plVar9,0);
      fVar16 = fVar16 - param_3;
      fVar18 = fVar18 - param_4;
      FUN_07cac358(fVar15 - (fVar19 - fVar12),fVar16,fVar18,plVar9,0);
    } while( true );
  }
LAB_0697aa28:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


