/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetUnifiedConsent
ENTRY_POINT: 090c8a5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetUnifiedConsent(float param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
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
  uint unaff_w29;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  do {
    if (param_1 <= unaff_s14) {
      param_1 = unaff_s14;
    }
    uVar7 = (uint)unaff_x27;
    fVar11 = (float)((ulong)in_stack_00000048 >> 0x20);
    if (0.0 <= unaff_s14) {
      if (unaff_w29 != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) {
LAB_090c8d8c:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        fVar19 = *(float *)(unaff_x28 + 0x20);
        fVar21 = *(float *)(unaff_x28 + 0x24);
        fVar9 = *(float *)(unaff_x28 + 0x28);
        fVar22 = *(float *)(unaff_x28 + 0x2c);
        fVar14 = fVar21;
        fVar17 = fVar9;
        uVar10 = FUN_0a16adac(0);
        uVar12 = FUN_0a16adac(unaff_s10,unaff_s9,unaff_s8,unaff_s15,in_stack_00000050,
                              (int)((ulong)in_stack_00000050 >> 0x20),unaff_s13,0);
        fVar15 = (float)((ulong)in_stack_00000060 >> 0x20);
        FUN_0a16adac(fVar19,fVar21,fVar9,fVar22,in_stack_00000060,fVar15,unaff_s12,0);
        fVar17 = (float)FUN_0901abf4(uVar10,fVar14,fVar17,uVar12,unaff_s9,unaff_s8,0);
        fVar8 = unaff_s14 * *(float *)(unaff_x19 + 0xb0);
        fVar14 = 1.0;
        if (fVar8 <= 1.0) {
          fVar14 = fVar8;
        }
        fVar14 = 1.0 - fVar14;
        fVar13 = 1.0;
        if (0.0 <= fVar8) {
          fVar13 = fVar14;
        }
        fVar8 = fVar15 * fVar17 * fVar13 * fVar11;
        fVar15 = unaff_s12 * fVar17 * fVar13 * in_stack_00000040._4_4_;
        fVar17 = (float)FUN_0a16a898(0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(float *)(unaff_x28 + 0x20) =
             (fVar21 * fVar15 + fVar22 * fVar17 + fVar19 * fVar14) - fVar9 * fVar8;
        *(float *)(unaff_x28 + 0x24) =
             (fVar9 * fVar17 + fVar22 * fVar8 + fVar21 * fVar14) - fVar19 * fVar15;
        *(float *)(unaff_x28 + 0x28) =
             (fVar19 * fVar8 + fVar22 * fVar15 + fVar9 * fVar14) - fVar21 * fVar17;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar22 * fVar14 - fVar19 * fVar17) - fVar21 * fVar8) - fVar9 * fVar15;
      }
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar18;
    }
    while( true ) {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      if (*(int *)(lVar5 + unaff_x26 * 4 + 0x20) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_090c8d90;
      FUN_0904e2ec(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      if (unaff_x21 == 0) goto LAB_090c8d90;
      uVar7 = (uint)unaff_x27;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      fVar14 = *(float *)(lVar5 + 0x24);
      fVar17 = *(float *)(lVar5 + 0x28);
      fVar19 = *(float *)(lVar5 + 0x2c);
      uVar10 = FUN_0a16a610(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(float *)(unaff_x28 + 0x24) = fVar14;
      *(float *)(unaff_x28 + 0x28) = fVar17;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar19;
      if (uVar2 <= uVar7) goto LAB_090c8d8c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar10;
      *(float *)(lVar5 + 0x24) = fVar14;
      *(float *)(lVar5 + 0x28) = fVar17;
      *(float *)(lVar5 + 0x2c) = fVar19;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *unaff_x22;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_090c8d90;
      if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      unaff_x26 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar5 + unaff_x26 * 4 + 0x20);
      fVar8 = (float)FUN_090c90a0();
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_090c8d90;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *unaff_x22;
      }
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      uVar7 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
      unaff_x27 = (long)(int)uVar7;
      unaff_x28 = unaff_x21 + unaff_x27 * 0x10;
      if (iVar1 == 1) break;
      if (iVar1 == 2) {
        if (unaff_x21 == 0) goto LAB_090c8d90;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar18;
      }
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      plVar4 = *(long **)(*unaff_x22 + 0xb8);
    }
    lVar5 = plVar4[3];
    if (lVar5 == 0) {
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
    lVar6 = *unaff_x24;
    bVar3 = *(byte *)(lVar5 + unaff_x26 + 0x20);
    unaff_w29 = (uint)bVar3;
    if (bVar3 != 0) {
      param_1 = 0.0;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *unaff_x24;
    }
    lVar5 = *(long *)(lVar6 + 0xb8);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x24);
    unaff_s13 = *(float *)(lVar5 + 0x2c);
    in_stack_00000060 = *(undefined8 *)(lVar5 + 0x3c);
    unaff_s12 = *(float *)(lVar5 + 0x44);
    fVar11 = (float)((ulong)in_stack_00000050 >> 0x20) * (float)((ulong)in_stack_00000038 >> 0x20) *
             param_1 * fVar11;
    fVar15 = param_1 * unaff_s13 * unaff_w23 * in_stack_00000040._4_4_;
    uVar20 = in_stack_00000060;
    fVar9 = (float)FUN_0a16a898(0);
    fVar21 = (float)uVar20;
    unaff_s10 = (fVar14 * fVar15 + fVar19 * fVar9 + fVar8 * fVar21) - fVar17 * fVar11;
    unaff_s9 = (fVar17 * fVar9 + fVar19 * fVar11 + fVar14 * fVar21) - fVar8 * fVar15;
    unaff_s8 = (fVar8 * fVar11 + fVar19 * fVar15 + fVar17 * fVar21) - fVar14 * fVar9;
    unaff_s15 = ((fVar19 * fVar21 - fVar8 * fVar9) - fVar14 * fVar11) - fVar17 * fVar15;
    fStack0000000000000088 = unaff_s10;
    fStack000000000000008c = unaff_s9;
    fStack0000000000000090 = unaff_s8;
    fStack0000000000000094 = unaff_s15;
    if (unaff_x21 == 0) goto LAB_090c8d90;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
    unaff_s14 = (float)FUN_090c9260(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
  } while( true );
}


