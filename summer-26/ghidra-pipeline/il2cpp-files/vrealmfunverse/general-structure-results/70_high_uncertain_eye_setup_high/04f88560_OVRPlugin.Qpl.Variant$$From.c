/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 04f88560
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 in_w8;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_w23;
  long unaff_x24;
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack0000000000000038;
  float fStack0000000000000044;
  undefined8 uStack0000000000000048;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  fVar28 = 0.0;
  uStack0000000000000048 = CONCAT44(in_w8,in_w8);
  plVar9 = *(long **)(unaff_x24 + 0x740);
  fStack0000000000000044 = DAT_010328cc;
  uStack0000000000000038 = param_1;
  do {
    fVar15 = (float)param_4;
    fVar14 = (float)param_3;
    fVar32 = (float)param_2;
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *unaff_x22;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (int)unaff_w20) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    lVar10 = (long)(int)unaff_w20;
    iVar1 = *(int *)(lVar5 + lVar10 * 4 + 0x20);
    fVar11 = (float)FUN_04f88e34();
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_04f88b24;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_04f88b20;
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *unaff_x22;
    }
    plVar7 = *(long **)(lVar5 + 0xb8);
    lVar8 = *plVar7;
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    uVar4 = *(uint *)(lVar8 + lVar10 * 4 + 0x20);
    lVar8 = unaff_x21 + (long)(int)uVar4 * 0x10;
    if (iVar1 == 1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar7 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar7[3];
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) {
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar6 = *plVar9;
      cVar3 = *(char *)(lVar5 + lVar10 + 0x20);
      if (cVar3 != '\0') {
        fVar28 = 0.0;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *plVar9;
      }
      lVar5 = *(long *)(lVar6 + 0xb8);
      uVar18 = *(undefined8 *)(lVar5 + 0x24);
      fVar31 = *(float *)(lVar5 + 0x2c);
      uVar23 = *(undefined8 *)(lVar5 + 0x3c);
      fVar29 = *(float *)(lVar5 + 0x44);
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      fVar16 = fVar19 * (float)((ulong)uStack0000000000000038 >> 0x20) * fVar28 *
               (float)((ulong)uStack0000000000000048 >> 0x20);
      fVar21 = fVar28 * fVar31 * unaff_w23 * fStack0000000000000044;
      uVar24 = uVar23;
      fVar13 = (float)FUN_05c7b824(0);
      fVar30 = (float)uVar24;
      fVar27 = (fVar32 * fVar21 + fVar15 * fVar13 + fVar11 * fVar30) - fVar14 * fVar16;
      fVar26 = (fVar14 * fVar13 + fVar15 * fVar16 + fVar32 * fVar30) - fVar11 * fVar21;
      fVar25 = (fVar11 * fVar16 + fVar15 * fVar21 + fVar14 * fVar30) - fVar32 * fVar13;
      fVar32 = ((fVar15 * fVar30 - fVar11 * fVar13) - fVar32 * fVar16) - fVar14 * fVar21;
      fStack0000000000000088 = fVar27;
      fStack000000000000008c = fVar26;
      fStack0000000000000090 = fVar25;
      fStack0000000000000094 = fVar32;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
      fVar14 = (float)FUN_04f88ff4(unaff_x21 + 0x20 + (long)(int)uVar4 * 0x10,&stack0x00000088);
      if (fVar28 <= fVar14) {
        fVar28 = fVar14;
      }
      if (0.0 <= fVar14) {
        if (cVar3 != '\0') {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
          fVar13 = *(float *)(lVar8 + 0x20);
          fVar21 = *(float *)(lVar8 + 0x24);
          fVar16 = *(float *)(lVar8 + 0x28);
          fVar30 = *(float *)(lVar8 + 0x2c);
          fVar15 = fVar21;
          fVar11 = fVar16;
          uVar12 = FUN_05c7bd38(0);
          uVar17 = FUN_05c7bd38(fVar27,fVar26,fVar25,fVar32,uVar18,fVar19,fVar31,0);
          fVar19 = (float)((ulong)uVar23 >> 0x20);
          FUN_05c7bd38(fVar13,fVar21,fVar16,fVar30,uVar23,fVar19,fVar29,0);
          fVar15 = (float)FUN_02cdfa10(uVar12,fVar15,fVar11,uVar17,fVar26,fVar25,0);
          fVar14 = fVar14 * *(float *)(unaff_x19 + 0xb0);
          fVar32 = 1.0;
          if (fVar14 <= 1.0) {
            fVar32 = fVar14;
          }
          fVar32 = 1.0 - fVar32;
          fVar11 = 1.0;
          if (0.0 <= fVar14) {
            fVar11 = fVar32;
          }
          fVar26 = fVar19 * fVar15 * fVar11 * (float)((ulong)uStack0000000000000048 >> 0x20);
          fVar15 = fVar29 * fVar15 * fVar11 * fStack0000000000000044;
          fVar14 = (float)FUN_05c7b824(0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
          *(float *)(lVar8 + 0x20) =
               (fVar21 * fVar15 + fVar30 * fVar14 + fVar13 * fVar32) - fVar16 * fVar26;
          *(float *)(lVar8 + 0x24) =
               (fVar16 * fVar14 + fVar30 * fVar26 + fVar21 * fVar32) - fVar13 * fVar15;
          *(float *)(lVar8 + 0x28) =
               (fVar13 * fVar26 + fVar30 * fVar15 + fVar16 * fVar32) - fVar21 * fVar14;
          *(float *)(lVar8 + 0x2c) =
               ((fVar30 * fVar32 - fVar13 * fVar14) - fVar21 * fVar26) - fVar16 * fVar15;
        }
      }
      else {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
        uVar17 = *(undefined4 *)(lVar8 + 0x24);
        uVar20 = *(undefined4 *)(lVar8 + 0x28);
        uVar22 = *(undefined4 *)(lVar8 + 0x2c);
        uVar12 = FUN_05c7b59c(*(undefined4 *)(lVar8 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
        *(undefined4 *)(lVar8 + 0x20) = uVar12;
        *(undefined4 *)(lVar8 + 0x24) = uVar17;
        *(undefined4 *)(lVar8 + 0x28) = uVar20;
        *(undefined4 *)(lVar8 + 0x2c) = uVar22;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
      uVar17 = *(undefined4 *)(lVar8 + 0x24);
      uVar20 = *(undefined4 *)(lVar8 + 0x28);
      uVar22 = *(undefined4 *)(lVar8 + 0x2c);
      uVar12 = FUN_05c7b59c(*(undefined4 *)(lVar8 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
      *(undefined4 *)(lVar8 + 0x20) = uVar12;
      *(undefined4 *)(lVar8 + 0x24) = uVar17;
      *(undefined4 *)(lVar8 + 0x28) = uVar20;
      *(undefined4 *)(lVar8 + 0x2c) = uVar22;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    if (*(int *)(lVar5 + lVar10 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_04f88b24;
    FUN_04f0e0c4(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    if (unaff_x21 == 0) goto LAB_04f88b24;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
    lVar5 = lVar5 + lVar10 * 0x10;
    param_2 = (ulong)*(uint *)(lVar5 + 0x24);
    param_3 = (ulong)*(uint *)(lVar5 + 0x28);
    param_4 = (ulong)*(uint *)(lVar5 + 0x2c);
    uVar12 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_04f88b20;
    *(int *)(lVar8 + 0x24) = (int)param_2;
    *(int *)(lVar8 + 0x28) = (int)param_3;
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    *(undefined4 *)(lVar8 + 0x20) = uVar12;
    *(int *)(lVar8 + 0x2c) = (int)param_4;
    if (uVar2 <= uVar4) goto LAB_04f88b20;
    lVar5 = *(long *)(unaff_x19 + 0x150);
    if (lVar5 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    lVar5 = lVar5 + lVar10 * 0x10;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar12;
    *(int *)(lVar5 + 0x24) = (int)param_2;
    *(int *)(lVar5 + 0x28) = (int)param_3;
    *(int *)(lVar5 + 0x2c) = (int)param_4;
  } while( true );
}


