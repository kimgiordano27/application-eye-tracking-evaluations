/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 04f8854c
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
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined4 in_w8;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  uint uVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x22;
  long *plVar12;
  float unaff_w23;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack0000000000000038;
  float fStack0000000000000044;
  ulong uStack0000000000000048;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  long lStack0000000000000098;
  
  puVar5 = System_Runtime_Remoting_IEnvoyInfo_var;
  plVar12 = *(long **)(unaff_x22 + 0x938);
  lVar11 = *(long *)(unaff_x21 + 0x48);
  uVar10 = 0;
  fVar31 = 0.0;
  uStack0000000000000048 = CONCAT44(in_w8,in_w8) & 0xffff0000ffff | 0x3c8e00003c8e0000;
  fStack0000000000000044 = DAT_010328cc;
  uStack0000000000000038 = param_1;
  lStack0000000000000098 = lVar11;
  do {
    fVar18 = (float)param_4;
    fVar17 = (float)param_3;
    fVar35 = (float)param_2;
    lVar6 = *plVar12;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *plVar12;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(**(long **)(lVar6 + 0xb8) + 0x18) <= (int)uVar10) {
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_04f88b20;
    lVar13 = (long)(int)uVar10;
    iVar1 = *(int *)(lVar6 + lVar13 * 4 + 0x20);
    fVar14 = (float)FUN_04f88e34();
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_04f88b24;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= uVar10) goto LAB_04f88b20;
    lVar6 = *plVar12;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *plVar12;
    }
    plVar8 = *(long **)(lVar6 + 0xb8);
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_04f88b20;
    uVar4 = *(uint *)(lVar9 + lVar13 * 4 + 0x20);
    lVar9 = lVar11 + (long)(int)uVar4 * 0x10;
    if (iVar1 == 1) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar8 = *(long **)(*plVar12 + 0xb8);
      }
      lVar6 = plVar8[3];
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) {
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar7 = *(long *)puVar5;
      cVar3 = *(char *)(lVar6 + lVar13 + 0x20);
      if (cVar3 != '\0') {
        fVar31 = 0.0;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar5;
      }
      lVar6 = *(long *)(lVar7 + 0xb8);
      uVar21 = *(undefined8 *)(lVar6 + 0x24);
      fVar34 = *(float *)(lVar6 + 0x2c);
      uVar26 = *(undefined8 *)(lVar6 + 0x3c);
      fVar32 = *(float *)(lVar6 + 0x44);
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      fVar19 = fVar22 * (float)((ulong)uStack0000000000000038 >> 0x20) * fVar31 *
               (float)(uStack0000000000000048 >> 0x20);
      fVar24 = fVar31 * fVar34 * unaff_w23 * fStack0000000000000044;
      uVar27 = uVar26;
      fVar16 = (float)FUN_05c7b824(0);
      fVar33 = (float)uVar27;
      fVar30 = (fVar35 * fVar24 + fVar18 * fVar16 + fVar14 * fVar33) - fVar17 * fVar19;
      fVar29 = (fVar17 * fVar16 + fVar18 * fVar19 + fVar35 * fVar33) - fVar14 * fVar24;
      fVar28 = (fVar14 * fVar19 + fVar18 * fVar24 + fVar17 * fVar33) - fVar35 * fVar16;
      fVar35 = ((fVar18 * fVar33 - fVar14 * fVar16) - fVar35 * fVar19) - fVar17 * fVar24;
      fStack0000000000000088 = fVar30;
      fStack000000000000008c = fVar29;
      fStack0000000000000090 = fVar28;
      fStack0000000000000094 = fVar35;
      if (lVar11 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
      fVar17 = (float)FUN_04f88ff4(lVar11 + 0x20 + (long)(int)uVar4 * 0x10,&stack0x00000088);
      if (fVar31 <= fVar17) {
        fVar31 = fVar17;
      }
      if (0.0 <= fVar17) {
        if (cVar3 != '\0') {
          if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
          fVar16 = *(float *)(lVar9 + 0x20);
          fVar24 = *(float *)(lVar9 + 0x24);
          fVar19 = *(float *)(lVar9 + 0x28);
          fVar33 = *(float *)(lVar9 + 0x2c);
          fVar18 = fVar24;
          fVar14 = fVar19;
          uVar15 = FUN_05c7bd38(0);
          uVar20 = FUN_05c7bd38(fVar30,fVar29,fVar28,fVar35,uVar21,fVar22,fVar34,0);
          fVar22 = (float)((ulong)uVar26 >> 0x20);
          FUN_05c7bd38(fVar16,fVar24,fVar19,fVar33,uVar26,fVar22,fVar32,0);
          fVar18 = (float)FUN_02cdfa10(uVar15,fVar18,fVar14,uVar20,fVar29,fVar28,0);
          fVar17 = fVar17 * *(float *)(unaff_x19 + 0xb0);
          fVar35 = 1.0;
          if (fVar17 <= 1.0) {
            fVar35 = fVar17;
          }
          fVar35 = 1.0 - fVar35;
          fVar14 = 1.0;
          if (0.0 <= fVar17) {
            fVar14 = fVar35;
          }
          fVar29 = fVar22 * fVar18 * fVar14 * (float)(uStack0000000000000048 >> 0x20);
          fVar18 = fVar32 * fVar18 * fVar14 * fStack0000000000000044;
          fVar17 = (float)FUN_05c7b824(0);
          if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
          *(float *)(lVar9 + 0x20) =
               (fVar24 * fVar18 + fVar33 * fVar17 + fVar16 * fVar35) - fVar19 * fVar29;
          *(float *)(lVar9 + 0x24) =
               (fVar19 * fVar17 + fVar33 * fVar29 + fVar24 * fVar35) - fVar16 * fVar18;
          *(float *)(lVar9 + 0x28) =
               (fVar16 * fVar29 + fVar33 * fVar18 + fVar19 * fVar35) - fVar24 * fVar17;
          *(float *)(lVar9 + 0x2c) =
               ((fVar33 * fVar35 - fVar16 * fVar17) - fVar24 * fVar29) - fVar19 * fVar18;
        }
      }
      else {
        if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
        uVar20 = *(undefined4 *)(lVar9 + 0x24);
        uVar23 = *(undefined4 *)(lVar9 + 0x28);
        uVar25 = *(undefined4 *)(lVar9 + 0x2c);
        uVar15 = FUN_05c7b59c(*(undefined4 *)(lVar9 + 0x20),0);
        if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
        *(undefined4 *)(lVar9 + 0x20) = uVar15;
        *(undefined4 *)(lVar9 + 0x24) = uVar20;
        *(undefined4 *)(lVar9 + 0x28) = uVar23;
        *(undefined4 *)(lVar9 + 0x2c) = uVar25;
      }
    }
    else if (iVar1 == 2) {
      if (lVar11 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
      uVar20 = *(undefined4 *)(lVar9 + 0x24);
      uVar23 = *(undefined4 *)(lVar9 + 0x28);
      uVar25 = *(undefined4 *)(lVar9 + 0x2c);
      uVar15 = FUN_05c7b59c(*(undefined4 *)(lVar9 + 0x20),0);
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
      *(undefined4 *)(lVar9 + 0x20) = uVar15;
      *(undefined4 *)(lVar9 + 0x24) = uVar20;
      *(undefined4 *)(lVar9 + 0x28) = uVar23;
      *(undefined4 *)(lVar9 + 0x2c) = uVar25;
    }
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_04f88b20;
    if (*(int *)(lVar6 + lVar13 * 4 + 0x20) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar6 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_04f88b20;
    lVar6 = *(long *)(lVar6 + lVar13 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_04f88b24;
    FUN_04f0e0c4(lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0x148);
    if (lVar6 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_04f88b20;
    if (lVar11 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
    lVar6 = lVar6 + lVar13 * 0x10;
    param_2 = (ulong)*(uint *)(lVar6 + 0x24);
    param_3 = (ulong)*(uint *)(lVar6 + 0x28);
    param_4 = (ulong)*(uint *)(lVar6 + 0x2c);
    uVar15 = FUN_05c7b59c(*(undefined4 *)(lVar6 + 0x20),0);
    if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04f88b20;
    *(int *)(lVar9 + 0x24) = (int)param_2;
    *(int *)(lVar9 + 0x28) = (int)param_3;
    uVar2 = *(uint *)(lVar11 + 0x18);
    *(undefined4 *)(lVar9 + 0x20) = uVar15;
    *(int *)(lVar9 + 0x2c) = (int)param_4;
    if (uVar2 <= uVar4) goto LAB_04f88b20;
    lVar6 = *(long *)(unaff_x19 + 0x150);
    if (lVar6 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_04f88b20;
    lVar6 = lVar6 + lVar13 * 0x10;
    uVar10 = uVar10 + 1;
    *(undefined4 *)(lVar6 + 0x20) = uVar15;
    *(int *)(lVar6 + 0x24) = (int)param_2;
    *(int *)(lVar6 + 0x28) = (int)param_3;
    *(int *)(lVar6 + 0x2c) = (int)param_4;
  } while( true );
}


