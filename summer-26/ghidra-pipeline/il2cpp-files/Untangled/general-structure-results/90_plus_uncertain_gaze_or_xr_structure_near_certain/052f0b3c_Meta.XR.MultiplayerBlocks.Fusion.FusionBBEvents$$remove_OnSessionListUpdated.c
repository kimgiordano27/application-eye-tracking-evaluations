/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnSessionListUpdated
ENTRY_POINT: 052f0b3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnSessionListUpdated
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *unaff_x19;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 unaff_s8;
  float fVar26;
  double dVar27;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float fVar28;
  float fVar29;
  float unaff_s12;
  uint uVar30;
  float unaff_s13;
  float unaff_s14;
  ulong unaff_d15;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  double in_stack_00000058;
  
  if (param_5 == 0) goto LAB_052f139c;
  fVar6 = (float)FUN_066d4b64(param_5,0);
  uVar17 = (ulong)(uint)((unaff_s13 * param_3 + unaff_s12 * param_4 + unaff_s14 * param_2) -
                        unaff_s11 * fVar6);
  uVar23 = (ulong)(uint)((unaff_s12 * fVar6 + unaff_s11 * param_4 + unaff_s14 * param_3) -
                        unaff_s13 * param_2);
  uVar12 = FUN_066bde7c((unaff_s11 * param_2 + unaff_s13 * param_4 + unaff_s14 * fVar6) -
                        unaff_s12 * param_3,uVar17,uVar23,
                        ((unaff_s14 * param_4 - unaff_s13 * fVar6) - unaff_s12 * param_2) -
                        unaff_s11 * param_3,(int)unaff_x19[0xc],
                        *(undefined4 *)((long)unaff_x19 + 100),(int)unaff_x19[0xd],0);
  if ((unaff_x19[0x15] == 0) || (lVar5 = *(long *)(unaff_x19[0x15] + 0x278), lVar5 == 0))
  goto LAB_052f139c;
  fVar28 = *(float *)(lVar5 + 0x3c);
  fVar7 = (float)FUN_031b3810((int)unaff_x19[0xf],*(undefined4 *)((long)unaff_x19 + 0x7c),
                              (int)unaff_x19[0x10],uVar12,uVar17,uVar23,0);
  uVar14 = 0;
  fVar6 = fVar7 + 360.0;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  bVar4 = *(char *)((long)unaff_x19 + 0x3d) != '\0';
  uVar30 = uVar14;
  if (bVar4) {
    uVar30 = (uint)unaff_d10;
  }
  if (bVar4) {
    uVar14 = (uint)unaff_d9;
  }
  fVar7 = fVar6;
  if (bVar4) {
    fVar15 = *(float *)(unaff_x19 + 0x13) - fVar28;
    if (fVar28 <= 0.0) {
      fVar28 = *(float *)(unaff_x19 + 8);
      unaff_d10 = (ulong)uVar30;
      unaff_d9 = (ulong)uVar14;
      fVar7 = fVar28;
      if ((double)fVar15 < (double)fVar28 + DAT_013f5e58) goto LAB_052f0cfc;
    }
    else {
      fVar7 = 0.0;
      if (DAT_013f6150 < (double)fVar15) {
        fVar28 = *(float *)(unaff_x19 + 8);
LAB_052f0cfc:
        fVar7 = fVar6;
        if ((fVar28 < fVar6) && (fVar7 = fVar28, 360.0 - fVar6 < fVar6 - fVar28)) {
          fVar7 = 0.0;
        }
      }
    }
  }
  fVar6 = fVar7;
  if (1 < (int)unaff_x19[7]) {
    fVar6 = *(float *)(unaff_x19 + 0xe);
    if (DAT_071bb833 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03010);
      DAT_071bb833 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    dVar27 = (double)(fVar7 / fVar6);
    dVar13 = modf(dVar27,&stack0x00000058);
    if (0.0 <= fVar7 / fVar6) {
      if (dVar13 == 0.5) {
        dVar13 = 1.0;
        goto LAB_052f0dcc;
      }
      dVar27 = (double)(long)(dVar27 + 0.5);
    }
    else if (dVar13 == -0.5) {
      dVar13 = -1.0;
LAB_052f0dcc:
      dVar27 = in_stack_00000058;
      if (((long)in_stack_00000058 & 1U) != 0) {
        dVar27 = in_stack_00000058 + dVar13;
      }
    }
    else {
      dVar27 = (double)(long)(dVar27 + -0.5);
    }
    iVar1 = -0x80000000;
    if (dVar27 != INFINITY) {
      iVar1 = (int)dVar27;
    }
    *(int *)((long)unaff_x19 + 0x9c) = iVar1;
    fVar6 = *(float *)(unaff_x19 + 0xe) * (float)iVar1;
    if (DAT_071bac60 == '\0') {
      FUN_02f07e70(PTR_DAT_06d034e8);
      DAT_071bac60 = '\x01';
    }
    fVar28 = ABS(fVar6);
    if (fVar28 <= 360.0) {
      fVar28 = 360.0;
    }
    fVar19 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
    fVar15 = fVar28 * DAT_013f6cfc;
    if (fVar28 * DAT_013f6cfc <= fVar19) {
      fVar15 = fVar19;
    }
    if (ABS(360.0 - fVar6) < fVar15) {
      *(undefined4 *)((long)unaff_x19 + 0x9c) = 0;
    }
  }
  uVar18 = (ulong)uStack0000000000000054;
  uVar17 = unaff_d15;
  uVar23 = uVar18;
  FUN_066bdbd8(fVar7,0);
  uVar12 = FUN_066bde7c(0);
  uVar8 = FUN_031b3810(unaff_s8,unaff_d9,unaff_d10,uVar12,uVar17,uVar23,0);
  uVar17 = unaff_d15;
  fVar25 = fStack0000000000000050;
  fVar9 = (float)FUN_066bdbd8(0);
  fVar20 = (float)uVar18;
  fVar26 = (float)uVar17;
  fVar28 = fVar26;
  fVar15 = fVar20;
  fVar19 = fVar25;
  lVar5 = FUN_066c67b0();
  if (lVar5 != 0) {
    fVar10 = (float)FUN_066d4b64(lVar5,0);
    iVar1 = (int)unaff_x19[7];
    uVar30 = 0;
    uVar14 = uVar30;
    if (1 < iVar1) {
      uVar14 = (uint)unaff_d10;
    }
    uVar2 = uVar30;
    if (1 < iVar1) {
      uVar2 = (uint)unaff_d9;
    }
    if (1 < iVar1) {
      fVar29 = *(float *)((long)unaff_x19 + 0x74);
      if (DAT_071bac60 == '\0') {
        FUN_02f07e70(unaff_d9,PTR_DAT_06d034e8);
        DAT_071bac60 = '\x01';
      }
      puVar3 = PTR_DAT_06d034e8;
      fVar22 = DAT_013f6cfc;
      fVar16 = ABS(fVar29);
      fVar11 = ABS(fVar6);
      if (ABS(fVar6) <= fVar16) {
        fVar11 = fVar16;
      }
      fVar21 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
      fVar16 = fVar11 * DAT_013f6cfc;
      if (fVar11 * DAT_013f6cfc <= fVar21) {
        fVar16 = fVar21;
      }
      if (fVar16 <= ABS(fVar29 - fVar6)) {
        (**(code **)(*unaff_x19 + 0x198))();
        *(float *)((long)unaff_x19 + 0x74) = fVar6;
        unaff_d10 = (ulong)uVar14;
        unaff_d9 = (ulong)uVar2;
        if (*(char *)((long)unaff_x19 + 0x3c) != '\0') {
          fVar29 = *(float *)(unaff_x19 + 8);
          if (DAT_071bac60 == '\0') {
            FUN_02f07e70(PTR_DAT_06d034e8);
            DAT_071bac60 = '\x01';
          }
          fVar22 = ABS(fVar29) * fVar22;
          fVar11 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
          if (fVar22 <= fVar11) {
            fVar22 = fVar11;
          }
          fVar11 = 0.0;
          if (fVar22 <= ABS(fVar29)) {
            fVar11 = fVar6 / *(float *)(unaff_x19 + 8);
          }
          (**(code **)(*unaff_x19 + 0x1a8))(fVar6,uVar8,fVar11);
          unaff_d10 = (ulong)uVar14;
          unaff_d9 = (ulong)uVar2;
        }
      }
    }
    bVar4 = *(char *)((long)unaff_x19 + 0x3c) != '\0';
    uVar14 = (uint)unaff_d10;
    if (bVar4) {
      uVar14 = uVar30;
    }
    if (!bVar4) {
      fVar29 = *(float *)(unaff_x19 + 0x13);
      if (DAT_071bac60 == '\0') {
        FUN_02f07e70(PTR_DAT_06d034e8);
        DAT_071bac60 = '\x01';
      }
      fVar22 = ABS(fVar29);
      if (fVar22 <= ABS(fVar7)) {
        fVar22 = ABS(fVar7);
      }
      fVar16 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
      fVar11 = fVar22 * DAT_013f6cfc;
      if (fVar22 * DAT_013f6cfc <= fVar16) {
        fVar11 = fVar16;
      }
      if (fVar11 <= ABS(fVar7 - fVar29)) {
        fVar29 = ABS(*(float *)(unaff_x19 + 8)) * DAT_013f6cfc;
        if (fVar29 <= fVar16) {
          fVar29 = fVar16;
        }
        fVar22 = 0.0;
        if (fVar29 <= ABS(*(float *)(unaff_x19 + 8))) {
          fVar22 = fVar7 / *(float *)(unaff_x19 + 8);
        }
        (**(code **)(*unaff_x19 + 0x1a8))(fVar7,uVar8,fVar7 / fVar22);
        unaff_d9 = unaff_d9 & 0xffffffff;
        unaff_d10 = (ulong)uVar14;
      }
    }
    uVar18 = unaff_d15 & 0xffffffff;
    uVar24 = (ulong)uStack0000000000000054;
    uVar17 = uVar18;
    uVar23 = uVar24;
    FUN_066bdbd8(fVar6,uVar18,uVar24,fStack0000000000000050,0);
    uVar12 = FUN_066bde7c(0);
    uVar12 = FUN_031b3810(unaff_s8,unaff_d9,unaff_d10,uVar12,uVar17,uVar23,0);
    fVar6 = (float)FUN_066bdbd8(uVar12,uVar18,uVar24,fStack0000000000000050,0);
    lVar5 = FUN_066c67b0();
    if (lVar5 != 0) {
      fVar29 = fVar20 * fVar10 + fVar25 * fVar28 + fVar26 * fVar19;
      fVar22 = fVar9 * fVar28 + fVar25 * fVar15 + fVar20 * fVar19;
      fVar11 = (fVar25 * fVar19 - fVar9 * fVar10) - fVar26 * fVar28;
      fVar21 = (fVar26 * fVar15 + fVar25 * fVar10 + fVar9 * fVar19) - fVar20 * fVar28;
      fVar16 = fVar29 - fVar9 * fVar15;
      fVar10 = fVar22 - fVar26 * fVar10;
      fVar26 = fVar11 - fVar20 * fVar15;
      fVar9 = (float)FUN_066d4b64(lVar5,0);
      fVar28 = fVar21;
      fVar15 = fVar16;
      fVar19 = fVar10;
      fVar25 = fVar26;
      if (*(char *)((long)unaff_x19 + 0x3c) != '\0') {
        fVar28 = (float)uVar24;
        fVar20 = (float)uVar18;
        fVar25 = ((fStack0000000000000050 * fVar11 - fVar6 * fVar9) - fVar20 * fVar29) -
                 fVar28 * fVar22;
        fVar19 = (fVar6 * fVar29 + fStack0000000000000050 * fVar22 + fVar28 * fVar11) -
                 fVar20 * fVar9;
        fVar15 = (fVar28 * fVar9 + fStack0000000000000050 * fVar29 + fVar20 * fVar11) -
                 fVar6 * fVar22;
        fVar28 = (fVar20 * fVar22 + fStack0000000000000050 * fVar9 + fVar6 * fVar11) -
                 fVar28 * fVar29;
      }
      if (unaff_x19[6] != 0) {
        FUN_066d4bec(fVar28,fVar15,fVar19,fVar25,unaff_x19[6],0);
        lVar5 = FUN_066c67b0();
        if (lVar5 != 0) {
          FUN_066d4bec(fVar21,fVar16,fVar10,fVar26,lVar5,0);
          *(float *)(unaff_x19 + 0x13) = fVar7;
          return;
        }
      }
    }
  }
LAB_052f139c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


