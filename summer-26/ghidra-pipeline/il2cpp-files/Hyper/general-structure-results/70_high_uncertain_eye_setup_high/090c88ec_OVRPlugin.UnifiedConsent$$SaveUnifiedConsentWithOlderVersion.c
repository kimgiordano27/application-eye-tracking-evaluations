/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 090c88ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SaveUnifiedConsentWithOlderVersion(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  uint uVar7;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s12;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 unaff_s14;
  undefined4 uStack0000000000000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    uVar13 = *(undefined4 *)(unaff_x29 + 0x24);
    uVar17 = *(undefined4 *)(unaff_x29 + 0x28);
    uVar20 = *(undefined4 *)(unaff_x29 + 0x2c);
    uStack0000000000000000 = unaff_s14;
    uVar9 = FUN_0a16a610(*(undefined4 *)(unaff_x29 + 0x20),param_1);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x27) break;
    *(undefined4 *)(unaff_x29 + 0x20) = uVar9;
    *(undefined4 *)(unaff_x29 + 0x24) = uVar13;
    *(undefined4 *)(unaff_x29 + 0x28) = uVar17;
    *(undefined4 *)(unaff_x29 + 0x2c) = uVar20;
    do {
      while( true ) {
        lVar6 = *(long *)(unaff_x19 + 0x158);
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        if (*(int *)(lVar6 + unaff_x26 * 4 + 0x20) == 0) {
          lVar6 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar6 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_090c8d90;
        uVar9 = FUN_0904e2ec(lVar6,0);
        lVar6 = *(long *)(unaff_x19 + 0x148);
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        if (unaff_x21 == 0) goto LAB_090c8d90;
        uVar7 = (uint)unaff_x27;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        lVar6 = lVar6 + unaff_x26 * 0x10;
        fVar14 = *(float *)(lVar6 + 0x24);
        fVar19 = *(float *)(lVar6 + 0x28);
        fVar21 = *(float *)(lVar6 + 0x2c);
        uStack0000000000000000 = uVar9;
        uVar9 = FUN_0a16a610(*(undefined4 *)(lVar6 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(float *)(unaff_x28 + 0x24) = fVar14;
        *(float *)(unaff_x28 + 0x28) = fVar19;
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
        *(float *)(unaff_x28 + 0x2c) = fVar21;
        if (uVar2 <= uVar7) goto LAB_090c8d8c;
        lVar6 = *(long *)(unaff_x19 + 0x150);
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        lVar6 = lVar6 + unaff_x26 * 0x10;
        unaff_w20 = unaff_w20 + 1;
        *(undefined4 *)(lVar6 + 0x20) = uVar9;
        *(float *)(lVar6 + 0x24) = fVar14;
        *(float *)(lVar6 + 0x28) = fVar19;
        *(float *)(lVar6 + 0x2c) = fVar21;
        lVar6 = *unaff_x22;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar6 = *unaff_x22;
        }
        if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_090c8d90;
        if (*(int *)(**(long **)(lVar6 + 0xb8) + 0x18) <= (int)unaff_w20) {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x158);
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        unaff_x26 = (long)(int)unaff_w20;
        iVar1 = *(int *)(lVar6 + unaff_x26 * 4 + 0x20);
        fVar8 = (float)FUN_090c90a0();
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        lVar4 = *unaff_x22;
        unaff_s14 = *(undefined4 *)(lVar6 + unaff_x26 * 4 + 0x20);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar4 = *unaff_x22;
        }
        plVar5 = *(long **)(lVar4 + 0xb8);
        lVar6 = *plVar5;
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        uVar7 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
        unaff_x27 = (long)(int)uVar7;
        unaff_x28 = unaff_x21 + unaff_x27 * 0x10;
        if (iVar1 != 1) break;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          plVar5 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar6 = plVar5[3];
        if (lVar6 == 0) goto LAB_090c8d90;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
        lVar4 = *unaff_x24;
        cVar3 = *(char *)(lVar6 + unaff_x26 + 0x20);
        if (cVar3 != '\0') {
          unaff_s12 = 0.0;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar4 = *unaff_x24;
        }
        lVar6 = *(long *)(lVar4 + 0xb8);
        uVar15 = *(undefined8 *)(lVar6 + 0x24);
        fVar29 = *(float *)(lVar6 + 0x2c);
        uVar22 = *(undefined8 *)(lVar6 + 0x3c);
        fVar27 = *(float *)(lVar6 + 0x44);
        fVar16 = (float)((ulong)uVar15 >> 0x20);
        fVar12 = (float)((ulong)in_stack_00000048 >> 0x20);
        fVar11 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * unaff_s12 * fVar12;
        fVar18 = unaff_s12 * fVar29 * unaff_w23 * in_stack_00000040._4_4_;
        uVar23 = uVar22;
        fVar10 = (float)FUN_0a16a898(0);
        fVar28 = (float)uVar23;
        fVar26 = (fVar14 * fVar18 + fVar21 * fVar10 + fVar8 * fVar28) - fVar19 * fVar11;
        fVar25 = (fVar19 * fVar10 + fVar21 * fVar11 + fVar14 * fVar28) - fVar8 * fVar18;
        fVar24 = (fVar8 * fVar11 + fVar21 * fVar18 + fVar19 * fVar28) - fVar14 * fVar10;
        fVar14 = ((fVar21 * fVar28 - fVar8 * fVar10) - fVar14 * fVar11) - fVar19 * fVar18;
        fStack0000000000000088 = fVar26;
        fStack000000000000008c = fVar25;
        fStack0000000000000090 = fVar24;
        fStack0000000000000094 = fVar14;
        if (unaff_x21 == 0) goto LAB_090c8d90;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        fVar19 = (float)FUN_090c9260(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
        if (unaff_s12 <= fVar19) {
          unaff_s12 = fVar19;
        }
        if (0.0 <= fVar19) {
          if (cVar3 != '\0') {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
            fVar10 = *(float *)(unaff_x28 + 0x20);
            fVar18 = *(float *)(unaff_x28 + 0x24);
            fVar11 = *(float *)(unaff_x28 + 0x28);
            fVar28 = *(float *)(unaff_x28 + 0x2c);
            fVar21 = fVar18;
            fVar8 = fVar11;
            uVar9 = FUN_0a16adac(0);
            uVar13 = FUN_0a16adac(fVar26,fVar25,fVar24,fVar14,uVar15,fVar16,fVar29,0);
            fVar16 = (float)((ulong)uVar22 >> 0x20);
            uStack0000000000000000 =
                 FUN_0a16adac(fVar10,fVar18,fVar11,fVar28,uVar22,fVar16,fVar27,0);
            fVar21 = (float)FUN_0901abf4(uVar9,fVar21,fVar8,uVar13,fVar25,fVar24,0);
            fVar19 = fVar19 * *(float *)(unaff_x19 + 0xb0);
            fVar14 = 1.0;
            if (fVar19 <= 1.0) {
              fVar14 = fVar19;
            }
            fVar14 = 1.0 - fVar14;
            fVar8 = 1.0;
            if (0.0 <= fVar19) {
              fVar8 = fVar14;
            }
            fVar12 = fVar16 * fVar21 * fVar8 * fVar12;
            fVar21 = fVar27 * fVar21 * fVar8 * in_stack_00000040._4_4_;
            fVar19 = (float)FUN_0a16a898(0);
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
            *(float *)(unaff_x28 + 0x20) =
                 (fVar18 * fVar21 + fVar28 * fVar19 + fVar10 * fVar14) - fVar11 * fVar12;
            *(float *)(unaff_x28 + 0x24) =
                 (fVar11 * fVar19 + fVar28 * fVar12 + fVar18 * fVar14) - fVar10 * fVar21;
            *(float *)(unaff_x28 + 0x28) =
                 (fVar10 * fVar12 + fVar28 * fVar21 + fVar11 * fVar14) - fVar18 * fVar19;
            *(float *)(unaff_x28 + 0x2c) =
                 ((fVar28 * fVar14 - fVar10 * fVar19) - fVar18 * fVar12) - fVar11 * fVar21;
          }
        }
        else {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uStack0000000000000000 = unaff_s14;
          uVar9 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x21 == 0) {
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    param_1 = 0;
    unaff_x29 = unaff_x28;
  }
LAB_090c8d8c:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


