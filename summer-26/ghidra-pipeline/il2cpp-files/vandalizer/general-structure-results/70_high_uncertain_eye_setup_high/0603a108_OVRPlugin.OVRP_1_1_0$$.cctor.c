/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$.cctor
ENTRY_POINT: 0603a108
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x21;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  uVar3 = FUN_06e5ba28();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x21 + 0x80) != 0) && (unaff_x19 != 0)) {
    fVar31 = *(float *)(*(long *)(unaff_x21 + 0x80) + 0x3c);
    plVar12 = (long *)(unaff_x19 + 0x38);
    uVar14 = *(undefined8 *)(unaff_x21 + 0xa8);
    uVar33 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar23 = (ulong)*(uint *)(unaff_x19 + 0x1c);
    uVar32 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar20 = (ulong)*(uint *)(unaff_x19 + 0x24);
    uVar24 = (ulong)*(uint *)(unaff_x19 + 0x28);
    uVar26 = (ulong)*(uint *)(unaff_x19 + 0x2c);
    uVar4 = FUN_03df7ee4(*plVar12,*(undefined8 *)PTR_DAT_075f7b98);
    FUN_060348dc(uVar14,uVar4,0);
    plVar15 = *(long **)(unaff_x21 + 0x90);
    if (plVar15 != (long *)0x0) {
      lVar7 = *plVar15;
      fVar31 = 1.0 / fVar31;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_075f5db0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_0603a1d4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar15,*(long *)PTR_DAT_075f5db0,2);
LAB_0603a1d4:
      uVar4 = (*(code *)*puVar5)(uVar33,uVar3,uVar23,fVar31,plVar15,puVar5[1]);
      puVar1 = PTR_DAT_075f6e38;
      plVar15 = *(long **)(unaff_x21 + 0x88);
      if (plVar15 != (long *)0x0) {
        lVar7 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_075f6e38) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_0603a25c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8(plVar15,*(long *)PTR_DAT_075f6e38,2);
LAB_0603a25c:
        uVar14 = (*(code *)*puVar5)(uVar32,uVar20,uVar24,uVar26,fVar31,plVar15,puVar5[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_06e67e1c(uVar4,uVar3,uVar23,uVar14,uVar20,uVar24,uVar26,&stack0x00000020,0);
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        lVar7 = *(long *)(unaff_x21 + 0xa8);
        if (lVar7 != 0) {
          uVar13 = 0;
          do {
            if (uVar13 == 0x1a) {
              FUN_060343d0(lVar7,1);
              *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
              thunk_FUN_0329bf60(plVar12);
              puVar2 = PTR_DAT_075f2ea8;
              puVar1 = PTR_DAT_075b55e8;
              lVar16 = 0;
              lVar7 = 0;
              uVar3 = 0;
              goto LAB_0603a42c;
            }
            FUN_060341ec(&stack0x00000020,lVar7,uVar13);
            uVar32 = uStack000000000000002c;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000048 = uStack0000000000000028;
            lVar7 = *(long *)(unaff_x21 + 0xa0);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_0603a5b0;
            plVar15 = *(long **)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) break;
            lVar7 = *plVar15;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_0603a37c;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar15,*(long *)puVar1,2);
LAB_0603a37c:
            (*(code *)*puVar5)(uVar32,plVar15,puVar5[1]);
            in_stack_00000020 = in_stack_00000040;
            uStack0000000000000028 = in_stack_00000048;
            if (*(long *)(unaff_x21 + 0xa8) == 0) break;
            FUN_0603422c(*(long *)(unaff_x21 + 0xa8),uVar13);
            lVar7 = *(long *)(unaff_x21 + 0xa8);
            uVar13 = uVar13 + 1;
          } while (lVar7 != 0);
        }
      }
    }
  }
LAB_0603a3e4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
LAB_0603a42c:
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0603a5b0;
  uVar13 = *(uint *)(lVar6 + lVar7 + 0x20);
  lVar6 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar13 < 0) {
    if (DAT_07a3f53c == '\0') {
      FUN_031f20f4(puVar1);
      DAT_07a3f53c = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar31 = *pfVar8;
    fVar19 = pfVar8[1];
    fVar22 = pfVar8[2];
    fVar17 = pfVar8[3];
  }
  else {
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_0603a5b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar10 = lVar10 + (ulong)uVar13 * 0x1c;
    fVar18 = *(float *)(lVar10 + 0x30);
    fVar21 = *(float *)(lVar10 + 0x34);
    fVar25 = *(float *)(lVar10 + 0x38);
    fVar17 = (float)FUN_06e45c00(*(undefined4 *)(lVar10 + 0x2c),0);
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_0603a3e4;
    if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0603a5b0;
    lVar10 = lVar10 + lVar16;
    fVar27 = *(float *)(lVar10 + 0x2c);
    fVar30 = *(float *)(lVar10 + 0x30);
    fVar29 = *(float *)(lVar10 + 0x34);
    fVar28 = *(float *)(lVar10 + 0x38);
    fVar31 = (fVar18 * fVar29 + fVar25 * fVar27 + fVar17 * fVar28) - fVar21 * fVar30;
    fVar19 = (fVar21 * fVar27 + fVar25 * fVar30 + fVar18 * fVar28) - fVar17 * fVar29;
    fVar22 = (fVar17 * fVar30 + fVar25 * fVar29 + fVar21 * fVar28) - fVar18 * fVar27;
    fVar17 = ((fVar25 * fVar28 - fVar17 * fVar27) - fVar18 * fVar30) - fVar21 * fVar29;
  }
  if (lVar6 == 0) goto LAB_0603a3e4;
  if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0603a5b0;
  lVar6 = lVar6 + lVar7 * 4;
  lVar7 = lVar7 + 4;
  uVar3 = uVar3 + 1;
  lVar16 = lVar16 + 0x1c;
  *(float *)(lVar6 + 0x20) = fVar31;
  *(float *)(lVar6 + 0x24) = fVar19;
  *(float *)(lVar6 + 0x28) = fVar22;
  *(float *)(lVar6 + 0x2c) = fVar17;
  if (lVar7 == 0x68) {
    return 1;
  }
  goto LAB_0603a42c;
}


