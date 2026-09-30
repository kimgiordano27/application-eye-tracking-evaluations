/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 090c8868
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


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w29;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float unaff_s10;
  float fVar24;
  float fVar25;
  float unaff_s12;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  do {
    fVar29 = (float)param_2;
    lVar4 = *unaff_x22;
    fVar10 = (float)param_3;
    fVar11 = (float)param_4;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *unaff_x22;
    }
    plVar6 = *(long **)(lVar4 + 0xb8);
    lVar7 = *plVar6;
    if (lVar7 == 0) goto LAB_090c8d90;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w20) break;
    uVar3 = *(uint *)(lVar7 + unaff_x26 * 4 + 0x20);
    lVar7 = unaff_x21 + (long)(int)uVar3 * 0x10;
    if (unaff_w29 == 1) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        plVar6 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar6[3];
      if (lVar4 == 0) goto LAB_090c8d90;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
      lVar5 = *unaff_x24;
      cVar2 = *(char *)(lVar4 + unaff_x26 + 0x20);
      if (cVar2 != '\0') {
        unaff_s12 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *unaff_x24;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      uVar15 = *(undefined8 *)(lVar4 + 0x24);
      fVar28 = *(float *)(lVar4 + 0x2c);
      uVar20 = *(undefined8 *)(lVar4 + 0x3c);
      fVar26 = *(float *)(lVar4 + 0x44);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar13 = (float)((ulong)in_stack_00000048 >> 0x20);
      fVar12 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * unaff_s12 * fVar13;
      fVar18 = unaff_s12 * fVar28 * unaff_w23 * in_stack_00000040._4_4_;
      uVar21 = uVar20;
      fVar9 = (float)FUN_0a16a898(0);
      fVar25 = (float)uVar21;
      fVar24 = (fVar29 * fVar18 + fVar11 * fVar9 + unaff_s10 * fVar25) - fVar10 * fVar12;
      fVar23 = (fVar10 * fVar9 + fVar11 * fVar12 + fVar29 * fVar25) - unaff_s10 * fVar18;
      fVar22 = (unaff_s10 * fVar12 + fVar11 * fVar18 + fVar10 * fVar25) - fVar29 * fVar9;
      fVar29 = ((fVar11 * fVar25 - unaff_s10 * fVar9) - fVar29 * fVar12) - fVar10 * fVar18;
      fStack0000000000000088 = fVar24;
      fStack000000000000008c = fVar23;
      fStack0000000000000090 = fVar22;
      fStack0000000000000094 = fVar29;
      if (unaff_x21 == 0) goto LAB_090c8d90;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      fVar10 = (float)FUN_090c9260(unaff_x25 + (long)(int)uVar3 * 0x10,&stack0x00000088);
      if (unaff_s12 <= fVar10) {
        unaff_s12 = fVar10;
      }
      if (0.0 <= fVar10) {
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
          fVar12 = *(float *)(lVar7 + 0x20);
          fVar25 = *(float *)(lVar7 + 0x24);
          fVar18 = *(float *)(lVar7 + 0x28);
          fVar27 = *(float *)(lVar7 + 0x2c);
          fVar11 = fVar25;
          fVar9 = fVar18;
          uVar8 = FUN_0a16adac(0);
          uVar14 = FUN_0a16adac(fVar24,fVar23,fVar22,fVar29,uVar15,fVar16,fVar28,0);
          fVar16 = (float)((ulong)uVar20 >> 0x20);
          FUN_0a16adac(fVar12,fVar25,fVar18,fVar27,uVar20,fVar16,fVar26,0);
          fVar11 = (float)FUN_0901abf4(uVar8,fVar11,fVar9,uVar14,fVar23,fVar22,0);
          fVar10 = fVar10 * *(float *)(unaff_x19 + 0xb0);
          fVar29 = 1.0;
          if (fVar10 <= 1.0) {
            fVar29 = fVar10;
          }
          fVar29 = 1.0 - fVar29;
          fVar9 = 1.0;
          if (0.0 <= fVar10) {
            fVar9 = fVar29;
          }
          fVar13 = fVar16 * fVar11 * fVar9 * fVar13;
          fVar11 = fVar26 * fVar11 * fVar9 * in_stack_00000040._4_4_;
          fVar10 = (float)FUN_0a16a898(0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
          *(float *)(lVar7 + 0x20) =
               (fVar25 * fVar11 + fVar27 * fVar10 + fVar12 * fVar29) - fVar18 * fVar13;
          *(float *)(lVar7 + 0x24) =
               (fVar18 * fVar10 + fVar27 * fVar13 + fVar25 * fVar29) - fVar12 * fVar11;
          *(float *)(lVar7 + 0x28) =
               (fVar12 * fVar13 + fVar27 * fVar11 + fVar18 * fVar29) - fVar25 * fVar10;
          *(float *)(lVar7 + 0x2c) =
               ((fVar27 * fVar29 - fVar12 * fVar10) - fVar25 * fVar13) - fVar18 * fVar11;
        }
      }
      else {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
        uVar14 = *(undefined4 *)(lVar7 + 0x24);
        uVar17 = *(undefined4 *)(lVar7 + 0x28);
        uVar19 = *(undefined4 *)(lVar7 + 0x2c);
        uVar8 = FUN_0a16a610(*(undefined4 *)(lVar7 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
        *(undefined4 *)(lVar7 + 0x20) = uVar8;
        *(undefined4 *)(lVar7 + 0x24) = uVar14;
        *(undefined4 *)(lVar7 + 0x28) = uVar17;
        *(undefined4 *)(lVar7 + 0x2c) = uVar19;
      }
    }
    else if (unaff_w29 == 2) {
      if (unaff_x21 == 0) goto LAB_090c8d90;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      uVar14 = *(undefined4 *)(lVar7 + 0x24);
      uVar17 = *(undefined4 *)(lVar7 + 0x28);
      uVar19 = *(undefined4 *)(lVar7 + 0x2c);
      uVar8 = FUN_0a16a610(*(undefined4 *)(lVar7 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      *(undefined4 *)(lVar7 + 0x20) = uVar8;
      *(undefined4 *)(lVar7 + 0x24) = uVar14;
      *(undefined4 *)(lVar7 + 0x28) = uVar17;
      *(undefined4 *)(lVar7 + 0x2c) = uVar19;
    }
    lVar4 = *(long *)(unaff_x19 + 0x158);
    if (lVar4 == 0) {
LAB_090c8d90:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    if (*(int *)(lVar4 + unaff_x26 * 4 + 0x20) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar4 == 0) goto LAB_090c8d90;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_090c8d90;
    FUN_0904e2ec(lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x148);
    if (lVar4 == 0) goto LAB_090c8d90;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    if (unaff_x21 == 0) goto LAB_090c8d90;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    lVar4 = lVar4 + unaff_x26 * 0x10;
    param_2 = (ulong)*(uint *)(lVar4 + 0x24);
    param_3 = (ulong)*(uint *)(lVar4 + 0x28);
    param_4 = (ulong)*(uint *)(lVar4 + 0x2c);
    uVar8 = FUN_0a16a610(*(undefined4 *)(lVar4 + 0x20),0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    *(int *)(lVar7 + 0x24) = (int)param_2;
    *(int *)(lVar7 + 0x28) = (int)param_3;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    *(undefined4 *)(lVar7 + 0x20) = uVar8;
    *(int *)(lVar7 + 0x2c) = (int)param_4;
    if (uVar1 <= uVar3) break;
    lVar4 = *(long *)(unaff_x19 + 0x150);
    if (lVar4 == 0) goto LAB_090c8d90;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    lVar4 = lVar4 + unaff_x26 * 0x10;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(lVar4 + 0x20) = uVar8;
    *(int *)(lVar4 + 0x24) = (int)param_2;
    *(int *)(lVar4 + 0x28) = (int)param_3;
    *(int *)(lVar4 + 0x2c) = (int)param_4;
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
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    unaff_x26 = (long)(int)unaff_w20;
    unaff_w29 = *(int *)(lVar4 + unaff_x26 * 4 + 0x20);
    unaff_s10 = (float)FUN_090c90a0();
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_090c8d90;
  } while (unaff_w20 < *(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


