/*
FUNCTION_NAME: OVRPlugin$$set_eyeDepth
ENTRY_POINT: 05d79ab0
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


void OVRPlugin__set_eyeDepth
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  int iVar1;
  char cVar2;
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
  undefined4 *unaff_x24;
  long unaff_x25;
  uint uVar8;
  long unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *unaff_x29;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  while (uVar10 = FUN_06bdda30(param_5), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
    *unaff_x24 = uVar10;
    *unaff_x27 = param_2;
    *unaff_x28 = param_3;
    *unaff_x29 = param_4;
    do {
      while( true ) {
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar4 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_05d79dd4;
        FUN_05d06448(lVar4,0);
        lVar4 = *(long *)(unaff_x19 + 0x148);
        if (lVar4 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        if (unaff_x20 == 0) goto LAB_05d79dd4;
        uVar8 = (uint)unaff_x26;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        lVar5 = unaff_x20 + unaff_x26 * 0x10;
        uVar14 = *(undefined4 *)(lVar4 + 0x24);
        uVar17 = *(undefined4 *)(lVar4 + 0x28);
        uVar20 = *(undefined4 *)(lVar4 + 0x2c);
        uVar10 = FUN_06bdda30(*(undefined4 *)(lVar4 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
        *(undefined4 *)(lVar5 + 0x20) = uVar10;
        *(undefined4 *)(lVar5 + 0x24) = uVar14;
        *(undefined4 *)(lVar5 + 0x28) = uVar17;
        *(undefined4 *)(lVar5 + 0x2c) = uVar20;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar10;
        *(undefined4 *)(lVar4 + 0x24) = uVar14;
        *(undefined4 *)(lVar4 + 0x28) = uVar17;
        *(undefined4 *)(lVar4 + 0x2c) = uVar20;
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
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        lVar7 = *(long *)(unaff_x19 + 0x140);
        if (lVar7 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
        if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        unaff_x25 = (long)(int)unaff_w21;
        lVar7 = lVar7 + unaff_x25 * 0x10;
        iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
        fVar26 = *(float *)(lVar7 + 0x20);
        fVar24 = *(float *)(lVar7 + 0x24);
        fVar21 = *(float *)(lVar7 + 0x28);
        fVar22 = *(float *)(lVar7 + 0x2c);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar4 = *unaff_x22;
          plVar3 = *(long **)(lVar4 + 0xb8);
          lVar5 = *plVar3;
          if (lVar5 == 0) goto LAB_05d79dd4;
        }
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
        uVar8 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
        unaff_x26 = (long)(int)uVar8;
        if (iVar1 != 1) break;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          plVar3 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar4 = plVar3[3];
        if (lVar4 == 0) goto LAB_05d79dd4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
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
        fVar15 = *(float *)(lVar4 + 0x3c);
        fVar11 = *(float *)(lVar4 + 0x40);
        fVar29 = *(float *)(lVar4 + 0x24);
        fVar28 = *(float *)(lVar4 + 0x28);
        fVar18 = *(float *)(lVar4 + 0x2c);
        fVar12 = *(float *)(lVar4 + 0x44);
        fVar19 = unaff_s15 * fVar18 * -90.0;
        fVar13 = unaff_s15 * fVar28 * -90.0 * in_stack_00000058;
        fVar16 = fVar19 * in_stack_00000058;
        fVar9 = (float)FUN_06bddcac(unaff_s15 * fVar29 * -90.0 * in_stack_00000058,0);
        fVar27 = (fVar24 * fVar16 + fVar22 * fVar9 + fVar26 * fVar19) - fVar21 * fVar13;
        fVar25 = (fVar21 * fVar9 + fVar22 * fVar13 + fVar24 * fVar19) - fVar26 * fVar16;
        fVar23 = (fVar26 * fVar13 + fVar22 * fVar16 + fVar21 * fVar19) - fVar24 * fVar9;
        fVar21 = ((fVar22 * fVar19 - fVar26 * fVar9) - fVar24 * fVar13) - fVar21 * fVar16;
        fStack0000000000000060 = fVar27;
        fStack0000000000000064 = fVar25;
        fStack0000000000000068 = fVar23;
        fStack000000000000006c = fVar21;
        if (unaff_x20 == 0) goto LAB_05d79dd4;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
        fVar22 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
        if (unaff_s15 <= fVar22) {
          unaff_s15 = fVar22;
        }
        if (fVar22 < 0.0) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          unaff_x27 = (undefined4 *)(lVar4 + 0x24);
          param_2 = *unaff_x27;
          unaff_x28 = (undefined4 *)(lVar4 + 0x28);
          param_3 = *unaff_x28;
          unaff_x29 = (undefined4 *)(lVar4 + 0x2c);
          param_4 = *unaff_x29;
          goto LAB_05d79aac;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar9 = *(float *)(lVar4 + 0x20);
          fVar13 = *(float *)(lVar4 + 0x24);
          fVar16 = *(float *)(lVar4 + 0x28);
          fVar19 = *(float *)(lVar4 + 0x2c);
          fVar24 = fVar13;
          fVar26 = fVar16;
          uVar10 = FUN_06bde1c4(0);
          uVar14 = FUN_06bde1c4(fVar27,fVar25,fVar23,fVar21,fVar29,fVar28,fVar18,0);
          FUN_06bde1c4(0);
          fVar24 = (float)FUN_05bfefc8(uVar10,fVar24,fVar26,uVar14,fVar25,fVar23,0);
          fVar22 = fVar22 * *(float *)(unaff_x19 + 0xb0);
          fVar21 = fVar22;
          if (1.0 < fVar22) {
            fVar21 = 1.0;
          }
          fVar21 = 1.0 - fVar21;
          if (fVar22 < 0.0) {
            fVar21 = 1.0;
          }
          fVar11 = fVar11 * fVar24 * fVar21;
          fVar22 = fVar11 * in_stack_00000058;
          fVar26 = fVar12 * fVar24 * fVar21 * in_stack_00000058;
          fVar21 = (float)FUN_06bddcac(fVar15 * fVar24 * fVar21 * in_stack_00000058,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_05d79dd0;
          *(float *)(lVar4 + 0x20) =
               (fVar13 * fVar26 + fVar19 * fVar21 + fVar9 * fVar11) - fVar16 * fVar22;
          *(float *)(lVar4 + 0x24) =
               (fVar16 * fVar21 + fVar19 * fVar22 + fVar13 * fVar11) - fVar9 * fVar26;
          *(float *)(lVar4 + 0x28) =
               (fVar9 * fVar22 + fVar19 * fVar26 + fVar16 * fVar11) - fVar13 * fVar21;
          *(float *)(lVar4 + 0x2c) =
               ((fVar19 * fVar11 - fVar9 * fVar21) - fVar13 * fVar22) - fVar16 * fVar26;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x20 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) break;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x27 = (undefined4 *)(lVar4 + 0x24);
    param_2 = *unaff_x27;
    unaff_x28 = (undefined4 *)(lVar4 + 0x28);
    param_3 = *unaff_x28;
    unaff_x29 = (undefined4 *)(lVar4 + 0x2c);
    param_4 = *unaff_x29;
LAB_05d79aac:
    unaff_x24 = (undefined4 *)(lVar4 + 0x20);
    param_5 = 0;
  }
LAB_05d79dd0:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


