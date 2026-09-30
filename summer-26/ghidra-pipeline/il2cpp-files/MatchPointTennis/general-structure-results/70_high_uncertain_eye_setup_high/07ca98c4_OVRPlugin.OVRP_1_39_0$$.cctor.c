/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 07ca98c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_39_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  long *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_07ca9910;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_07ca9910:
  uVar16 = (*(code *)*puVar4)();
  puVar1 = PTR_DAT_09f50368;
  plVar12 = *(long **)(unaff_x21 + 0x88);
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f50368) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07ca9998;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f50368,2);
LAB_07ca9998:
    uVar17 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_09537b20(uVar16,unaff_d14,unaff_d13,uVar17,unaff_d11,unaff_d10,unaff_d9,&stack0x00000020,0);
    *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
    lVar6 = *(long *)(unaff_x21 + 0xa8);
    if (lVar6 != 0) {
      uVar11 = 0;
      do {
        if (uVar11 == 0x1a) {
          FUN_07ca3afc(lVar6,1);
          *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
          thunk_FUN_044bb4b4();
          puVar2 = PTR_DAT_09f4d0a0;
          puVar1 = PTR_DAT_09f1eb60;
          lVar13 = 0;
          lVar6 = 0;
          uVar8 = 0;
          goto LAB_07ca9b68;
        }
        FUN_07ca3918(&stack0x00000020,lVar6,uVar11);
        uVar3 = uStack000000000000002c;
        in_stack_00000040 = in_stack_00000020;
        in_stack_00000048 = uStack0000000000000028;
        lVar6 = *(long *)(unaff_x21 + 0xa0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_07ca9cec;
        plVar12 = *(long **)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
        if (plVar12 == (long *)0x0) break;
        lVar6 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_07ca9ab8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar1,2);
LAB_07ca9ab8:
        (*(code *)*puVar4)(uVar3,plVar12,puVar4[1]);
        in_stack_00000020 = in_stack_00000040;
        uStack0000000000000028 = in_stack_00000048;
        if (*(long *)(unaff_x21 + 0xa8) == 0) break;
        FUN_07ca3958(*(long *)(unaff_x21 + 0xa8),uVar11);
        lVar6 = *(long *)(unaff_x21 + 0xa8);
        uVar11 = uVar11 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_07ca9b20:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07ca9b68:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_07ca9cec;
  uVar11 = *(uint *)(lVar5 + lVar6 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar11 < 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(puVar1);
      DAT_0a51bf45 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar21 = pfVar7[2];
    fVar14 = pfVar7[3];
  }
  else {
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar9 = lVar9 + (ulong)uVar11 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar20 = *(float *)(lVar9 + 0x34);
    fVar22 = *(float *)(lVar9 + 0x38);
    fVar14 = (float)FUN_095165fc(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_07ca9cec;
    lVar9 = lVar9 + lVar13;
    fVar23 = *(float *)(lVar9 + 0x2c);
    fVar26 = *(float *)(lVar9 + 0x30);
    fVar25 = *(float *)(lVar9 + 0x34);
    fVar24 = *(float *)(lVar9 + 0x38);
    fVar15 = (fVar18 * fVar25 + fVar22 * fVar23 + fVar14 * fVar24) - fVar20 * fVar26;
    fVar19 = (fVar20 * fVar23 + fVar22 * fVar26 + fVar18 * fVar24) - fVar14 * fVar25;
    fVar21 = (fVar14 * fVar26 + fVar22 * fVar25 + fVar20 * fVar24) - fVar18 * fVar23;
    fVar14 = ((fVar22 * fVar24 - fVar14 * fVar23) - fVar18 * fVar26) - fVar20 * fVar25;
  }
  if (lVar5 == 0) goto LAB_07ca9b20;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_07ca9cec;
  lVar5 = lVar5 + lVar6 * 4;
  lVar6 = lVar6 + 4;
  uVar8 = uVar8 + 1;
  lVar13 = lVar13 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar15;
  *(float *)(lVar5 + 0x24) = fVar19;
  *(float *)(lVar5 + 0x28) = fVar21;
  *(float *)(lVar5 + 0x2c) = fVar14;
  if (lVar6 == 0x68) {
    return 1;
  }
  goto LAB_07ca9b68;
}


