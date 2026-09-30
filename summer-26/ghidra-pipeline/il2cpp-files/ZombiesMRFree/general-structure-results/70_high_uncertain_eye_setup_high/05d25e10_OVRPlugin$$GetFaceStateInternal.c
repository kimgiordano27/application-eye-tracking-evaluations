/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 05d25e10
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceStateInternal(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
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
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  *(undefined1 *)(unaff_x20 + 0x905) = in_w8;
  puVar2 = PTR_DAT_06fb8b78;
  puVar1 = PTR_DAT_06f98e20;
  uStack0000000000000040 = 0;
  fStack0000000000000048 = 0.0;
  fStack000000000000004c = 0.0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  plVar8 = (long *)unaff_x19[5];
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb8b78) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05d25e84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb8b78,0);
LAB_05d25e84:
    (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
    uStack0000000000000040 = CONCAT44(fStack0000000000000024,fStack0000000000000020);
    fStack0000000000000048 = fStack0000000000000028;
    uStack0000000000000054 = (undefined4)uStack0000000000000034;
    uStack0000000000000058 = SUB84(uStack0000000000000034,4);
    fStack000000000000004c = fStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    fVar11 = fStack000000000000002c;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar9 = (float)FUN_06902ab4(&stack0x00000040,0);
    plVar8 = (long *)unaff_x19[5];
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      lVar4 = *(long *)puVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      fVar12 = fVar11;
      fVar13 = param_3;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d25f20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,0);
LAB_05d25f20:
      (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
      fVar14 = fStack0000000000000028;
      fVar15 = fStack0000000000000020;
      plVar8 = (long *)unaff_x19[5];
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        fVar16 = *(float *)(unaff_x19 + 6);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar4 = *(long *)puVar2;
        fStack00000000000000a8 = fStack0000000000000024;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05d25fa8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,1);
LAB_05d25fa8:
        (*(code *)*puVar3)(plVar8,puVar3[1]);
        fStack00000000000000ac = (float)FUN_05d262e8();
        if (DAT_0738e72b == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d508);
          DAT_0738e72b = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        if (0 < (int)unaff_x19[10]) {
          fVar17 = fStack00000000000000a8 + fVar11 * fVar16;
          fVar15 = fVar15 + fVar9 * fVar16;
          fVar14 = fVar14 + param_3 * fVar16;
          fVar12 = SQRT((fVar14 - fVar13) * (fVar14 - fVar13) +
                        (fVar15 - fStack00000000000000ac) * (fVar15 - fStack00000000000000ac) +
                        (fVar17 - fVar12) * (fVar17 - fVar12));
          lVar4 = 0;
          uVar6 = 0;
          do {
            fVar13 = fVar17;
            fVar16 = fVar14;
            uVar10 = FUN_05d2650c(fVar15,fVar17,fVar14,fVar15 + fVar9 * fVar12 * 0.5,
                                  fVar17 + fVar11 * fVar12 * 0.5,fVar14 + param_3 * fVar12 * 0.5);
            lVar5 = unaff_x19[7];
            if (lVar5 == 0) goto LAB_05d26130;
            if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            lVar5 = lVar5 + lVar4;
            *(undefined4 *)(lVar5 + 0x20) = uVar10;
            *(float *)(lVar5 + 0x24) = fVar13;
            *(float *)(lVar5 + 0x28) = fVar16;
            uVar6 = uVar6 + 1;
            lVar4 = lVar4 + 0xc;
          } while ((long)uVar6 < (long)(int)unaff_x19[10]);
        }
        (**(code **)(*unaff_x19 + 0x1c8))();
        return;
      }
    }
  }
LAB_05d26130:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


