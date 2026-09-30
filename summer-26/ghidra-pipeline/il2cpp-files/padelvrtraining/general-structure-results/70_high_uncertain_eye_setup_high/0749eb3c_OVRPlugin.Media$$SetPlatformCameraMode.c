/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 0749eb3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetPlatformCameraMode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x21;
  uint uVar13;
  long unaff_x22;
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
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xef8));
                    /* catch() { ... } // from try @ 0749eb18 with catch @ 0749eb48 */
                    /* try { // try from 0749eb4c to 0759eb57 has its CatchHandler @ 0749eb6c */
  FUN_03d2d2b0(PTR_DAT_091a0c40);
  *(undefined1 *)(unaff_x22 + 0xb7e) = 1;
                    /* try { // try from 0749eb58 to 0759eb63 has its CatchHandler @ 0749eadc */
  uVar11 = *(undefined8 *)(unaff_x21 + 0x80);
                    /* try { // try from 0749eb64 to 0759eb6b has its CatchHandler @ 0749eb6c */
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0749eb4c with catch @ 0749eb6c
                       catch(type#2 @ 00000000) { ... } // from try @ 0749eb64 with catch @ 0749eb6c
                        */
                    /* try { // try from 0749eb70 to 0759ed1b has its CatchHandler @ 0749eb70
                       catch() { ... } // from try @ 0749eb70 with catch @ 0749eb70
                       catch() { ... } // from try @ 0749ed34 with catch @ 0749eb70
                       catch() { ... } // from try @ 0749ed7c with catch @ 0749eb70
                       catch() { ... } // from try @ 0749eda4 with catch @ 0749eb70
                       catch() { ... } // from try @ 0749ede4 with catch @ 0749eb70 */
  uVar3 = FUN_08a52164(uVar11,0,0);
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
    uVar11 = FUN_04f224d4(*plVar12,*(undefined8 *)PTR_DAT_09223cc8);
    FUN_07499934(uVar14,uVar11,0);
    plVar15 = *(long **)(unaff_x21 + 0x90);
    if (plVar15 != (long *)0x0) {
      lVar6 = *plVar15;
      fVar31 = 1.0 / fVar31;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09221d00) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0749ec34;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(plVar15,*(long *)PTR_DAT_09221d00,2);
LAB_0749ec34:
      uVar11 = (*(code *)*puVar4)(uVar33,uVar3,uVar23,fVar31,plVar15,puVar4[1]);
      puVar1 = PTR_DAT_09222ef8;
      plVar15 = *(long **)(unaff_x21 + 0x88);
      if (plVar15 != (long *)0x0) {
        lVar6 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09222ef8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0749ecbc;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03d8f370(plVar15,*(long *)PTR_DAT_09222ef8,2);
LAB_0749ecbc:
        uVar14 = (*(code *)*puVar4)(uVar32,uVar20,uVar24,uVar26,fVar31,plVar15,puVar4[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_08a5b7d0(uVar11,uVar3,uVar23,uVar14,uVar20,uVar24,uVar26,&stack0x00000020,0);
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        lVar6 = *(long *)(unaff_x21 + 0xa8);
        if (lVar6 != 0) {
          uVar13 = 0;
          do {
            if (uVar13 == 0x1a) {
              FUN_07499428(lVar6,1);
              *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
              thunk_FUN_03d1023c(plVar12);
              puVar2 = PTR_DAT_0921fad0;
              puVar1 = PTR_DAT_091a0f90;
              lVar16 = 0;
              lVar6 = 0;
              uVar3 = 0;
              goto LAB_0749ee8c;
            }
            FUN_07499244(&stack0x00000020,lVar6,uVar13);
            uVar32 = uStack000000000000002c;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000048 = uStack0000000000000028;
            lVar6 = *(long *)(unaff_x21 + 0xa0);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_0749f010;
            plVar15 = *(long **)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) break;
            lVar6 = *plVar15;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_0749eddc;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_03d8f370(plVar15,*(long *)puVar1,2);
LAB_0749eddc:
            (*(code *)*puVar4)(uVar32,plVar15,puVar4[1]);
            in_stack_00000020 = in_stack_00000040;
            uStack0000000000000028 = in_stack_00000048;
            if (*(long *)(unaff_x21 + 0xa8) == 0) break;
            FUN_07499284(*(long *)(unaff_x21 + 0xa8),uVar13);
            lVar6 = *(long *)(unaff_x21 + 0xa8);
            uVar13 = uVar13 + 1;
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_0749ee44:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_0749ee8c:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0749f010;
  uVar13 = *(uint *)(lVar5 + lVar6 + 0x20);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if ((int)uVar13 < 0) {
    if (DAT_098362c8 == '\0') {
      FUN_03d2d2b0(puVar1);
      DAT_098362c8 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar31 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar17 = pfVar7[3];
  }
  else {
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_0749f010:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar21 = *(float *)(lVar9 + 0x34);
    fVar25 = *(float *)(lVar9 + 0x38);
    fVar17 = (float)UnityEngine_UIElements_DoubleField_DoubleInput__StringToValue
                              (*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_0749ee44;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_0749f010;
    lVar9 = lVar9 + lVar16;
    fVar27 = *(float *)(lVar9 + 0x2c);
    fVar30 = *(float *)(lVar9 + 0x30);
    fVar29 = *(float *)(lVar9 + 0x34);
    fVar28 = *(float *)(lVar9 + 0x38);
    fVar31 = (fVar18 * fVar29 + fVar25 * fVar27 + fVar17 * fVar28) - fVar21 * fVar30;
    fVar19 = (fVar21 * fVar27 + fVar25 * fVar30 + fVar18 * fVar28) - fVar17 * fVar29;
    fVar22 = (fVar17 * fVar30 + fVar25 * fVar29 + fVar21 * fVar28) - fVar18 * fVar27;
    fVar17 = ((fVar25 * fVar28 - fVar17 * fVar27) - fVar18 * fVar30) - fVar21 * fVar29;
  }
  if (lVar5 == 0) goto LAB_0749ee44;
  if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0749f010;
  lVar5 = lVar5 + lVar6 * 4;
  lVar6 = lVar6 + 4;
  uVar3 = uVar3 + 1;
  lVar16 = lVar16 + 0x1c;
  *(float *)(lVar5 + 0x20) = fVar31;
  *(float *)(lVar5 + 0x24) = fVar19;
  *(float *)(lVar5 + 0x28) = fVar22;
  *(float *)(lVar5 + 0x2c) = fVar17;
  if (lVar6 == 0x68) {
    return 1;
  }
  goto LAB_0749ee8c;
}


