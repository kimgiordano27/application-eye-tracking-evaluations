/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 076afdac
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_sdkVersion(long param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  int *piVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  undefined4 in_stack_00000028;
  
  if ((DAT_0954809e & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f6a1b8);
    FUN_0403162c(PTR_DAT_08fac2c0);
    FUN_0403162c(PTR_DAT_08fad1d0);
    DAT_0954809e = 1;
  }
  puVar1 = PTR_DAT_08fad1d0;
  plVar10 = *(long **)(param_1 + 0x28);
  _fStack0000000000000010 = 0;
  _fStack0000000000000018 = 0;
  in_stack_00000028 = 0;
  _fStack0000000000000020 = 0;
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fac2c0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076afe58;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08fac2c0,0);
LAB_076afe58:
    (*(code *)*puVar5)(plVar10,&stack0x00000010,puVar5[1]);
    fVar19 = (float)(_fStack0000000000000020 >> 0x20);
    fVar14 = fStack0000000000000020;
    fVar11 = (float)FUN_08575b18(uStack000000000000001c,fStack0000000000000020,
                                 _fStack0000000000000020 >> 0x20,in_stack_00000028,0);
    fVar14 = fVar14 * DAT_01a2eb64;
    fVar17 = DAT_01a2eb64;
    FUN_085761cc(fVar11 * DAT_01a2eb64,fVar14,fVar19 * DAT_01a2eb64,0);
    fVar11 = 0.0;
    fVar14 = fVar14 * DAT_01a2ef6c;
    uVar12 = FUN_08575a80(0,fVar14,0,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar6 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_08f6a1b8;
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      pfVar8 = *(float **)(lVar6 + 0xb8);
      lVar6 = *plVar10;
      fVar21 = *pfVar8;
      fVar19 = pfVar8[1];
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar20 = pfVar8[2];
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_076aff40;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f6a1b8,4);
LAB_076aff40:
      fVar13 = (float)(*(code *)*puVar5)(plVar10,puVar5[1]);
      plVar10 = *(long **)(param_1 + 0x38);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076affb4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar1,0);
LAB_076affb4:
        iVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        fVar3 = fStack0000000000000018;
        fVar18 = -(fVar21 * fVar13);
        if (iVar4 != 0) {
          fVar18 = fVar21 * fVar13;
        }
        fVar21 = fStack0000000000000010;
        fVar2 = fStack0000000000000014;
        fVar15 = fVar14;
        fVar16 = fVar11;
        fVar19 = (float)FUN_08575f94(uVar12,fVar14,fVar11,fVar17,fVar18,fVar19 * fVar13,
                                     fVar20 * fVar13,0);
        lVar6 = FUN_085849e0(param_1,0);
        if (lVar6 != 0) {
          FUN_085995ac(fVar21 + fVar19,fVar2 + fVar15,fVar3 + fVar16,uVar12,fVar14,fVar11,fVar17,
                       lVar6,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


