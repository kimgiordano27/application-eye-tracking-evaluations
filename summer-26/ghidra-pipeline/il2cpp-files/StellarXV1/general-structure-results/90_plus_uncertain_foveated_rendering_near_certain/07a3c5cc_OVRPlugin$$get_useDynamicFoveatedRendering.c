/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 07a3c5cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  undefined1 in_stack_00000090 [16];
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  float fStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  
  if ((DAT_09895292 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0508);
    FUN_04077588(PTR_DAT_092b7110);
    DAT_09895292 = 1;
  }
  puVar2 = PTR_DAT_092f0508;
  puVar1 = PTR_DAT_092b7110;
  plVar9 = (long *)param_4[5];
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  fStack00000000000000bc = 0.0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c4 = 0;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092f0508) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07a3c684;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092f0508,0);
LAB_07a3c684:
    (*(code *)*puVar4)(&stack0x00000090 + 4,plVar9,puVar4[1]);
    in_stack_000000b8 = in_stack_00000090._12_4_;
    in_stack_000000b0 = in_stack_00000090._4_8_;
    uStack00000000000000c4 = (undefined4)in_stack_000000a8;
    in_stack_000000c8 = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
    fStack00000000000000bc = fStack00000000000000a0;
    in_stack_000000c0 = uStack00000000000000a4;
    fVar16 = fStack00000000000000a0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar10 = (float)FUN_089d9cf0(&stack0x000000b0,0);
    plVar9 = (long *)param_4[5];
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar13 = param_3;
      fVar15 = fVar16;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07a3c71c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,0);
LAB_07a3c71c:
      (*(code *)*puVar4)(&stack0x00000078,plVar9,puVar4[1]);
      fVar19 = in_stack_00000080;
      uVar3 = in_stack_00000078;
      plVar9 = (long *)param_4[5];
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        fVar11 = *(float *)(param_4 + 6);
        lVar5 = *(long *)puVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07a3c794;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,1);
LAB_07a3c794:
        (*(code *)*puVar4)(plVar9,puVar4[1]);
        fVar12 = (float)FUN_07a3caa8(param_4);
        if (DAT_098855ad == '\0') {
          FUN_04077588(PTR_DAT_09285ae0);
          DAT_098855ad = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (0 < (int)param_4[10]) {
          lVar5 = 0;
          uVar7 = 0;
          fVar17 = (float)uVar3 + fVar10 * fVar11;
          fVar18 = (float)((ulong)uVar3 >> 0x20) + fVar16 * fVar11;
          fVar19 = fVar19 + param_3 * fVar11;
          fVar13 = SQRT((fVar19 - fVar13) * (fVar19 - fVar13) +
                        (fVar17 - fVar12) * (fVar17 - fVar12) +
                        (fVar18 - fVar15) * (fVar18 - fVar15));
          fVar16 = fVar18 + fVar16 * fVar13 * 0.5;
          do {
            fVar15 = fVar18;
            fVar11 = fVar19;
            uVar14 = FUN_07a3cccc(CONCAT44(fVar18,fVar17),fVar18,fVar19,
                                  CONCAT44(fVar16,fVar17 + fVar10 * fVar13 * 0.5),fVar16,
                                  fVar19 + param_3 * fVar13 * 0.5);
            lVar6 = param_4[7];
            if (lVar6 == 0) goto LAB_07a3c90c;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar6 = lVar6 + lVar5;
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0xc;
            *(undefined4 *)(lVar6 + 0x20) = uVar14;
            *(float *)(lVar6 + 0x24) = fVar15;
            *(float *)(lVar6 + 0x28) = fVar11;
          } while ((long)uVar7 < (long)(int)param_4[10]);
        }
        (**(code **)(*param_4 + 0x1c8))(param_4,param_4[7],*(undefined8 *)(*param_4 + 0x1d0));
        return;
      }
    }
  }
LAB_07a3c90c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


