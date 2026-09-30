/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboardSpace
ENTRY_POINT: 05d4e80c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboardSpace(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  int in_w9;
  ulong uVar8;
  long lVar9;
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
  
  uVar16 = (**(code **)(param_1 + (long)(in_w9 + 2) * 0x10 + 0x138))();
  puVar1 = PTR_DAT_06fb8620;
  plVar12 = *(long **)(unaff_x21 + 0x88);
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06fb8620) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_74_0__ovrp_SuggestVirtualKeyboardLocation;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06fb8620,2);
OVRPlugin_OVRP_1_74_0__ovrp_SuggestVirtualKeyboardLocation:
    uVar17 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_06902890(uVar16,unaff_d14,unaff_d13,uVar17,unaff_d11,unaff_d10,unaff_d9,&stack0x00000020,0);
    *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
    lVar6 = *(long *)(unaff_x21 + 0xa8);
    if (lVar6 != 0) {
      uVar11 = 0;
      do {
        if (uVar11 == 0x1a) {
          FUN_05d48a44(lVar6,1);
          *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
          thunk_FUN_03048534();
          puVar2 = PTR_DAT_06fb4a40;
          puVar1 = PTR_DAT_06f6d7e8;
          lVar13 = 0;
          lVar6 = 0;
          uVar8 = 0;
          goto LAB_05d4ea70;
        }
        FUN_05d48860(&stack0x00000020,lVar6,uVar11);
        uVar3 = uStack000000000000002c;
        in_stack_00000040 = in_stack_00000020;
        in_stack_00000048 = uStack0000000000000028;
        lVar6 = *(long *)(unaff_x21 + 0xa0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_05d4ebf4;
        plVar12 = *(long **)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
        if (plVar12 == (long *)0x0) break;
        lVar6 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_05d4e9c0;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar1,2);
LAB_05d4e9c0:
        (*(code *)*puVar4)(uVar3,plVar12,puVar4[1]);
        in_stack_00000020 = in_stack_00000040;
        uStack0000000000000028 = in_stack_00000048;
        if (*(long *)(unaff_x21 + 0xa8) == 0) break;
        FUN_05d488a0(*(long *)(unaff_x21 + 0xa8),uVar11);
        lVar6 = *(long *)(unaff_x21 + 0xa8);
        uVar11 = uVar11 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_05d4ea28:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
LAB_05d4ea70:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_05d4ea28;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d4ebf4;
  uVar11 = *(uint *)(lVar5 + lVar6 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar11 < 0) {
    if (DAT_0738e663 == '\0') {
      FUN_02fe925c(puVar1);
      DAT_0738e663 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar21 = pfVar7[2];
    fVar14 = pfVar7[3];
  }
  else {
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_05d4ebf4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar9 = lVar9 + (ulong)uVar11 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar20 = *(float *)(lVar9 + 0x34);
    fVar22 = *(float *)(lVar9 + 0x38);
    fVar14 = (float)FUN_068ec9ec(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_05d4ebf4;
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
  if (lVar5 == 0) goto LAB_05d4ea28;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d4ebf4;
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
  goto LAB_05d4ea70;
}


