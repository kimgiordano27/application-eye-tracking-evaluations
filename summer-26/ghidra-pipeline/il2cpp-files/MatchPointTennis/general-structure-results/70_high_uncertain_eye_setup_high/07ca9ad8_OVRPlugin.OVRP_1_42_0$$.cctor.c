/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 07ca9ad8
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


undefined8 OVRPlugin_OVRP_1_42_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *unaff_x24;
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
  float fVar24;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while( true ) {
    uStack0000000000000020 = in_stack_00000040;
    uStack0000000000000028 = in_stack_00000048;
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    FUN_07ca3958(*(long *)(unaff_x21 + 0xa8),unaff_w22);
    lVar12 = *(long *)(unaff_x21 + 0xa8);
    unaff_w22 = unaff_w22 + 1;
    if (lVar12 == 0) break;
    if (unaff_w22 == 0x1a) {
      FUN_07ca3afc(lVar12,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar12 + 0x18);
      thunk_FUN_044bb4b4();
      puVar3 = PTR_DAT_09f4d0a0;
      puVar2 = PTR_DAT_09f1eb60;
      lVar13 = 0;
      lVar12 = 0;
      uVar8 = 0;
      goto LAB_07ca9b68;
    }
    FUN_07ca3918(&stack0x00000020,lVar12,unaff_w22);
    uVar4 = uStack000000000000002c;
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000048 = uStack0000000000000028;
    lVar12 = *(long *)(unaff_x21 + 0xa0);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w22) goto LAB_07ca9cec;
    plVar11 = *(long **)(lVar12 + (long)(int)unaff_w22 * 8 + 0x20);
    if (plVar11 == (long *)0x0) break;
    lVar12 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07ca9ab8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar11,*unaff_x24,2);
LAB_07ca9ab8:
    (*(code *)*puVar5)(uVar4,plVar11,puVar5[1]);
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
  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_07ca9cec;
  uVar1 = *(uint *)(lVar6 + lVar12 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar1 < 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(puVar2);
      DAT_0a51bf45 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar15 = *pfVar7;
    fVar17 = pfVar7[1];
    fVar19 = pfVar7[2];
    fVar14 = pfVar7[3];
  }
  else {
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar9 = lVar9 + (ulong)uVar1 * 0x1c;
    fVar16 = *(float *)(lVar9 + 0x30);
    fVar18 = *(float *)(lVar9 + 0x34);
    fVar20 = *(float *)(lVar9 + 0x38);
    fVar14 = (float)FUN_095165fc(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_07ca9cec;
    lVar9 = lVar9 + lVar13;
    fVar21 = *(float *)(lVar9 + 0x2c);
    fVar24 = *(float *)(lVar9 + 0x30);
    fVar23 = *(float *)(lVar9 + 0x34);
    fVar22 = *(float *)(lVar9 + 0x38);
    fVar15 = (fVar16 * fVar23 + fVar20 * fVar21 + fVar14 * fVar22) - fVar18 * fVar24;
    fVar17 = (fVar18 * fVar21 + fVar20 * fVar24 + fVar16 * fVar22) - fVar14 * fVar23;
    fVar19 = (fVar14 * fVar24 + fVar20 * fVar23 + fVar18 * fVar22) - fVar16 * fVar21;
    fVar14 = ((fVar20 * fVar22 - fVar14 * fVar21) - fVar16 * fVar24) - fVar18 * fVar23;
  }
  if (lVar6 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_07ca9cec;
  lVar6 = lVar6 + lVar12 * 4;
  lVar12 = lVar12 + 4;
  uVar8 = uVar8 + 1;
  lVar13 = lVar13 + 0x1c;
  *(float *)(lVar6 + 0x20) = fVar15;
  *(float *)(lVar6 + 0x24) = fVar17;
  *(float *)(lVar6 + 0x28) = fVar19;
  *(float *)(lVar6 + 0x2c) = fVar14;
  if (lVar12 == 0x68) {
    return 1;
  }
  goto LAB_07ca9b68;
}


