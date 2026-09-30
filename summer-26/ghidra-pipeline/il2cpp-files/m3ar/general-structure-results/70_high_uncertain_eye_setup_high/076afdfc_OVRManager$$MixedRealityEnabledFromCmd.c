/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 076afdfc
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  
  puVar1 = PTR_DAT_08fad1d0;
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fac2c0) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076afe58;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076afe58:
  (*(code *)*puVar3)();
  fVar9 = (float)FUN_08575b18(uStack000000000000001c,fStack0000000000000020,fStack0000000000000024,
                              in_stack_00000028,0);
  fStack0000000000000020 = fStack0000000000000020 * DAT_01a2eb64;
  fVar13 = DAT_01a2eb64;
  FUN_085761cc(fVar9 * DAT_01a2eb64,fStack0000000000000020,fStack0000000000000024 * DAT_01a2eb64,0);
  fVar9 = 0.0;
  fStack0000000000000020 = fStack0000000000000020 * DAT_01a2ef6c;
  uVar10 = FUN_08575a80(0,fStack0000000000000020,0,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_08f6a1b8;
  plVar8 = *(long **)(unaff_x19 + 0x38);
  if (plVar8 != (long *)0x0) {
    pfVar6 = *(float **)(lVar4 + 0xb8);
    lVar4 = *plVar8;
    fVar17 = *pfVar6;
    fVar15 = pfVar6[1];
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    fVar16 = pfVar6[2];
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_076aff40;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f6a1b8,4);
LAB_076aff40:
    fVar11 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
    plVar8 = *(long **)(unaff_x19 + 0x38);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076affb4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,0);
LAB_076affb4:
      iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      fVar14 = -(fVar17 * fVar11);
      if (iVar2 != 0) {
        fVar14 = fVar17 * fVar11;
      }
      fVar17 = fStack0000000000000020;
      fVar12 = fVar9;
      fVar15 = (float)FUN_08575f94(uVar10,fStack0000000000000020,fVar9,fVar13,fVar14,fVar15 * fVar11
                                   ,fVar16 * fVar11,0);
      lVar4 = FUN_085849e0();
      if (lVar4 != 0) {
        FUN_085995ac(fStack0000000000000010 + fVar15,fStack0000000000000014 + fVar17,
                     fStack0000000000000018 + fVar12,uVar10,fStack0000000000000020,fVar9,fVar13,
                     lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


