/*
FUNCTION_NAME: OVRPlugin$$ResetDefaultExternalCamera
ENTRY_POINT: 060d40b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetDefaultExternalCamera
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  undefined1 in_stack_00000090 [16];
  float in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  float fStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined8 uStack00000000000000c4;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_6) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060d40f0;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060d40f0:
  (*(code *)*puVar2)(&stack0x00000090 + 4);
  in_stack_000000b0 = in_stack_00000090._4_8_;
  uStack00000000000000c4 = in_stack_000000a8;
  fStack00000000000000bc = in_stack_000000a0;
  fVar14 = in_stack_000000a0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar8 = (float)FUN_071ce620(&stack0x000000b0,0);
  plVar7 = (long *)unaff_x19[5];
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    fVar11 = param_4;
    fVar13 = fVar14;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_060d4188;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x21,0);
LAB_060d4188:
    (*(code *)*puVar2)(&stack0x00000078,plVar7,puVar2[1]);
    fVar17 = in_stack_00000080;
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
            goto LAB_060d4200;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x21,1);
LAB_060d4200:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      fVar10 = (float)FUN_060d4514();
      if (DAT_07ed78be == '\0') {
        FUN_03642964(PTR_DAT_079f4df0);
        DAT_07ed78be = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (0 < (int)unaff_x19[10]) {
        lVar3 = 0;
        uVar5 = 0;
        fVar15 = (float)uVar1 + fVar8 * fVar9;
        fVar16 = (float)((ulong)uVar1 >> 0x20) + fVar14 * fVar9;
        fVar17 = fVar17 + param_4 * fVar9;
        fVar11 = SQRT((fVar17 - fVar11) * (fVar17 - fVar11) +
                      (fVar15 - fVar10) * (fVar15 - fVar10) + (fVar16 - fVar13) * (fVar16 - fVar13))
        ;
        fVar14 = fVar16 + fVar14 * fVar11 * 0.5;
        do {
          fVar13 = fVar16;
          fVar9 = fVar17;
          uVar12 = FUN_060d4738(CONCAT44(fVar16,fVar15),fVar16,fVar17,
                                CONCAT44(fVar14,fVar15 + fVar8 * fVar11 * 0.5),fVar14,
                                fVar17 + param_4 * fVar11 * 0.5);
          lVar4 = unaff_x19[7];
          if (lVar4 == 0) goto LAB_060d4378;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar4 = lVar4 + lVar3;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0xc;
          *(undefined4 *)(lVar4 + 0x20) = uVar12;
          *(float *)(lVar4 + 0x24) = fVar13;
          *(float *)(lVar4 + 0x28) = fVar9;
        } while ((long)uVar5 < (long)(int)unaff_x19[10]);
      }
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
LAB_060d4378:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


