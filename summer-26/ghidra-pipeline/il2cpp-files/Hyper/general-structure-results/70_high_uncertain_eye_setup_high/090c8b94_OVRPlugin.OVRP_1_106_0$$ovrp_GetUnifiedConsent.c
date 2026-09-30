/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetUnifiedConsent
ENTRY_POINT: 090c8b94
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


void OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,float param_6,
               undefined8 param_7)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float *unaff_x29;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
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
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float unaff_s11;
  float unaff_s12;
  float fVar26;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    fVar9 = (float)FUN_0901abf4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    fVar14 = unaff_s14 * *(float *)(unaff_x19 + 0xb0);
    fVar22 = 1.0;
    if (fVar14 <= 1.0) {
      fVar22 = fVar14;
    }
    fVar22 = 1.0 - fVar22;
    fVar19 = 1.0;
    if (0.0 <= fVar14) {
      fVar19 = fVar22;
    }
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar12 = (float)((ulong)in_stack_00000060 >> 0x20) * fVar9 * fVar19 * fVar14;
    fVar19 = unaff_s12 * fVar9 * fVar19 * in_stack_00000040._4_4_;
    fVar9 = (float)FUN_0a16a898(0);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x27) break;
    *unaff_x29 = (unaff_s15 * fVar19 + in_stack_00000050 * fVar9 + unaff_s11 * fVar22) -
                 unaff_s13 * fVar12;
    unaff_x29[1] = (unaff_s13 * fVar9 + in_stack_00000050 * fVar12 + unaff_s15 * fVar22) -
                   unaff_s11 * fVar19;
    unaff_x29[2] = (unaff_s11 * fVar12 + in_stack_00000050 * fVar19 + unaff_s13 * fVar22) -
                   unaff_s15 * fVar9;
    unaff_x29[3] = ((in_stack_00000050 * fVar22 - unaff_s11 * fVar9) - unaff_s15 * fVar12) -
                   unaff_s13 * fVar19;
LAB_090c8c74:
    do {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) {
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      if (*(int *)(lVar4 + unaff_x26 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_090c8d90;
      FUN_0904e2ec(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      if (unaff_x21 == 0) goto LAB_090c8d90;
      uVar7 = (uint)unaff_x27;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      lVar4 = lVar4 + unaff_x26 * 0x10;
      fVar22 = *(float *)(lVar4 + 0x24);
      fVar9 = *(float *)(lVar4 + 0x28);
      fVar19 = *(float *)(lVar4 + 0x2c);
      uVar10 = FUN_0a16a610(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(float *)(unaff_x28 + 0x24) = fVar22;
      *(float *)(unaff_x28 + 0x28) = fVar9;
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar19;
      if (uVar8 <= uVar7) goto LAB_090c8d8c;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar4 = lVar4 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar10;
      *(float *)(lVar4 + 0x24) = fVar22;
      *(float *)(lVar4 + 0x28) = fVar9;
      *(float *)(lVar4 + 0x2c) = fVar19;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *unaff_x22;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_090c8d90;
      if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      unaff_x26 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar4 + unaff_x26 * 4 + 0x20);
      fVar12 = (float)FUN_090c90a0();
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_090c8d90;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *unaff_x22;
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      uVar7 = *(uint *)(lVar5 + unaff_x26 * 4 + 0x20);
      unaff_x27 = (long)(int)uVar7;
      unaff_x28 = unaff_x21 + unaff_x27 * 0x10;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_090c8d90;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        }
        goto LAB_090c8c74;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        plVar3 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = *unaff_x24;
      cVar2 = *(char *)(lVar4 + unaff_x26 + 0x20);
      if (cVar2 != '\0') {
        in_stack_00000070 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *unaff_x24;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      uVar15 = *(undefined8 *)(lVar4 + 0x24);
      fVar26 = *(float *)(lVar4 + 0x2c);
      in_stack_00000060 = *(undefined8 *)(lVar4 + 0x3c);
      unaff_s12 = *(float *)(lVar4 + 0x44);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar11 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar14;
      fVar18 = in_stack_00000070 * fVar26 * unaff_w23 * in_stack_00000040._4_4_;
      uVar23 = in_stack_00000060;
      fVar6 = (float)FUN_0a16a898(0);
      fVar21 = (float)uVar23;
      fVar25 = (fVar22 * fVar18 + fVar19 * fVar6 + fVar12 * fVar21) - fVar9 * fVar11;
      fVar24 = (fVar9 * fVar6 + fVar19 * fVar11 + fVar22 * fVar21) - fVar12 * fVar18;
      param_6 = (fVar12 * fVar11 + fVar19 * fVar18 + fVar9 * fVar21) - fVar22 * fVar6;
      fVar22 = ((fVar19 * fVar21 - fVar12 * fVar6) - fVar22 * fVar11) - fVar9 * fVar18;
      fStack0000000000000088 = fVar25;
      fStack000000000000008c = fVar24;
      fStack0000000000000090 = param_6;
      fStack0000000000000094 = fVar22;
      if (unaff_x21 == 0) goto LAB_090c8d90;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      unaff_s14 = (float)FUN_090c9260(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= unaff_s14) {
        in_stack_00000070 = unaff_s14;
      }
      if (unaff_s14 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar10 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        goto LAB_090c8c74;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_stack_00000050 = *(float *)(unaff_x28 + 0x2c);
    fVar9 = unaff_s15;
    fVar14 = unaff_s13;
    uVar7 = FUN_0a16adac(0);
    uVar8 = FUN_0a16adac(fVar25,fVar24,param_6,fVar22,uVar15,fVar16,fVar26,0);
    FUN_0a16adac(unaff_s11,unaff_s15,unaff_s13,in_stack_00000050,in_stack_00000060,
                 (int)((ulong)in_stack_00000060 >> 0x20),unaff_s12,0);
    param_4 = (ulong)uVar8;
    param_5 = (ulong)(uint)fVar24;
    param_3 = (ulong)(uint)fVar14;
    param_2 = (ulong)(uint)fVar9;
    param_1 = (ulong)uVar7;
    param_7 = 0;
  }
LAB_090c8d8c:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


