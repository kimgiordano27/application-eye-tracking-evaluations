/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 090c8c10
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


void OVRPlugin_UnifiedConsent__GetConsentTitle
               (float param_1,ulong param_2,ulong param_3,ulong param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
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
  float *unaff_x29;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s11;
  float fVar28;
  float fVar29;
  float unaff_s13;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  do {
    fVar18 = (float)param_3;
    fVar13 = (float)param_2;
    *unaff_x29 = (unaff_s15 * fVar18 + param_5 + param_6) - unaff_s13 * fVar13;
    unaff_x29[1] = (unaff_s13 * param_1 + param_7 + param_8) - unaff_s11 * fVar18;
    unaff_x29[2] = (unaff_s11 * fVar13 + in_s16 + in_s17) - unaff_s15 * param_1;
    unaff_x29[3] = ((in_s18 * (float)param_4 - unaff_s11 * param_1) - unaff_s15 * fVar13) -
                   unaff_s13 * fVar18;
LAB_090c8c74:
    do {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) {
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
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
      fVar13 = *(float *)(lVar5 + 0x24);
      fVar18 = *(float *)(lVar5 + 0x28);
      fVar22 = *(float *)(lVar5 + 0x2c);
      uVar10 = FUN_0a16a610(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(float *)(unaff_x28 + 0x24) = fVar13;
      *(float *)(unaff_x28 + 0x28) = fVar18;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar22;
      if (uVar2 <= uVar7) goto LAB_090c8d8c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar10;
      *(float *)(lVar5 + 0x24) = fVar13;
      *(float *)(lVar5 + 0x28) = fVar18;
      *(float *)(lVar5 + 0x2c) = fVar22;
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
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_090c8d90;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        }
        goto LAB_090c8c74;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar6 = *unaff_x24;
      cVar3 = *(char *)(lVar5 + unaff_x26 + 0x20);
      if (cVar3 != '\0') {
        in_stack_00000070 = 0.0;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *unaff_x24;
      }
      lVar5 = *(long *)(lVar6 + 0xb8);
      uVar14 = *(undefined8 *)(lVar5 + 0x24);
      fVar29 = *(float *)(lVar5 + 0x2c);
      uVar23 = *(undefined8 *)(lVar5 + 0x3c);
      fVar28 = *(float *)(lVar5 + 0x44);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar19 = (float)((ulong)in_stack_00000048 >> 0x20);
      fVar11 = fVar15 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar19;
      fVar17 = in_stack_00000070 * fVar29 * unaff_w23 * in_stack_00000040._4_4_;
      uVar24 = uVar23;
      fVar9 = (float)FUN_0a16a898(0);
      fVar21 = (float)uVar24;
      fVar27 = (fVar13 * fVar17 + fVar22 * fVar9 + fVar8 * fVar21) - fVar18 * fVar11;
      fVar26 = (fVar18 * fVar9 + fVar22 * fVar11 + fVar13 * fVar21) - fVar8 * fVar17;
      fVar25 = (fVar8 * fVar11 + fVar22 * fVar17 + fVar18 * fVar21) - fVar13 * fVar9;
      fVar13 = ((fVar22 * fVar21 - fVar8 * fVar9) - fVar13 * fVar11) - fVar18 * fVar17;
      fStack0000000000000088 = fVar27;
      fStack000000000000008c = fVar26;
      fStack0000000000000090 = fVar25;
      fStack0000000000000094 = fVar13;
      if (unaff_x21 == 0) goto LAB_090c8d90;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      fVar18 = (float)FUN_090c9260(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= fVar18) {
        in_stack_00000070 = fVar18;
      }
      if (fVar18 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        goto LAB_090c8c74;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) {
LAB_090c8d8c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_s18 = *(float *)(unaff_x28 + 0x2c);
    fVar22 = unaff_s15;
    fVar8 = unaff_s13;
    uVar10 = FUN_0a16adac(0);
    uVar12 = FUN_0a16adac(fVar27,fVar26,fVar25,fVar13,uVar14,fVar15,fVar29,0);
    fVar9 = (float)((ulong)uVar23 >> 0x20);
    FUN_0a16adac(unaff_s11,unaff_s15,unaff_s13,in_s18,uVar23,fVar9,fVar28,0);
    fVar22 = (float)FUN_0901abf4(uVar10,fVar22,fVar8,uVar12,fVar26,fVar25,0);
    fVar18 = fVar18 * *(float *)(unaff_x19 + 0xb0);
    fVar13 = 1.0;
    if (fVar18 <= 1.0) {
      fVar13 = fVar18;
    }
    param_4 = (ulong)(uint)(1.0 - fVar13);
    fVar8 = 1.0;
    if (0.0 <= fVar18) {
      fVar8 = 1.0 - fVar13;
    }
    param_3 = (ulong)(uint)(fVar28 * fVar22 * fVar8 * in_stack_00000040._4_4_);
    param_2 = (ulong)(uint)(fVar9 * fVar22 * fVar8 * fVar19);
    param_1 = (float)FUN_0a16a898(0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
    fVar13 = (float)param_4;
    param_6 = unaff_s11 * fVar13;
    param_8 = unaff_s15 * fVar13;
    in_s17 = unaff_s13 * fVar13;
    param_5 = in_s18 * param_1;
    param_7 = in_s18 * (float)param_2;
    in_s16 = in_s18 * (float)param_3;
  } while( true );
}


