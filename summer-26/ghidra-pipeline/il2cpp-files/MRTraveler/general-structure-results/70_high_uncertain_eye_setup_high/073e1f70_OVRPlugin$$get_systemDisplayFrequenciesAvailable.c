/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 073e1f70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequenciesAvailable
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000040;
  float fStack0000000000000048;
  undefined4 uStack0000000000000050;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  uStack0000000000000040 = _fStack0000000000000020;
  fStack0000000000000048 = fStack0000000000000028;
  uStack0000000000000050 = in_stack_00000030;
  fVar9 = fStack000000000000002c;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar7 = (float)FUN_085e987c(&stack0x00000040,0);
  plVar6 = (long *)unaff_x19[5];
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    fVar10 = fVar9;
    fVar11 = param_3;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073e1ffc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x21,0);
LAB_073e1ffc:
    (*(code *)*puVar1)(&stack0x00000020,plVar6,puVar1[1]);
    fVar12 = fStack0000000000000028;
    fVar13 = fStack0000000000000020;
    plVar6 = (long *)unaff_x19[5];
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      fVar14 = *(float *)(unaff_x19 + 6);
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      fStack00000000000000a8 = fStack0000000000000024;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_073e2084;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x21,1);
LAB_073e2084:
      (*(code *)*puVar1)(plVar6,puVar1[1]);
      fStack00000000000000ac = (float)FUN_073e23c4();
      if (DAT_09410538 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_09410538 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (0 < (int)unaff_x19[10]) {
        fVar15 = fStack00000000000000a8 + fVar9 * fVar14;
        fVar13 = fVar13 + fVar7 * fVar14;
        fVar12 = fVar12 + param_3 * fVar14;
        fVar10 = SQRT((fVar12 - fVar11) * (fVar12 - fVar11) +
                      (fVar13 - fStack00000000000000ac) * (fVar13 - fStack00000000000000ac) +
                      (fVar15 - fVar10) * (fVar15 - fVar10));
        lVar2 = 0;
        uVar4 = 0;
        do {
          fVar11 = fVar15;
          fVar14 = fVar12;
          uVar8 = FUN_073e25e8(fVar13,fVar15,fVar12,fVar13 + fVar7 * fVar10 * 0.5,
                               fVar15 + fVar9 * fVar10 * 0.5,fVar12 + param_3 * fVar10 * 0.5);
          lVar3 = unaff_x19[7];
          if (lVar3 == 0) goto LAB_073e220c;
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          lVar3 = lVar3 + lVar2;
          *(undefined4 *)(lVar3 + 0x20) = uVar8;
          *(float *)(lVar3 + 0x24) = fVar11;
          *(float *)(lVar3 + 0x28) = fVar14;
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + 0xc;
        } while ((long)uVar4 < (long)(int)unaff_x19[10]);
      }
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
LAB_073e220c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


