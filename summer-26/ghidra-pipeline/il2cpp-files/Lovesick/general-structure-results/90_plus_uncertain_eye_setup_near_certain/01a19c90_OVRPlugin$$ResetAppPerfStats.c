/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 01a19c90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetAppPerfStats(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
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
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x20 + 0x9ac) = 1;
  puVar2 = StringLiteral_6259;
  puVar1 = StringLiteral_1958;
  in_stack_00000048 = 0.0;
  fStack000000000000004c = 0.0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  plVar8 = (long *)unaff_x19[4];
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_1958) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01a19d0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_1958,0);
LAB_01a19d0c:
    (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
    in_stack_00000040 = CONCAT44(fStack0000000000000024,fStack0000000000000020);
    in_stack_00000048 = fStack0000000000000028;
    uStack0000000000000054 = (undefined4)uStack0000000000000034;
    in_stack_00000058 = SUB84(uStack0000000000000034,4);
    fStack000000000000004c = fStack000000000000002c;
    in_stack_00000050 = uStack0000000000000030;
    fVar11 = fStack000000000000002c;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar9 = (float)FUN_02666e8c(&stack0x00000040,0);
    plVar8 = (long *)unaff_x19[4];
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      lVar4 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      fVar12 = fVar11;
      fVar13 = param_3;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01a19da8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,0);
LAB_01a19da8:
      (*(code *)*puVar3)(&stack0x00000020,plVar8,puVar3[1]);
      fVar14 = fStack0000000000000028;
      fVar15 = fStack0000000000000020;
      plVar8 = (long *)unaff_x19[4];
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        fVar16 = *(float *)(unaff_x19 + 5);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        lVar4 = *(long *)puVar1;
        fStack00000000000000a8 = fStack0000000000000024;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_01a19e30;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,1);
LAB_01a19e30:
        (*(code *)*puVar3)(plVar8,puVar3[1]);
        fStack00000000000000ac = (float)FUN_01a1a140();
        if (DAT_03774e1a == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1a = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (0 < (int)unaff_x19[9]) {
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
            uVar10 = FUN_01a1a364(fVar15,fVar17,fVar14,fVar15 + fVar9 * fVar12 * 0.5,
                                  fVar17 + fVar11 * fVar12 * 0.5,fVar14 + param_3 * fVar12 * 0.5);
            lVar5 = unaff_x19[6];
            if (lVar5 == 0) goto LAB_01a19fb8;
            if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar5 = lVar5 + lVar4;
            *(undefined4 *)(lVar5 + 0x20) = uVar10;
            *(float *)(lVar5 + 0x24) = fVar13;
            *(float *)(lVar5 + 0x28) = fVar16;
            uVar6 = uVar6 + 1;
            lVar4 = lVar4 + 0xc;
          } while ((long)uVar6 < (long)(int)unaff_x19[9]);
        }
        (**(code **)(*unaff_x19 + 0x1c8))();
        return;
      }
    }
  }
LAB_01a19fb8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


