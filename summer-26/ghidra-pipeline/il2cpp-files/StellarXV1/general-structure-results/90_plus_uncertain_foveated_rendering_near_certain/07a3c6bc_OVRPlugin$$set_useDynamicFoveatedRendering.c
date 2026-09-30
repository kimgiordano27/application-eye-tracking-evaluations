/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 07a3c6bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  
  fVar8 = (float)FUN_089d9cf0();
  plVar7 = (long *)unaff_x19[5];
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    fVar11 = param_3;
    fVar13 = param_2;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07a3c71c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x21,0);
LAB_07a3c71c:
    (*(code *)*puVar2)(&stack0x00000078,plVar7,puVar2[1]);
    fVar16 = in_stack_00000080;
    uVar1 = in_stack_00000078;
    plVar7 = (long *)unaff_x19[5];
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      fVar9 = *(float *)(unaff_x19 + 6);
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_07a3c794;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x21,1);
LAB_07a3c794:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      fVar10 = (float)FUN_07a3caa8();
      if (DAT_098855ad == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        DAT_098855ad = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (0 < (int)unaff_x19[10]) {
        lVar3 = 0;
        uVar5 = 0;
        fVar14 = (float)uVar1 + fVar8 * fVar9;
        fVar15 = (float)((ulong)uVar1 >> 0x20) + param_2 * fVar9;
        fVar16 = fVar16 + param_3 * fVar9;
        fVar11 = SQRT((fVar16 - fVar11) * (fVar16 - fVar11) +
                      (fVar14 - fVar10) * (fVar14 - fVar10) + (fVar15 - fVar13) * (fVar15 - fVar13))
        ;
        fVar13 = fVar15 + param_2 * fVar11 * 0.5;
        do {
          fVar9 = fVar15;
          fVar10 = fVar16;
          uVar12 = FUN_07a3cccc(CONCAT44(fVar15,fVar14),fVar15,fVar16,
                                CONCAT44(fVar13,fVar14 + fVar8 * fVar11 * 0.5),fVar13,
                                fVar16 + param_3 * fVar11 * 0.5);
          lVar4 = unaff_x19[7];
          if (lVar4 == 0) goto LAB_07a3c90c;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar4 = lVar4 + lVar3;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0xc;
          *(undefined4 *)(lVar4 + 0x20) = uVar12;
          *(float *)(lVar4 + 0x24) = fVar9;
          *(float *)(lVar4 + 0x28) = fVar10;
        } while ((long)uVar5 < (long)(int)unaff_x19[10]);
      }
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
LAB_07a3c90c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


