/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$ovrp_GetAdaptiveGpuPerformanceScale2
ENTRY_POINT: 07ca9a5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_42_0__ovrp_GetAdaptiveGpuPerformanceScale2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long lVar12;
  long *unaff_x24;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while (uVar4 = uStack000000000000002c, unaff_x23 != (long *)0x0) {
    lVar7 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07ca9ab8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(unaff_x23,*unaff_x24,2);
LAB_07ca9ab8:
    (*(code *)*puVar5)(uVar4,unaff_x23,puVar5[1]);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    FUN_07ca3958(*(long *)(unaff_x21 + 0xa8),unaff_w22);
    lVar7 = *(long *)(unaff_x21 + 0xa8);
    unaff_w22 = unaff_w22 + 1;
    if (lVar7 == 0) break;
    if (unaff_w22 == 0x1a) {
      FUN_07ca3afc(lVar7,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
      thunk_FUN_044bb4b4();
      puVar3 = PTR_DAT_09f4d0a0;
      puVar2 = PTR_DAT_09f1eb60;
      lVar12 = 0;
      lVar7 = 0;
      uVar9 = 0;
      goto LAB_07ca9b68;
    }
    FUN_07ca3918(&stack0x00000020,lVar7,unaff_w22);
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar7 = *(long *)(unaff_x21 + 0xa0);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_07ca9cec;
    unaff_x23 = *(long **)(lVar7 + (long)(int)unaff_w22 * 8 + 0x20);
  }
LAB_07ca9b20:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07ca9b68:
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_07ca9cec;
  uVar1 = *(uint *)(lVar6 + lVar7 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(puVar2);
      DAT_0a51bf45 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar14 = *pfVar8;
    fVar16 = pfVar8[1];
    fVar18 = pfVar8[2];
    fVar13 = pfVar8[3];
  }
  else {
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar10 = lVar10 + (ulong)uVar1 * 0x1c;
    fVar15 = *(float *)(lVar10 + 0x30);
    fVar17 = *(float *)(lVar10 + 0x34);
    fVar19 = *(float *)(lVar10 + 0x38);
    fVar13 = (float)FUN_095165fc(*(undefined4 *)(lVar10 + 0x2c),0);
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_07ca9cec;
    lVar10 = lVar10 + lVar12;
    fVar20 = *(float *)(lVar10 + 0x2c);
    fVar23 = *(float *)(lVar10 + 0x30);
    fVar22 = *(float *)(lVar10 + 0x34);
    fVar21 = *(float *)(lVar10 + 0x38);
    fVar14 = (fVar15 * fVar22 + fVar19 * fVar20 + fVar13 * fVar21) - fVar17 * fVar23;
    fVar16 = (fVar17 * fVar20 + fVar19 * fVar23 + fVar15 * fVar21) - fVar13 * fVar22;
    fVar18 = (fVar13 * fVar23 + fVar19 * fVar22 + fVar17 * fVar21) - fVar15 * fVar20;
    fVar13 = ((fVar19 * fVar21 - fVar13 * fVar20) - fVar15 * fVar23) - fVar17 * fVar22;
  }
  if (lVar6 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_07ca9cec;
  lVar6 = lVar6 + lVar7 * 4;
  lVar7 = lVar7 + 4;
  uVar9 = uVar9 + 1;
  lVar12 = lVar12 + 0x1c;
  *(float *)(lVar6 + 0x20) = fVar14;
  *(float *)(lVar6 + 0x24) = fVar16;
  *(float *)(lVar6 + 0x28) = fVar18;
  *(float *)(lVar6 + 0x2c) = fVar13;
  if (lVar7 == 0x68) {
    return 1;
  }
  goto LAB_07ca9b68;
}


