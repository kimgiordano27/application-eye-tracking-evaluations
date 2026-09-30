/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 04f3ffcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__add_AudioOutChanged(void)

{
  undefined *puVar1;
  float fVar2;
  char in_NG;
  char in_OV;
  ulong uVar3;
  uint uVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s11;
  float fVar15;
  float unaff_s13;
  float unaff_s15;
  float fVar16;
  float fStack0000000000000004;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  byte bStack00000000000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  char cStack00000000000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_00000270;
  float in_stack_00000274;
  float in_stack_00000278;
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  undefined4 in_stack_00000288;
  
  if (in_NG == in_OV) {
    fVar12 = in_stack_00000278 * in_stack_00000278 +
             in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
    if (DAT_066c2035 == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c2035 = '\x01';
    }
    fVar6 = ABS(fVar12);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar10 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8) * 8.0;
    fVar8 = fVar6 * DAT_010326fc;
    if (fVar6 * DAT_010326fc <= fVar10) {
      fVar8 = fVar10;
    }
    if (fVar8 <= ABS(0.0 - fVar12)) {
      fStack000000000000002c = unaff_s13;
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_06312438 + 0xb8);
      fVar13 = *pfVar5;
      fVar10 = pfVar5[1];
      fVar12 = pfVar5[2];
      in_stack_000001d8 = 0;
      _cStack00000000000001d0 = 0;
      in_stack_000001e8 = 0;
      in_stack_000001e0 = 0;
      in_stack_000001a8 = 0;
      _bStack00000000000001a0 = 0;
      in_stack_000001b8 = 0;
      in_stack_000001b0 = 0;
      in_stack_000001c8 = 0;
      in_stack_000001c0 = 0;
      fStack0000000000000004 = in_stack_00000274;
      uVar3 = FUN_04f40dd8(unaff_s11,unaff_s8,fStack000000000000002c,unaff_s15,
                           in_stack_00000030._4_4_,fStack0000000000000038,fStack000000000000003c);
      fVar6 = fVar10;
      fVar8 = fVar13;
      if ((uVar3 & 1) != 0) {
        FUN_03ad9c7c(&stack0x00000134,&stack0x000001d0,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
        in_stack_00000108 = *(undefined8 *)(unaff_x21 + 0x98);
        in_stack_00000100 = *(undefined8 *)(unaff_x21 + 0x90);
        in_stack_00000118 = *(undefined8 *)(unaff_x21 + 0xa8);
        in_stack_00000110 = *(undefined8 *)(unaff_x21 + 0xa0);
        *(undefined8 *)(unaff_x21 + 0x80) = *(undefined8 *)(unaff_x21 + 0xb4);
        *(undefined8 *)(unaff_x21 + 0x78) = *(undefined8 *)(unaff_x21 + 0xac);
        FUN_04f410a0((long)&stack0x000000a0 + 4,in_stack_00000270,in_stack_00000274,
                     in_stack_00000278);
        fVar6 = fStack00000000000000b4;
        fVar8 = fStack00000000000000b0;
        in_stack_00000274 = fStack00000000000000a8;
        in_stack_00000270 = in_stack_000000a0._4_4_;
        in_stack_00000278 = fStack00000000000000ac;
        fVar12 = in_stack_000000b8;
      }
      puVar1 = System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo;
      fVar7 = unaff_s11 + in_stack_00000270;
      fVar14 = unaff_s8 + in_stack_00000274;
      uVar4 = (uint)*(byte *)(unaff_x19 + 0x7c);
      fVar15 = fStack000000000000002c + in_stack_00000278;
      fVar11 = unaff_s15 + in_stack_00000270;
      in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + in_stack_00000274;
      fVar10 = fVar10 + in_stack_00000274;
      fVar16 = fStack0000000000000038 + in_stack_00000278;
      fStack0000000000000038 = fVar13 + in_stack_00000270;
      if (((*(byte *)(unaff_x19 + 0x7c) != 0) && (uVar4 = 0, 0.0 < *(float *)(unaff_x19 + 0x34))) &&
         (cStack00000000000001d0 != '\0')) {
        fStack000000000000002c = fVar6;
        FUN_03ad9c7c(&stack0x00000134,&stack0x000001d0,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
        in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x98);
        in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x90);
        in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0xa8);
        uVar9 = *(undefined8 *)(unaff_x21 + 0xa0);
        *(undefined8 *)(unaff_x21 + 0xf0) = *(undefined8 *)(unaff_x21 + 0xb4);
        *(undefined8 *)(unaff_x21 + 0xe8) = *(undefined8 *)(unaff_x21 + 0xac);
        in_stack_00000180 = uVar9;
        FUN_05d1b848(&stack0x00000170,0);
        if ((float)uVar9 - ((fVar14 - fStack000000000000003c) - *(float *)(unaff_x19 + 0x28)) <=
            *(float *)(unaff_x19 + 0x34)) {
          fStack0000000000000004 = fStack000000000000002c;
          uVar3 = FUN_04f40514(fVar7,fVar14,fVar15,fVar11,in_stack_00000030._4_4_,fVar16);
          fVar2 = in_stack_00000168;
          fVar13 = fStack0000000000000160;
          uVar4 = (uint)_bStack00000000000001a0 & 0xff;
          fVar6 = fStack000000000000002c;
          if ((uVar3 & 1) != 0) {
            fVar7 = fVar7 + fStack0000000000000160;
            fVar11 = fVar11 + fStack0000000000000160;
            fStack000000000000002c = in_stack_00000030._4_4_ + fStack0000000000000164;
            fVar14 = fVar14 + fStack0000000000000164;
            fVar16 = fVar16 + in_stack_00000168;
            fVar15 = fVar15 + in_stack_00000168;
            fStack0000000000000038 = fStack0000000000000038 + fStack0000000000000160;
            if (bStack00000000000001a0 == '\0') {
              fVar12 = fStack0000000000000038;
              fVar8 = (float)FUN_02c52d64(0);
              uVar4 = 0;
              in_stack_00000030._4_4_ = fStack000000000000002c;
              fVar6 = fVar10;
            }
            else {
              FUN_03ad9c7c(&stack0x00000134,&stack0x000001a0,*(undefined8 *)puVar1);
              in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
              in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
              in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
              in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
              *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
              *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
              FUN_04f410a0((long)&stack0x000000a0 + 4,fVar13,fStack0000000000000164,fVar2);
              fVar12 = in_stack_000000b8;
              fVar6 = fStack00000000000000b0;
              FUN_03ad9c7c((long)&stack0x000000a0 + 4,&stack0x000001a0,*(undefined8 *)puVar1);
              fVar8 = (float)FUN_04f417b8(fVar6,fStack00000000000000b4,fVar12,in_stack_00000280,
                                          in_stack_00000284,in_stack_00000288);
              uVar4 = (uint)bStack00000000000001a0;
              in_stack_00000030._4_4_ = fStack000000000000002c;
              fVar6 = fStack00000000000000b4;
            }
          }
        }
        else {
          uVar4 = 0;
          fVar6 = fStack000000000000002c;
        }
      }
      if ((cStack00000000000001d0 != '\0') && (uVar4 == 0)) {
        fStack000000000000002c = fVar15;
        FUN_03ad9c7c(&stack0x00000134,&stack0x000001d0,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
        FUN_04f417b8(fVar8,fVar6,fVar12,in_stack_00000280,in_stack_00000284,in_stack_00000288);
        fVar15 = fStack000000000000002c;
      }
      fStack0000000000000004 = fVar6;
      fVar12 = (float)FUN_04f3ff38(fVar7,fVar14,fVar15,fVar11,in_stack_00000030._4_4_,fVar16,
                                   fStack000000000000003c);
      return fStack0000000000000038 + fVar12;
    }
  }
  if (DAT_066c1d97 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
  return **(float **)(*(long *)PTR_DAT_06312438 + 0xb8);
}


