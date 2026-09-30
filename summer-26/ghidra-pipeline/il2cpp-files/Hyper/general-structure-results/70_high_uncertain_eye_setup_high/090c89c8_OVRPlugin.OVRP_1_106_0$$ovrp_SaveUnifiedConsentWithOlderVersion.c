/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 090c89c8
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


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsentWithOlderVersion
               (float param_1,ulong param_2,ulong param_3,undefined8 param_4,float param_5,
               float param_6,float param_7)

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
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s11;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float fVar23;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    fVar16 = (float)param_4;
    fVar8 = (float)param_3;
    fVar23 = (float)param_2;
    fVar20 = (unaff_s9 * fVar8 + param_5 + param_6) - unaff_s8 * fVar23;
    fVar19 = (unaff_s8 * param_1 + param_7 + unaff_s9 * fVar16) - unaff_s10 * fVar8;
    fVar18 = (unaff_s10 * fVar23 + unaff_s11 * fVar8 + unaff_s8 * fVar16) - unaff_s9 * param_1;
    fVar23 = ((unaff_s11 * fVar16 - unaff_s10 * param_1) - unaff_s9 * fVar23) - unaff_s8 * fVar8;
    fStack0000000000000088 = fVar20;
    fStack000000000000008c = fVar19;
    fStack0000000000000090 = fVar18;
    fStack0000000000000094 = fVar23;
    if (unaff_x21 == 0) break;
    uVar7 = (uint)unaff_x27;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
    fVar8 = (float)FUN_090c9260(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
    if (in_stack_00000070 <= fVar8) {
      in_stack_00000070 = fVar8;
    }
    fVar16 = (float)((ulong)in_stack_00000048 >> 0x20);
    if (0.0 <= fVar8) {
      if (unaff_w29 != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        fVar10 = *(float *)(unaff_x28 + 0x20);
        fVar21 = *(float *)(unaff_x28 + 0x24);
        fVar14 = *(float *)(unaff_x28 + 0x28);
        fVar22 = *(float *)(unaff_x28 + 0x2c);
        fVar12 = fVar21;
        fVar15 = fVar14;
        uVar9 = FUN_0a16adac(0);
        uVar11 = FUN_0a16adac(fVar20,fVar19,fVar18,fVar23,in_stack_00000050,
                              (int)((ulong)in_stack_00000050 >> 0x20),unaff_s13,0);
        fVar20 = (float)((ulong)in_stack_00000060 >> 0x20);
        FUN_0a16adac(fVar10,fVar21,fVar14,fVar22,in_stack_00000060,fVar20,unaff_s12,0);
        fVar19 = (float)FUN_0901abf4(uVar9,fVar12,fVar15,uVar11,fVar19,fVar18,0);
        fVar8 = fVar8 * *(float *)(unaff_x19 + 0xb0);
        fVar23 = 1.0;
        if (fVar8 <= 1.0) {
          fVar23 = fVar8;
        }
        fVar23 = 1.0 - fVar23;
        fVar18 = 1.0;
        if (0.0 <= fVar8) {
          fVar18 = fVar23;
        }
        fVar8 = fVar20 * fVar19 * fVar18 * fVar16;
        fVar18 = unaff_s12 * fVar19 * fVar18 * in_stack_00000040._4_4_;
        fVar19 = (float)FUN_0a16a898(0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(float *)(unaff_x28 + 0x20) =
             (fVar21 * fVar18 + fVar22 * fVar19 + fVar10 * fVar23) - fVar14 * fVar8;
        *(float *)(unaff_x28 + 0x24) =
             (fVar14 * fVar19 + fVar22 * fVar8 + fVar21 * fVar23) - fVar10 * fVar18;
        *(float *)(unaff_x28 + 0x28) =
             (fVar10 * fVar8 + fVar22 * fVar18 + fVar14 * fVar23) - fVar21 * fVar19;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar22 * fVar23 - fVar10 * fVar19) - fVar21 * fVar8) - fVar14 * fVar18;
      }
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      uVar11 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar13 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar17 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar9 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar13;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar17;
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
      unaff_s9 = *(float *)(lVar5 + 0x24);
      unaff_s8 = *(float *)(lVar5 + 0x28);
      unaff_s11 = *(float *)(lVar5 + 0x2c);
      uVar9 = FUN_0a16a610(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
      *(float *)(unaff_x28 + 0x24) = unaff_s9;
      *(float *)(unaff_x28 + 0x28) = unaff_s8;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(float *)(unaff_x28 + 0x2c) = unaff_s11;
      if (uVar2 <= uVar7) goto LAB_090c8d8c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_090c8d8c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar9;
      *(float *)(lVar5 + 0x24) = unaff_s9;
      *(float *)(lVar5 + 0x28) = unaff_s8;
      *(float *)(lVar5 + 0x2c) = unaff_s11;
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
      unaff_s10 = (float)FUN_090c90a0();
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
        uVar11 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar13 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar9 = FUN_0a16a610(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_090c8d8c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar11;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar17;
      }
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      plVar4 = *(long **)(*unaff_x22 + 0xb8);
    }
    lVar5 = plVar4[3];
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) {
LAB_090c8d8c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar6 = *unaff_x24;
    bVar3 = *(byte *)(lVar5 + unaff_x26 + 0x20);
    unaff_w29 = (uint)bVar3;
    if (bVar3 != 0) {
      in_stack_00000070 = 0.0;
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
    param_3 = (ulong)(uint)(in_stack_00000070 * unaff_s13 * unaff_w23 * in_stack_00000040._4_4_);
    param_2 = (ulong)(uint)((float)((ulong)in_stack_00000050 >> 0x20) *
                            (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar16);
    param_4 = in_stack_00000060;
    param_1 = (float)FUN_0a16a898(0);
    param_5 = unaff_s11 * param_1;
    param_6 = unaff_s10 * (float)param_4;
    param_7 = unaff_s11 * (float)param_2;
  }
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


