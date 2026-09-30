/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 04f6f38c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float in_stack_00000030;
  float in_stack_00000040;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04f6f3c4;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f6f3c4:
  (*(code *)*puVar2)(&stack0x00000078);
  fVar15 = in_stack_00000080;
  uVar1 = in_stack_00000078;
  plVar7 = (long *)unaff_x19[5];
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    fVar8 = *(float *)(unaff_x19 + 6);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_04f6f43c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x21,1);
LAB_04f6f43c:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    fVar9 = (float)FUN_04f6f750();
    if (DAT_066c1d99 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d99 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (0 < (int)unaff_x19[10]) {
      lVar3 = 0;
      uVar5 = 0;
      fVar13 = (float)uVar1 + in_stack_00000040 * fVar8;
      fVar14 = (float)((ulong)uVar1 >> 0x20) + in_stack_00000030 * fVar8;
      fVar15 = fVar15 + unaff_s8 * fVar8;
      fVar8 = SQRT((fVar15 - param_4) * (fVar15 - param_4) +
                   (fVar13 - fVar9) * (fVar13 - fVar9) + (fVar14 - param_3) * (fVar14 - param_3));
      fVar9 = fVar14 + in_stack_00000030 * fVar8 * 0.5;
      do {
        fVar11 = fVar14;
        fVar12 = fVar15;
        uVar10 = FUN_04f6f974(CONCAT44(fVar14,fVar13),fVar14,fVar15,
                              CONCAT44(fVar9,fVar13 + in_stack_00000040 * fVar8 * 0.5),fVar9,
                              fVar15 + unaff_s8 * fVar8 * 0.5);
        lVar4 = unaff_x19[7];
        if (lVar4 == 0) goto LAB_04f6f5b4;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = lVar4 + lVar3;
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0xc;
        *(undefined4 *)(lVar4 + 0x20) = uVar10;
        *(float *)(lVar4 + 0x24) = fVar11;
        *(float *)(lVar4 + 0x28) = fVar12;
      } while ((long)uVar5 < (long)(int)unaff_x19[10]);
    }
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
LAB_04f6f5b4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


