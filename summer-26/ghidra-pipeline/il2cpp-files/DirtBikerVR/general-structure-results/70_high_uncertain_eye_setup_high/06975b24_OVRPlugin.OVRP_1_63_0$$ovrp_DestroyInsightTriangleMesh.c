/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightTriangleMesh
ENTRY_POINT: 06975b24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float fVar16;
  float unaff_s15;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  float in_stack_000000f0;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000050 = param_1._4_4_;
  uStack0000000000000048 = param_1._8_4_;
  uStack000000000000004c = param_1._12_4_;
  uStack0000000000000010 = uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000048;
  uStack000000000000001c = uStack000000000000004c;
  uStack0000000000000020 = uStack0000000000000050;
  uStack0000000000000024 = uStack0000000000000048;
  uStack0000000000000028 = uStack000000000000004c;
  uStack0000000000000030 = uStack0000000000000000;
  uStack0000000000000040 = uStack0000000000000000;
  if (DAT_08974d8c == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar12 = SQRT(unaff_s15 * unaff_s15 + unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14);
  if (fVar12 <= DAT_015c5ce0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fStack00000000000000a8 = *pfVar6;
    fVar16 = pfVar6[1];
    fVar12 = pfVar6[2];
  }
  else {
    fStack00000000000000a8 = unaff_s13 / fVar12;
    fVar16 = unaff_s14 / fVar12;
    fVar12 = unaff_s15 / fVar12;
  }
  fVar14 = DAT_015c5994;
  if (DAT_015c5994 < in_stack_000000f0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar2 = FUN_07c9da10(unaff_w21,0);
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c50);
    }
    uVar15 = (ulong)(uint)unaff_s9;
    uVar3 = FUN_07d2b360(unaff_s11,unaff_s10,uVar8,uVar2,1,0);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar2 = FUN_07c9da10(unaff_w21,0);
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c50);
    }
    uVar15 = (ulong)(uint)unaff_s9;
    uVar3 = FUN_07d2a554(unaff_s11,unaff_s10,uVar15,fStack00000000000000a8,fVar16,fVar12,
                         uStack00000000000000ac,uVar8,uVar2,1,0);
  }
  puVar1 = PTR_DAT_08497e38;
  if (0 < (int)uVar3) {
    lVar9 = 0x60;
    if (fVar14 < in_stack_000000f0) {
      lVar9 = 0x68;
    }
    lVar9 = *(long *)(unaff_x20 + lVar9);
    uStack0000000000000054 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000040 = 0;
    if (lVar9 == 0) {
LAB_06975e50:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = 0;
    puVar11 = (undefined8 *)(lVar9 + 0x20);
    fVar12 = 3.4028235e+38;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uStack0000000000000028 = *(undefined4 *)(puVar11 + 5);
      uStack0000000000000008 = puVar11[1];
      uStack0000000000000000 = *puVar11;
      uVar8 = puVar11[2];
      uStack0000000000000020 = (undefined4)puVar11[4];
      uStack0000000000000024 = (undefined4)((ulong)puVar11[4] >> 0x20);
      uStack0000000000000018 = (undefined4)puVar11[3];
      uStack000000000000001c = (undefined4)((ulong)puVar11[3] >> 0x20);
      uStack0000000000000010 = uVar8;
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06975e50;
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar4 = FUN_07d2fce4();
      fVar16 = (float)uVar8;
      if (lVar7 == 0) goto LAB_06975e50;
      uVar5 = FUN_049d96b4(lVar7,uVar4,*(undefined8 *)puVar1);
      fVar14 = (float)uVar15;
      if ((uVar5 & 1) == 0) {
        fVar13 = (float)FUN_07d2fd90();
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_06975e50;
        uVar15 = (ulong)(uint)(fVar14 - unaff_s9);
        fVar16 = (float)FUN_07cadd74(fVar13 - unaff_s11,fVar16 - unaff_s10,
                                     *(long *)(unaff_x20 + 0x58),0);
        if ((((-(in_stack_000000f0 * 0.5) <= fVar16) && (fVar16 <= in_stack_000000f0 * 0.5)) &&
            ((float)uVar15 <= unaff_s8)) &&
           ((-unaff_s8 <= (float)uVar15 && (fVar16 = (float)FUN_07d2fdc0(), fVar16 < fVar12)))) {
          fVar12 = (float)FUN_07d2fdc0();
          uStack0000000000000038 = uStack0000000000000008;
          uStack0000000000000030 = uStack0000000000000000;
          uStack0000000000000040 = uStack0000000000000010;
          uStack0000000000000054 = CONCAT44(uStack0000000000000028,uStack0000000000000024);
          uVar15 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          uStack0000000000000048 = uStack0000000000000018;
          uStack000000000000004c = uStack000000000000001c;
          uStack0000000000000050 = uStack0000000000000020;
        }
      }
      uVar10 = uVar10 + 1;
      puVar11 = (undefined8 *)((long)puVar11 + 0x2c);
    } while (uVar3 != uVar10);
    if (fVar12 != 3.4028235e+38) {
      unaff_x19[1] = uStack0000000000000038;
      *unaff_x19 = uStack0000000000000030;
      unaff_x19[3] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      unaff_x19[2] = uStack0000000000000040;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0x1c) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      return 1;
    }
  }
  return 0;
}


