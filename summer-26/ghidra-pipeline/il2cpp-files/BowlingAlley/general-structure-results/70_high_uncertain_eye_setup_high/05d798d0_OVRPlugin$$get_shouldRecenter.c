/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 05d798d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_shouldRecenter(void)

{
  int iVar1;
  char cVar2;
  uint in_w8;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar8;
  long unaff_x25;
  uint uVar9;
  long unaff_x26;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x05d798d0:
  if ((uint)unaff_x26 < in_w8) {
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    puVar8 = (undefined4 *)(lVar4 + 0x20);
    uVar13 = *puVar8;
    puVar10 = (undefined4 *)(lVar4 + 0x24);
    uVar15 = *puVar10;
    puVar11 = (undefined4 *)(lVar4 + 0x28);
    uVar19 = *puVar11;
    puVar12 = (undefined4 *)(lVar4 + 0x2c);
    uVar22 = *puVar12;
    while (uVar13 = FUN_06bdda30(uVar13,0), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
      *puVar8 = uVar13;
      *puVar10 = uVar15;
      *puVar11 = uVar19;
      *puVar12 = uVar22;
LAB_05d79ad0:
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_05d79dd4;
      FUN_05d06448(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      uVar9 = (uint)unaff_x26;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      lVar5 = unaff_x20 + unaff_x26 * 0x10;
      uVar15 = *(undefined4 *)(lVar4 + 0x24);
      uVar19 = *(undefined4 *)(lVar4 + 0x28);
      uVar22 = *(undefined4 *)(lVar4 + 0x2c);
      uVar13 = FUN_06bdda30(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      *(undefined4 *)(lVar5 + 0x20) = uVar13;
      *(undefined4 *)(lVar5 + 0x24) = uVar15;
      *(undefined4 *)(lVar5 + 0x28) = uVar19;
      *(undefined4 *)(lVar5 + 0x2c) = uVar22;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar13;
      *(undefined4 *)(lVar4 + 0x24) = uVar15;
      *(undefined4 *)(lVar4 + 0x28) = uVar19;
      *(undefined4 *)(lVar4 + 0x2c) = uVar22;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x22;
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_05d79dd4;
      if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
      lVar7 = *(long *)(unaff_x19 + 0x140);
      if (lVar7 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) break;
      unaff_x25 = (long)(int)unaff_w21;
      lVar7 = lVar7 + unaff_x25 * 0x10;
      iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
      fVar30 = *(float *)(lVar7 + 0x20);
      fVar28 = *(float *)(lVar7 + 0x24);
      fVar25 = *(float *)(lVar7 + 0x28);
      fVar26 = *(float *)(lVar7 + 0x2c);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x22;
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_05d79dd4;
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
      uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
      unaff_x26 = (long)(int)uVar9;
      if (iVar1 != 1) {
        if (iVar1 != 2) goto LAB_05d79ad0;
        if (unaff_x20 != 0) {
          in_w8 = *(uint *)(unaff_x20 + 0x18);
          goto code_r0x05d798d0;
        }
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        plVar3 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      lVar5 = *unaff_x23;
      cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *unaff_x23;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      fVar20 = *(float *)(lVar4 + 0x3c);
      fVar16 = *(float *)(lVar4 + 0x40);
      fVar33 = *(float *)(lVar4 + 0x24);
      fVar32 = *(float *)(lVar4 + 0x28);
      fVar23 = *(float *)(lVar4 + 0x2c);
      fVar17 = *(float *)(lVar4 + 0x44);
      fVar24 = unaff_s15 * fVar23 * -90.0;
      fVar18 = unaff_s15 * fVar32 * -90.0 * in_stack_00000058;
      fVar21 = fVar24 * in_stack_00000058;
      fVar14 = (float)FUN_06bddcac(unaff_s15 * fVar33 * -90.0 * in_stack_00000058,0);
      fVar31 = (fVar28 * fVar21 + fVar26 * fVar14 + fVar30 * fVar24) - fVar25 * fVar18;
      fVar29 = (fVar25 * fVar14 + fVar26 * fVar18 + fVar28 * fVar24) - fVar30 * fVar21;
      fVar27 = (fVar30 * fVar18 + fVar26 * fVar21 + fVar25 * fVar24) - fVar28 * fVar14;
      fVar25 = ((fVar26 * fVar24 - fVar30 * fVar14) - fVar28 * fVar18) - fVar25 * fVar21;
      fStack0000000000000060 = fVar31;
      fStack0000000000000064 = fVar29;
      fStack0000000000000068 = fVar27;
      fStack000000000000006c = fVar25;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      fVar26 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar26) {
        unaff_s15 = fVar26;
      }
      if (0.0 <= fVar26) {
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar14 = *(float *)(lVar4 + 0x20);
          fVar18 = *(float *)(lVar4 + 0x24);
          fVar21 = *(float *)(lVar4 + 0x28);
          fVar24 = *(float *)(lVar4 + 0x2c);
          fVar28 = fVar18;
          fVar30 = fVar21;
          uVar13 = FUN_06bde1c4(0);
          uVar15 = FUN_06bde1c4(fVar31,fVar29,fVar27,fVar25,fVar33,fVar32,fVar23,0);
          FUN_06bde1c4(0);
          fVar28 = (float)FUN_05bfefc8(uVar13,fVar28,fVar30,uVar15,fVar29,fVar27,0);
          fVar26 = fVar26 * *(float *)(unaff_x19 + 0xb0);
          fVar25 = fVar26;
          if (1.0 < fVar26) {
            fVar25 = 1.0;
          }
          fVar25 = 1.0 - fVar25;
          if (fVar26 < 0.0) {
            fVar25 = 1.0;
          }
          fVar16 = fVar16 * fVar28 * fVar25;
          fVar26 = fVar16 * in_stack_00000058;
          fVar30 = fVar17 * fVar28 * fVar25 * in_stack_00000058;
          fVar25 = (float)FUN_06bddcac(fVar20 * fVar28 * fVar25 * in_stack_00000058,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          *(float *)(lVar4 + 0x20) =
               (fVar18 * fVar30 + fVar24 * fVar25 + fVar14 * fVar16) - fVar21 * fVar26;
          *(float *)(lVar4 + 0x24) =
               (fVar21 * fVar25 + fVar24 * fVar26 + fVar18 * fVar16) - fVar14 * fVar30;
          *(float *)(lVar4 + 0x28) =
               (fVar14 * fVar26 + fVar24 * fVar30 + fVar21 * fVar16) - fVar18 * fVar25;
          *(float *)(lVar4 + 0x2c) =
               ((fVar24 * fVar16 - fVar14 * fVar25) - fVar18 * fVar26) - fVar21 * fVar30;
        }
        goto LAB_05d79ad0;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      lVar4 = unaff_x20 + unaff_x26 * 0x10;
      puVar8 = (undefined4 *)(lVar4 + 0x20);
      uVar13 = *puVar8;
      puVar10 = (undefined4 *)(lVar4 + 0x24);
      uVar15 = *puVar10;
      puVar11 = (undefined4 *)(lVar4 + 0x28);
      uVar19 = *puVar11;
      puVar12 = (undefined4 *)(lVar4 + 0x2c);
      uVar22 = *puVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


